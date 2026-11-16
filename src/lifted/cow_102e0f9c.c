/* f_0x102e0f9c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e0f9c(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        goto L_102e0fb0;
    }
    if (rd32(self + 4u) == 0u) goto L_102e0fb6;
    eax = rd32(self + 4u);
L_102e0fb0: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(eax) + 0x28u), rd32(eax), 1, eax);
L_102e0fb6: ;
    if (rd32(self + 4u) == 0u)
    {
        edx = rd32(self + 4u);
    }
    else
    {
        edx = rd32(self + 4u);
        if (rd32(self + 8u) != 0u)
        {
            ecx = rd32(self + 8u);
            if (rd32(self + 0xcu) != 0u)
            {
                eax = rd32(self + 0xcu);
                if (!(rd8(self) & 1u))
                {
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(rd32(eax) + 0x70u), ecx, 6, eax, ecx, 0u, 0u, edx, 0u);
                    t1 = g->edx;
                    edx = t1;
                }
            }
        }
    }
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t2 = g->edx;
        wr32(self + 8u, 0u);
        edx = t2;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
        t3 = g->edx;
        wr32(self + 0xcu, 0u);
        edx = t3;
    }
    wr32(self + 4u, 0u);
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e0f9c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e0f9c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
