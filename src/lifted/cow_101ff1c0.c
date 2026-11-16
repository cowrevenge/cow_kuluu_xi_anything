/* f_0x101ff1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ff1c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    t1 = rd32(self + 0x1cu);
    wr32(self, COW_IMG(0x1033abe0u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x101feec0u), eax, self, g->edx, 0, 1, 0u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10663abcu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663abcu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t4 = rd32(ecx);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x10663abcu), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10663ac0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663ac0u));
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t8 = g->edx;
        wr32(COW_IMG(0x10663ac0u), 0u);
        edx = t8;
    }
    if (rd32(COW_IMG(0x10663ac4u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10663ac4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10663ac4u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(COW_IMG(0x10663ac4u), 0u);
        ecx = t9;
        edx = t10;
    }
    if (rd32(self + 0x200u) == 0u)
    {
        eax = rd32(self + 0x200u);
    }
    else
    {
        eax = rd32(self + 0x200u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t11 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t12 = g->edx;
        wr32(self + 0x200u, 0u);
        eax = t11;
        edx = t12;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ff1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ff1c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
