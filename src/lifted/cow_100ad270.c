/* f_0x100ad270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ad270(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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

    if (rd32(self + 0x888u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x888u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (eax == 0u)
            {
                edi = 0u;
            }
            else
            {
                edi = rd32(eax);
            }
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10056c70u), edi, 4, self, self, 0u, 0u);
            t2 = g->edx;
            g->edx = t2;
            cow_thiscall(g, COW_IMG(0x10056ae0u), edi, 0);
            t3 = g->edx;
            t4 = rd32(edi + 0x7cu);
            wr32(self + 0x87cu, t4);
            g->edx = t3;
            cow_thiscall(g, COW_IMG(0x100acd30u), self, 1, 0u);
            t5 = g->edx;
            edx = t5;
        }
    }
    t6 = rd32(self + 0x86cu);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1017ac40u), rd32(COW_IMG(0x10631f24u)), 2, t6, 1u);
    wr8(self + 0x878u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ad270(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
