/* f_100dbeb0 - pump the clock once per frame: measure the frame, mark the connection alive, advance
   the tick.

   Four things happen in this order and none of them is optional: the clock takes the tick
   (f_100dbf20), the milliseconds it banked are measured over a one-second window and stored as the
   frame's elapsed time, the frame's own copy of the accumulator is brought up to date, and the
   "alive" flag is raised immediately before the tick pair is advanced (f_100dc210).

   Evidence
   - the object is the net clock ............ five loads of [0x10492e10]: 0x100dbeb5, 0x100dbecc,
                                               0x100dbed8, 0x100dbee3 (and the callee at 0x100dbeb0
                                               does its own). Each access in the conversion follows a
                                               load, because the entry does
   - it advances the clock first ............ 0x100dbeb0 calls f_100dbf20 (in this cluster) and then
                                               reads +0x10 at 0x100dbeba - the milliseconds measured
                                               are the ones that call just banked
   - the window is a callee ................. 0x100dbec7 calls the converted f_100dbf00
                                               (cow_clock_window_delta) with the three words pushed at
                                               0x100dbec0-0x100dbec2: COW_NET_CLOCK_MS_PER_SECOND as
                                               the cap (where f_100dbf20 pushes
                                               COW_NET_CLOCK_WINDOW_OPEN for the same callee), +0x04
                                               as the base and +0x10 as the value. The answer is
                                               stored at +0x08 at 0x100dbed5, which is the field
                                               vendor/xi-on-anything host/frame.c:293 reads as the
                                               milliseconds since the last frame and f_100dc040 hands
                                               out
   - +0x04 is the previous frame's +0x10 .... 0x100dbedd copies +0x10 into +0x04 through the ONE
                                               pointer loaded at 0x100dbed8, after the window call has
                                               already used the pair. That both fields are read by the
                                               window call and then re-copied is what makes them a
                                               previous/current pair rather than two counters
   - then it says the connection is alive .... 0x100dbee8 `mov dword ptr [eax+0x54], 1` through the
                                               pointer loaded at 0x100dbee3 - the field f_100dbe50
                                               clears when the clock is stood up and f_100dc050 would
                                               hand out; which pair sets and reads it is the clock's
                                               business, not this entry's
   - and advances the tick pair ............. 0x100dbeef calls the converted f_100dc210
                                               (cow_advance_net_clock_tick), the same callee whose
                                               ledger row records it as reached from exactly this one
                                               code site, "right after the clock was marked alive"
   - eax is the tick with its low byte set .. 0x100dbef4 `mov al,1` writes AL alone over what the
                                               callee left in eax, so the upper three bytes are
                                               f_100dc210's. Returning a bare 1 would be a difference
                                               from the game: cowdiff compares all of eax
   - three callers, and this is the frame tick  0x100db0b8, 0x10103455, 0x1010392c
                                               (tools/cow/owner_index.py 0x100dbeb0). No `call rel32`
                                               from a vtable: those three are direct calls

   Proof: tools/cow/cowdiff.py 0x100dbeb0 - PASS on eax, edx, callee-saved, esp, memory writes (address,
   size, value, order - which is what pins the four stores to four different offsets and the order of the
   three pushes) and calls out, with every generated instruction site reached.

   Name: cow_net_clock_pump_frame (guess) - from the sequence: advance, measure, re-copy, mark alive,
   advance the tick. That the callers are the frame path is supported by host/frame.c:293 reading the
   field this entry writes once a frame; who sets the flag it raises is not established.
*/
#include "cow.h"

/* What the reading decided, handed to the adapter, which owns the loads, the calls and the stores. Not
   a guest layout: it never appears in guest memory. It exists so the three things this entry writes to
   the clock are named as decisions, in the order the entry makes them, while the pointer chases stay
   where the ABI work belongs. */
typedef struct CowNetClockPump
{
    uint32_t ms_since_frame; /* the window callee's answer, for +0x08 (0x100dbed5) */
    uint32_t frame_ms_copy;  /* the accumulator as this frame's previous half, for +0x04 (0x100dbee0) */
    uint32_t marked_alive;   /* raised for +0x54 (0x100dbee8) immediately before the tick is advanced */
} CowNetClockPump;

void cow_net_clock_pump_frame(uint32_t window, uint32_t ms_accum, CowNetClockPump* out)
{
    out->ms_since_frame = window;   /* what f_100dbf00 measured over the frame */
    out->frame_ms_copy = ms_accum;  /* 0x100dbedd-0x100dbee0: the pair moves forward by one */
    out->marked_alive = 1u;         /* 0x100dbee8 */
}

/* COW_ADAPTER BEGIN - cdecl, no arguments: the only word the entry's `ret` pops is the return address
   (rt_return's pop of 0 does the `esp += 4` the generated body does), and the callee at 0x100dbec7 is
   cdecl with three arguments that THIS entry pushes and drops itself (0x100dbec0-0x100dbec2 and
   0x100dbed2), because a bridge that pushed them would put side B's stack one word out. The stores are
   the entry's own memory effects in the original's order and from the original's own loads, because
   cowdiff compares the guest memory trace byte for byte. The readability gate skips this block. */
void cow_adapter_100dbeb0(Guest* g)
{
    cow_call_net_clock_advance_ms_at(COW_ADDR_NET_CLOCK_ADVANCE_MS_RETURN); /* 0x100dbeb0 */

    uint32_t clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbeb5 */
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);
    const uint32_t ms_accum = clock->ms_accum;    /* 0x100dbeba */
    const uint32_t frame_ms = clock->frame_ms_copy; /* 0x100dbebd */

    g->esp -= 4u; /* 0x100dbec0: push ecx - the accumulator as the value to measure */
    wr32(g->esp, ms_accum);
    g->esp -= 4u; /* 0x100dbec1: push edx - the previous frame's copy as the base */
    wr32(g->esp, frame_ms);
    g->esp -= 4u; /* 0x100dbec2: push 0x3e8 - a one-second window, where f_100dbf20 pushes -1 */
    wr32(g->esp, COW_NET_CLOCK_MS_PER_SECOND);

    const uint32_t window = cow_call_clock_window_delta_at(COW_ADDR_CLOCK_WINDOW_DELTA_RETURN_PUMP); /* 0x100dbec7 */
    g->esp += 4u * 3u; /* 0x100dbed2: add esp,0xc */

    CowNetClockPump pump;
    cow_net_clock_pump_frame(window, ms_accum, &pump);

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbecc */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->ms_since_frame = pump.ms_since_frame; /* 0x100dbed5 */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbed8 */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->frame_ms_copy = pump.frame_ms_copy; /* 0x100dbedd-0x100dbee0: one load, the pair moves */

    clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR); /* 0x100dbee3 */
    clock = COW_AS(CowFrameNetClock, clock_addr);
    clock->marked_alive = pump.marked_alive; /* 0x100dbee8 */

    const uint32_t tick = cow_call_advance_net_clock_tick_at(COW_ADDR_ADVANCE_NET_CLOCK_TICK_RETURN); /* 0x100dbeef */
    rt_return(g, (tick & ~0xffu) | 1u, 0); /* 0x100dbef4: `mov al,1` over what the callee left */
}
/* COW_ADAPTER END */
