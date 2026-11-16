/* f_0x10126a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10126a90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self + 0x1cu) == 0u)
    {
        loc_4 = self;
        goto L_10126b4c;
    }
    eax = rd32(self + 0x1cu);
    t1 = rd32(eax + 0x10u);
    g->edx = rd32(rd32(self + 0x30u) + 0x64u);
    t2 = rd32(rd32(self + 0x30u) + 0x64u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10129290u), t1, rd32(t2 + 0x18u), g->edx, 0, 1, t1);
    t3 = g->edx;
    if ((rd32(self + 0x20u) >> 8u & 0x40u) != 0u)
    {
        eax = rd32(self + 0x20u);
        edx = t3;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10136800u), rd32(self + 0x30u), 0);
    }
    t4 = rd32(self + 0x1cu) + 0x82cu;
    t5 = rd32(self + 0x1cu) + 0x828u;
    g->eax = t4;
    t6 = rd32(self + 0x1cu);
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x10126c60u), t6, 2, t5, t4);
    t8 = g->ecx;
    if (t7 == 0u)
    {
        eax = t7;
        goto L_10126b13;
    }
    eax = t7;
    ecx = t8;
    if (rd8(eax) == 0u) goto L_10126b13;
    if (!(rd8(self + 0x20u) & 1u))
    {
        loc_4 = self & 0xffffff00u;
    }
    else
    {
        loc_4 = (self & 0xffffff00u) | 1u;
    }
    if (rd8(rd32(self + 0x1cu) + 4u) != 0x97u)
    {
        ecx = rd32(self + 0x1cu);
    }
    else
    {
        ecx = rd32(self + 0x1cu);
        wr8(self + 0x34u, 1u);
    }
    t9 = (ecx & 0xffffff00u) | rd8(self + 0x34u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10136670u), rd32(self + 0x30u), 3, eax, t9, loc_4);
L_10126b1e: ;
    if (rd32(self + 0x20u) - 0x31u > 7u) goto L_10126b4c;
    eax = rd32(self + 0x20u) - 0x31u;
    t11 = rd32(COW_IMG(0x10126b50u) + rd8(COW_IMG(0x10126b58u) + eax) * 4u);
    switch (t11 - RD)
    {
    case 0x10126b38u: goto L_10126b38;
    case 0x10126b48u: goto L_10126b48;
    default: rt_fatal(g, COW_IMG(0x10126b31u), "switch");
    }
    return;
L_10126b13: ;
    t10 = rd32(self + 0x1cu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126970u), self, 1, t10);
    loc_4 = self;
    goto L_10126b1e;
L_10126b38: ;
    if (rd8(rd32(self + 0x1cu) + 4u) != 0x97u) goto L_10126b48;
    wr8(self + 0x34u, 1u);
    return;
L_10126b48: ;
    wr8(self + 0x34u, 0u);
L_10126b4c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10126a90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
