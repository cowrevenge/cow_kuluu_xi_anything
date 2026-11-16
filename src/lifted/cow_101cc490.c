/* f_0x101cc490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101cc490(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd16(COW_IMG(0x10485f7au)) == 0u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        goto L_101cc4b4;
    }
    eax = (in_eax & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u) == 0u)
    {
        eax = (uint32_t)(int16_t)eax;
        goto L_101cc4b4;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)eax * 4u);
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x1009aaf0u), ecx, 0);
    t2 = g->edx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | (uint8_t)t1 == 1u;
L_101cc4b4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc490(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
