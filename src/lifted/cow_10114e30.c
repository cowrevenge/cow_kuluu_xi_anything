/* f_0x10114e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114e30(Guest* g)
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

    if (rd32(COW_IMG(0x104e1b6cu)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x104e1b6cu));
        g->eax = in_eax;
        g->esp = sp0 - 4u;
        t1 = cow_fastcall(g, COW_IMG(0x10114070u), esi, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x104e1b68u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1b68u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1b68u));
        if (1u)
        {
            wr32(COW_IMG(0x104e1b68u), 0u);
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t6 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t7 = g->edx;
        wr32(COW_IMG(0x104e1b68u), 0u);
        eax = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x104e170cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x104e170cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x104e170cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t8 = rd32(ecx);
        g->esp = sp0;
        t9 = cow_thiscall(g, rd32(t8), ecx, 1, 1u);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    wr32(COW_IMG(0x104e170cu), 0u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t12 = cow_call_regs(g, COW_IMG(0x1010f910u), g->eax, g->ecx, edx, 1, 0);
    t13 = g->ecx;
    t14 = g->edx;
    g->edx = t14;
    cow_tailcall(g, COW_IMG(0x10108150u), t12, t13, t14);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10114e30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
