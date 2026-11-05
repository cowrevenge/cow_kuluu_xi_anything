/* f_103165a8 - it asks the system to unwind the SEH chain down to a frame the caller names

   The original, line by line. The bytes are the 32 at 0x103165a8 in our own image
   (python tools/cow/peek_bytes.py 0x103165a8 --len 32 -> 55 8b ec 53 56 57 55 6a 00 6a 00 68 c0 65 31
   10 ff 75 08 e8 5c 0d 01 00 5d 5f 5e 5b 8b e5 5d c3), so nothing below is paraphrase.

     103165a8  55              push ebp                    frame setup: the caller's ebp is saved at
     103165a9  8b ec           mov  ebp, esp                         [ebp] and never read again here
     103165ab  53              push ebx                    the three callee-saved registers and the
     103165ac  56              push esi                    frame pointer are put in a five-word block
     103165ad  57              push edi                    below the frame; the epilogue pops exactly
     103165ae  55              push ebp                    them back, so the caller's world is intact
     103165af  6a 00           push 0                      arg4 RtlUnwind ReturnValue      = NULL
     103165b1  6a 00           push 0                      arg3 RtlUnwind ExceptionRecord = NULL: this
                                                                    is a cleanup unwind, not a thrown
                                                                    exception (the shim at
                                                                    runtime/portable/k32_misc.c:246 is
                                                                    what fills a record in that case)
     103165b3  68 c0653110     push 0x103165c0             arg2 RtlUnwind TargetIp: the instruction
                                                                    right after this call. The unwinder
                                                                    is told to resume HERE, which is how
                                                                    the thunk gets to run its own
                                                                    epilogue and return normally.
     103165b8  ff 75 08        push dword [ebp+8]          arg1 RtlUnwind TargetFrame: the ONE argument
                                                                    of this entry, handed over by the
                                                                    caller - the frame to stop at.
     103165bb  e8 5c0d0100     call 0x1032731c             a thunk of one instruction, `jmp dword ptr
                                                                    [0x103290e4]`, and that slot is an
                                                                    IMPORT: python tools/cow/iat_slot.py
                                                                    0x103290e4 reads the hint/name record
                                                                    behind it and answers RtlUnwind. It
                                                                    is stdcall, so the callee pops the
                                                                    four arguments and the return
                                                                    address - which is why no `add esp`
                                                                    follows the call.
     103165c0  5d              pop ebp                     the five-word block goes back into the
     103165c1  5f              pop edi                              registers, read from memory - a
     103165c2  5e              pop esi                              handler the unwinder ran could
     103165c3  5b              pop ebx                              have written them
     103165c4  8b e5           mov  esp, ebp               back to the frame
     103165c6  5d              pop ebp                     the caller's ebp
     103165c7  c3              ret                          cdecl: the caller cleans its own argument
                                                                    (both call sites do `add esp, 4`)

   Who calls it (python tools/cow/callers_of.py 0x103165a8 -> 2 code sites): 0x103161bb and 0x1031d106.
   The first is the one that says what the argument is. Inside the function that starts at 0x103161a8:
   `mov ebx, [esp+4] / mov ebp, [ebx] / mov esi, [ebx+0x18] / cmp esi, dword ptr fs:[0] / je skip /
   push esi / call 0x103165a8 / add esp, 4` - the object keeps a saved SEH chain head at +0x18, and when
   it is no longer the live head of the chain (fs:[0] in the TEB), that saved frame is handed here to be
   unwound down to. Nothing calls it through a vtable.

   So the entry is the game's one door to the OS unwinder: *run the cleanup handlers of every frame
   above the one I name, then come back and return.* It owns no state of its own; what it guarantees is
   that the caller's registers and stack survive the trip, which is exactly what the save block and the
   epilogue are for.

   Name: cow_seh_unwind_to_frame (guess) - descriptive, from the import behind the thunk, the argument's
   provenance at 0x103161ae-0x103161ba, and the TargetIp. cow/names.csv carries the citations; what the
   saved chain head at [obj+0x18] belongs to is not established and is not named.
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
