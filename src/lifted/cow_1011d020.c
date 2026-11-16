/* f_0x1011d020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011d020(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd16(arg1) == 0u)
    {
        eax = 0u;
        edx = arg1;
        goto L_1011d048;
    }
    eax = 0u;
    ecx = (self & 0xffff0000u) | rd16(arg1);
    edx = arg1;
L_1011d02e: ;
    if (rd16(edx + 2u) != 0u)
    {
        eax = eax + (uint32_t)(int8_t)rd8(COW_IMG(0x1036c428u) + (uint16_t)ecx);
        ecx = ((uint32_t)(int8_t)rd8(COW_IMG(0x1036c428u) + (uint16_t)ecx) & 0xffff0000u) | rd16(edx + 2u);
        edx = edx + 2u;
        goto L_1011d02e;
    }
    eax = eax + (uint32_t)(int8_t)rd8(COW_IMG(0x1036c428u) + (uint16_t)ecx);
    edx = edx + 2u;
L_1011d048: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011d020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011d020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
