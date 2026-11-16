/* f_0x103158c1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103158c1(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x103cffacu)) == 0u)
    {
        eax = rd32(COW_IMG(0x103cffacu));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x103cffacu));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t1 = cow_thiscall(g, eax, self, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x103159e5u), g->eax, ecx, edx, 1, 2, COW_IMG(0x1034f210u), COW_IMG(0x1034f224u));
    t5 = g->ecx;
    t6 = g->edx;
    cow_call_regs(g, COW_IMG(0x103159e5u), g->eax, t5, t6, 1, 4, COW_IMG(0x1034f000u), COW_IMG(0x1034f20cu), COW_IMG(0x1034f210u), COW_IMG(0x1034f224u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103158c1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103158c1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
