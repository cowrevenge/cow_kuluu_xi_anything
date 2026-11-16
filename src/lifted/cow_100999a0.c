/* f_0x100999a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100999a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 4u);
        goto L_100999ca;
    }
    if (rd32(COW_IMG(0x10487e9cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10487e9cu));
        edx = in_edx;
        goto L_100999ea;
    }
    eax = rd32(COW_IMG(0x10487e9cu));
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, eax, arg3 + 8u, 0);
    t2 = g->edx;
    wr32(COW_IMG(0x10487e9cu), 0u);
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_100999ca: ;
    if ((uint8_t)eax != 1u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10487ea0u)) == 0u)
        {
            eax = rd32(COW_IMG(0x10487ea0u));
            edx = in_edx;
        }
        else
        {
            eax = rd32(COW_IMG(0x10487ea0u));
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, eax, arg3 + 8u, 0);
            t4 = g->edx;
            wr32(COW_IMG(0x10487ea0u), 0u);
            eax = t3;
            edx = t4;
        }
    }
L_100999ea: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100999a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100999a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
