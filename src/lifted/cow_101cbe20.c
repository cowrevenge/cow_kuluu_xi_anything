/* f_0x101cbe20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101cbe20(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_101cbe49;
    }
    eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
        goto L_101cbe49;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
    return (arg1 & 0xffffff00u) | rd32(eax + 0x16cu) == arg1;
L_101cbe49: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cbe20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cbe20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
