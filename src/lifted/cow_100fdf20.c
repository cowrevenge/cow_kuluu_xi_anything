/* f_0x100fdf20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_100fdf20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg2 == 0u)
    {
        eax = in_eax;
        goto L_100fdf70;
    }
    if ((uint8_t)arg2 >= 0xcu)
    {
        eax = in_eax;
        goto L_100fdf70;
    }
    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_100fdf70;
    }
    g->edx = arg1;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x100fde50u), in_eax, g->ecx, g->edx, 1, 1, arg1);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_100fdf70;
    }
    eax = t1;
    edx = t2;
    if (rd8(edx) == (uint8_t)arg2)
    {
        eax = (eax & 0xffffff00u) | 1u;
        goto L_100fdf72;
    }
    eax = (eax & 0xffffff00u) | 1u;
    ecx = 1u;
    edx = edx + 0xcu;
L_100fdf55: ;
    if (rd32(edx) != rd32(edx - 8u))
    {
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 1u);
    }
    if (rd8(edx - 4u) == (uint8_t)arg2) goto L_100fdf72;
    if ((int32_t)(ecx + 1u) < 12)
    {
        ecx = ecx + 1u;
        edx = edx + 8u;
        goto L_100fdf55;
    }
L_100fdf70: ;
    eax = eax & 0xffffff00u;
L_100fdf72: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdf20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fdf20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
