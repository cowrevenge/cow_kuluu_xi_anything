/* f_0x10007830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=3 */
uint32_t cow_fn_10007830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg1) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        goto L_1000784e;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    ecx = 0u;
L_10007841: ;
    if ((uint8_t)eax == (uint8_t)arg3) goto L_10007855;
    if (rd8(arg1 + ecx * 2u + 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx * 2u + 2u);
        ecx = ecx + 1u;
        goto L_10007841;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx * 2u + 2u);
L_1000784e: ;
    return (eax & 0xffff0000u) | (uint16_t)arg2;
L_10007855: ;
    return (eax & 0xffff0000u) | rd8(arg1 + ecx * 2u + 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10007830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10007830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
