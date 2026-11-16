/* f_0x102ea642 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ea642(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x468u) == 0u) goto L_102ea6ed;
    t1 = rd32(self + 8u);
    wr32(sp0 - 0x14u, t1);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(rd32(self + 8u));
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, rd32(t2 + 0x8cu), t2, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        goto L_102ea6ef;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if (rd32(self + 0x46cu) != 0u) goto L_102ea6bb;
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, 0u);
    if (rd32(self + 0x460u) != 1u)
    {
        t10 = rd32(self + 0x30u);
        wr32(sp0 - 0x1cu, t10);
        g->eax = t10;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        t11 = cow_thiscall(g, rd32(rd32(rd32(self + 0x30u)) + 0x3cu), rd32(rd32(self + 0x30u)), 3, t10, 0u, sp0 - 8u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    else
    {
        t6 = rd32(self + 0x464u);
        wr32(sp0 - 0x1cu, t6);
        t7 = rd32(self + 0x34u);
        wr32(sp0 - 0x20u, t7);
        g->eax = t7;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        t8 = cow_thiscall(g, rd32(rd32(rd32(self + 0x34u)) + 0x3cu), rd32(rd32(self + 0x34u)), 4, t7, t6, 0u, sp0 - 8u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if ((int32_t)eax < 0) goto L_102ea6ef;
    wr32(sp0 - 0x14u, 0u);
    t13 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t13);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    t14 = rd32(self + 0x20u);
    wr32(sp0 - 0x24u, t14);
    t15 = rd32(self + 8u);
    wr32(sp0 - 0x28u, t15);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(rd32(self + 8u)) + 0x70u), rd32(rd32(self + 8u)), 6, t15, t14, 0u, 0u, t13, 0u);
    t16 = g->edx;
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x14u, t17);
    g->eax = t17;
    g->edx = t16;
    t18 = rd32(rd32(sp0 - 8u));
    t19 = cow_thiscall(g, rd32(t18 + 8u), t18, 1, t17);
    t20 = g->ecx;
    t21 = g->edx;
    eax = t19;
    ecx = t20;
    edx = t21;
L_102ea6bb: ;
    if (rd32(self + 0x460u) == 1u) goto L_102ea6e7;
    if (rd32(self + 0x1cu) > 1u)
    {
        wr32(sp0 - 0x14u, 0xffffffffu);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        t22 = rd32(self + 0x30u);
        wr32(sp0 - 0x20u, t22);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t23 = cow_fastcall(g, COW_IMG(0x102d4c17u), ecx, edx, 4, t22, 0u, 0u, 0xffffffffu);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    t25 = rd32(self + 0x464u);
    wr32(sp0 - 0x14u, t25);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t26 = cow_fastcall(g, COW_IMG(0x102ea0b5u), self, edx, 1, t25);
    if ((int32_t)t26 < 0)
    {
        eax = t26;
        goto L_102ea6ef;
    }
L_102ea6e7: ;
    wr32(self + 0x468u, 0u);
L_102ea6ed: ;
    eax = 0u;
L_102ea6ef: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ea642(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ea642(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
