/* f_0x101e3460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e3460(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10663520u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663520u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663520u));
        if (rd32(eax + 8u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            wr8(eax + 0x64u, 0u);
            if (rd32(COW_IMG(0x105781f8u)) == 0u)
            {
                eax = rd32(COW_IMG(0x105781f8u));
                edx = in_edx;
            }
            else
            {
                eax = rd32(COW_IMG(0x105781f8u));
                g->eax = eax;
                g->edx = in_edx;
                g->esp = sp0;
                t1 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x20u);
                t2 = g->edx;
                eax = t1;
                edx = t2;
            }
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e3460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
