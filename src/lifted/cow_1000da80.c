/* f_0x1000da80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1000da80(Guest* g)
{
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_edi = g->edi;

    if ((int32_t)rd32(self + 4u) <= 0)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebp = rd32(COW_IMG(0x103294a8u));
        edi = 0u;
L_1000da95: ;
        t1 = rd32(rd32(edi * 4u + rd32(self)) + 4u);
        g->eax = rd32(self);
        t2 = rd32(self);
        t3 = rd32(edi * 4u + rd32(self));
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, ebp, t1, 1, t1);
        t5 = g->ecx;
        g->edx = rd32(t3);
        t6 = rd32(t3);
        t7 = cow_thiscall(g, ebp, t5, 1, t6);
        t8 = g->ecx;
        t9 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, t9, 1, 1, t3);
        t10 = g->ecx;
        t11 = g->edx;
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 4u))
        {
            edx = t11;
            edi = edi + 1u;
            goto L_1000da95;
        }
        ecx = t10;
        edx = t11;
    }
    t12 = rd32(self);
    wr32(self + 4u, 0u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t12, in_edi, in_ebx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000da80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000da80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
