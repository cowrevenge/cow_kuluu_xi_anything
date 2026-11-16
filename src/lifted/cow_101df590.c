/* f_0x101df590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101df590(Guest* g)
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

    t1 = rd32(self + 0x58u);
    wr32(self, COW_IMG(0x103390c8u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        eax = t1;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
        t3 = g->edx;
        wr32(self + 0x58u, 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106631e8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106631e8u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t4 = rd32(ecx);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x106631e8u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x106634a0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634a0u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0 - 8u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x106634a0u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x106634a4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634a4u));
        g->eax = rd32(ecx);
        g->edx = edx;
        t10 = rd32(ecx);
        g->esp = sp0 - 8u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x106634a4u), 0u);
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x106634a8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634a8u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t13 = rd32(ecx);
        g->esp = sp0 - 8u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x106634a8u), 0u);
        eax = t14;
        edx = t15;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101f6870u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101df590(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
