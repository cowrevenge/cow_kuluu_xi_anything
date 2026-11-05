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
/* ImmGetCompositionStringA through its thunk: the context handle, which string to read
   (COW_IME_GCS_COMPSTR), where to put it and how big that is. The return address is the caller's own
   site, because cowdiff compares the word the stdcall epilogue pops. eax_in replays what the real call
   site held. */
CowU32 cow_call_ime_get_composition_string(CowAddr himc, CowU32 index, CowAddr buf, CowU32 buf_bytes,
                                           CowAddr retaddr, CowU32 eax_in);

CowU32 cow_call_ime_get_context(CowAddr hwnd);
CowU32 cow_call_ime_get_context_at(CowAddr hwnd, CowAddr retaddr, CowU32 eax_in);
CowU32 cow_call_ime_get_open_status(CowAddr himc);
CowU32 cow_call_ime_get_open_status_at(CowAddr himc, CowAddr retaddr, CowU32 eax_in);
CowU32 cow_call_ime_get_conversion_status(CowAddr himc, CowAddr conv_out, CowAddr sentence_out,
                                          CowAddr retaddr, CowU32 eax_in);
CowU32 cow_call_ime_release_context(CowAddr hwnd, CowAddr himc, CowAddr retaddr,
                                    CowU32 status_answer);

CowU32 cow_call_net_clock_tick(CowAddr clock_at_site);

/* --- the net clock's cluster (2026-11-05): the calls its six entries make, see layout/calls.c for
   why every one of them passes GUEST_EAX_KEEP and none replays a register. Each takes its own call
   site's return address, because cowdiff compares the word the callee's epilogue pops. */

/* winmm!timeGetTime through the same one-instruction thunk as cow_call_net_clock_tick, from f_100dbe50
   (return 0x100dbe84) and f_100dbf20 (return 0x100dbf27). */
CowU32 cow_call_net_clock_tick_at(CowAddr retaddr);
/* The converted f_100dbf20 (cow_net_clock_advance_ms) from the pump f_100dbeb0 at 0x100dbeb0; cdecl,
   no arguments, and the pump drops its eax (0x100dbeb5 overwrites it). */
CowU32 cow_call_net_clock_advance_ms_at(CowAddr retaddr);
/* The converted f_100dbf00 (cow_clock_window_delta) from f_100dbeb0 (return 0x100dbec7 -> 0x100dbecc)
   and from f_100dbf20 (0x100dbf35 -> 0x100dbf3a). cdecl, three arguments - which the CALLER pushes, in
   the original's instruction order, and drops with its own `add esp,0xc`: see layout/calls.c for why a
   bridge that pushed them would put side B one write behind side A. */
CowU32 cow_call_clock_window_delta_at(CowAddr retaddr);
/* f_100dbe30 from f_100dbe50 at 0x100dbe77: writes the version answer into *seconds_out and zeroes
   *ms_accum_out, and returns the value the entry's `mov al,1` masks. Again the caller pushes both
   addresses (0x100dbe75-0x100dbe76) and cleans them at 0x100dbe7c. */
CowU32 cow_call_net_clock_reset_accum_at(CowAddr retaddr);
/* 0x10314f31 from f_100dbe30 at 0x100dbe32 with its out-parameter left 0, so the answer comes back in
   eax only. Not converted: it asks the OS, and the cluster converts the clock's owners. */
CowU32 cow_call_os_version_answer(CowAddr retaddr);
/* 0x100dbde0 from f_100dbe50 at 0x100dbe65 - a tabled row, bridged like a thunk. */
CowU32 cow_call_net_clock_init_hook_at(CowAddr retaddr);
/* The two converted entries f_100dbe50 and f_100dbeb0 each call once, in each case for the eax its own
   `mov al,1` masks: f_100dc1f0 from 0x100dbe98, f_100dc210 from 0x100dbeef. */
CowU32 cow_call_stamp_net_clock_tick_at(CowAddr retaddr);
CowU32 cow_call_advance_net_clock_tick_at(CowAddr retaddr);

/* The table thunk COW_ADDR_QUAT_AXIS_THUNK that f_102d8be9 calls at 0x102d8bf6 to fill the three floats
   of an axis vector from one parameter: cdecl, no arguments pushed by the bridge (the entry pushes the
   vector address and the parameter itself at 0x102d8bef/0x102d8bf5), and the site's own return address
   because cowdiff compares the word the callee's epilogue pops. The slot it jumps through is a function
   table entry whose live content is the unconverted refresh trampoline, so the seed pins it. */
CowU32 cow_call_quaternion_axis(CowAddr retaddr);

/* The game's own truncating double->int64 conversion at COW_ADDR_DOUBLE_TO_INT64_FN (it sets the FPU
   control word's rounding to truncate-toward-zero, `fistp qword ptr [ebp-0xc]`, and restores it). Its
   argument is st(0), which the calling entry pushes with `fild qword ptr [esp+4]`; the bridge carries
   no arguments and is site-exact so the callee's pop survives. eax is the return value, edx the high
   half, both read from the Guest afterwards by the caller. */
CowU32 cow_call_double_to_int64(CowAddr retaddr);

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
