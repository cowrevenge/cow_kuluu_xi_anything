/* f_0x10262790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10262790(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t sf;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, rd32(t1 + 0x28u), self, 1, arg1);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        goto L_102627b6;
    }
    eax = t2;
    edi = t2;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(self) + 0x2cu), self, 0);
    return edi;
L_102627b6: ;
    g->eax = rd32(self);
    g->edx = edx;
    t4 = rd32(self);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, rd32(t4 + 0x20u), self, 1, arg2);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edi = t5;
        sf = (int32_t)t5 < 0;
        goto L_10262804;
    }
    eax = t5;
    edx = t6;
    wr32(self + 0x18u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, rd32(rd32(arg1) + 4u), rd32(arg1), 1, arg1);
    g->edx = rd32(self);
    t8 = rd32(self);
    t9 = cow_thiscall(g, rd32(t8 + 0x24u), self, 1, arg2);
    t10 = g->edx;
    if ((int32_t)t9 < 0)
    {
        eax = t9;
        edi = t9;
        goto L_1026281b;
    }
    edx = t10;
    g->eax = rd32(arg1);
    t11 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, rd32(t11 + 0x10u), self + 0xcu, 3, arg1, self + 0xcu, arg2);
    if ((int32_t)t12 < 0)
    {
        eax = t12;
        edi = t12;
        goto L_1026281b;
    }
    eax = t12;
    g->eax = eax;
    g->edx = rd32(self);
    t13 = rd32(self);
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, rd32(t13 + 0x30u), self, 1, arg1);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 >= 0)
    {
        edi = t14;
        goto L_10262836;
    }
    ecx = t15;
    edx = t16;
    edi = t14;
    g->eax = rd32(arg1);
    t17 = rd32(arg1);
    g->esp = sp0 - 0x10u;
    t18 = cow_thiscall(g, rd32(t17 + 0x14u), ecx, 1, arg1);
    eax = t18;
L_1026281b: ;
    g->edx = rd32(self);
    t19 = rd32(self);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(t19 + 0x2cu), self, 0);
    t20 = g->edx;
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        edx = t20;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        wr32(self + 0x18u, 0u);
    }
L_10262836: ;
    return edi;
L_10262804: ;
    if (!sf) goto L_10262816;
    if (edi == 0x80004005u) goto L_10262816;
    if (edi != 0x80070057u) goto L_1026281b;
L_10262816: ;
    edi = 0x8004022au;
    goto L_1026281b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10262790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10262790(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
