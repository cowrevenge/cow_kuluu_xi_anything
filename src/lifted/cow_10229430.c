/* f_0x10229430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10229430(Guest* g)
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

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x94u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x106671d4u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_thiscall(g, COW_IMG(0x10229670u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x106671d4u), t4);
        ecx = t5;
        edx = t6;
    }
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x174u);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x106671d8u), 0u);
    }
    else
    {
        edx = t9;
        esi = t7;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t10 = cow_thiscall(g, COW_IMG(0x102217c0u), esi, 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(esi, COW_IMG(0x1033c3b0u));
        wr32(COW_IMG(0x106671d8u), esi);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x1021e480u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x103862c4u), COW_IMG(0x106671d0u), 0x51u);
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10229430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10229430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
