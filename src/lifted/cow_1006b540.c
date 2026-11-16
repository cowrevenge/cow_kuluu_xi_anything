/* f_0x1006b540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1006b540(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self;
    edx = in_edx;
    esi = 0u;
L_1006b54d: ;
    if (rd8(eax) != 0x5cu)
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        esi = eax - self + 1u;
    }
    if ((uint8_t)edx == 0u) goto L_1006b55e;
    eax = eax + 1u;
    goto L_1006b54d;
L_1006b55e: ;
    if (arg1 == 0u) goto L_1006b57b;
    ecx = esi + self;
    esi = arg1 - (esi + self);
L_1006b56c: ;
    t1 = rd8(ecx);
    wr8(ecx + esi, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        ecx = ecx + 1u;
        edx = (edx & 0xffffff00u) | t1;
        goto L_1006b56c;
    }
    edx = (edx & 0xffffff00u) | t1;
    g->edx = edx;
    return arg1;
L_1006b57b: ;
    g->edx = edx;
    return esi + self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b540(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
