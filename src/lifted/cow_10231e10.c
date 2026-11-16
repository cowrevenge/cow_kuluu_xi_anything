/* f_0x10231e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10231e10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(self + 0x30u);
    wr32(sp0 - 0x34u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_thiscall(g, COW_IMG(0x10231e90u), self, 1, t1);
    t3 = g->edx;
    if ((int32_t)t2 >= 0)
    {
        edx = t3;
        edi = t2;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0x10u);
        wr32(sp0 - 0x3cu, 0x32u);
        wr32(sp0 - 0x40u, 0x28u);
        wr32(sp0 - 0x44u, 0x14u);
        wr32(sp0 - 0x48u, 0x20u);
        t4 = rd32(self + 8u) + 0xc4u;
        wr32(sp0 - 0x4cu, t4);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x10233130u), sp0 - 0x28u, 7, t4, 0x20u, 0x14u, 0x28u, 0x32u, 0x10u, 0u);
        wr32(sp0 - 0x34u, edi);
        g->edx = rd32(self + 0x6cu) * 0x25u;
        t5 = rd32(self + 0x6cu);
        t6 = cow_thiscall(g, COW_IMG(0x1022f150u), COW_IMG(0x10668380u) + t5 * 0x94u, 1, edi);
        t7 = g->ecx;
        t8 = g->edx;
        if (t6 != 0u)
        {
            eax = t6;
            ecx = t7;
            edx = t8;
        }
        else
        {
            ecx = t7;
            edx = t8;
            eax = COW_IMG(0x103d3c84u);
        }
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, eax);
        wr32(sp0 - 0x3cu, edi);
        t9 = rd32(self + 0x6cu);
        wr32(sp0 - 0x40u, t9);
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t10 = cow_cdecl(g, COW_IMG(0x1022f330u), 3, t9, edi, eax);
        t11 = g->edx;
        wr32(sp0 - 0x3cu, t10);
        g->edx = t11;
        g->esp = sp0 - 0x30u;
        t12 = cow_thiscall(g, COW_IMG(0x10233190u), sp0 - 0x28u, 3, t10, rd32(sp0 - 0x38u), 0u);
        t13 = g->edx;
        cow_fastcall(g, COW_IMG(0x10233120u), sp0 - 0x28u, t13, 0);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10231e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10231e10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
