/* f_0x100a2f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100a2f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

L_100a2f0c: ;
    if (self + 0x70u >= self + 0xf0u) goto L_100a2f51;
    edx = self + 0x70u;
    ebx = 0u;
L_100a2f15: ;
    if (rd8(edx) != 0u)
    {
        if (rd32(edx + 8u) != 0u)
        {
            if (rd32(edx + 0xcu) != 0u)
            {
                if (rd32(edx + 0x18u) == rd32(self + 0x68u))
                {
                    eax = rd32(self + 0x68u);
                    t1 = eax + rd32(edx + 0x1cu);
                    wr32(self + 0x68u, t1);
                    edi = edx;
                    eax = 0u;
                    ecx = 8u;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    ebx = ebx + 1u;
                }
            }
        }
    }
    if (edx + 0x20u < self + 0xf0u)
    {
        edx = edx + 0x20u;
        goto L_100a2f15;
    }
    if ((int32_t)ebx > 0) goto L_100a2f0c;
L_100a2f51: ;
    if (rd32(self + 0x48u) != 0u)
    {
        eax = rd32(self + 0x48u);
        t2 = rd32(self + 0x68u);
        wr32(eax + 0xcu, t2);
    }
    return (rd32(self + 0x60u) & 0xffffff00u) | (int32_t)rd32(self + 0x60u) <= (int32_t)rd32(self + 0x68u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
