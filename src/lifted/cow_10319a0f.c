/* f_0x10319a0f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10319a0f(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(COW_IMG(0x109f945cu)) != 0u)
    {
        wr32(sp0 - 0x20u, 0x19u);
        g->esp = sp0 - 0x14u;
        cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0x19u, in_edi, in_esi);
        t5 = rd32(sp0 + 8u) - 1u;
        wr32(sp0 - 0x10u, t5);
        t6 = rd32(sp0 + 4u) - 1u;
        wr32(sp0 - 0xcu, t6);
        eax = t6;
        ecx = rd32(sp0 + 4u);
        esi = rd32(sp0 + 8u);
        edi = in_edi;
        loc_10 = t5;
        loc_c = t6;
L_10319a52: ;
        wr32(sp0 - 0xcu, loc_c + 1u);
        t7 = rd8(ecx);
        t8 = rd8(COW_IMG(0x109f9561u) + rd8(ecx));
        wr32(sp0 + 4u, ecx + 1u);
        if ((t8 & 4u) == 0u)
        {
            eax = (eax & 0xffff0000u) | t7;
            ecx = ecx + 1u;
            edx = t7;
            loc_c = loc_c + 1u;
            goto L_10319ac0;
        }
        eax = (eax & 0xffff0000u) | t7;
        ecx = ecx + 1u;
        edx = t7;
        loc_c = loc_c + 1u;
        if (rd8(ecx) != 0u) goto L_10319a72;
        edi = 0u;
L_10319add: ;
        wr32(sp0 - 0x10u, loc_10 + 1u);
        t13 = rd8(esi);
        t14 = rd8(COW_IMG(0x109f9561u) + rd8(esi));
        wr32(sp0 + 8u, esi + 1u);
        if ((t14 & 4u) == 0u)
        {
            eax = (eax & 0xffff0000u) | t13;
            ecx = t13;
            loc_10 = loc_10 + 1u;
            goto L_10319b47;
        }
        eax = (eax & 0xffff0000u) | t13;
        ecx = t13;
        esi = esi + 1u;
        loc_10 = loc_10 + 1u;
        if (rd8(esi) != 0u) goto L_10319afd;
        esi = 0u;
L_10319b5e: ;
        if ((uint16_t)edi != (uint16_t)esi) goto L_10319b82;
        if ((uint16_t)edi == 0u) goto L_10319b95;
        ecx = rd32(sp0 + 4u);
        esi = rd32(sp0 + 8u);
        goto L_10319a52;
    }
    else
    {
        t1 = rd32(sp0 + 8u);
        wr32(sp0 - 0x20u, t1);
        t2 = rd32(sp0 + 4u);
        wr32(sp0 - 0x24u, t2);
        g->esp = sp0 - 0x14u;
        t3 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, self, in_edx, 1, 4, t2, t1, in_edi, in_esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_10319b9f: ;
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_10319a72: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x109f9440u)));
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, loc_c);
    wr32(sp0 - 0x38u, 0x200u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109f9664u)));
    g->esp = sp0 - 0x1cu;
    t9 = cow_call_regs(g, COW_IMG(0x1031edeau), g->eax, ecx, edx, 1, 8, rd32(COW_IMG(0x109f9664u)), 0x200u, loc_c, 2u, sp0 - 8u, 2u, rd32(COW_IMG(0x109f9440u)), 1u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 1u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10319aa0;
    }
    eax = t9;
    edx = t11;
    edi = (edi & 0xffff0000u) | rd8(sp0 - 8u);
L_10319ab8: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    t12 = rd32(sp0 - 0xcu) + 1u;
    wr32(sp0 - 0xcu, t12);
    loc_c = t12;
    goto L_10319add;
L_10319aa0: ;
    if (eax != 2u) goto L_10319b73;
    edi = ((eax & 0xffff0000u) | rd8(sp0 - 7u)) + ((edi & 0xffff0000u) | rd8(sp0 - 8u)) * 0x100u;
    eax = (eax & 0xffff0000u) | rd8(sp0 - 7u);
    goto L_10319ab8;
L_10319ac0: ;
    if ((rd8(COW_IMG(0x109f9561u) + (uint16_t)eax) & 0x10u) != 0x10u)
    {
        eax = (uint16_t)eax;
        edi = eax;
    }
    else
    {
        eax = (uint16_t)eax;
        edi = (edi & 0xffff0000u) | rd8(COW_IMG(0x109f9460u) + eax);
    }
    goto L_10319add;
L_10319afd: ;
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x109f9440u)));
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, loc_10);
    wr32(sp0 - 0x38u, 0x200u);
    wr32(sp0 - 0x3cu, rd32(COW_IMG(0x109f9664u)));
    g->esp = sp0 - 0x1cu;
    t15 = cow_call_regs(g, COW_IMG(0x1031edeau), g->eax, ecx, edx, 1, 8, rd32(COW_IMG(0x109f9664u)), 0x200u, loc_10, 2u, sp0 - 8u, 2u, rd32(COW_IMG(0x109f9440u)), 1u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 1u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_10319b2b;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    esi = (esi & 0xffff0000u) | rd8(sp0 - 8u);
L_10319b3f: ;
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    t18 = rd32(sp0 - 0x10u) + 1u;
    wr32(sp0 - 0x10u, t18);
    loc_10 = t18;
    goto L_10319b5e;
L_10319b2b: ;
    if (eax != 2u) goto L_10319b73;
    esi = ((eax & 0xffff0000u) | rd8(sp0 - 7u)) + ((esi & 0xffff0000u) | rd8(sp0 - 8u)) * 0x100u;
    eax = (eax & 0xffff0000u) | rd8(sp0 - 7u);
    goto L_10319b3f;
L_10319b47: ;
    if ((rd8(COW_IMG(0x109f9561u) + (uint16_t)eax) & 0x10u) != 0x10u)
    {
        esi = (uint16_t)eax;
        eax = (eax & 0xffffff00u) | (rd8(COW_IMG(0x109f9561u) + (uint16_t)eax) & 0x10u);
    }
    else
    {
        esi = (uint16_t)eax;
        eax = (eax & 0xffffff00u) | (rd8(COW_IMG(0x109f9561u) + (uint16_t)eax) & 0x10u);
        esi = (esi & 0xffff0000u) | rd8(COW_IMG(0x109f9460u) + esi);
    }
    goto L_10319b5e;
L_10319b73: ;
    wr32(sp0 - 0x20u, 0x19u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t19 = g->edx;
    eax = 0x7fffffffu;
    edx = t19;
    goto L_10319b9f;
L_10319b82: ;
    wr32(sp0 - 0x20u, 0x19u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t22 = g->edx;
    eax = (-((uint16_t)esi < (uint16_t)edi) & 2u) - 1u;
    edx = t22;
    goto L_10319b9f;
L_10319b95: ;
    wr32(sp0 - 0x20u, 0x19u);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x19u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t20 = g->edx;
    eax = 0u;
    edx = t20;
    goto L_10319b9f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319a0f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319a0f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
