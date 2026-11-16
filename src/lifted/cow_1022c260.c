/* f_0x1022c260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022c260(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (!(rd8(COW_IMG(0x10485824u)) & 1u))
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1022c27d;
    }
    if (rd8(COW_IMG(0x10485640u)) == 0x10u)
    {
        eax = (in_eax & 0xffffff00u) | 0x10u;
        edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
        goto L_1022c289;
    }
    edx = (in_edx & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    if (rd8(COW_IMG(0x10485642u)) == 0x10u)
    {
        eax = (in_eax & 0xffffff00u) | 0x10u;
        goto L_1022c289;
    }
    eax = (in_eax & 0xffffff00u) | 0x10u;
L_1022c27d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 3u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_1022c289: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022c260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022c260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
