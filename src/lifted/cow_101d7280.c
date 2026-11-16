/* f_0x101d7280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d7280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)rd32(COW_IMG(0x1037ed68u)) == 0u) goto L_101d72a5;
    eax = rd32(COW_IMG(0x1037ed68u));
    ecx = 0u;
L_101d7290: ;
    if ((uint32_t)(int16_t)eax == arg1) goto L_101d72a8;
    eax = (uint32_t)(int16_t)eax;
    if (rd16(COW_IMG(0x1037ed6cu) + ecx * 4u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1037ed6cu) + ecx * 4u);
        ecx = ecx + 1u;
        goto L_101d7290;
    }
L_101d72a5: ;
    return 0u;
L_101d72a8: ;
    return (uint32_t)(int16_t)rd16(COW_IMG(0x1037ed6au) + ecx * 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d7280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
