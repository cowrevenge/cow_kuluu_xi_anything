/* f_0x102bcc5f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Creates/initializes a PNG/zlib context object, checks version strings, reports errors, and returns the context pointer or 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_102bcc5f(Guest* g,
                         uint32_t param_1,
                         uint32_t param_2,
                         uint32_t param_3,
                         uint32_t param_4,
                         uint32_t param_5,
                         uint32_t param_6,
                         uint32_t param_7)
{
    const uint32_t sp0 = g->esp;

    uint32_t esi = cow_cdecl(g, COW_IMG(0x102c4359u), 3, 1u, param_6, param_5);
    if (esi == 0u)
    {
        return 0u;
    }

    cow_cdecl(g, COW_IMG(0x102c3c60u), 1, esi);
    uint32_t eax = cow_cdecl(g, COW_IMG(0x10316224u), 2, esi, 0u);

    if (eax != 0u)
    {
        uint32_t edi = esi;
        uint32_t esi_ac = edi + 0xacu;
        uint32_t val_ac = rd32(esi_ac);

        cow_cdecl(g, COW_IMG(0x102c447cu), 2, edi, val_ac);
        wr32(esi_ac, 0u);
        cow_cdecl(g, COW_IMG(0x102c43c9u), 3, edi, param_7, param_5);

        return 0u;
    }

    cow_cdecl(g, COW_IMG(0x102c450eu), 4, esi, param_5, param_6, param_7);
    cow_cdecl(g, COW_IMG(0x102bcc09u), 4, esi, param_2, param_3, param_4);

    /*
       Original loop:
         mov ecx, [ebp+8]
         mov edi, 0x10342de8
         mov [ebp-4], ecx
         sub [ebp-4], edi
         mov eax, edi
         mov edx, 0x20000
         mov ebx, [ebp-4]
       then uses the low byte of ebx repeatedly:
         mov bl, [ebx+eax]
         ...
         mov bl, [eax]
         inc eax
         test bl, bl
         jne loop

       The low-byte writes to ebx are visible to the next address computation,
       so this must be emulated exactly.
    */
    const uint32_t base = COW_IMG(0x10342de8u);
    uint32_t ecx = param_1;
    uint32_t diff = (uint32_t)((int32_t)ecx - (int32_t)base);
    uint32_t eax_loop = base;
    uint32_t ebx = diff;
    const uint32_t edx = 0x20000u;

    for (;;)
    {
        uint32_t addr = (uint32_t)((int32_t)ebx + (int32_t)eax_loop);
        uint8_t bl = rd8(addr);
        bl = (uint8_t)(bl & 0xffu);

        if (bl != rd8(eax_loop))
        {
            wr32(esi + 0x6cu, rd32(esi + 0x6cu) | edx);
        }

        uint8_t cur = rd8(eax_loop);
        ebx = (ebx & 0xFFFFFF00u) | (uint32_t)cur;
        eax_loop++;

        if (cur == 0u)
        {
            break;
        }
    }

    if ((rd32(esi + 0x6cu) & edx) != 0u)
    {
        const uint32_t buf = cow_frame(g, sp0, 0x5cu); /* [ebp - 0x58] */

        int goto_lab_84 = 0;
        int goto_lab_39 = 0;

        if (ecx == 0u)
        {
            goto_lab_39 = 0;
        }
        else
        {
            uint8_t al = rd8(ecx);
            uint8_t base0 = rd8(base);

            if (al != base0)
            {
                goto_lab_39 = 1;
            }
            else
            {
                if (al != 0x31u)
                {
                    goto_lab_39 = 0;
                }
                else
                {
                    uint8_t dl = rd8(ecx + 2u);
                    uint8_t base2 = rd8(base + 2u);

                    if (dl != base2)
                    {
                        goto_lab_39 = 1;
                    }
                    else
                    {
                        if (al != 0x30u)
                        {
                            goto_lab_84 = 1;
                        }
                        else
                        {
                            int8_t v = (int8_t)rd8(ecx + 2u);
                            if (v >= (int8_t)0x39)
                            {
                                goto_lab_84 = 1;
                            }
                            else
                            {
                                goto_lab_39 = 1;
                            }
                        }
                    }
                }
            }
        }

        if (goto_lab_84)
        {
            /* Fall through to LAB_102bcd84. */
        }
        else
        {
            if (ecx != 0u)
            {
                cow_cdecl(g, COW_IMG(0x10312031u), 3, buf, COW_IMG(0x103c7cc4u), ecx);
                cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, buf);
            }

            cow_cdecl(g, COW_IMG(0x10312031u), 3, buf, COW_IMG(0x103c7c8cu), base);
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, esi, buf);
            wr32(esi + 0x6cu, 0u);
            cow_cdecl(g, COW_IMG(0x102bc97eu), 2, esi, COW_IMG(0x103c7c54u));
        }
    }

    /* LAB_102bcd84 */
    wr32(esi + 0xb0u, 0x2000u);

    uint32_t result_fc = cow_cdecl(g, COW_IMG(0x102c43fcu), 2, esi, 0x2000u);
    wr32(esi + 0xacu, result_fc);

    wr32(esi + 0x94u, COW_IMG(0x102c35cdu));
    wr32(esi + 0x98u, COW_IMG(0x102c3642u));
    wr32(esi + 0x9cu, esi);

    uint32_t eax_e87 = cow_cdecl(g, COW_IMG(0x102c3e87u), 3, esi + 0x74u, COW_IMG(0x103c7c4cu), 0x38u);

    if ((int32_t)eax_e87 == -6)
    {
        cow_cdecl(g, COW_IMG(0x102bc97eu), 2, esi, COW_IMG(0x103c7c10u));
    }
    else if ((int32_t)eax_e87 == -4 || (int32_t)eax_e87 == -2)
    {
        cow_cdecl(g, COW_IMG(0x102bc97eu), 2, esi, COW_IMG(0x103c7c24u));
    }
    else if ((int32_t)eax_e87 != 0)
    {
        cow_cdecl(g, COW_IMG(0x102bc97eu), 2, esi, COW_IMG(0x103c7c38u));
    }

    /* LAB_102bcdf7 */
    wr32(esi + 0x80u, rd32(esi + 0xacu));
    wr32(esi + 0x84u, rd32(esi + 0xb0u));

    cow_cdecl(g, COW_IMG(0x102c3cd4u), 3, esi, 0u, 0u);

    eax = cow_cdecl(g, COW_IMG(0x10316224u), 2, esi, 0u);
    if (eax == 0u)
    {
        return esi;
    }

    return cow_cdecl(g, COW_IMG(0x10317251u), 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bcc5f(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t ebx0 = g->ebx;
    const uint32_t esi0 = g->esi;
    const uint32_t edi0 = g->edi;
    const uint32_t ebp0 = g->ebp;

    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 12u);
    const uint32_t param_4 = rd32(sp0 + 16u);
    const uint32_t param_5 = rd32(sp0 + 20u);
    const uint32_t param_6 = rd32(sp0 + 24u);
    const uint32_t param_7 = rd32(sp0 + 28u);

    const uint32_t result = cow_fn_102bcc5f(g,
                                           param_1,
                                           param_2,
                                           param_3,
                                           param_4,
                                           param_5,
                                           param_6,
                                           param_7);

    g->esp = sp0;

    /*
       The original saves/restores ebx, esi, edi, and ebp on every path except
       the tail-jump path.  On the tail-jump path the callee-saved registers are
       whatever the tail target leaves behind; however, in the guest model the
       comparison is made after cow_adapter returns.  The original's non-tail
       paths restore the caller's values, and the tail target is reached through
       cow_cdecl, which must preserve callee-saved registers for its own ABI.
       Therefore restore the caller's callee-saved registers here.
    */
    g->ebx = ebx0;
    g->esi = esi0;
    g->edi = edi0;
    g->ebp = ebp0;

    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
