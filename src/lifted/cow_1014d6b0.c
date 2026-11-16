/* f_0x1014d6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014d6b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(edx + 0x2c7c8u) == 9u)
        {
            wr32(edx + 0x2c7d0u, eax & 0xfbffffffu);
            if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) == 2u)
            {
                eax = rd32(COW_IMG(0x104dfd98u));
            }
            else
            {
                eax = rd32(COW_IMG(0x104dfd98u));
                t1 = rd32(self + 8u);
                wr32(self + 0x1cu, 0xffffffffu);
                wr32(self + 0x18u, 0xffffffffu);
                wr8(t1 + 0x5du, 0u);
                wr32(self + 0x14u, 5u);
                eax = 0xffffffffu;
                edx = t1;
            }
        }
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1014d910u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014d6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014d6b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
