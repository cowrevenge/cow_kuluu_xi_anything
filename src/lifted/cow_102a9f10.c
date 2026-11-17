/* f_0x102a9f10 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   If the object at param_1 has a null table pointer at +0x58, initialize it via FUN_102a99a0, then zero the first [param_1+0x14] 12-byte entries of that table.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102a9f10(Guest* g, uint32_t sp0, uint32_t self)
{
    /* Emulate the original pushes so that callees / later stores can observe
       and modify the same stack locations, and so the final pops return the
       values that were originally pushed. */

    const uint32_t esi_slot = sp0 - 4u;
    const uint32_t edi_slot = sp0 - 8u;

    /* push esi */
    wr32(esi_slot, g->esi);

    /* mov esi, dword ptr [esp + 8]  (with esp = sp0 - 4, this is [sp0 + 4]) */
    g->esi = self;

    /* push edi */
    wr32(edi_slot, g->edi);

    /* xor edi, edi */
    g->edi = 0u;

    /* Current esp after the two pushes. */
    g->esp = edi_slot;

    /* cmp dword ptr [esi + 0x58], edi / jne */
    if (rd32(g->esi + 0x58u) == 0u)
    {
        /*
           push 3
           push 1
           push esi
           call 0x102a99a0
           add esp, 0xc

           cow_cdecl receives arguments in source order:
             param_1 = esi, param_2 = 1, param_3 = 3
        */
        cow_cdecl(g, COW_IMG(0x102a99a0u), 3u, g->esi, 1u, 3u);

        /* add esp, 0xc: restore esp to the position after the two saved pushes. */
        g->esp = edi_slot;
    }

    /*
       mov edx, dword ptr [esi + 0x14]
       mov eax, dword ptr [esi + 0x58]
       xor ecx, ecx
       cmp edx, edi
       jle done

       edi is zero. jle is signed.
    */
    int32_t count = (int32_t)rd32(g->esi + 0x14u);
    uint32_t base = rd32(g->esi + 0x58u);

    if (count > 0)
    {
        /* add eax, 8 */
        uint32_t p = base + 8u;
        uint32_t ecx = 0u;

        do
        {
            /* mov dword ptr [eax - 8], edi */
            wr32(p - 8u, 0u);

            /* mov dword ptr [eax - 4], edi */
            wr32(p - 4u, 0u);

            /* mov dword ptr [eax], edi */
            wr32(p, 0u);

            /* mov edx, dword ptr [esi + 0x14] */
            count = (int32_t)rd32(g->esi + 0x14u);

            /* inc ecx */
            ++ecx;

            /* add eax, 0xc */
            p += 12u;

            /* cmp ecx, edx / jl */
        } while ((int32_t)ecx < count);
    }

    /*
       pop edi
       pop esi
       ret

       The values are read from the stack slots that were pushed, not from
       saved local copies, because callees or stores may have overwritten them.
    */
    g->edi = rd32(edi_slot);
    g->esi = rd32(esi_slot);
    g->esp = sp0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a9f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    cow_fn_102a9f10(g, sp0, self);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
