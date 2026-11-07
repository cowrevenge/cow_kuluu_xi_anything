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

CowU32 cow_call_ime_get_context_at(CowAddr hwnd, CowAddr retaddr, CowU32 eax_in)
{
    /* The same ImmGetContext thunk from the OTHER entries' sites - the ImmGetConversionStatus probes
       f_101b40d0/f_101b4140/f_101b41f0 call it at 0x101b40dd/0x101b414d/0x101b41fd, each with its own
       return address and its own eax (all three hold the owner pointer just loaded from the global). */
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_CONTEXT_THUNK), 1u,
                         &(uint32_t){ (uint32_t)hwnd }, retaddr, eax_in);
}

CowU32 cow_call_ime_get_open_status(CowAddr himc)
{
    /* 0x101b41b1-0x101b41b2: push esi (the context ImmGetContext answered with); call 0x102bc87c. eax
       is that same himc here. */
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_OPEN_STATUS_THUNK), 1u,
                         &(uint32_t){ (uint32_t)himc },
                         COW_IMG(COW_ADDR_IME_GET_OPEN_STATUS_RETURN), (uint32_t)himc);
}

CowU32 cow_call_ime_get_open_status_at(CowAddr himc, CowAddr retaddr, CowU32 eax_in)
{
    /* The same ImmGetOpenStatus thunk from the probes' sites (0x101b40e5/0x101b4155/0x101b4205). */
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_OPEN_STATUS_THUNK), 1u,
                         &(uint32_t){ (uint32_t)himc }, retaddr, eax_in);
}

CowU32 cow_call_ime_get_conversion_status(CowAddr himc, CowAddr conv_out, CowAddr sentence_out,
                                          CowAddr retaddr, CowU32 eax_in)
{
    /* The probes' third call: 0x102bc882, one instruction `jmp dword ptr [0x10329094]` =
       user32!ImmGetConversionStatus (python tools/cow/iat_slot.py 0x10329094). stdcall, three
       arguments: the entry pushes the two scratch pointers and then the handle, low address last, so
       the callee reads (himc, conv_out, sentence_out) - its own signature. The entry never reads the
       two words the callee writes through them; what it reads back afterwards is its own stack, which
       the adapters transcribe. */
    const uint32_t args[3] = { (uint32_t)himc, (uint32_t)conv_out, (uint32_t)sentence_out };
    return guest_call_at(COW_IMG(COW_ADDR_IME_GET_CONV_STATUS_THUNK), 3u, args, retaddr, eax_in);
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

/* --- the net clock's cluster (2026-11-05): the seven call sites its six entries make ----------------

   All of them are cdecl and all of them pass GUEST_EAX_KEEP, and that is a reading rather than a
   shortcut: each callee writes eax before it could read it (0x100dbde0 is a tabled row that stores its
   value; f_100dbe30's eax comes from the call at 0x100dbe32; the routine at 0x10314f31 loads eax at
   0x10314f3a; f_100dbf00 computes from its stack arguments; f_100dc1f0 and f_100dc210 both take eax
   from their own winmm call). Nothing on either side therefore needs a replayed eax, and replaying one
   that the callee overwrites would only be noise. The return address is the site's own, because
   cowdiff compares the word the callee's epilogue pops. */

CowU32 cow_call_net_clock_tick_at(CowAddr retaddr)
{
    /* 0x100dbe7f (f_100dbe50, after the accumulators are reset) and 0x100dbf22 (f_100dbf20, its first
       action after the two pushes) - the same one-instruction winmm thunk as
       cow_call_net_clock_tick(), reached from two more sites, so each passes its own return address. */
    return guest_call_at(COW_IMG(COW_ADDR_TIMEGETTIME_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_clock_window_delta_at(CowAddr retaddr)
{
    /* The two callers of the converted f_100dbf00 (cow_clock_window_delta): 0x100dbec7 in f_100dbeb0
       and 0x100dbf35 in f_100dbf20. NEITHER bridge pushes the arguments: the pushes are instructions
       of the calling entry (0x100dbec0-0x100dbec2 and 0x100dbf2f-0x100dbf33), and in f_100dbf20 the
       first of them comes BEFORE the load that can fault (`push esi` at 0x100dbf2f, then
       `mov eax,[edi]` at 0x100dbf30). A bridge that pushed all three at call time would leave side B
       one write behind side A on exactly the states where the clock pointer is junk. The caller pushes
       them in the original's order and drops them with its own `add esp,0xc` (0x100dbed2/0x100dbf3a). */
    return guest_call_at(COW_IMG(COW_ADDR_CLOCK_WINDOW_DELTA_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_net_clock_advance_ms_at(CowAddr retaddr)
{
    /* f_100dbeb0 at 0x100dbeb0 -> the converted f_100dbf20, the same clock's advance. Its eax is
       dropped by the caller (`mov eax,[0x10492e10]` at 0x100dbeb5 overwrites it), and the entry reads
       no register of the caller's before its own pushes and its winmm call. */
    return guest_call_at(COW_IMG(COW_ADDR_NET_CLOCK_ADVANCE_MS_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_net_clock_reset_accum_at(CowAddr retaddr)
{
    /* f_100dbe50 at 0x100dbe77: `lea ecx,[eax+0x10] / add eax,0xc / push ecx / push eax`. The two
       pushes belong to the calling entry and its adapter does them, in that order, so the stack words
       land where the original's do; the callee's first argument (lowest address, pushed last) is the
       seconds field and the second is the millisecond accumulator, which is what its `mov [ecx],eax` /
       `mov [edx],0` at 0x100dbe42 and 0x100dbe44 write. */
    return guest_call_at(COW_IMG(COW_ADDR_NET_CLOCK_RESET_ACCUM_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_os_version_answer(CowAddr retaddr)
{
    /* f_100dbe30 at 0x100dbe32: `push 0 / call 0x10314f31`. The zero is the routine's out-parameter
       (it stores its answer there when given a pointer, 0x10315007-0x10315009) and the entry passes 0
       because it wants the answer in eax only - but the PUSH is the entry's own instruction, at
       0x100dbe30, and its adapter does it. A bridge that pushed the argument as well would leave side B
       one word below side A on every state (measured on the first run of this unit: esp 0x993be0/0x993be4).
       One argument, and the callee is `leave / ret` with no pop: cdecl, and the entry cleans it with
       `add esp,4` at 0x100dbe3f. */
    return guest_call_at(COW_IMG(COW_ADDR_OS_VERSION_ANSWER_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_net_clock_init_hook_at(CowAddr retaddr)
{
    /* f_100dbe50 at 0x100dbe65 -> 0x100dbde0, which the ledger books as a row of
       src/tables/cow_trivial_rows.def, not as a file. A tabled row is bridged like a thunk: the
       runtime dispatches to whatever owns the address, and the trace both sides compare is the call. */
    return guest_call_at(COW_IMG(COW_ADDR_NET_CLOCK_INIT_HOOK_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_stamp_net_clock_tick_at(CowAddr retaddr)
{
    /* f_100dbe50 at 0x100dbe98 -> the converted f_100dc1f0. Its return value is what f_100dbe50's
       `mov al,1` at 0x100dbe9d masks, so the bridge hands the tick back rather than dropping it. */
    return guest_call_at(COW_IMG(COW_ADDR_STAMP_NET_CLOCK_TICK_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_advance_net_clock_tick_at(CowAddr retaddr)
{
    /* f_100dbeb0 at 0x100dbeef -> the converted f_100dc210, whose eax the same masking applies to
       (0x100dbef4 `mov al,1` is the entry's last word before its `ret`). */
    return guest_call_at(COW_IMG(COW_ADDR_ADVANCE_NET_CLOCK_TICK_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_double_to_int64(CowAddr retaddr)
{
    /* f_100dc0a0 at 0x100dc0c3 and f_100dc0e0 at 0x100dc103 -> COW_ADDR_DOUBLE_TO_INT64_FN, the game's
       own truncating conversion. Its argument is st(0), which the calling entry loads with `fild qword
       ptr [esp+4]` (0x100dc0b9 / 0x100dc0f9) - a real FPU push the adapter reproduces, so the bridge
       carries no arguments. It is site-exact on purpose: the callee POPS st(0) with its `fistp`, and a
       generic bridge would restore the stack the entry is entitled to see popped. The caller reads the
       high half from g->edx afterwards, which is exactly what the original's `mov edx,[ebp-8]` left
       there for it. */
    return guest_call_at(COW_IMG(COW_ADDR_DOUBLE_TO_INT64_FN), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_vector3_from_table(CowAddr retaddr)
{
    /* f_102d8be9 at 0x102d8bf6 -> the table thunk COW_ADDR_VECTOR3_TABLE_THUNK. The two arguments (the
       vector the routine is to fill, and the parameter it derives it from) are pushed by the calling
       entry at 0x102d8bef and 0x102d8bf5, in that order, and dropped by its `leave` at 0x102d8c41: the
       bridge pushes none of them, for the reason layout/calls.c states at the top of the net clock
       block - a site-exact bridge restores nothing, so a bridge that pushed what the entry pushed
       leaves side B one word low on every state. The thunk is bridged, never converted. What lives
       behind its slot is the table's problem, not this bridge's: the seed pins the slot. */
    return guest_call_at(COW_IMG(COW_ADDR_VECTOR3_TABLE_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_vector4_from_table(CowAddr retaddr)
{
    /* f_102da2b2 at 0x102da2bf and f_102da1d8 at 0x102da1e5 -> the table thunk
       COW_ADDR_VECTOR4_TABLE_THUNK. Both callers push the parameter first and the four-float buffer
       second, in that order, and both drop the two words with their own `leave`; the bridge pushes
       none of them, for the reason stated at the top of the net clock block - a site-exact bridge
       restores nothing, so a bridge that pushed what the entry pushed leaves side B one word low on
       every state. The thunk is bridged, never converted: what lives behind slot 21 of the function
       table is the table's problem, and the seed pins the slot and the four floats it is meant to
       fill. */
    return guest_call_at(COW_IMG(COW_ADDR_VECTOR4_TABLE_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_scale_rot_from_table(CowAddr retaddr)
{
    /* f_102d7ef1 at 0x102d7f59 -> COW_ADDR_SCALE_ROT_THUNK. The entry pushed the caller's rotation
       pointer and the address of a scratch word in its own frame; the bridge pushes nothing itself, for
       the site-exact reason stated at the top of the net clock block. Stubbed in the seed with pop 8 -
       the two words the entry pushed, which the pair of `lea eax,[esp+..]` before and after this call
       prove the callee takes back. */
    return guest_call_at(COW_IMG(COW_ADDR_SCALE_ROT_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_orient_from_table(CowAddr retaddr)
{
    /* f_102d7ef1 at 0x102d7f86 and 0x102d7fa7 -> COW_ADDR_ORIENT_THUNK, the same routine from two
       sites, so `retaddr` distinguishes them: each site must leave its OWN return address on the stack,
       because the word written below the frame is part of the memory trace cowdiff compares. The entry
       pushed three words (the scratch slot and the matrix pointer twice) and the seed stubs this with
       pop 0xc. */
    return guest_call_at(COW_IMG(COW_ADDR_ORIENT_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_vector3_transform_from_table(CowAddr retaddr)
{
    /* f_102d9ad8 at 0x102d9bbb -> COW_ADDR_VECTOR3_TRANSFORM_THUNK, the join-block callee that puts the
       chosen matrix onto a caller vector. The entry pushed three words for it at 0x102d9bb3, 0x102d9bb4
       and 0x102d9bba - the matrix, the input vector and the output vector - and there is no `add esp`
       anywhere after the call, so the callee cleans them. The bridge pushes none of them itself, for the
       standing reason in this file: a site-exact bridge restores nothing, so a bridge that pushed what
       the entry pushed leaves side B one word low on every state. The return value is discarded by the
       entry (eax is overwritten by `mov eax,[ebp+0x10]` at 0x102d9bc0), which is why this is EAX_KEEP and
       not a value-returning bridge: what matters is the three floats it wrote through the out pointer. */
    return guest_call_at(COW_IMG(COW_ADDR_VECTOR3_TRANSFORM_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_axes_from_table(CowAddr retaddr)
{
    /* f_102e7f5a at 0x102e8010 -> the table thunk COW_ADDR_AXES_THUNK. The entry pushes seven words
       for it - the three "address of the caller's pair, or 0" pointers, the trig buffer or 0, two
       zeros, and the 0x48-byte stack buffer the callee is expected to fill - and none of them is
       followed by an `add esp`, so the callee cleans them with its own `ret 0x1c`. The bridge pushes
       none of them itself, for the reason stated at the top of the net clock block: a site-exact
       bridge restores nothing, so pushing what the entry pushed leaves side B one word low on every
       state. Bridged, never converted, and stubbed in the seed - the thunk is `jmp [slot]` and the
       slot's file image is the unconverted refresh trampoline. */
    return guest_call_at(COW_IMG(COW_ADDR_AXES_THUNK), 0u, NULL, retaddr, GUEST_EAX_KEEP);
}

CowU32 cow_call_vtable_set_orient(CowAddr target, CowAddr retaddr)
{
    /* f_102e7f5a at 0x102e8028: `call dword ptr [ecx+0x18]`, the FIRST indirect call any converted
       unit has made, so this is the bridge for the pattern rather than a one-off. `target` is what
       the entry read out of the object's vtable - ecx = [ [ebp+8] ] and the target = [ecx +
       COW_OFF_VTABLE_SET_ORIENT] - and the entry has already pushed the five words the slot is
       given, so the bridge passes nargs 0 for the same site-exact reason as every bridge above.
       It hands the target to the harness's own rt_call_indirect, which is what side A's generated
       `call dword ptr [ecx + 0x18]` does, so the two sides enter the callee the same way; the
       return address is the entry's own next instruction, 0x102e802b, so the word the call leaves
       on the stack is the word the real one left. eax is KEEP: the entry stores nothing of the
       slot's result, and 0x102e802b begins by popping edi. */
    return guest_call_at(target, 0u, NULL, retaddr, GUEST_EAX_KEEP);
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
