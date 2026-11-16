/* f_0x1003d030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003d030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    t1 = rd32(self + 0x74u);
    wr32(self, COW_IMG(0x1032ab60u));
    wr32(self + 0x34u, COW_IMG(0x1032ab44u));
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10071ec0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd32(self + 0xc0u) == 0u)
    {
        ecx = t3;
        edx = t4;
    }
    else
    {
        eax = t2;
        edx = t4;
        edi = rd32(self + 0xc0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 0x54u, 0);
        t6 = g->edx;
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 0x2cu, 0);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_thiscall(g, COW_IMG(0x100634a0u), edi + 4u, 0);
        t10 = g->ecx;
        t11 = g->edx;
        g->ecx = t10;
        g->edx = t11;
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, edi);
        t12 = g->ecx;
        t13 = g->edx;
        ecx = t12;
        edx = t13;
    }
    if (rd32(self + 0xc4u) == 0u)
    {
        eax = rd32(self + 0xc4u);
    }
    else
    {
        eax = rd32(self + 0xc4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    if (rd32(COW_IMG(0x1047b980u)) == self)
    {
        wr32(COW_IMG(0x1047b980u), 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x1003b5c0u), self + 0x34u, 0);
    t17 = g->edx;
    g->esp = sp0;
    g->edx = t17;
    cow_tailcall(g, COW_IMG(0x100747c0u), t16, self, t17);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003d030(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
