/* f_0x10133a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10133a40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 0x1ffu) == 8u)
    {
        eax = arg1;
        ecx = (self & 0xffffff00u) | rd8(arg1 + 0x1ffu);
        edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
        goto L_10133a70;
    }
    ecx = (self & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    edx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    if ((uint8_t)ecx == 9u)
    {
        eax = arg1;
        goto L_10133a70;
    }
    if (rd8(edx + 0x1ffu) == 8u)
    {
        eax = (arg1 & 0xffffff00u) | rd8(edx + 0x1ffu);
        goto L_10133a70;
    }
    eax = (arg1 & 0xffffff00u) | rd8(edx + 0x1ffu);
    if ((uint8_t)eax != 9u) goto L_10133a7b;
L_10133a70: ;
    if (rd8(edx + 0x1ffu) == (uint8_t)ecx) goto L_10133a7b;
    return (eax & 0xffffff00u) | 1u;
L_10133a7b: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
