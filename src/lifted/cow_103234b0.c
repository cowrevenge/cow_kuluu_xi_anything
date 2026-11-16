/* f_0x103234b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103234b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = self;
    edx = arg1;
L_103234b6: ;
    if ((int8_t)rd8(edx) < 65)
    {
        ecx = (ecx & 0xffffff00u) | rd8(edx);
        edx = edx + 1u;
        goto L_103234c3;
    }
    ecx = (ecx & 0xffffff00u) | rd8(edx);
    edx = edx + 1u;
    if ((int8_t)ecx <= 90) goto L_103234cd;
L_103234c3: ;
    if ((int8_t)ecx < 97) goto L_103234d0;
    if ((int8_t)ecx > 122) goto L_103234d0;
L_103234cd: ;
    eax = eax + 1u;
    goto L_103234b6;
L_103234d0: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103234b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103234b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
