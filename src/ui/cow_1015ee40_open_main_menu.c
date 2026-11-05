/* f_1015ee40 - it puts the main menu window on screen, but only when nothing else holds the screen

   The original, line by line. Every row is the disassembly tools/cow/disasm.py prints, and the bytes
   are the 85 bytes at 0x1015ee40 in our own image (python tools/cow/peek_bytes.py 0x1015ee40 --len 85
   -> a1 6c 87 57 10 66 83 78 68 00 75 46 ... b0 01 c3 32 c0 c3), so nothing here is paraphrase.

     1015ee40  a1 6c875710   mov  eax, [0x1057876c]   the gate object; a global, not a parameter.
     1015ee45  66 83 78 68 00 cmp  word [eax+0x68], 0  gate 1: nonzero -> abort  (0x1015ee4a jne)
     1015ee4a  75 46         jne  0x1015ee92
     1015ee4c  8a 48 59      mov  cl,  [eax+0x59]      gate 2: nonzero -> abort  (0x1015ee51 jne).
     1015ee4f  84 c9         test cl, cl                                         What the byte means is
     1015ee51  75 3f         jne  0x1015ee92                                     UNKNOWN; what is proved
                                                                                 is that 0x1012be1e and
                                                                                 0x1014179d write 1 here
                                                                                 on two like objects.
     1015ee53  8b 88 c4000000 mov ecx, [eax+0xc4]      gate 3: nonzero -> abort  (0x1015ee5b jne)
     1015ee59  85 c9         test ecx, ecx
     1015ee5b  75 35         jne  0x1015ee92
     1015ee5d  8b 0d 402d6610 mov ecx, [0x10662d40]    the presentation-mode object
     1015ee63  e8 286e0500   call 0x101b5c90            gate 4: its body (generated/all/funcs_030.c
     1015ee68  84 c0         test al, al                                          :50342) is exactly
     1015ee6a  75 26         jne  0x1015ee92                                        "return [this+0xf108]
                                                                                    == 4 or == 5", so
                                                                                    this is mode 4 or 5
     1015ee6c  a1 d4316610   mov  eax, [0x106631d4]     the second gate object, which may be absent
     1015ee71  85 c0         test eax, eax
     1015ee73  74 07         je   0x1015ee7c
     1015ee75  66 83 78 1c 00 cmp word [eax+0x1c], 0    gate 5: present and nonzero -> abort
     1015ee7a  75 16         jne  0x1015ee92
     1015ee7c  6a 00         push 0                      arg3 - meaning UNKNOWN
     1015ee7e  6a 01         push 1                      arg2 - meaning UNKNOWN
     1015ee80  68 4c1b3710   push 0x10371b4c             arg1 - the DAT category+name record. Its bytes
                                                                          are "menu    menuwind" (peek
                                                                          _bytes.py; layout: host/datui.h
                                                                          :7 "u8 flag, category[8]
                                                                          ("menu    "), name[8]")
     1015ee85  b9 38186210   mov  ecx, 0x10621838        this = the UI manager the window call is made on
     1015ee8a  e8 c1f4ffff   call 0x1015e350             xi-on-anything host/modern.c:65 names this exact
                                                                          callee MENU_OPEN, "thiscall mgr
                                                                          (const char* name, bool, bool)",
                                                                          and calls it as {name, 1, 0}
     1015ee8f  b0 01         mov  al, 1                  OPENED. al is forced to 1; the top three bytes
     1015ee91  c3            ret                                    stay whatever the window callee left
     1015ee92  32 c0         xor  al, al                  NOT opened. al is cleared; the top three bytes
     1015ee94  c3            ret                                    stay whatever the last load left.

   The three pushes are cleaned up by the callee, not here: there is no `add esp, 0xc` between the call
   at 0x1015ee8a and the ret at 0x1015ee91, and f_1015e350's own tails are `esp += 16` (return address +
   the three arguments). Our bridge has to mirror that, which is what guest_thiscall_at is for.

   Who calls it (tools/cow/callers_of.py 0x1015ee40 -> 3 sites, all of them `mov ecx, 0x10621838` or a
   `this` already holding it, then `call 0x1015ee40`): 0x1012BE34, 0x101417B5 and 0x1015DD41. None of
   them looks at the answer - 0x1012BE39 is `pop esi / ret 8`, 0x101417BA is `ret 4`, 0x1015DD46 is
   `xor eax, eax` - so the al convention is read off this function's own two tails, not off a caller,
   and that is also why the conversion keeps the top three bytes instead of inventing clean 0/1s:
   cowdiff compares all of eax, and a "tidied" return would be a difference from the game.

   Why this function is the MAIN MENU and not merely "a window": the record it names is `menuwind`,
   which our own tool surface (tools/xi_mcp.py:260, the vendored xi-on-anything MCP tool) documents as
   the name of the open menu: "the open menu's name (e.g. "loby2win", "menuwind")", and the sibling site
   0x1014E7D7 pushes the same record through the same MENU_OPEN callee on the same manager.

   Name: cow_ui_open_main_menu (guess, evidenced above). Everything labelled UNKNOWN above stays
   unknown; docs/cow/REFERENCE.md has the proof for each name, field and constant.
*/
#include "cow.h"

/* The register contract, straight off the original's own flow (cowdiff compares eax, edx, the
   callee-saved registers, esp and the touched memory, so this is checked, not asserted):
   the first instruction `mov eax,[COW_ADDR_UI_IDLE_GATE_PTR]` overwrites the caller's eax, so no tail
   ever returns what the caller handed in.
     gates 1-3: eax is the gate object's address (loaded at 0x1015ee40, untouched since), al cleared.
     gate 4:    eax is the mode query's answer (1 at 0x101b5ca3, or 0 at 0x101b5ca0), al cleared.
     gate 5:    eax is the second gate object's address (loaded at 0x1015ee6c), al cleared.
     opened:    eax is the window callee's eax with al forced to 1 (0x1015ee8f). */
uint32_t cow_ui_open_main_menu(void)
{
    const uint32_t gate_addr = rd32(COW_ADDR_UI_IDLE_GATE_PTR);
    const CowUiIdleGate* gate = COW_AS(CowUiIdleGate, gate_addr);
    if (gate->word_68 != 0u)
    {
        return gate_addr & ~0xffu; /* gate 1 (0x1015ee45) */
    }
    if (gate->byte_59 != 0u)
    {
        return gate_addr & ~0xffu; /* gate 2 (0x1015ee4c) */
    }
    if (gate->dword_c4 != 0u)
    {
        return gate_addr & ~0xffu; /* gate 3 (0x1015ee53) */
    }
    const uint32_t mode = cow_call_ui_mode_is_4_or_5(rd32(COW_ADDR_UI_MODE_OBJECT_PTR));
    if ((mode & 0xffu) != 0u)
    {
        return mode & ~0xffu; /* gate 4 (0x1015ee63/0x1015ee68) - 0x101b5c90 answers 1 for mode 4 or 5 */
    }
    const uint32_t second_addr = rd32(COW_ADDR_UI_SECOND_GATE_PTR);
    if (second_addr != 0u)
    {
        const CowUiSecondGate* second = COW_AS(CowUiSecondGate, second_addr);
        if (second->word_1c != 0u)
        {
            return second_addr & ~0xffu; /* gate 5 (0x1015ee75) */
        }
    }
    /* Opened: the original keeps the callee's eax and only forces al to 1 (0x1015ee8f). */
    const uint32_t shown = cow_call_ui_show_window(COW_ADDR_UI_MANAGER, COW_ADDR_MENUWIND_RESOURCE,
                                                   1u, 0u);
    return (shown & ~0xffu) | 1u;
}

/* COW_ADAPTER BEGIN - thiscall: two of the three callers load ecx with the UI manager (0x1012BE2F and
   0x101417B0 both `mov ecx, 0x10621838`) and the original never reads ecx anyway - the first thing it
   does is `mov eax,[...]`, and ecx is reloaded at 0x1015ee53. Its `ret` pops 0 bytes above the return
   address (0x1015ee91/0x1015ee94 are bare c3); the three pushes belong to the window callee, which
   pops them itself. The readability gate skips this block. */
void cow_adapter_1015ee40(Guest* g)
{
    g->eax = cow_ui_open_main_menu();
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
