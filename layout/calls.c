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
