/* f_101b40d0 - ask the input method whether a sentence is still pending in the game window's context.

   Same three questions as the sibling probes - is the context there, is the method open - and then,
   while it is open, the conversion/sentence flags, which the entry asks the system to write into two
   scratch words on its own stack and reads ONE of them back: the sentence word, tested as a whole.
   Whatever is in that word when the context comes back decides the answer; the answer's upper bytes
   are the word's own, and the low byte is replaced by the yes/no, so this is a byte answer with
   history. The context is released on both paths.

   Evidence
   - same owner object as f_101b41a0 ............ the first instruction is `mov eax,[0x103d3c64]` at
                                                 0x101b40d0 and the window handle comes from [eax+0x18]
                                                 at 0x101b40d8; layout/addresses.h COW_ADDR_IME_OWNER_PTR
   - four callees, all stdcall imports ........... 0x101aff50 user32!ImmGetContext; 0x102bc87c
                                                 ImmGetOpenStatus; 0x102bc882 -> [0x10329094]
                                                 ImmGetConversionStatus (tools/cow/iat_slot.py);
                                                 0x101aff60 ImmReleaseContext - all bridged in
                                                 layout/calls.c, none converted
   - the two scratch words ..................... `sub esp, 8` at 0x101b40d5 and the leas at
                                                 0x101b40ee/0x101b40f2: ImmGetConversionStatus's out
                                                 pointers are esp+4 and esp+8, the reserved pair, and
                                                 the entry reads back esp+4 after the release - the
                                                 word whose pointer was pushed FIRST at 0x101b40f6 and
                                                 so became the callee's THIRD parameter, the SENTENCE
                                                 flags. The conversion word is written and never read
   - the answer is the sentence word, low byte replaced  `test eax,eax / setne al` at
                                                 0x101b4113-0x101b4115 on the dword just loaded: the
                                                 whole word decides (not its low byte) but only AL is
                                                 rewritten, so a nonzero answer carries the word's
                                                 upper bytes. The seed's 0x0000ff00 state is what
                                                 separates "whole word decides" from "low byte decides"
   - the closed path still releases ............. 0x101b411c-0x101b4126, and answers `xor al,al` at
                                                 0x101b412b on top of the release's own answer
   - edx per branch ............................ open: the hwnd from `mov edx,[ecx+0x18]` at
                                                 0x101b4105; closed: untouched since the entry began
   - the hwnd is read BEFORE the register save .. `mov ecx,[eax+0x18]` at 0x101b40d8 precedes
                                                 `push esi` at 0x101b40db, so a bad owner pointer has to
                                                 fault with only the `sub esp,8` on the stack

   Proof: tools/cow/cowdiff.py 0x101b40d0 - PASS on eax, edx, callee-saved, esp, guest memory writes and
   the call trace (the four stubbed imports answer per state, cow/seeds/101b40d0.json), with every
   instruction site reached on both branches. The states answer ImmGetConversionStatus through the
   harness rather than its shim (whose zeroes would make every open path answer 0 untested), pin the
   sentence word to a whole-word discriminator and a low-byte-only discriminator, and give the release
   dirty upper bytes for the closed path.

   Name: cow_ime_sentence_pending (guess) - from the parameter the answer is read off; the game's own
   word for a nonzero sentence value is not established.
*/
#include "cow.h"

/* The answer as the entry leaves it: eax is the byte-level answer sitting on the word (open) or on the
   release's return (closed), and edx is per-branch. As in cow_ime_is_open, they travel together. */
typedef struct CowImeSentenceAnswer
{
    uint32_t eax;
    uint32_t edx;
} CowImeSentenceAnswer;

CowImeSentenceAnswer cow_ime_sentence_pending(uint32_t owner_addr, uint32_t hwnd,
                                              uint32_t frame_esp, uint32_t entry_edx)
{
    CowImeSentenceAnswer answer;

    const uint32_t himc = cow_call_ime_get_context_at(hwnd, COW_IMG(COW_ADDR_IME_D0_GET_CONTEXT_RETURN),
                                                      owner_addr); /* 0x101b40dc-0x101b40e2 */
    const uint32_t status = cow_call_ime_get_open_status_at(himc, COW_IMG(COW_ADDR_IME_D0_GET_OPEN_RETURN),
                                                            himc); /* 0x101b40e4-0x101b40ea */

    if (status != 0u) /* 0x101b40ec */
    {
        /* The out pointers the entry's leas name: esp+4 is the sentence word (pushed first, so it lands
           as the callee's third parameter) and esp+8 the conversion word. The eax the callee sees is the
           conversion pointer, from the lea at 0x101b40f2. */
        cow_call_ime_get_conversion_status(himc, frame_esp + 8u, frame_esp + 4u,
                                           COW_IMG(COW_ADDR_IME_D0_GET_CONV_RETURN), frame_esp + 8u);

        cow_call_ime_release_context(hwnd, himc, COW_IMG(COW_ADDR_IME_D0_RELEASE_RETURN),
                                     status); /* 0x101b4104-0x101b4109; the open answer ignores it */

        const uint32_t sentence = rd32(frame_esp + 4u); /* 0x101b410e mov eax,[esp+4] */

        /* 0x101b4113-0x101b4115: `test eax,eax` on the WHOLE word, `setne al` on the byte - the word's
           upper bytes stay in eax. Written as a branch because the original's decision is a test of a
           whole value, not of its low byte. */
        answer.eax = (sentence & ~0xffu) | ((sentence != 0u) ? 1u : 0u);
        answer.edx = hwnd; /* 0x101b4105 */
        return answer;
    }

    const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                                           COW_IMG(COW_ADDR_IME_D0_RELEASE_RETURN_CLOSED),
                                                           owner_addr); /* 0x101b4121-0x101b4126 */
    answer.eax = released & ~0xffu; /* 0x101b412b: xor al,al - the release's upper bytes answer instead */
    answer.edx = entry_edx; /* edx is untouched on this path */
    return answer;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments. The entry's own stack effects are the two scratch words
   at 0x101b40d5 and the single register save; the argument words every call needs are laid down by the
   bridges at the addresses the original's pushes used, and the stdcall callees (or their stubs) take
   them back, so esp is exactly here where each call site left it. The readability gate skips this
   block. */
void cow_adapter_101b40d0(Guest* g)
{
    const uint32_t owner_addr = rd32(COW_ADDR_IME_OWNER_PTR); /* 0x101b40d0 */

    g->esp -= 8u; /* 0x101b40d5 sub esp, 8 - the two flag words */

    /* 0x101b40d8: the window handle is read BEFORE the register save, so a garbage owner faults here -
       with only the sub on the stack - exactly as the original does. Reading it after the push would put
       the fault one word lower with an extra write in the trace. */
    const uint32_t hwnd = COW_AS(CowImeWindowOwner, owner_addr)->hwnd;

    g->esp -= 4u; /* 0x101b40db push esi */
    wr32(g->esp, g->esi);

    const uint32_t frame = g->esp; /* the leas and the read-back all speak from here */
    const CowImeSentenceAnswer answer = cow_ime_sentence_pending(owner_addr, hwnd, frame, g->edx);

    g->esi = rd32(g->esp); /* 0x101b4112 / 0x101b412d pop esi */
    g->esp += 4u;
    g->esp += 8u; /* 0x101b4118 / 0x101b412e add esp, 8 */
    g->edx = answer.edx;
    rt_return(g, answer.eax, 0);
}
/* COW_ADAPTER END */
