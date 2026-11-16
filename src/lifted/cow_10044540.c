/* f_0x10044540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044540(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047bba0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047bba0u));
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x10043dd0u), in_eax, ecx, in_edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x1047bba4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bba4u));
        g->esp = sp0;
        t3 = cow_call_regs(g, COW_IMG(0x10043dd0u), eax, ecx, edx, 1, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    if (rd32(COW_IMG(0x1047bba8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bba8u));
        g->esp = sp0;
        t5 = cow_call_regs(g, COW_IMG(0x10043dd0u), eax, ecx, edx, 1, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x1047bbacu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047bbacu));
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x10043dd0u), eax, ecx, edx, 1, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x1047bbb0u)) == 0u) goto L_1004458b;
    ecx = rd32(COW_IMG(0x1047bbb0u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10043dd0u), eax, ecx, edx);
    return;
L_1004458b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10044540(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
