/* f_0x101e6c60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e6c60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
    t1 = g->edx;
    eax = arg1;
    edx = t1;
    esi = 6u;
L_101e6c80: ;
    t2 = rd8(COW_IMG(0x10663564u) + eax - arg1);
    wr8(eax, (uint8_t)t2);
    if (esi != 1u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t2;
        esi = esi - 1u;
        goto L_101e6c80;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e6c60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
