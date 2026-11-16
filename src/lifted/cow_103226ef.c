/* f_0x103226ef - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_103226ef(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd32(COW_IMG(0x109b27bcu)) == 0u) goto L_1032276f;
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x103175f0u), g->eax, self, in_edx, 1, 2, 1u, 0x30u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
        goto L_1032270f;
    }
    edx = t2;
L_1032270a: ;
    g->edx = edx;
    return 1u;
L_1032270f: ;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x103227bau), eax, 0x30u, edx, 1, 1, esi);
    t4 = g->edx;
    if (t3 == 0u)
    {
        ecx = esi;
        edx = t4;
        goto L_1032272a;
    }
    eax = t3;
    ecx = esi;
    edx = t4;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10322913u), g->eax, ecx, edx, 1, 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t6, t7, 1, 3, esi, esi, in_esi);
    t8 = g->edx;
    edx = t8;
    goto L_1032270a;
L_1032272a: ;
    t9 = rd32(rd32(COW_IMG(0x103d3900u)));
    wr32(esi, t9);
    t10 = rd32(rd32(COW_IMG(0x103d3900u)) + 4u);
    wr32(esi + 4u, t10);
    t11 = rd32(rd32(COW_IMG(0x103d3900u)) + 8u);
    wr32(esi + 8u, t11);
    t12 = rd32(COW_IMG(0x109b29ecu));
    wr32(COW_IMG(0x103d3900u), esi);
    g->eax = t11;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x10322913u), g->eax, ecx, edx, 1, 1, t12);
    t14 = g->ecx;
    t15 = g->edx;
    t16 = rd32(COW_IMG(0x109b29ecu));
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t14, t15, 1, 3, t16, t12, in_esi);
    t17 = g->edx;
    wr32(COW_IMG(0x109b29ecu), esi);
    edx = t17;
L_103227b6: ;
    g->edx = edx;
    return 0u;
L_1032276f: ;
    t18 = rd32(rd32(COW_IMG(0x103d3900u)));
    t19 = rd32(COW_IMG(0x103d3900u));
    t20 = rd32(COW_IMG(0x109b29ecu));
    wr32(COW_IMG(0x103d38d0u), t18);
    t21 = rd32(t19 + 4u);
    wr32(COW_IMG(0x103d38d4u), t21);
    t22 = rd32(t19 + 8u);
    wr32(COW_IMG(0x103d38d8u), t22);
    wr32(COW_IMG(0x103d3900u), COW_IMG(0x103d38d0u));
    g->eax = t22;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x10322913u), g->eax, t21, in_edx, 1, 1, t20);
    t24 = g->ecx;
    t25 = g->edx;
    t26 = rd32(COW_IMG(0x109b29ecu));
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t24, t25, 1, 3, t26, t20, in_esi);
    t27 = g->edx;
    wr32(COW_IMG(0x109b29ecu), 0u);
    edx = t27;
    goto L_103227b6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103226ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103226ef(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
