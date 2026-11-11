/* f_100dc1f0 - stamp the connection clock with the millisecond tick, after clearing the field that
   says it is still owed one.

   The original, line by line (generated/all/funcs_014.c:19789, and the bytes agree -
   python tools/cow/peek_bytes.py 0x100dc1f0 --len 27 -> 8b 0d 10 2e 49 10 c7 40 4c 00 00 00 00 e8 ff fc
   ff ff 8b 0d 10 2e 49 10 89 41 50 c3):

     100dc1f0  8b 0d 102e4910   mov  eax, [0x10492e10]   the clock object. The name of this global is
                                                                     upstream's own: meta/builds.json
                                                                     calls it `frame_net_clock` for our
                                                                     build, tools/frame_sites.py says
                                                                     "the global holding its clock (+8
                                                                     the milliseconds since its last
                                                                     frame)", and host/frame.c:293 reads
                                                                     it the same way.
     100dc1f5  c7 40 4c 00000000 mov dword [eax+0x4c], 0  the field that says a tick is owed. WHAT the
                                                                     game schedules with it is not
                                                                     established - only that this is the
                                                                     instruction that clears it.
     100dc1fc  e8 fffcffff      call 0x100dbe00            a thunk of one instruction, `jmp dword ptr
                                                                     [0x10329400]`, and that slot is an
                                                                     IMPORT: the hint/name record behind
                                                                     it reads timeGetTime (python
                                                                     tools/cow/iat_slot.py 0x10329400) -
                                                                     winmm's millisecond tick, which is
                                                                     also what our own shim for it
                                                                     returns (runtime/portable/user32.c
                                                                     :1339, rt_monotonic_ns()/1e6).
     100dc201  8b 0d 102e4910   mov  ecx, [0x10492e10]     the global is loaded AGAIN after the call -
                                                                     the conversion re-reads it for the
                                                                     same reason, not as a optimisation
     100dc207  89 41 50         mov  [ecx+0x50], eax       the tick, stored
     100dc20a  c3               ret                        pops 0; eax is still what the callee left

   The object itself is a static in .data: f_100dbe50 does `mov edi, 0x10492db8 / mov ecx, 0x16 /
   rep stosd` (zero 0x16 dwords) and publishes edi in the global, which is where the 0x58-byte size in
   layout/structs.h comes from.

   Who calls it (tools/cow/vtable_model.py --entry 0x100dc1f0): one code site, 0x100dbe98, inside
   f_100dbe50 - the same routine that builds the object, so this is what a freshly zeroed clock is
   stamped with before it is used. Nothing calls it through a vtable.

   Name: cow_stamp_net_clock_tick (guess). cow/names.csv has the citations; the two fields are named
   for what is provably done to them, and the unknown scheduling is left unknown rather than invented.
*/
#include "cow.h"

/* The register contract, which cowdiff checks: eax out is the tick the callee returned (nothing after
   the call at 0x100dc1fc writes eax except the store at 0x100dc207, which only reads it). The object
   is reached twice by load of the global, so the second store follows whatever the call left there. */
uint32_t cow_stamp_net_clock_tick(void)
{
    const CowAddr clock_addr = rd32(COW_ADDR_FRAME_NET_CLOCK_PTR);
    CowFrameNetClock* clock = COW_AS(CowFrameNetClock, clock_addr);

    clock->tick_wrap_count = 0u;  /* 0x100dc1f5: the field structs.h documents as cleared by f_100dc1f0 */

    const uint32_t tick = cow_call_net_clock_tick(clock_addr); /* 0x100dc1fc, through the winmm thunk */

    clock = COW_AS(CowFrameNetClock, rd32(COW_ADDR_FRAME_NET_CLOCK_PTR)); /* 0x100dc201: loaded again */
    clock->tick_ms = tick;                                                 /* 0x100dc207 */
    return tick;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments: nothing is read from the caller's stack, so the only
   word the entry's `ret` pops is the return address (rt_return's pop of 0 does the esp += 4 the
   generated body does). ecx is loaded at 0x100dc201 and never read on entry. The readability gate
   skips this block. */
void cow_adapter_100dc1f0(Guest* g)
{
    g->eax = cow_stamp_net_clock_tick();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
