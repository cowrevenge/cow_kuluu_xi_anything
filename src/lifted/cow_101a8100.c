/* f_0x101a8100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a8100(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xbfu);
    t2 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101a8133;
    }
    eax = t1;
    edx = t2;
    if ((uint8_t)arg1 != 1u) goto L_101a8147;
    if (eax != 0u) goto L_101a8147;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 1u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_101a8133: ;
    if (eax == 1u)
    {
        g->edx = edx;
        g->esp = sp0;
        t5 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 0u);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
L_101a8147: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8100(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8100(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
