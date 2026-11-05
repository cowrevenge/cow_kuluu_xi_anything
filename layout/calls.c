/* layout/calls.c - the only .c file that may name a bare guest function address, because a bridge is
   a layout fact (which function, how many arguments, which convention), not game logic.

   Bridges go through guest_call/guest_thiscall rather than calling f_<hex>(g) directly: the runtime
   owns the Guest marshalling, the guest stack and the guest lock. See layout/calls.h for the pattern. */
#include "cow.h"

CowU32 cow_guest_call0(CowAddr fn)
{
    return guest_call(fn, 0, NULL);
}

CowU32 cow_guest_thiscall0(CowAddr fn, CowAddr self)
{
    return guest_thiscall(fn, self, 0, NULL);
}

CowU32 cow_call_ui_show_window(CowAddr self, CowAddr name_record, CowU32 arg1, CowU32 arg2)
{
    const CowAddr args[3] = { name_record, arg1, arg2 }; /* the push order at 0x1015ee7c-0x1015ee85 */
    /* 0x1015ee8f: the address right after the original `call` at 0x1015ee8a - the word the callee pops;
       and eax at that call site is the second-gate global, loaded at 0x1015ee6c and untouched since. */
    return guest_thiscall_at(COW_ADDR_UI_SHOW_WINDOW_FN, self, 3u, args, 0x1015EE8Fu,
                             rd32(COW_ADDR_UI_SECOND_GATE_PTR));
}

CowU32 cow_call_ui_mode_is_4_or_5(CowAddr self)
{
    /* no stack arguments: the original only pushed the return address 0x1015ee68 (call at 0x1015ee63);
       eax at that site is the gate object's address, loaded at 0x1015ee40 and untouched since. */
    return guest_thiscall_at(COW_ADDR_UI_MODE_IS_4_OR_5_FN, self, 0u, NULL, 0x1015EE68u,
                             rd32(COW_ADDR_UI_IDLE_GATE_PTR));
}

CowU32 cow_call_ime_get_composition_string(CowAddr himc, CowU32 index, CowAddr buf, CowU32 buf_bytes,
                                           CowAddr retaddr, CowU32 eax_in)
{
    /* f_101b3f70 at 0x101b3f8a-0x101b3f95 pushes, low address last, buf_bytes, buf, index, himc - so
       the callee sees (himc, index, buf, buf_bytes), which is ImmGetCompositionStringA's own order.
       The thunk is one instruction to [0x10329098] (user32!ImmGetCompositionStringA) and is bridged,
       never converted. eax at the site is whatever ImmGetContext answered, replayed by the caller. */
    const uint32_t args[4] = { (uint32_t)himc, (uint32_t)index, (uint32_t)buf, (uint32_t)buf_bytes };
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_COMP_STRING_THUNK), 4u, args, retaddr, eax_in);
}

CowU32 cow_call_ime_get_context(CowAddr hwnd)
{
    /* 0x101b41a9-0x101b41aa: push [owner+0x18]; call 0x101aff50. eax at that site is the owner pointer
       loaded at 0x101b41a0 and not written since, so it is replayed; the thunk chain is
       0x101aff50 -> 0x102bc84c -> [0x10329070] (user32!ImmGetContext). */
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_CONTEXT_THUNK), 1u,
                         &(uint32_t){ (uint32_t)hwnd },
                         COW_IMG(COW_ADDR_IME_GET_CONTEXT_RETURN),
                         rd32(COW_ADDR_IME_OWNER_PTR));
}

CowU32 cow_call_ime_get_open_status(CowAddr himc)
{
    /* 0x101b41b1-0x101b41b2: push esi (the context ImmGetContext answered with); call 0x102bc87c. eax
       is that same himc here. */
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_OPEN_STATUS_THUNK), 1u,
                         &(uint32_t){ (uint32_t)himc },
                         COW_IMG(COW_ADDR_IME_GET_OPEN_STATUS_RETURN), (uint32_t)himc);
}

CowU32 cow_call_ime_release_context(CowAddr hwnd, CowAddr himc, CowAddr retaddr,
                                    CowU32 status_answer)
{
    /* The release is called from two sites - 0x101b41c5-0x101b41c6 on the open branch and
       0x101b41d8-0x101b41d9 on the closed one - which is why the return address is a parameter: the
       word the callee pops differs per branch and cowdiff compares it. Both paths pushed the himc at
       0x101b41b9 (before the branch) and the hwnd just before the call, so the argument order the
       callee sees is (hwnd, himc) as ImmReleaseContext expects. eax at the site is the BOOL
       ImmGetOpenStatus answered with - the entry never overwrites it between the two calls, so
       status_answer replays it. */
    const uint32_t args[2] = { (uint32_t)hwnd, (uint32_t)himc };
    return guest_call_at(COW_IMG(COW_ADDR_IME_RELEASE_CONTEXT_THUNK), 2u, args, retaddr,
                         status_answer);
}

CowU32 cow_call_net_clock_tick(CowAddr clock_at_site)
{
    /* f_100dc1f0's `call 0x100dbe00` at 0x100dc1fc. 0x100dbe00 is a thunk of one instruction -
       `jmp dword ptr [COW_ADDR_TIMEGETTIME_IAT]` - and that slot is an import: the PE's own hint/name
       record behind it reads timeGetTime (python tools/cow/iat_slot.py 0x10329400), winmm's
       millisecond tick, which is also what our shim for it returns (user32.c:1339). A thunk is
       bridged, never converted, and the call is cdecl with no arguments, so the only word the callee
       pops is the return address - replayed here as the address after the original's call, which is
       what lets cowdiff compare the stack byte for byte. eax at that site is the clock object, loaded
       at 0x100dc1f0 and untouched since, so it is handed in too. */
    return guest_call_at(COW_IMG(COW_ADDR_TIMEGETTIME_THUNK), 0u, NULL,
                         COW_IMG(COW_ADDR_NET_CLOCK_TICK_RETURN), clock_at_site);
}

CowU32 cow_call_net_clock_tick_at_top(void)
{
    /* f_100dc210's OWN `call 0x100dbe00` - the entry's first instruction, so the same one-instruction
       winmm thunk (see COW_ADDR_TIMEGETTIME_THUNK for the proof) reached from a second site, which is
       why it needs its own return address: 0x100dc215, the address the real call's `ret` pops, is what
       cowdiff finds in the stack word below esp and compares byte for byte. Nothing runs before the
       call here, so eax is whatever the caller left: GUEST_EAX_KEEP leaves the harness's value alone
       on both sides rather than inventing one, and because a return address is given the bridge does
       not clear df either - the fuzzed direction flag is part of what the two sides must agree on. */
    return guest_call_at(COW_IMG(COW_ADDR_TIMEGETTIME_THUNK), 0u, NULL,
                         COW_IMG(COW_ADDR_NET_CLOCK_TICK_AT_TOP_RETURN), GUEST_EAX_KEEP);
}

CowU32 cow_call_rtl_unwind(const CowSehUnwindRequest* request)
{
    /* The four words are already in guest memory where the original pushed them; they are read back and
       handed to the call machinery so both sides of cowdiff see the same arguments above the same return
       address. The thunk is one instruction, `jmp dword ptr [COW_ADDR_RTLUNWIND_IAT]`, and that slot is
       the import kernel32!RtlUnwind (python tools/cow/iat_slot.py 0x103290e4): a thunk is bridged, never
       converted. eax and ecx are left as the caller left them, because the original reached the call
       having written neither. */
    const uint32_t args[4] = { request->target_frame, request->target_ip,
                               request->exception_record, request->return_value };
    return guest_call_at(COW_IMG(COW_ADDR_RTLUNWIND_THUNK), 4u, args, request->target_ip,
                         GUEST_EAX_KEEP);
}
