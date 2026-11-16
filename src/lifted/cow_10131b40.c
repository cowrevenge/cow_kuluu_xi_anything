/* f_0x10131b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10131b40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_10131b5a;
    }
    if (rd32(COW_IMG(0x10663740u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10663740u));
        edx = in_edx;
        goto L_10131b5a;
    }
    eax = rd32(COW_IMG(0x10663740u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        goto L_10131b5a;
    }
    return (eax & 0xffffff00u) | 1u;
L_10131b5a: ;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101332d0u), self, 0);
    return t1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10131b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
