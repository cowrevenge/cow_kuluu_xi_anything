/* f_0x102afc30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   returns a three-state result from a sequence of string/comparison calls, and stores 0xff, 0, or leaves a zeroed al in the supplied byte pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102afc30(Guest* g, uint32_t sp0)
{
    /*
      Original stack:
        [sp0]      = return address
        [sp0 + 4]  = stack argument (byte pointer)

      Prologue:
        push ecx          ; esp = sp0 - 4, [esp] = original ecx
        lea eax, [esp]    ; eax = address of that ecx slot
        push esi          ; esp = sp0 - 8
        push eax          ; esp = sp0 - 12, [esp] = address of ecx slot
        call FUN_102afbc0 ; param_1 = address of ecx slot
        add esp, 4        ; esp = sp0 - 8

      The callee may write through the pointer to the ecx slot.  Later:
        mov esi, [esp + 4]  ; reads that same slot.

      We need that slot to live in guest memory at the same address the
      original used, because FUN_102afbc0 receives its address.
    */

    const uint32_t ecx_slot = sp0 - 4u;
    const uint32_t arg1     = rd32(sp0 + 4u);

    /* Seed the simulated "push ecx" slot. */
    wr32(ecx_slot, g->ecx);

    /*
      Before call 0x102afbc0, original esp is sp0 - 12.
      cow_cdecl will push the one argument itself, so start it at the
      original pre-push esp.
    */
    g->esp = sp0 - 8u;
    const uint32_t first = cow_cdecl(g, COW_IMG(0x102afbc0u), 1u, ecx_slot);

    /* Original: add esp, 4 after the call. */
    g->esp = sp0 - 8u;

    /* test al, al / je 0x102afca7 */
    if ((first & 0xFFu) == 0u)
    {
        /* xor al, al; preserve upper 24 bits of eax. */
        return first & 0xFFFFFF00u;
    }

    /* mov esi, dword ptr [esp + 4] */
    const uint32_t esi = rd32(ecx_slot);

    /*
      Each FUN_1028a170 call is:
        push string
        push esi
        call FUN_1028a170
        add esp, 8

      In cdecl source order: first argument is esi, second is the string.
    */

    g->esp = sp0 - 8u;
    uint32_t r = cow_cdecl(g, COW_IMG(0x1028a170u), 2u, esi, COW_IMG(0x103bd9e0u));
    g->esp = sp0 - 8u;

    if (r == 0u)
    {
        /*
          102afc9b:
            mov edx, [esp + 0xc]   ; stack argument
            or al, 0xff
            pop esi
            mov byte [edx], 0
            pop ecx
            ret
        */
        wr8(arg1, 0u);
        return first | 0xFFu;
    }

    g->esp = sp0 - 8u;
    r = cow_cdecl(g, COW_IMG(0x1028a170u), 2u, esi, COW_IMG(0x10353b90u));
    g->esp = sp0 - 8u;

    if (r == 0u)
    {
        wr8(arg1, 0u);
        return first | 0xFFu;
    }

    g->esp = sp0 - 8u;
    r = cow_cdecl(g, COW_IMG(0x1028a170u), 2u, esi, COW_IMG(0x103bd9e8u));
    g->esp = sp0 - 8u;

    if (r == 0u)
    {
        /*
          102afc8f:
            mov ecx, [esp + 0xc]   ; stack argument
            or al, 0xff
            pop esi
            mov byte [ecx], 0xff
            pop ecx
            ret
        */
        wr8(arg1, 0xFFu);
        return first | 0xFFu;
    }

    g->esp = sp0 - 8u;
    r = cow_cdecl(g, COW_IMG(0x1028a170u), 2u, esi, COW_IMG(0x10354010u));
    g->esp = sp0 - 8u;

    if (r != 0u)
    {
        /*
          102afca7:
            xor al, al
            pop esi
            pop ecx
            ret
        */
        return r & 0xFFFFFF00u;
    }

    /* Fall through to the 0xff store path. */
    wr8(arg1, 0xFFu);
    return first | 0xFFu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102afc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102afc30(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
