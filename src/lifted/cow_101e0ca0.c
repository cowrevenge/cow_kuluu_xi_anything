/* f_0x101e0ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e0ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10339250u));
    if (rd32(COW_IMG(0x106634b0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106634b0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106634b0u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106634b4u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106634b4u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106634b4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 8u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x106634b4u), 0u);
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x106634b8u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106634b8u));
        g->eax = eax;
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_stdcall(g, COW_IMG(0x101e1a50u), 0);
        t9 = g->ecx;
        t10 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t9, t10, 1, 1, esi);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(COW_IMG(0x106634b8u), 0u);
        ecx = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x106634d0u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106634d0u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106634d0u));
        g->eax = eax;
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t14 = g->edx;
        wr32(COW_IMG(0x106634d0u), 0u);
        eax = t13;
        edx = t14;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e0ca0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
