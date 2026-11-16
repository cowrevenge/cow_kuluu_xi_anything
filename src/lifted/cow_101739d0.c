/* f_0x101739d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101739d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)rd32(self + 0x10u) <= 0)
    {
        eax = rd32(self + 0x10u);
        edx = in_edx;
    }
    else
    {
        eax = arg1 + 8u;
        edx = 0u;
        esi = 0u;
L_101739e4: ;
        t1 = rd32(edx + rd32(self + 0xcu));
        wr32(eax - 8u, t1);
        t2 = rd32(edx + rd32(self + 0xcu) + 4u);
        wr32(eax - 4u, t2);
        t3 = rd32(edx + rd32(self + 0xcu) + 8u);
        wr32(eax + 4u, 0x3f800000u);
        wr32(eax, t3);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(self + 0x10u))
        {
            eax = eax + 0x10u;
            edx = edx + 0x40u;
            esi = esi + 1u;
            goto L_101739e4;
        }
        eax = eax + 0x10u;
        edx = edx + 0x40u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101739d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101739d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
