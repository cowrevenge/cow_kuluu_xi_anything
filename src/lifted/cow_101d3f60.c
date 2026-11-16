/* f_0x101d3f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d3f60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 6u);
    if (rd32(rd32(t1)) == 0u)
    {
        edx = 0u;
    }
    else
    {
        eax = t1;
        ecx = rd32(rd32(t1));
        edx = 0u;
        esi = self + 0x818u;
L_101d3f7e: ;
        wr32(esi, ecx);
        if (rd32(edx * 4u + rd32(eax) + 4u) != 0u)
        {
            ecx = rd32(edx * 4u + rd32(eax) + 4u);
            edx = edx + 1u;
            esi = esi + 4u;
            goto L_101d3f7e;
        }
        edx = edx + 1u;
    }
    wr32(edx * 4u + self + 0x818u, 0u);
    wr8(self + 0x85au, (uint8_t)edx);
    wr8(self + 0x859u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3f60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
