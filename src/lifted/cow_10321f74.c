/* f_0x10321f74 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10321f74(Guest* g)
{
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
    const uint32_t in_esi = g->esi;

    if (rd32(COW_IMG(0x109b27c4u)) == 0u) goto L_10321fd8;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x103175f0u), g->eax, self, in_edx, 1, 2, 1u, 0xacu);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_10321f97;
    }
    edx = t2;
L_10321f92: ;
    g->edx = edx;
    return 1u;
L_10321f97: ;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10322005u), g->eax, 0xacu, edx, 1, 1, esi);
    t4 = g->edx;
    if (t3 == 0u)
    {
        ecx = esi;
        edx = t4;
        goto L_10321fb2;
    }
    ecx = esi;
    edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10322353u), g->eax, ecx, edx, 1, 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t6, t7, 1, 3, esi, esi, in_esi);
    t8 = g->edx;
    edx = t8;
    goto L_10321f92;
L_10321fb2: ;
    t9 = rd32(COW_IMG(0x109b29dcu));
    wr32(COW_IMG(0x103d3814u), esi);
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10322353u), g->eax, ecx, edx, 1, 1, t9);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = rd32(COW_IMG(0x109b29dcu));
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t11, t12, 1, 3, t13, t9, in_esi);
    t14 = g->edx;
    wr32(COW_IMG(0x109b29dcu), esi);
    edx = t14;
L_10322001: ;
    g->edx = edx;
    return 0u;
L_10321fd8: ;
    t15 = rd32(COW_IMG(0x109b29dcu));
    wr32(COW_IMG(0x103d3814u), COW_IMG(0x103d3818u));
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x10322353u), g->eax, self, in_edx, 1, 1, t15);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(COW_IMG(0x109b29dcu));
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t17, t18, 1, 3, t19, t15, in_esi);
    t20 = g->edx;
    wr32(COW_IMG(0x109b29dcu), 0u);
    edx = t20;
    goto L_10322001;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10321f74(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10321f74(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
