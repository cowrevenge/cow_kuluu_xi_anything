/* layout/calls.h - typed prototypes for guest functions we have NOT converted yet.

   User code in src/ calls these by name and never sees f_<hex>. Each bridge lives in calls.c, where
   the bare address is allowed, and goes through the runtime's own call machinery (guest_call /
   guest_thiscall in gthread.h): that marshals the Guest, the stack and the guest lock, which a direct
   f_<hex>(g) call would not - calling a translation by hand from host code is how you get a corrupt
   esp that only shows up forty functions later.

   The pattern a bridge follows, once a unit actually needs one:

     calls.h:  CowI32 cow_call_registry_key_path(CowAddr dest, CowAddr source);
     calls.c:  CowI32 cow_call_registry_key_path(CowAddr dest, CowAddr source)
               {
                   CowAddr args[2] = { dest, source };
                   return (CowI32)guest_call(COW_ADDR_REGISTRY_KEY_PATH, 2, args);
               }

   The name goes into cow/names.csv (kind=call) with the evidence that says what the function is. */
#ifndef COW_LAYOUT_CALLS_H
#define COW_LAYOUT_CALLS_H

#include "cow_types.h"

/* Call a guest function that takes no arguments; returns its eax. */
CowU32 cow_guest_call0(CowAddr fn);
/* The same as a thiscall member function of `self` (self goes in ecx, as the game expects). */
CowU32 cow_guest_thiscall0(CowAddr fn, CowAddr self);

/* Ask the UI manager (self = COW_ADDR_UI_MANAGER) to put the window whose DAT record is
   `name_record` on screen - the three stack arguments the original pushes at 0x1015ee7c-0x1015ee85
   (name, then the immediates 1 and 0, whose meaning is not established). Returns the callee's eax,
   which cow_ui_open_main_menu deliberately IGNORES, because the original does too. */
CowU32 cow_call_ui_show_window(CowAddr self, CowAddr name_record, CowU32 arg1, CowU32 arg2);

/* Ask the presentation-mode object (self = the global behind 0x10662d40) whether it owns the screen:
   the original call at 0x1015ee63, whose return address 0x1015ee68 the bridge replays so cowdiff
   sees the same stack word the real call left. Returns the callee's eax (1 when [this+0xf108] is
   4 or 5, 0 otherwise - read off 0x101b5c90's own body). */
CowU32 cow_call_ui_mode_is_4_or_5(CowAddr self);

/* The zone connection's millisecond tick: the `call 0x100dbe00` at 0x100dc1fc, a one-instruction
   thunk (`jmp [import slot]`) whose import is winmm!timeGetTime - see layout/addresses.h for the
   proof and layout/calls.c for why the return address and eax have to be replayed. `clock_at_site`
   is the value the original had in eax when it made the call (the clock object it had just loaded).
   Returns the callee's eax. In cowdiff the answer comes from the harness's pinned clock, not from
   Windows, so both sides of the comparison see the same tick - the PASS line says when that happened. */
/* The three IME calls f_101b41a0 makes, each bridged through the OUTERMOST thunk the original calls
   (see layout/addresses.h for the chains and the import names). All three are stdcall: the callee pops
   its own arguments, so a bridge that leaves esp alone is what the original does too. eax_in replays
   what the real call site held, and the return address is the site's own, because cowdiff compares the
   stack word the callee's epilogue pops. */
CowU32 cow_call_ime_get_context(CowAddr hwnd);
CowU32 cow_call_ime_get_open_status(CowAddr himc);
CowU32 cow_call_ime_release_context(CowAddr hwnd, CowAddr himc, CowAddr retaddr,
                                    CowU32 status_answer);

CowU32 cow_call_net_clock_tick(CowAddr clock_at_site);

/* The same winmm tick reached from the OTHER site: f_100dc210 opens with its own `call 0x100dbe00`
   before it has read anything, so there is no eax to replay (GUEST_EAX_KEEP) and the word its callee
   pops is 0x100dc215, not the one above. See layout/calls.c for why both details matter to cowdiff. */
CowU32 cow_call_net_clock_tick_at_top(void);

/* Ask the system's SEH unwinder to tear the chain down to the frame the request names. The request is
   the four words the original pushes at 0x103165af-0x103165b8 (TargetFrame, TargetIp, ExceptionRecord,
   ReturnValue); they go to the thunk at COW_ADDR_RTLUNWIND_THUNK, which is `jmp [COW_ADDR_RTLUNWIND_IAT]`
   and whose import is kernel32!RtlUnwind - see layout/addresses.h for the proof. stdcall: the callee
   pops its four arguments and the return address, and the address it pops is the request's own TargetIp,
   which is why the caller's esp lands exactly where the caller's epilogue expects it. */
CowU32 cow_call_rtl_unwind(const CowSehUnwindRequest* request);

#endif /* COW_LAYOUT_CALLS_H */
