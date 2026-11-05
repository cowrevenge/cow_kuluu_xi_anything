/* f_101b41a0 - ask Windows whether the input method is currently open for the game's window.

   Take the window handle off the IME owner object, ask the system for its input-method context, ask that
   context whether composition is open, always hand the context back, and answer the question. The
   release happens on both paths: the entry never leaks the context whichever way the answer goes.

   Evidence
   - the owner is a global, not an argument ... the first instruction is `mov eax,[0x103d3c64]` at
                                               0x101b41a0; layout/addresses.h COW_ADDR_IME_OWNER_PTR
   - +0x18 is the window handle ............... loaded at 0x101b41a6 and passed as the single argument of
                                               ImmGetContext at 0x101b41aa, whose Win32 argument is a
                                               HWND; layout/structs.h CowImeWindowOwner
   - the three callees are Win32 IME imports,
     each reached through the entry's own thunk  0x101aff50 -> 0x102bc84c -> [0x10329070]
                                               user32!ImmGetContext ; 0x102bc87c -> [0x10329090]
                                               user32!ImmGetOpenStatus ; 0x101aff60 -> 0x102bc852 ->
                                               [0x10329074] user32!ImmReleaseContext
                                               (python tools/cow/iat_slot.py on each slot). All three are
                                               stdcall, which is why the entry contains no `add esp` and
                                               its single `pop esi` is enough to unwind the save block
   - the answer is ImmGetOpenStatus's, tested once  `test eax,eax / je` at 0x101b41b7-0x101b41ba; there is
                                               no second test and nothing else decides the branch
   - eax out is a byte-level answer ............ `mov al,1` at 0x101b41cb and `xor al,al` at 0x101b41de
                                               each write AL alone, and the last thing to have filled
                                               eax's upper bytes is the ImmReleaseContext answer - so the
                                               top three bytes are the release's, not zeros. cowdiff
                                               compares all of eax, so this masks rather than tidies
   - edx out DIFFERS PER BRANCH ................ open: `mov edx,[0x103d3c64]` at 0x101b41bc leaves the
                                               owner address; closed: `mov edx,[ecx+0x18]` at 0x101b41d5
                                               leaves the window handle. Both are loaded from the same
                                               global by different instructions, which is why the two
                                               paths cannot share a single edx
   - the eax handed to the release also differs  open: `mov eax,[edx+0x18]` at 0x101b41c2 put the hwnd in
                                               eax before the call; closed: eax is still the
                                               ImmGetOpenStatus answer, untouched since 0x101b41b7
   - the release is called from two sites ..... 0x101b41c5-0x101b41c6 and 0x101b41d8-0x101b41d9, so the
                                               return address the callee pops is 0x101b41cb on one path
                                               and 0x101b41de on the other
   - esi is saved once and restored on both paths  `push esi` 0x101b41a5, `pop esi` 0x101b41cd / 0x101b41e0
   - two callers, no table ..................... 0x101b3d2b and 0x101b3e2b
                                               (tools/cow/callers_of.py 0x101b41a0)

   Proof: tools/cow/cowdiff.py 0x101b41a0 - PASS on eax, edx, callee-saved registers, esp, guest memory
   writes and the call trace (target, arguments, order), with every instruction site reached on both
   branches. cow/seeds/101b41a0.json answers ImmGetOpenStatus both ways so the branch is chosen by the
   test rather than by luck, and pins the owner object so the hwnd the calls must carry is known.

   Name: cow_ime_is_open (guess) - the import names carry the meaning of the calls; that this is asked
   about THE game window (a single global owner) is what the code shows, and who asks is not established.
*/
#include "cow.h"

/* What the probe answers, as the entry leaves it: eax is the byte-level answer sitting on top of the
   release's return, and edx is whatever that branch's own load put there. Both are per-path facts, so
   they are returned together rather than guessed at by the adapter. */
typedef struct CowImeProbe
{
    uint32_t eax;
    uint32_t edx;
} CowImeProbe;

CowImeProbe cow_ime_is_open(uint32_t owner_addr)
{
    CowImeWindowOwner* owner = COW_AS(CowImeWindowOwner, owner_addr); /* 0x101b41a0 */
    const uint32_t hwnd = owner->hwnd; /* 0x101b41a6 */
    CowImeProbe probe;

    const uint32_t himc = cow_call_ime_get_context(hwnd); /* 0x101b41a9-0x101b41aa */
    const uint32_t status = cow_call_ime_get_open_status(himc); /* 0x101b41b1-0x101b41b2 */

    if (status != 0u) /* 0x101b41b7-0x101b41ba */
    {
        /* eax is the hwnd by now (0x101b41c2), and edx stays the owner (0x101b41bc) */
        const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                            COW_IMG(COW_ADDR_IME_RELEASE_RETURN_OPEN), hwnd);
        probe.eax = (released & ~0xffu) | 1u; /* 0x101b41cb: mov al,1 */
        probe.edx = owner_addr; /* 0x101b41bc */
        return probe;
    }

    /* eax is still the ImmGetOpenStatus answer, and edx is the hwnd (0x101b41d5) */
    const uint32_t released = cow_call_ime_release_context(hwnd, himc,
                                        COW_IMG(COW_ADDR_IME_RELEASE_RETURN_CLOSED), status);
    probe.eax = released & ~0xffu; /* 0x101b41de: xor al,al */
    probe.edx = hwnd; /* 0x101b41d5 */
    return probe;
}

/* COW_ADAPTER BEGIN - cdecl with no arguments: the entry takes nothing from its caller, and every
   argument it passes downwards belongs to a stdcall callee that pops its own. The save block is the
   entry's only stack effect of its own - `push esi` at 0x101b41a5 and the matching `pop esi` at
   0x101b41cd / 0x101b41e0 - so it is laid down here, above which the bridges write the argument words
   the original's pushes wrote, at the same addresses. esp is put back onto the saved esi before the
   pop so the two branches cannot disagree about it. The readability gate skips this block. */
void cow_adapter_101b41a0(Guest* g)
{
    g->esp -= 4u; /* 0x101b41a5 push esi - the entry's only stack effect of its own */
    wr32(g->esp, g->esi);

    const uint32_t owner_addr = rd32(COW_ADDR_IME_OWNER_PTR); /* 0x101b41a0 */
    const CowImeProbe probe = cow_ime_is_open(owner_addr);

    /* No esp reset here: every callee on this path is stdcall (and every stub pops what its real `ret N`
       would have), and the bridges restore esp themselves, so by this point the stack is back exactly
       where `push esi` left it - one word below the entry. Restoring to the entry's own esp instead
       double-counted that word and left esp four bytes too high, which is what cowdiff caught. */
    g->esi = rd32(g->esp); /* 0x101b41cd / 0x101b41e0 pop esi */
    g->esp += 4u;
    g->edx = probe.edx; /* per-path: the owner on the open branch, the hwnd on the closed one */
    rt_return(g, probe.eax, 0);
}
/* COW_ADAPTER END */
