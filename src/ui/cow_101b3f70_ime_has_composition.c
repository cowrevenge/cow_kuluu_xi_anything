/* f_101b3f70 - ask the input method whether the player is in the middle of typing composed text.

   Pull the composition string out of the IME into a 256-byte stack buffer, throw the bytes away, and
   answer only whether there were any. The buffer exists so the call has somewhere legitimate to write;
   nothing downstream reads it, and the entry's whole product is the yes/no. As in the sibling probe
   f_101b41a0, the context is always released, whichever way the answer goes.

   Evidence
   - same owner object as f_101b41a0 .......... the first instruction is `mov eax,[0x103d3c64]` at
                                                 0x101b3f70 and the window handle comes from [eax+0x18]
                                                 at 0x101b3f7b/0x101b3fa2; layout/addresses.h
                                                 COW_ADDR_IME_OWNER_PTR, layout/structs.h
                                                 CowImeWindowOwner
   - the three callees are Win32 IME imports .... 0x101aff50 -> [0x10329070] user32!ImmGetContext;
                                                 0x102bc888 -> [0x10329098] user32!ImmGetCompositionStringA
                                                 ; 0x101aff60 -> [0x10329074] user32!ImmReleaseContext
                                                 (python tools/cow/iat_slot.py on each slot). All stdcall,
                                                 so each pops its own arguments and the entry needs no
                                                 per-call `add esp` - only the one at 0x101b3fb4 for its
                                                 own buffer
   - the buffer is 256 bytes of stack .......... `sub esp, 0x100` at 0x101b3f75, and the same 0x100 is
                                                 pushed as the length at 0x101b3f8a; its address is
                                                 `lea edx,[esp+8]` at 0x101b3f86, i.e. the space the
                                                 reserve made, sitting above the two saved registers
   - which string it asks for .................. the literal 8 pushed at 0x101b3f92, between the context
                                                 handle and the buffer - ImmGetCompositionStringA's
                                                 index, GCS_COMPSTR: the string still being composed
   - the argument order at the call ............ pushes at 0x101b3f8a-0x101b3f94 put buf_bytes, buf,
                                                 index, himc on the stack low-address-last, so the
                                                 callee reads (himc, index, buf, buf_bytes) - the
                                                 import's own signature
   - the answer is the LENGTH, compared SIGNED .. `mov edi,eax` at 0x101b3f9a keeps the returned byte
                                                 count; `xor eax,eax / test edi,edi / setg al` at
                                                 0x101b3fab-0x101b3fb1 sets al from "greater", which is
                                                 the signed condition. ImmGetCompositionStringA returns
                                                 a byte count or a negative error, so a negative answer
                                                 must mean "no composition" - reading the test as
                                                 unsigned would call an error code a composition
   - eax is exactly 0 or 1 ..................... `xor eax,eax` clears all of eax first and only AL is
                                                 then set, so unlike the sibling probe this entry does
                                                 return a tidy boolean and must not be given dirty
                                                 upper bytes
   - edx out is the buffer address ............. nothing writes edx after `lea edx,[esp+8]` at
                                                 0x101b3f86, so the entry hands the scratch address back
                                                 in edx and cowdiff compares it
   - esi and edi are both saved and restored ... `push esi / push edi` at 0x101b3f7e-0x101b3f7f,
                                                 `pop edi / pop esi` at 0x101b3faf-0x101b3fb0
   - one caller, no table ...................... 0x101b3056 (tools/cow/callers_of.py 0x101b3f70)

   Proof: tools/cow/cowdiff.py 0x101b3f70 - PASS on eax, edx, callee-saved, esp, guest memory writes and
   the call trace, with every instruction site reached. cow/seeds/101b3f70.json stubs the three imports
   and names the composition length outright, including a length with the sign bit SET (0x80000000):
   that state is what tells a signed `setg` from an unsigned `seta`, which no fuzzed value would do
   reliably. Mutated per LOOP.md because `setg` - a flag-derived boolean - is a code shape this loop has
   not converted before.

   Name: cow_ime_has_composition (guess) - from the import, the index constant and the comparison; that
   the caller only wants the yes/no is what the discarded buffer shows.
*/
#include "cow.h"

/* The two reads the entry performs before it touches the stack for anything else. They are a separate
   function precisely because of that order: the original loads the window handle at 0x101b3f7b BEFORE
   the callee-saved pushes at 0x101b3f7e, so with a garbage owner pointer it faults with those two stack
   writes still ahead of it. Reading the handle after the pushes - which is what one function doing the
   whole job naturally does - faults two words lower with two extra writes in the trace, and cowdiff
   caught exactly that on a fuzzed state. */
uint32_t cow_ime_owner_hwnd(uint32_t owner_addr)
{
    CowImeWindowOwner* owner = COW_AS(CowImeWindowOwner, owner_addr); /* 0x101b3f70 */
    return owner->hwnd; /* 0x101b3f7b */
}

uint32_t cow_ime_query_composition(uint32_t hwnd, uint32_t scratch_buf, uint32_t owner_addr)
{
    const uint32_t himc = cow_call_ime_get_context(hwnd); /* 0x101b3f80-0x101b3f81 */

    const uint32_t bytes = cow_call_ime_get_composition_string(himc, COW_IME_GCS_COMPSTR, scratch_buf,
                                                               COW_IME_COMPOSITION_BUF_BYTES,
                                                               COW_IMG(COW_ADDR_IME_GET_COMP_STRING_RETURN),
                                                               himc); /* 0x101b3f8a-0x101b3f95 */

    cow_call_ime_release_context(hwnd, himc, COW_IMG(COW_ADDR_IME_RELEASE_RETURN_COMPOSITION),
                                 owner_addr); /* 0x101b3fa1-0x101b3fa6: always, both answers */

    /* 0x101b3fab-0x101b3fb1: `xor eax,eax` then `setg al` off `test edi,edi`. Greater is the SIGNED
       condition, and it has to be: the import answers a byte count or a negative error code, so an
       error is "no composition", not "a very large one". Written as a branch rather than a ternary
       because that is what the original is - a test and a flag-derived set - and the answer is a
       decision, not an expression. */
    if ((int32_t)bytes > 0)
    {
        return 1u;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments. The entry's own stack effects are the 256-byte reserve
   at 0x101b3f75 and the two callee-saved pushes at 0x101b3f7e-0x101b3f7f; the argument words are the
   bridges' business and they lay them down at the same addresses the original's pushes used. The
   scratch buffer the query writes into is the reserved block itself - `lea edx,[esp+8]` names it once
   the two saves are in place - and it is also what the entry returns in edx, so it is computed here
   rather than conjured up. esp comes back the way it went: the stdcall callees cleaned their own
   arguments, the two pops take the saves, and the single `add esp, 0x100` at 0x101b3fb4 closes the
   reserve. The readability gate skips this block. */
void cow_adapter_101b3f70(Guest* g)
{
    g->esp -= COW_IME_COMPOSITION_BUF_BYTES; /* 0x101b3f75 sub esp, 0x100 */

    /* 0x101b3f70-0x101b3f7b, before the saves: a garbage owner pointer has to fault here, with the two
       pushes still ahead of it, exactly as the original does. The global itself is re-loaded at
       0x101b3f9c for the release's eax; reading it once here is unobservable, since that address is in
       the image and cannot fault. */
    const uint32_t owner_addr = rd32(COW_ADDR_IME_OWNER_PTR);
    const uint32_t hwnd = cow_ime_owner_hwnd(owner_addr);

    g->esp -= 4u; /* 0x101b3f7e push esi */
    wr32(g->esp, g->esi);
    g->esp -= 4u; /* 0x101b3f7f push edi */
    wr32(g->esp, g->edi);

    const uint32_t scratch = g->esp + 8u; /* 0x101b3f86 lea edx,[esp+8] - the reserved block */

    const uint32_t eax = cow_ime_query_composition(hwnd, scratch, owner_addr);

    g->edi = rd32(g->esp); /* 0x101b3faf pop edi */
    g->esp += 4u;
    g->esi = rd32(g->esp); /* 0x101b3fb0 pop esi */
    g->esp += 4u;
    g->esp += COW_IME_COMPOSITION_BUF_BYTES; /* 0x101b3fb4 add esp, 0x100 */
    g->edx = scratch; /* 0x101b3f86, and nothing writes edx after it */
    rt_return(g, eax, 0);
}
/* COW_ADAPTER END */
