/* f_0x100fedc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100fedc0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 == 0xffffu)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x200u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x201u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x202u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x203u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x108cu)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x108du)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x1525u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((uint16_t)arg1 == 0x1526u)
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)arg1;
        goto L_100fee11;
    }
    if ((int32_t)arg2 < 4)
    {
        eax = arg2;
        goto L_100fee11;
    }
    if ((int32_t)arg2 > 5)
    {
        eax = arg2;
        goto L_100fee11;
    }
    return (arg2 & 0xffffff00u) | 1u;
L_100fee11: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fedc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fedc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
