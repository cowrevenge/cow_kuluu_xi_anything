/* f_103165a8 - ask the system to unwind the SEH chain down to a frame the caller names.

   Run the cleanup handlers of every frame above the one named, then come back and return normally. It
   owns no state; what it guarantees is that the caller's registers and stack survive the trip.

   Evidence
   - it is RtlUnwind behind a thunk .......... 0x103165bb calls 0x1032731c, a one-instruction
                                                 `jmp [0x103290e4]`; tools/cow/iat_slot.py 0x103290e4
                                                 reads the hint/name record and answers RtlUnwind. It is
                                                 stdcall and pops its own four arguments, which is why no
                                                 `add esp` follows the call.
   - arg4 ReturnValue = NULL ................. push 0 at 0x103165af
   - arg3 ExceptionRecord = NULL ............. push 0 at 0x103165b1: a cleanup unwind, not a thrown
                                                 exception (runtime/portable/k32_misc.c:246 is the shim
                                                 that fills a record in the throwing case)
   - arg2 TargetIp = 0x103165c0 .............. push 0x103165c0 at 0x103165b3 - the instruction right
                                                 after the call, which is how this thunk gets to run its
                                                 own epilogue and return normally
   - arg1 TargetFrame = the caller's ........ push [ebp+8] at 0x103165b8; this entry's only argument
   - callee-saved regs survive a handler ..... push ebx/esi/edi/ebp at 0x103165ab-0x103165ae and the
                                                 matching pops at 0x103165c0-0x103165c3 read them back
                                                 FROM MEMORY, because a handler the unwinder ran could
                                                 have written them
   - cdecl, caller cleans its argument ....... 0x103165c7 ret with no pop; both call sites do add esp, 4
   - two callers, neither through a vtable ... tools/cow/callers_of.py 0x103165a8 -> 0x103161bb and
                                                 0x1031d106. The first says what the argument is: inside
                                                 the function at 0x103161a8, `mov ebx,[esp+4] / mov
                                                 ebp,[ebx] / mov esi,[ebx+0x18] / cmp esi, fs:[0] / je
                                                 skip / push esi / call 0x103165a8` - an object keeps a
                                                 saved SEH chain head at +0x18, and when it is no longer
                                                 the live head (fs:[0] in the TEB) that frame is handed
                                                 here to be unwound down to.

   Proof: tools/cow/cowdiff.py 0x103165a8 - PASS on every compared item (eax, edx, callee-saved, esp,
   memory writes, calls out), with the unwinder answered by the harness rather than by the OS.

   Name: cow_seh_unwind_to_frame (guess) - from the import behind the thunk, the argument's provenance
   at 0x103161ae-0x103161ba, and the TargetIp. cow/names.csv carries the citations; what the saved chain
   head at [obj+0x18] belongs to is not established and is not named.
*/
#include "cow.h"

/* The register contract cowdiff checks: eax is whatever the unwinder answers with (the shim returns the
   ReturnValue it was handed, NULL), edx is never touched, and ebx/esi/edi/ebp come back from the
   save block - read from memory, because a handler the unwinder ran could have changed them. The
   argument is the caller's, and the caller pops it. */
uint32_t cow_seh_unwind_to_frame(CowSehUnwindRequest* request, CowAddr target_frame)
{
    /* The four pushes at 0x103165af-0x103165b8, written where the original put them: on the guest stack,
       just below the save block. The frame to stop at is the one the caller named; the resume address is
       this entry's own epilogue, an image constant, so it takes the relocation delta like every other
       0x10xxxxxx the original hands to a callee; and the request carries no exception record and no
       return value, because this is a cleanup unwind, not a thrown exception. */
    request->target_frame = target_frame;
    request->target_ip = COW_IMG(COW_ADDR_SEH_UNWIND_RESUME);
    request->exception_record = 0u;
    request->return_value = 0u;
    return cow_call_rtl_unwind(request);
}

/* COW_ADAPTER BEGIN - cdecl with one argument: the original reads [ebp+8] once (0x103165b8) and never
   writes a caller-cleaned `ret N`, and both call sites follow it with `add esp, 4`. The five-word save
   block at 0x103165ab-0x103165ae and the four argument words are reproduced here rather than in the
   user function because they are the guest ABI - cowdiff compares stack memory byte for byte, so the
   pushes have to happen even though the entry computes nothing from them. esp is left exactly where the
   stdcall callee and the pops leave it. The readability gate skips this block. */
void cow_adapter_103165a8(Guest* g)
{
    const uint32_t e0 = g->esp;
    const uint32_t target_frame = rt_arg(g, 0); /* push dword [ebp+8] at 0x103165b8 */
    const uint32_t frame = e0 - 4u; /* the value `mov ebp, esp` at 0x103165a9 leaves in ebp */

    CowSehUnwindSave* save = COW_AS(CowSehUnwindSave, e0 - 20u);
    CowSehUnwindRequest* request = COW_AS(CowSehUnwindRequest, e0 - 36u);
    save->saved_caller_ebp = g->ebp; /* push ebp at 0x103165a8 */
    save->saved_ebx = g->ebx; /* push ebx at 0x103165ab */
    save->saved_esi = g->esi; /* push esi at 0x103165ac */
    save->saved_edi = g->edi; /* push edi at 0x103165ad */
    save->saved_frame_ebp = frame; /* push ebp at 0x103165ae: the frame, popped back at 0x103165c0 */
    g->esp = e0 - 20u; /* the callee's arguments, and its own pop, live below here */

    const uint32_t eax = cow_seh_unwind_to_frame(request, target_frame);

    uint32_t sp = g->esp; /* where the stdcall callee left it: the top of the save block */
    g->ebp = rd32(sp); sp += 4u; /* pop ebp at 0x103165c0 */
    g->edi = rd32(sp); sp += 4u; /* pop edi at 0x103165c1 */
    g->esi = rd32(sp); sp += 4u; /* pop esi at 0x103165c2 */
    g->ebx = rd32(sp); /* pop ebx at 0x103165c3 */
    g->esp = g->ebp; /* mov esp, ebp at 0x103165c4 */
    g->ebp = rd32(g->esp); /* pop ebp at 0x103165c6: the caller's frame pointer, and esp moves past it */
    g->esp += 4u;
    rt_return(g, eax, 0); /* ret at 0x103165c7: pops the return address, the caller pops its argument */
}
/* COW_ADAPTER END */
