/* f_0x1024b9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1024b9a0(Guest* g)
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
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    t1 = rd32(rd32(sp0 + 4u));
    wr32(sp0 + 4u, t1);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    edx = in_edx;
    esi = rd32(sp0 + 4u);
    edi = rd32(COW_IMG(0x106690c8u));
L_1024b5bc: ;
    wr32(sp0 - 0x10u, 0xffffd8f0u);
    if (rd32(edi + 0xc0u) == 0u)
    {
        wr32(esi, 0u);
    }
    else
    {
        wr32(esi, edi);
        wr32(sp0 + 4u, 0u);
        wr32(sp0 - 0x14u, 0u);
        if (rd32(edi + 4u) != 0u)
        {
            eax = rd32(edi + 4u);
            wr32(sp0 - 0x28u, sp0 - 0x10u);
            wr32(sp0 - 0x2cu, eax);
            g->esp = sp0 - 0x24u;
            cow_thiscall(g, rd32(rd32(eax) + 0x18u), rd32(eax), 2, eax, sp0 - 0x10u);
            wr32(sp0 - 0x28u, sp0 + 4u);
            t2 = rd32(edi + 4u);
            wr32(sp0 - 0x2cu, t2);
            cow_thiscall(g, rd32(rd32(t2) + 0x1cu), rd32(t2), 2, t2, sp0 + 4u);
            wr32(sp0 - 0x28u, sp0 - 0x14u);
            t3 = rd32(edi + 4u);
            wr32(sp0 - 0x2cu, t3);
            cow_thiscall(g, rd32(rd32(t3) + 0x20u), rd32(t3), 2, t3, sp0 - 0x14u);
            wr32(sp0 - 0x28u, sp0 - 4u);
            t4 = rd32(edi + 4u);
            wr32(sp0 - 0x2cu, t4);
            cow_thiscall(g, rd32(rd32(t4) + 0x24u), rd32(t4), 2, t4, sp0 - 4u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            t5 = rd32(edi + 4u);
            wr32(sp0 - 0x30u, t5);
            cow_thiscall(g, rd32(rd32(rd32(edi + 4u)) + 0x10u), rd32(rd32(edi + 4u)), 3, t5, sp0 - 8u, sp0 - 0xcu);
            t6 = rd32(sp0 - 0xcu);
            t7 = rd32(sp0 - 8u);
            wr32(esi + 0x14u, t6);
            wr32(esi + 0x18u, t7);
            if ((int32_t)rd32(edi + 0xc4u) >= 1000000)
            {
                ecx = t7;
                eax = COW_IMG(0x10354650u);
                edx = esi - COW_IMG(0x10354650u) + 0x34u;
L_1024b669: ;
                t8 = rd8(eax);
                wr8(eax + edx, (uint8_t)t8);
                if ((uint8_t)t8 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t8;
                    goto L_1024b669;
                }
            }
            else
            {
                eax = rd32(edi + 0xc4u);
                ecx = t7;
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, COW_IMG(0x10388cbcu));
                wr32(sp0 - 0x30u, esi + 0x34u);
                g->ebx = 0x20u - COW_IMG(0x10354650u);
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, esi + 0x34u, COW_IMG(0x10388cbcu), eax, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
            }
        }
        t9 = rd32(sp0 + 4u);
        t10 = rd32(sp0 - 4u);
        wr32(esi + 0x10u, t9);
        wr32(esi + 8u, 0u);
        wr32(esi + 4u, t10);
        edx = t10;
    }
    wr32(esi + 0xcu, 0xffffd8f0u);
    if (edi + 0xf4u < rd32(COW_IMG(0x106690c8u)) + 0x1310u)
    {
        esi = esi + 0x74u;
        edi = edi + 0xf4u;
        goto L_1024b5bc;
    }
    esi = esi + 0x74u;
    if ((int32_t)rd32(rd32(COW_IMG(0x106690b8u)) + 0x94u) < 0) goto L_1024b75c;
    edi = rd32(COW_IMG(0x106690b8u));
    wr32(sp0 - 0x10u, 0xffffd8f0u);
    t11 = rd32(edi + 4u);
    wr32(esi, t11);
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (rd32(edi + 4u) != 0u)
    {
        eax = rd32(edi + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        wr32(sp0 - 0x2cu, eax);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, rd32(rd32(eax) + 0x18u), rd32(eax), 2, eax, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 + 4u);
        t12 = rd32(edi + 4u);
        wr32(sp0 - 0x2cu, t12);
        cow_thiscall(g, rd32(rd32(t12) + 0x1cu), rd32(t12), 2, t12, sp0 + 4u);
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        t13 = rd32(edi + 4u);
        wr32(sp0 - 0x2cu, t13);
        cow_thiscall(g, rd32(rd32(t13) + 0x20u), rd32(t13), 2, t13, sp0 - 0x14u);
        t14 = rd32(edi + 0x20u);
        wr32(esi + 0x14u, t14);
        wr32(sp0 - 0x28u, 0x5cu);
        wr32(sp0 - 0x2cu, edi + 0xbcu);
        t15 = rd32(edi + 0x98u);
        wr32(esi + 0x18u, t15);
        g->eax = t14;
        g->esp = sp0 - 0x1cu;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x10312800u), t15, 4, edi + 0xbcu, 0x5cu, in_edi, in_esi);
        t17 = g->ecx;
        if (t16 != 0u)
        {
            eax = t16;
            ecx = t17;
            edx = esi + 0x34u - (eax + 1u);
            eax = eax + 1u;
L_1024b72f: ;
            t18 = rd8(eax);
            wr8(eax + edx, (uint8_t)t18);
            if ((uint8_t)t18 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t18;
                goto L_1024b72f;
            }
        }
    }
    t19 = rd32(sp0 + 4u);
    wr32(esi + 0x10u, t19);
    wr32(esi + 8u, 0u);
    t20 = rd32(edi + 0x24u);
    wr32(esi + 0x1cu, t20);
    wr32(esi + 0xcu, 0xffffd8f0u);
    g->ebx = in_ebx;
    g->edx = t20;
    return 0xffffd8f0u;
L_1024b75c: ;
    wr32(esi, 0u);
    g->ebx = in_ebx;
    g->edx = edx;
    return 0xffffd8f0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024b9a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024b9a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
