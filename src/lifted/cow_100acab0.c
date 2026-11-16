/* f_0x100acab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100acab0(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 != 4u) goto L_100acb0a;
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x48u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1bcu), self, 0);
    wr32(arg2, rd32(t2));
    t3 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t4 = rd32(t3 + 4u);
    wr32(arg2 + 4u, t4);
    g->eax = t4;
    t5 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
    t6 = rd32(t5 + 8u);
    wr32(arg2 + 8u, t6);
    g->eax = t6;
    g->edx = rd32(self);
    t7 = rd32(self);
    t8 = cow_thiscall(g, rd32(t7 + 0x1bcu), self, 0);
    t9 = g->edx;
    t10 = rd32(t8 + 0xcu);
    wr32(arg2 + 0xcu, t10);
    g->edx = t9;
    return (t10 & 0xffffff00u) | 1u;
L_100acb0a: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t11 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
    t12 = g->edx;
    if ((int32_t)arg1 <= (int32_t)t11)
    {
        eax = t11;
        edx = t12;
        edi = arg1;
    }
    else
    {
        eax = t11;
        edx = t12;
        edi = 0u;
    }
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, edi);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x100ad300u), self, 2, edi, sp0 - 0x40u);
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 8u);
    d15 = (double)rdf32(sp0 - 0x10u);
    wr32(arg2 + 4u, t13);
    t16 = rd32(sp0 - 4u);
    wr32(arg2 + 8u, t14);
    wrf32(arg2, (float)d15);
    wr32(arg2 + 0xcu, t16);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->edx = t16;
    return (arg2 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100acab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100acab0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
