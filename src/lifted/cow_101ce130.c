/* f_0x101ce130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ce130(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = rd16(self + 0xcu);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101cebf0u), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ebp = t1;
    }
    else
    {
        edx = t3;
        ebp = t1;
        if ((int32_t)rd32(self + 0x6cu) > 0)
        {
            ebx = 0u;
            esi = self + 0x70u;
L_101ce151: ;
            if (rd32(esi) != 0u)
            {
                ecx = rd32(esi);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t4 = cow_thiscall(g, COW_IMG(0x101ce130u), ecx, 0);
                t5 = g->edx;
                edx = t5;
                ebp = ebp + t4;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x6cu))
            {
                ebx = ebx + 1u;
                esi = esi + 4u;
                goto L_101ce151;
            }
        }
    }
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ce130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ce130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
