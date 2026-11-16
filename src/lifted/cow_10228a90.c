/* f_0x10228a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10228a90(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x106671c0u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106671c0u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106671c0u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106671c4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106671c4u));
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t5 = g->edx;
        wr32(COW_IMG(0x106671c4u), 0u);
        edx = t5;
    }
    if (rd32(COW_IMG(0x106671c8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106671c8u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x106671c8u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x106671c8u), 0u);
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x106671ccu)) == 0u)
    {
        eax = rd32(COW_IMG(0x106671ccu));
    }
    else
    {
        eax = rd32(COW_IMG(0x106671ccu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t8 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t9 = g->edx;
        wr32(COW_IMG(0x106671ccu), 0u);
        eax = t8;
        edx = t9;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10228a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10228a90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
