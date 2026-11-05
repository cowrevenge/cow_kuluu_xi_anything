/* f_1015ee40 - put the main menu window on screen, but only when nothing else holds the screen.

   Five gates, then one window call. Any gate that fails answers "not opened"; passing them all opens
   the window and answers "opened".

   Evidence
   - the gate object is a global, not a      the first instruction loads [0x1057876c]; no parameter is
     parameter                                  read before the gates.
   - gate 1: word [gate+0x68] != 0 refuses    0x1015ee4c cmp / 0x1015ee4a jne
   - gate 2: byte [gate+0x59] != 0 refuses    0x1015ee4c-0x1015ee51. What the byte MEANS is unknown;
                                                 what is proved is that 0x1012be1e and 0x1014179d write
                                                 1 to it on two like objects.
   - gate 3: [gate+0xc4] != 0 refuses         0x1015ee53-0x1015ee5b
   - gate 4: presentation mode is 4 or 5 ..... 0x1015ee5d loads [0x10662d40], 0x1015ee63 calls
                                                 0x101b5c90, whose body (generated/all/funcs_030.c:50342)
                                                 is exactly `return [this+0xf108] == 4 || == 5`
   - gate 5: a second, optional gate object    0x1015ee6c loads [0x106631d4]; absent is allowed, present
                                                 and [obj+0x1c] != 0 refuses (0x1015ee75-0x1015ee7a)
   - the window call, with its arguments ...... 0x1015ee7c/7e/80 push 0, 1 and 0x10371b4c, 0x1015ee85 sets
                                                 ecx = 0x10621838 (the UI manager), 0x1015ee8a calls
                                                 0x1015e350. The pushed record's bytes are
                                                 "menu    menuwind" (tools/cow/peek_bytes.py; the shape
                                                 is host/datui.h:7 "u8 flag, category[8], name[8]").
                                                 arg1's meaning beyond the name is unknown.
   - that callee is MENU_OPEN ................ vendor/xi-on-anything host/modern.c:65 names the same
                                                 callee and calls it as (const char* name, bool, bool)
   - the callee pops the three arguments ...... no `add esp, 0xc` between 0x1015ee8a and the ret at
                                                 0x1015ee91, and 0x1015e350's own tails do esp += 16.
                                                 guest_thiscall_at is what mirrors that here.
   - al = 1 opened / al = 0 refused, and the   0x1015ee8f `mov al,1` + 0x1015ee91 ret, and 0x1015ee92
     top three bytes of eax are left alone       `xor al,al` + 0x1015ee94 ret. The three upper bytes are
                                                 deliberately NOT tidied to 0/1: cowdiff compares all of
                                                 eax, so tidying would be a difference from the game.
   - three callers, none of which reads the    tools/cow/callers_of.py 0x1015ee40 -> 0x1012BE34,
     answer                                      0x101417B5, 0x1015DD41 (each sets ecx to the same UI
                                                 manager first). Their own tails are `pop esi/ret 8`,
                                                 `ret 4` and `xor eax,eax`, so the al convention comes
                                                 from this function's two tails, not from a caller.
   - it is the MAIN MENU, not merely a window   the record is named `menuwind`; tools/xi_mcp.py:260 (the
                                                 vendored xi-on-anything MCP tool) documents that name as
                                                 "the open menu's name (e.g. "loby2win", "menuwind")",
                                                 and 0x1014E7D7 pushes the same record through the same
                                                 callee on the same manager.

   Proof: tools/cow/cowdiff.py 0x1015ee40 - 406 states, 28/28 instruction sites reached, including the
   open tail (0x1015ee8f/0x1015ee91), because cow/seeds/1015ee40.json answers the window callee with a
   seeded stub instead of letting both sides fault inside it. docs/cow/REFERENCE.md 5.3 P4/P5.

   Name: cow_ui_open_main_menu (guess, evidenced above). Everything labelled unknown stays unknown.
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
