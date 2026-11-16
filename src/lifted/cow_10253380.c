/* f_0x10253380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10253380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_esi);
    if ((int32_t)arg1 > 3) goto L_1025346f;
    if (rd8(COW_IMG(0x10389d0du) + arg1 * 0x14u) == 0u) goto L_1025346f;
    wr32(sp0 - 0x28u, in_edi);
    if (rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
        wr32(sp0 - 0x2cu, t1);
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t2 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t1, in_edi, in_esi);
        t3 = g->edx;
        wr32(COW_IMG(0x10389d14u) + arg1 * 0x14u, t2);
        if (t2 == 0u)
        {
            edx = t3;
        }
        else
        {
            edi = t2;
            t4 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u) + 1u;
            eax = 0u;
            ecx = t4 >> 2u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t4 & 3u;
            while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            edx = t4;
        }
    }
    if (rd32(COW_IMG(0x10662dccu)) == 0u) goto L_1025346f;
    eax = rd32(COW_IMG(0x10662dccu));
    if (rd8(COW_IMG(0x10389d0cu) + arg1 * 0x14u) == 0u) goto L_1025346f;
    if (rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u) == 0u) goto L_1025346f;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101be260u), sp0 - 0x20u, 0);
    t5 = g->edx;
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    t6 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
    wr32(sp0 - 0x2cu, t6);
    g->eax = sp0 - 0x20u;
    g->edx = t5;
    t7 = rd32(COW_IMG(0x10662dccu));
    t8 = cow_thiscall(g, COW_IMG(0x101c4bf0u), t7, 2, t6, sp0 - 0x20u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
        ecx = t9;
        edx = t10;
        goto L_10253456;
    }
    eax = rd32(COW_IMG(0x10389d14u) + arg1 * 0x14u);
    wr32(sp0 - 0x28u, 0u);
    t11 = rd32(COW_IMG(0x10389d10u) + arg1 * 0x14u);
    wr32(sp0 - 0x2cu, t11);
    wr32(sp0 - 0x30u, eax);
    t12 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
    wr32(sp0 - 0x34u, t12);
    g->eax = eax;
    g->edx = t11;
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, COW_IMG(0x101c47b0u), rd32(COW_IMG(0x10662dccu)), 4, t12, eax, t11, 0u);
    t14 = g->edx;
    if ((int32_t)t13 < 0)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        t15 = rd32(COW_IMG(0x10389d08u) + arg1 * 0x14u);
        wr32(sp0 - 0x28u, t15);
        g->eax = eax;
        g->edx = t15;
        g->esp = sp0 - 0x24u;
        t16 = cow_thiscall(g, COW_IMG(0x101c49f0u), rd32(COW_IMG(0x10662dccu)), 1, t15);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    wr8(COW_IMG(0x10389d0cu) + arg1 * 0x14u, 0u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x101be2a0u), sp0 - 0x20u, 0);
    g->esi = rd32(sp0 - 0x24u);
    return;
L_10253456: ;
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    t19 = g->edx;
    wr32(COW_IMG(0x10389d14u) + arg1 * 0x14u, 0u);
    cow_thiscall(g, COW_IMG(0x101be2a0u), sp0 - 0x20u, 0);
L_1025346f: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253380(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
