/* f_101b4140 - ask the input method whether the conversion is in its bit-1 mode.

   The same three questions as its neighbours - is the context there, is the method open, what are the
   conversion flags - but this one reads the CONVERSION word back and takes a single bit of it, and when
   the method is CLOSED it does not release the context at all: it just clears its own low byte and
   returns, which is the difference that matters most for the call trace.

   Evidence
   - same owner object ......................... the first instruction is `mov eax,[0x103d3c64]` at
                                                 0x101b4140 and the window handle is [eax+0x18] at
                                                 0x101b4148; layout/addresses.h COW_ADDR_IME_OWNER_PTR
   - four callees, all stdcall imports ........... 0x101aff50 ImmGetContext; 0x102bc87c ImmGetOpenStatus;
                                                 0x102bc882 -> [0x10329094] ImmGetConversionStatus
                                                 (tools/cow/iat_slot.py 0x10329094); 0x101aff60
                                                 ImmReleaseContext - bridged in layout/calls.c
   - which flag word, which bit ............... `lea eax,[esp+4]` at 0x101b4162 is the CONVERSION out
                                                 pointer (the callee's second parameter), and the answer
                                                 is read from that same esp+4 at `mov al,[esp+4]`
                                                 0x101b417e, then `shr al,1 / and al,1` - bit 1. So the
                                                 conversion word decides here, where the sentence word
                                                 decided in f_101b40d0: the two entries read different
                                                 parameters of the same call
   - eax is release's upper bytes plus ONE bit  the open path's `mov al,[esp+4]` writes only AL; the
                                                 last full eax write was the ImmReleaseContext answer
                                                 from 0x101b4179, so eax = (release & ~0xff) | bit1
   - the CLOSED path never releases ........... `test eax,eax / je 0x101b418b` at 0x101b415a-0x101b415c
                                                 jumps straight to `xor al,al / pop esi / add esp,8 /
                                                 ret` at 0x101b418b-0x101b4191, above the block that
                                                 makes the GetConversionStatus and release calls
                                                 (0x101b415e-0x101b4179). On this path eax's upper bytes
                                                 are the ImmGetOpenStatus answer and the context is
                                                 LEAKED - a real behaviour the trace must show, so the
                                                 seed's closed state asserts exactly two calls out
   - edx per branch ............................ open: the hwnd from `mov edx,[ecx+0x18]` at
                                                 0x101b4175; closed: untouched since entry
   - one caller, no table ...................... tools/cow/callers_of.py 0x101b4140

   Proof: tools/cow/cowdiff.py 0x101b4140 - PASS on eax, edx, callee-saved, esp, guest memory writes and
   the call trace, both branches reached. cow/seeds/101b4140.json stubs the imports, pins the conversion
   word to values whose bit 1 varies (so an `and al,2` vs the true `shr/and al,1` is caught) and, on the
   closed state, leaves the release unstubbed-and-unreached so the two-call trace is what is compared.

   Name: cow_ime_conversion_bit1 (guess) - it reports one bit of ImmGetConversionStatus's conversion
   word; which mode that bit is the flag for is not established.
*/
#include "cow.h"

typedef struct CowImeBitAnswer
{
    uint32_t eax;
    uint32_t edx;
} CowImeBitAnswer;

CowImeBitAnswer cow_ime_conversion_bit1(uint32_t owner_addr, uint32_t hwnd, uint32_t frame_esp,
                                        uint32_t entry_edx)
{
    CowImeBitAnswer answer;

    const uint32_t himc = cow_call_ime_get_context_at(hwnd, COW_IMG(COW_ADDR_IME_40_GET_CONTEXT_RETURN),
                                                      owner_addr); /* 0x101b414b-0x101b4152 */
    const uint32_t status = cow_call_ime_get_open_status_at(himc, COW_IMG(COW_ADDR_IME_40_GET_OPEN_RETURN),
                                                            himc); /* 0x101b4154-0x101b415a */

    if (status == 0u) /* 0x101b415c - and the context is NOT released on this path */
    {
        answer.eax = status & ~0xffu; /* 0x101b418b: xor al,al over the ImmGetOpenStatus answer */
        answer.edx = entry_edx; /* edx untouched */
        return answer;
    }

    /* Open: ask for the flags into the two scratch words (conversion at esp+4, sentence at esp+8), then
       release. The eax the GetConversionStatus callee sees is the conversion pointer from the lea. */
    const uint32_t flags = cow_call_ime_get_conversion_status(himc, frame_esp + 4u, frame_esp + 8u,
                                                              COW_IMG(COW_ADDR_IME_40_GET_CONV_RETURN),
                                                              frame_esp + 4u);
    (void)flags; /* the callee's own return is discarded; the answer is read from the scratch word */

    const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                                           COW_IMG(COW_ADDR_IME_40_RELEASE_RETURN),
                                                           status); /* 0x101b4174-0x101b4179 */

    const uint32_t conversion = rd32(frame_esp + 4u); /* 0x101b417e mov al,[esp+4] (low byte read) */

    /* 0x101b4183-0x101b4185: `shr al,1 / and al,1` - bit 1 of the conversion word, laid over the
       release's upper bytes. A shift-then-mask, exactly as the entry does it, not a bit test. */
    answer.eax = (released & ~0xffu) | ((conversion >> 1) & 1u);
    answer.edx = hwnd; /* 0x101b4175 */
    return answer;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments. The entry's own stack effects are the two scratch words
   at 0x101b4145 and the single register save; the bridges lay the call arguments where the original's
   pushes did and the stdcall callees clean them. Note there is no release on the closed path, so the
   esp that comes back differs by branch only in what the bridges touched, never in the frame itself.
   The readability gate skips this block. */
void cow_adapter_101b4140(Guest* g)
{
    const uint32_t owner_addr = rd32(COW_ADDR_IME_OWNER_PTR); /* 0x101b4140 */

    g->esp -= 8u; /* 0x101b4145 sub esp, 8 - the two flag words */

    /* 0x101b4148: the hwnd is read before the register save, so a bad owner faults with only the sub on
       the stack, exactly as the original. */
    const uint32_t hwnd = COW_AS(CowImeWindowOwner, owner_addr)->hwnd;

    g->esp -= 4u; /* 0x101b414b push esi */
    wr32(g->esp, g->esi);

    const uint32_t frame = g->esp;
    const CowImeBitAnswer answer = cow_ime_conversion_bit1(owner_addr, hwnd, frame, g->edx);

    g->esi = rd32(g->esp); /* 0x101b4182 / 0x101b418d pop esi */
    g->esp += 4u;
    g->esp += 8u; /* 0x101b4187 / 0x101b418e add esp, 8 */
    g->edx = answer.edx;
    rt_return(g, answer.eax, 0);
}
/* COW_ADAPTER END */
