/* f_0x1003de10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1003de10(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = self;
L_1003de16: ;
    if ((uint8_t)rd32(eax) == 0u)
    {
        edx = rd32(eax);
        goto L_1003de38;
    }
    edx = rd32(eax);
    if (eax + (edx >> 8u & 0x1fu) * 4u == 0u)
    {
        eax = eax + (edx >> 8u & 0x1fu) * 4u;
        edx = edx >> 8u & 0x1fu;
        goto L_1003de3a;
    }
    eax = eax + (edx >> 8u & 0x1fu) * 4u;
    if ((uint8_t)rd32(eax) != arg1) goto L_1003de16;
    edx = (uint8_t)rd32(eax);
    g->edx = edx;
    return eax;
L_1003de38: ;
    eax = 0u;
L_1003de3a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003de10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003de10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
