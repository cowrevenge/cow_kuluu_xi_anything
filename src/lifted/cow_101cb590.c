/* f_0x101cb590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101cb590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        if (rd32(eax + 8u) != 0u)
        {
            wr32(sp0 - 0x3cu, sp0 - 0x2cu);
            g->edx = in_edx;
            g->esp = sp0 - 0x38u;
            cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(eax + 8u), g->edx, 0, 1, sp0 - 0x2cu);
            t1 = g->edx;
            if ((int16_t)arg1 >= 0)
            {
                edx = t1;
                edi = arg1;
            }
            else
            {
                edx = t1;
                edi = 0u;
            }
            if ((int16_t)arg2 >= 0)
            {
                esi = arg2;
            }
            else
            {
                esi = 0u;
            }
            if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
            {
                eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                ecx = rd32(COW_IMG(0x10456a28u));
                goto L_101cb5ff;
            }
            eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            ecx = rd32(COW_IMG(0x10456a28u));
            if (eax == 2u) goto L_101cb607;
            if (eax == 3u) goto L_101cb607;
L_101cb5ff: ;
            if (eax == 0u) goto L_101cb68b;
L_101cb607: ;
            wr32(sp0 - 0x3cu, 0x80808080u);
            wr32(sp0 - 0x40u, COW_IMG(0x1034ffb8u));
            t2 = rd32(sp0 - 0x2au) + 8u;
            wr32(sp0 - 0x44u, t2);
            t3 = rd32(sp0 - 0x28u) - 0x16u;
            wr32(sp0 - 0x48u, t3);
            g->esp = sp0 - 0x24u;
            cow_cdecl(g, COW_IMG(0x101c9780u), 9, t3, t2, COW_IMG(0x1034ffb8u), 0x80808080u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
            wr32(sp0 - 0x4cu, (uint32_t)(int16_t)edi);
            wr32(sp0 - 0x50u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x54u, sp0 - 0x20u);
            g->esp = sp0 - 0x40u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)edi, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
            wr32(sp0 - 0x58u, 0x3f800000u);
            wr32(sp0 - 0x5cu, 0x3f800000u);
            wr32(sp0 - 0x60u, 1u);
            wr32(sp0 - 0x64u, 0x80808080u);
            wr32(sp0 - 0x68u, sp0 - 0x20u);
            t4 = rd32(sp0 - 0x2au) + 4u;
            wr32(sp0 - 0x6cu, t4);
            t5 = rd32(sp0 - 0x28u) - 0x13u;
            wr32(sp0 - 0x70u, t5);
            g->edx = t5;
            g->esp = sp0 - 0x54u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t4, 7, t5, t4, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            t6 = g->edx;
            wr32(sp0 - 0x74u, (uint32_t)(int16_t)esi);
            wr32(sp0 - 0x78u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x7cu, sp0 - 0x20u);
            g->esp = sp0 - 0x68u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
            eax = rd32(sp0 - 0x26u) - 0x10u;
            ecx = rd32(sp0 - 0x28u) - 1u;
L_101cb70c: ;
            wr32(sp0 - 0x3cu, 0x3f800000u);
            wr32(sp0 - 0x40u, 0x3f800000u);
            wr32(sp0 - 0x44u, 1u);
            wr32(sp0 - 0x48u, 0x80808080u);
            wr32(sp0 - 0x4cu, sp0 - 0x20u);
            wr32(sp0 - 0x50u, eax);
            wr32(sp0 - 0x54u, ecx);
            g->esp = sp0 - 0x38u;
            t12 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx, 7, ecx, eax, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
            eax = t12;
        }
    }
    return eax;
L_101cb68b: ;
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, COW_IMG(0x1034ffb8u));
    t7 = rd32(sp0 - 0x2au) + 8u;
    wr32(sp0 - 0x44u, t7);
    t8 = rd32(sp0 - 0x28u) - 0x1cu;
    wr32(sp0 - 0x48u, t8);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x101c9780u), 9, t8, t7, COW_IMG(0x1034ffb8u), 0x80808080u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u));
    wr32(sp0 - 0x4cu, (uint32_t)(int16_t)edi);
    wr32(sp0 - 0x50u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)edi, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    wr32(sp0 - 0x58u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0x3f800000u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, 0x80808080u);
    wr32(sp0 - 0x68u, sp0 - 0x20u);
    t9 = rd32(sp0 - 0x2au) + 4u;
    wr32(sp0 - 0x6cu, t9);
    t10 = rd32(sp0 - 0x28u) - 0x1eu;
    wr32(sp0 - 0x70u, t10);
    g->edx = t10;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t9, 7, t10, t9, sp0 - 0x20u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t11 = g->edx;
    wr32(sp0 - 0x74u, (uint32_t)(int16_t)esi);
    wr32(sp0 - 0x78u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x7cu, sp0 - 0x20u);
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10352ff0u), (uint32_t)(int16_t)esi, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
    eax = rd32(sp0 - 0x26u) - 0x10u;
    ecx = rd32(sp0 - 0x28u) - 6u;
    goto L_101cb70c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cb590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
