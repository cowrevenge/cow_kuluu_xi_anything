/* f_0x10005320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10005320(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 176u);

    if (arg1 == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 0x98u, in_ebx);
        wr32(sp0 - 0x9cu, in_esi);
        wr32(sp0 - 0xa0u, in_edi);
        edi = sp0 - 0x94u;
        eax = 0xffffffffu;
        ecx = 0x25u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(COW_IMG(0x10456048u), 0xffffffffu);
        wr32(COW_IMG(0x1045604cu), 0xffffffffu);
        esi = COW_IMG(0x10456048u);
        edi = COW_IMG(0x10456050u);
        ecx = 0xfeu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0xa4u, COW_IMG(0x1034f9ecu));
        wr32(sp0 - 0xa8u, arg1);
        edi = COW_IMG(0x10455ba0u);
        eax = 0xffffffffu;
        ecx = 0x20u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        g->esp = sp0 - 0x98u;
        t1 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, ecx, arg1, 1, 4, arg1, COW_IMG(0x1034f9ecu), in_edi, in_esi);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 != 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = COW_IMG(0x1034f930u);
            edi = COW_IMG(0x10455ba0u);
L_10005393: ;
            if (rd32(esi) == 0xffffffffu) goto L_100053c0;
            wr32(sp0 - 0xa4u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xa0u;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, eax);
            t5 = g->edx;
            t6 = rd32(esi);
            wr8(edi, (uint8_t)t4);
            wr32(sp0 - 0xa8u, COW_IMG(0x1034f9ecu));
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 + t6 * 4u - 0x94u, (uint32_t)(int8_t)t4);
            g->esp = sp0 - 0x9cu;
            t7 = cow_call_regs(g, COW_IMG(0x103129b8u), g->eax, t6, t5, 1, 4, 0u, COW_IMG(0x1034f9ecu), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
            t8 = g->ecx;
            t9 = g->edx;
            if (t7 != 0u)
            {
                eax = t7;
                ecx = t8;
                edx = t9;
                esi = esi + 4u;
                edi = edi + 1u;
                goto L_10005393;
            }
        }
L_100053c0: ;
        ebx = 0u;
L_100053c2: ;
        if (rd32(ebx * 4u + sp0 - 0x94u) != 0xffffffffu)
        {
            edi = rd32(ebx * 4u + sp0 - 0x94u);
            if ((int32_t)((edi ^ (uint32_t)((int32_t)edi >> 0x1fu)) - (uint32_t)((int32_t)edi >> 0x1fu)) < 32)
            {
                eax = edi;
                edx = (uint32_t)((int32_t)edi >> 0x1fu);
                esi = (edi ^ (uint32_t)((int32_t)edi >> 0x1fu)) - (uint32_t)((int32_t)edi >> 0x1fu);
                if ((int32_t)edi >= 0)
                {
                    ecx = ebx;
                    g->esp = sp0 - 0xa0u;
                    t12 = cow_call_regs(g, COW_IMG(0x10312a60u), 1u, ecx, 0u, 1, 0);
                    t13 = g->edx;
                    wr32(COW_IMG(0x10456048u) + edi * 8u, t12);
                    wr32(COW_IMG(0x1045604cu) + edi * 8u, t13);
                }
                else
                {
                    ecx = ebx;
                    g->esp = sp0 - 0xa0u;
                    t10 = cow_call_regs(g, COW_IMG(0x10312a60u), 0xffffffffu, ecx, 0xffffffffu, 1, 0);
                    t11 = g->edx;
                    wr32(COW_IMG(0x10456048u) + esi * 8u, t10);
                    wr32(COW_IMG(0x1045604cu) + esi * 8u, t11);
                }
            }
        }
        if ((int32_t)(ebx + 1u) < 37)
        {
            ebx = ebx + 1u;
            goto L_100053c2;
        }
        if (rd32(sp0 - 0x18u) == 0xffffffffu)
        {
            eax = rd32(sp0 - 0x18u);
            ebx = rd32(sp0 - 0x98u);
            esi = rd32(sp0 - 0x9cu);
            edi = rd32(sp0 - 0xa0u);
        }
        else
        {
            ebx = rd32(sp0 - 0x98u);
            esi = rd32(sp0 - 0x9cu);
            edi = rd32(sp0 - 0xa0u);
            if (rd32(sp0 - 0x40u) == 0xffffffffu)
            {
                eax = rd32(sp0 - 0x40u);
            }
            else
            {
                eax = rd32(sp0 - 0x40u);
                if ((rd32(sp0 - 0x50u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x50u) >> 0x1fu) != (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu))
                {
                    ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
                }
                else
                {
                    ecx = (eax ^ (uint32_t)((int32_t)eax >> 0x1fu)) - (uint32_t)((int32_t)eax >> 0x1fu);
                    wr8(COW_IMG(0x10455c3cu), 1u);
                }
                if ((rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu) != ecx)
                {
                    eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
                }
                else
                {
                    eax = (rd32(sp0 - 0x84u) ^ (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu)) - (uint32_t)((int32_t)rd32(sp0 - 0x84u) >> 0x1fu);
                    wr8(COW_IMG(0x10455c3bu), 1u);
                }
            }
        }
        if (rd8(COW_IMG(0x10455c3cu)) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10455c3cu));
            if (rd8(COW_IMG(0x10455c3bu)) == 0u)
            {
                wr16(COW_IMG(0x10455c3eu), 0u);
            }
        }
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10005320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10005320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
