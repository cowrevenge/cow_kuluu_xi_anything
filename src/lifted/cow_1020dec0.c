/* f_0x1020dec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1020dec0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 0x14u) == 0u) goto L_1020df12;
    if ((int32_t)((uint32_t)(int16_t)arg1 + (uint32_t)(int16_t)rd16(self + (uint32_t)(int8_t)rd8(self + 0x16u) * 2u + 0x18u)) >= 0)
    {
        eax = (uint32_t)(int16_t)arg1 + (uint32_t)(int16_t)rd16(self + (uint32_t)(int8_t)rd8(self + 0x16u) * 2u + 0x18u);
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x16u);
        if ((int32_t)eax > 99)
        {
            eax = 0x63u;
        }
    }
    else
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x16u);
        eax = 0u;
    }
    if ((uint8_t)edx != 0u) goto L_1020df02;
    if ((int32_t)eax > (int16_t)rd16(self + 0x1au))
    {
        wr16(self + 0x1au, (uint16_t)eax);
    }
    wr16(self + 0x18u, (uint16_t)eax);
    return;
L_1020df02: ;
    if ((int32_t)eax < (int16_t)rd16(self + 0x18u))
    {
        wr16(self + 0x18u, (uint16_t)eax);
    }
    wr16(self + 0x1au, (uint16_t)eax);
L_1020df12: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020dec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1020dec0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
