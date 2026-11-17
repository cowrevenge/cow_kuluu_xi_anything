/* f_0x1004e630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1004e630(Guest* g)
{
    double d1;
    double d14;
    double d18;
    double d2;
    double d7;
    uint32_t ecx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    d1 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc4u);
    wrf32(sp0 - 0x14u, (float)d1);
    d2 = (double)(float)(double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc0u);
    wrf32(sp0 - 0x18u, (float)d2);
    t3 = rd32(COW_IMG(0x1047bbb4u)) + 0x50u;
    wr32(sp0 - 0x1cu, t3);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x24u, 8u);
    t5 = rd32(sp0 + 8u);
    wr32(sp0 - 0x28u, t5);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x8cu), rd32(COW_IMG(0x1047cf7cu)), 7, sp0 - 0x10u, t5, 8u, t4, t3, cow_f2bits(d2), cow_f2bits(d1));
    d7 = (double)rdf32(rd32(COW_IMG(0x1047cf7cu)) + 0xa98u);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        ecx = rd32(COW_IMG(0x1047cf7cu));
        goto L_1004e699;
    }
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_1004e699: ;
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 + 4u, 0u);
    if (arg3 != 0u)
    {
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, rd32(COW_IMG(0x10456d58u)));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x10456d50u)));
        t8 = rd32(ecx + 0xa98u);
        t9 = rd32(COW_IMG(0x10456d50u));
        t10 = rd32(COW_IMG(0x10456d58u));
        wr32(sp0 + 8u, t8);
        g->eax = t9;
        g->ecx = t8;
        g->edx = t10;
        g->esp = sp0 - 0x28u;
        t11 = cow_stdcall(g, COW_IMG(0x10015690u), 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x2cu, t12);
        wr32(sp0 + 4u, (uint16_t)t11);
        d14 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
        wrf32(sp0 - 0x2cu, (float)d14);
        g->eax = (uint16_t)t11;
        g->ecx = t12;
        g->esp = sp0 - 0x2cu;
        t15 = cow_stdcall(g, COW_IMG(0x10015680u), 0);
        t16 = g->ecx;
        wr32(sp0 - 0x30u, t16);
        t17 = rd32(sp0 + 8u);
        wr32(sp0 + 4u, (uint16_t)t15);
        d18 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
        wrf32(sp0 - 0x30u, (float)d18);
        wr32(sp0 - 0x34u, t17);
        wr32(sp0 - 0x38u, sp0 - 0x10u);
        g->eax = (uint16_t)t15;
        g->esp = sp0 - 0x14u;
        t19 = cow_thiscall(g, COW_IMG(0x1006c280u), arg3, 9, sp0 - 0x10u, t17, cow_f2bits(d18), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), 1u, 1u, 0u);
        wr32(sp0 + 4u, t19);
    }
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ae50u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e630(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1004e630(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
