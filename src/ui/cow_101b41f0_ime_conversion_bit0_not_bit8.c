/* f_101b41f0 - ask the input method whether the conversion word carries bit 0 without bit 8.

   The fourth IME probe on the owner object. Like its neighbours it opens a context, asks whether the
   method is open and, if so, reads the two ImmGetConversionStatus words back from its own stack - but
   this one releases the context on BOTH paths and answers a two-bit condition: bit 0 of the conversion
   word set and bit 8 clear. The whole conversion dword, not just its low byte, feeds the answer.

   Evidence
   - same owner object ......................... `mov eax,[0x103d3c64]` at 0x101b41f0; hwnd at [eax+0x18]
                                                 0x101b41f8; layout/addresses.h COW_ADDR_IME_OWNER_PTR
   - four callees, all stdcall imports ........... 0x101aff50 ImmGetContext; 0x102bc87c ImmGetOpenStatus;
                                                 0x102bc882 -> [0x10329094] ImmGetConversionStatus
                                                 (tools/cow/iat_slot.py 0x10329094); 0x101aff60
                                                 ImmReleaseContext - bridged in layout/calls.c
   - which word, which bits .................... `lea eax,[esp+4]` 0x101b4212 is the CONVERSION out
                                                 pointer; the answer loads that whole dword with
                                                 `mov eax,[esp+4]` 0x101b422e, then `test al,1` (bit 0
                                                 must be SET - je jumps away if clear) and `test ah,1`
                                                 (bit 8, at 0x101b4236, in the SAME dword's second byte
                                                 - jne jumps away if set). Only if bit 0 is set AND bit 8
                                                 clear does `mov al,1` run
   - eax carries the CONVERSION word's upper bytes  `mov eax,[esp+4]` at 0x101b422e overwrites all of eax
                                                 with the conversion dword; then only AL is rewritten
                                                 (to 1, or to 0 by the shared `xor al,al` at 0x101b4251),
                                                 so the answer's upper bytes are the word's own, NOT the
                                                 release's. This is the difference from f_101b4140, whose
                                                 upper bytes are the release's - the seeds give the two
                                                 dirty, different values so they cannot be confused
   - BOTH paths release, from different sites .... open: call at 0x101b4229 (returns to 0x101b422e);
                                                 closed: call at 0x101b424c (returns to 0x101b4251).
                                                 So unlike f_101b4140, the closed path DOES release -
                                                 but it never makes the GetConversionStatus call, so its
                                                 trace is three calls, and the shared `xor al,al` at
                                                 0x101b4251 lands on the release answer there, on the
                                                 conversion dword on the open-but-failed path
   - edx per branch ............................ open: hwnd from `mov edx,[ecx+0x18]` at 0x101b4225;
                                                 closed: untouched since entry (no edx write in
                                                 0x101b4242-0x101b424c)
   - one caller, no table ...................... tools/cow/callers_of.py 0x101b41f0

   Proof: tools/cow/cowdiff.py 0x101b41f0 - PASS on eax, edx, callee-saved, esp, guest memory writes and
   the call trace, both branches reached. cow/seeds/101b41f0.json pins the conversion word to the four
   bit combinations (bit0 set/clear x bit8 set/clear) so each of the two jumps is exercised and a
   conversion that tested the wrong bit, or read only al, is caught, and answers the release and open
   status with dirty upper bytes to pin down that the SUCCESS path carries the conversion word's bytes
   while the CLOSED path carries the release's.

   Name: cow_ime_conversion_bit0_not_bit8 (guess) - it reports exactly that two-bit condition on
   ImmGetConversionStatus's conversion word; the modes those two bits name are not established.
*/
#include "cow.h"

typedef struct CowImeTwoBitAnswer
{
    uint32_t eax;
    uint32_t edx;
} CowImeTwoBitAnswer;

CowImeTwoBitAnswer cow_ime_conversion_bit0_not_bit8(uint32_t owner_addr, uint32_t hwnd,
                                                    uint32_t frame_esp, uint32_t entry_edx)
{
    CowImeTwoBitAnswer answer;

    const uint32_t himc = cow_call_ime_get_context_at(hwnd, COW_IMG(COW_ADDR_IME_F0_GET_CONTEXT_RETURN),
                                                      owner_addr); /* 0x101b41fb-0x101b4202 */
    const uint32_t status = cow_call_ime_get_open_status_at(himc, COW_IMG(COW_ADDR_IME_F0_GET_OPEN_RETURN),
                                                            himc); /* 0x101b4204-0x101b420a */

    if (status == 0u) /* 0x101b420c */
    {
        /* Closed: release (0x101b4242-0x101b424c), and the shared `xor al,al` at 0x101b4251 lands on
           the release answer. No conversion call at all on this path. */
        const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                            COW_IMG(COW_ADDR_IME_F0_RELEASE_RETURN_CLOSED), status);
        answer.eax = released & ~0xffu;
        answer.edx = entry_edx; /* edx untouched */
        return answer;
    }

    /* Open: flags into the two scratch words (conversion at esp+4, sentence at esp+8). */
    const uint32_t flags = cow_call_ime_get_conversion_status(himc, frame_esp + 4u, frame_esp + 8u,
                                                              COW_IMG(COW_ADDR_IME_F0_GET_CONV_RETURN),
                                                              frame_esp + 4u);
    (void)flags;

    const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                                           COW_IMG(COW_ADDR_IME_F0_RELEASE_RETURN_OPEN),
                                                           status); /* 0x101b4224-0x101b4229 */
    (void)released; /* the open answer reads the conversion word, not the release */

    const uint32_t conversion = rd32(frame_esp + 4u); /* 0x101b422e mov eax,[esp+4] - the whole dword */

    /* 0x101b4232-0x101b423b: `test al,1` / `test ah,1`. Only when bit 0 is set AND bit 8 clear does al
       become 1; either failing test falls to the shared `xor al,al`. The upper bytes stay the
       conversion word's either way. Written as two tests because that is the entry's two branches. */
    const uint32_t bit_ok = ((conversion & 1u) != 0u) && ((conversion & 0x100u) == 0u);
    answer.eax = (conversion & ~0xffu) | (bit_ok ? 1u : 0u);
    answer.edx = hwnd; /* 0x101b4225 */
    return answer;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments. The entry's own stack effects are the two scratch words
   at 0x101b41f5 and the single register save; the bridges lay arguments where the original's pushes did
   and the stdcall callees clean them. Both branches release and both return through a pop-esi / add-esp-8,
   so the frame closes the same way on every path. The readability gate skips this block. */
void cow_adapter_101b41f0(Guest* g)
{
    const uint32_t owner_addr = rd32(COW_ADDR_IME_OWNER_PTR); /* 0x101b41f0 */

    g->esp -= 8u; /* 0x101b41f5 sub esp, 8 - the two flag words */

    /* 0x101b41f8: the hwnd is read before the register save, so a bad owner faults with only the sub on
       the stack, exactly as the original. */
    const uint32_t hwnd = COW_AS(CowImeWindowOwner, owner_addr)->hwnd;

    g->esp -= 4u; /* 0x101b41fb push esi */
    wr32(g->esp, g->esi);

    const uint32_t frame = g->esp;
    const CowImeTwoBitAnswer answer = cow_ime_conversion_bit0_not_bit8(owner_addr, hwnd, frame, g->edx);

    g->esi = rd32(g->esp); /* 0x101b423d / 0x101b4253 pop esi */
    g->esp += 4u;
    g->esp += 8u; /* 0x101b423e / 0x101b4254 add esp, 8 */
    g->edx = answer.edx;
    rt_return(g, answer.eax, 0);
}
/* COW_ADAPTER END */
