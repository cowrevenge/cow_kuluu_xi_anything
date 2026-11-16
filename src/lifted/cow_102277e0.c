/* f_0x102277e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102277e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(COW_IMG(0x106671b8u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106671b8u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106671b8u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x106671bcu)) != 0u)
    {
        esi = rd32(COW_IMG(0x106671bcu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t4 = cow_fastcall(g, COW_IMG(0x102281d0u), esi, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t5, t6, 1, 1, esi);
        t8 = g->edx;
        wr32(COW_IMG(0x106671bcu), 0u);
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x106671b4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106671b4u));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t9 = cow_fastcall(g, COW_IMG(0x10227190u), esi, edx, 0);
        t10 = g->ecx;
        t11 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, t11, 1, 1, esi);
        wr32(COW_IMG(0x106671b4u), 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102277e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102277e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
