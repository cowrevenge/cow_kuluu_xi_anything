/* f_0x100a0590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a0590(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xf1u, 0u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100a05d9;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr16(eax + 4u, (uint16_t)arg1);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 8u, 0u);
    eax = COW_IMG(0x10485a30u);
L_100a05c1: ;
    if (rd16(eax) == (uint16_t)arg1)
    {
        wr16(eax, 0xffffu);
    }
    if ((int32_t)(eax + 2u) < (int32_t)COW_IMG(0x10485a70u))
    {
        eax = eax + 2u;
        goto L_100a05c1;
    }
    eax = eax + 2u;
    return (eax & 0xffffff00u) | 1u;
L_100a05d9: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0590(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
