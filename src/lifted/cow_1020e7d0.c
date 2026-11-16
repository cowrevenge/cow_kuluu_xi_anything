/* f_0x1020e7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_1020e7d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    t1 = cow_cdecl(g, COW_IMG(0x1020e790u), 1, arg1);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        goto L_1020e7e4;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_1020e7e4: ;
    if ((uint8_t)arg2 != 0xffu)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_1020e7f0;
    }
    return (eax & 0xffffff00u) | 1u;
L_1020e7f0: ;
    return (eax & 0xffffff00u) | (uint8_t)ecx <= rd8(eax + 2u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020e7d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
