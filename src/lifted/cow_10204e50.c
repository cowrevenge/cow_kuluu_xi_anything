/* f_0x10204e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10204e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x106643a8u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10203190u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_10204eb7;
    }
    ecx = t3;
    edx = t4;
    esi = t2;
    if (rd32(COW_IMG(0x10664400u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664400u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10664400u));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x100u);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x10664400u), t5);
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, eax, 0x100u, 0xau, 0x72u, 1u, esi + 2u);
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10204e00u), 0u, rd32(COW_IMG(0x10664400u)), 0u, 0u, 1u, 0u);
    return;
L_10204eb7: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100e9800u), g->eax, g->ecx, edx, 1, 2, 0u, COW_IMG(0x10204da0u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10204e50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
