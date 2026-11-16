/* f_0x10218560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10218560(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        goto L_102185ba;
    }
    eax = rd32(COW_IMG(0x104e1d4cu));
    if (rd8(eax + 0x4eu) == 0u) goto L_102185ba;
    if (rd8(eax + 0x4du) == 0u) goto L_10218580;
    eax = (eax & 0xffffff00u) | rd8(eax + 0x4du);
    if ((uint8_t)eax == 1u) goto L_10218580;
    if ((uint8_t)eax != 2u) goto L_102185ba;
L_10218580: ;
    if ((int32_t)rd32(arg1) < (int16_t)rd16(self + 0x52u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x52u);
        goto L_102185ba;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x52u);
    edx = rd32(arg1);
    if ((int32_t)edx >= (int32_t)(eax + rd16(self + 0x5au))) goto L_102185ba;
    if ((int32_t)rd32(arg1 + 4u) < (int16_t)rd16(self + 0x54u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x54u);
        goto L_102185ba;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x54u);
    edx = rd32(arg1 + 4u);
    return (int32_t)edx < (int32_t)(eax + rd16(self + 0x5cu));
L_102185ba: ;
    return eax & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10218560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10218560(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
