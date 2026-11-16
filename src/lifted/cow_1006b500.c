/* f_0x1006b500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006b500(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self, 0u);
    eax = arg1;
    edx = in_edx;
L_1006b50c: ;
    t1 = rd8(eax);
    wr8(eax + self - arg1, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t1;
        goto L_1006b50c;
    }
    eax = eax + 1u;
    edx = (edx & 0xffffff00u) | t1;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1006b630u), eax, self, g->edx, 1, 0);
    t3 = g->edx;
    g->edx = t3;
    return t2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006b500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006b500(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
