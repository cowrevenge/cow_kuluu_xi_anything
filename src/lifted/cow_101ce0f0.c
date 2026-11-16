/* f_0x101ce0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ce0f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(self + 0x2du, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
        if ((int32_t)rd32(self + 0x6cu) > 0)
        {
            eax = rd32(self + 0x6cu);
            esi = self + 0x70u;
            edi = 0u;
L_101ce10e: ;
            if (rd32(esi) != 0u)
            {
                ecx = rd32(esi);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x101ce0f0u), ecx, 0);
                t3 = g->edx;
                wr32(esi, 0u);
                edx = t3;
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                eax = rd32(self + 0x6cu);
                esi = esi + 4u;
                edi = edi + 1u;
                goto L_101ce10e;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ce0f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
