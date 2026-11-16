/* f_0x101bb5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101bb5a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x44u) <= 0) goto L_101bb65b;
    ebx = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101bca40u), rd32(self + 0x210u), 2, ebx, 0x4cu);
    t2 = g->edx;
    t3 = rd32(ebx + 0x48u);
    t4 = rd32(self + 0x210u);
    wr32(sp0 + 4u, t1);
    t5 = cow_thiscall(g, COW_IMG(0x101bcac0u), t4, 1, t3);
    if (t1 == 0u) goto L_101bb65b;
    eax = t5;
    ebp = t5;
    if (ebp == 0u) goto L_101bb65b;
    t6 = rd32(ebx + 0x48u);
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101bb4b0u), eax, self, t6, 0, 3, ebp, t6, arg3);
    t7 = g->edx;
    if ((int32_t)rd32(arg2) >= 0)
    {
        edx = t7;
    }
    else
    {
        edx = t7;
        t8 = rd32(self + 0x224u);
        wr32(arg2, t8);
        t9 = rd32(self + 0x224u) + 1u;
        wr32(self + 0x224u, t9);
    }
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101ba5c0u), self + rd32(arg2) * 0x1f0u + 0x22cu, 0);
    t10 = rd32(ebx + 0x48u);
    t11 = rd32(sp0 + 4u);
    g->eax = rd32(self + rd32(arg2) * 0x1f0u + 0x22cu);
    t12 = rd32(self + rd32(arg2) * 0x1f0u + 0x22cu);
    t13 = cow_thiscall(g, rd32(t12 + 0x14u), self + rd32(arg2) * 0x1f0u + 0x22cu, 4, t11, ebp, t10, 1u);
    g->ebx = in_ebx;
    return (t13 & 0xffffff00u) | 1u;
L_101bb65b: ;
    if ((int32_t)rd32(arg2) >= 0)
    {
        t14 = rd32(self + 0x224u) - 1u;
        wr32(self + 0x224u, t14);
        wr32(arg2, 0xffffffffu);
    }
    g->ebx = in_ebx;
    return arg2 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101bb5a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101bb5a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
