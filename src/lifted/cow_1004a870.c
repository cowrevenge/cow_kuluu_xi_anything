/* f_0x1004a870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_1004a870(Guest* g)
{
    double d1;
    double d15;
    double d19;
    double d2;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_esi);
    d1 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x18u, (float)d1);
    d2 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x1cu, (float)d2);
    t3 = rd32(COW_IMG(0x1047bfa8u)) + 0xb10u;
    wr32(sp0 - 0x20u, t3);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t4);
    wr32(sp0 - 0x28u, 8u);
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, sp0 - 0x10u);
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t5 + 0x8cu), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x10u, arg2, 8u, t4, t3, cow_f2bits(d2), cow_f2bits(d1));
    t6 = g->edx;
    if (rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa94u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa94u);
        edx = t6;
        goto L_1004a970;
    }
    eax = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa94u);
    ecx = rd32(COW_IMG(0x1047cf7cu));
    edx = t6;
    if (rd8(sp0 + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_1004a8d7;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1004a8d7: ;
    d7 = (double)rdf32(ecx + 0xa98u);
    if (d7 < (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1004a970;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d8 = (double)rdf32(ecx + 0xa9cu);
    if ((cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
        goto L_1004a970;
    }
    eax = cow_fsw(g, d8, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x4100u;
    if (arg4 == 0u) goto L_1004a969;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x10456d58u)));
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x10456d50u)));
    t9 = rd32(ecx + 0xa98u);
    t10 = rd32(COW_IMG(0x10456d50u));
    t11 = rd32(COW_IMG(0x10456d58u));
    wr32(sp0 + 4u, t9);
    g->eax = t10;
    g->ecx = t9;
    g->edx = t11;
    g->esp = sp0 - 0x28u;
    t12 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x2cu, t13);
    wr32(sp0 + 0xcu, (uint16_t)t12);
    d15 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
    wrf32(sp0 - 0x2cu, (float)d15);
    g->eax = (uint16_t)t12;
    g->ecx = t13;
    g->esp = sp0 - 0x2cu;
    t16 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
    t17 = g->ecx;
    wr32(sp0 - 0x30u, t17);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, (uint16_t)t16);
    d19 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
    wrf32(sp0 - 0x30u, (float)d19);
    wr32(sp0 - 0x34u, t18);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    g->eax = (uint16_t)t16;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x14u;
    t20 = cow_thiscall(g, COW_IMG(0x1006c280u), arg4, 9, sp0 - 0x10u, t18, cow_f2bits(d19), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), 1u, 1u, 0u);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t21;
        goto L_1004a970;
    }
    eax = t20;
    edx = t21;
L_1004a969: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1004a970: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004a870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1004a870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
