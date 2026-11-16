/* f_0x1018b5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1018b5e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1bcu) != arg1)
    {
        eax = rd32(self + 0x1bcu);
        wr32(self + 0x1bcu, arg1);
        edx = in_edx;
        esi = self;
L_1018b5f8: ;
        g->edi = arg1;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x101889e0u), eax, esi, edx, 1, 0);
        t2 = g->edx;
        if (arg1 == 0u)
        {
            eax = t1;
            ecx = esi;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t5 = cow_call_regs(g, COW_IMG(0x101875e0u), eax, ecx, g->edx, 1, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
        else
        {
            eax = t1;
            ecx = esi;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x101875c0u), eax, ecx, g->edx, 1, 0);
            t4 = g->edx;
            eax = t3;
            edx = t4;
        }
        if (rd32(esi + 4u) != 0u)
        {
            esi = rd32(esi + 4u);
            goto L_1018b5f8;
        }
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018b5e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
