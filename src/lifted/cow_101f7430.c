/* f_0x101f7430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101f7430(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(COW_IMG(0x103821f5u)) == 0u)
    {
        eax = 0u;
        goto L_101f7479;
    }
    eax = 0u;
    ecx = COW_IMG(0x103821f0u);
    ebx = in_ebx;
L_101f7450: ;
    if ((uint8_t)arg3 == 0u) goto L_101f745b;
    if (rd8(ecx + 3u) == 0u)
    {
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 3u);
        goto L_101f746e;
    }
L_101f745b: ;
    if ((uint32_t)(int16_t)rd16(ecx) != arg1)
    {
        ebx = (uint32_t)(int16_t)rd16(ecx);
        goto L_101f746e;
    }
    if ((uint8_t)arg3 != 0u) goto L_101f747c;
    if ((uint32_t)(int8_t)rd8(ecx + 2u) == arg2) goto L_101f747c;
    ebx = (uint32_t)(int8_t)rd8(ecx + 2u);
L_101f746e: ;
    if (rd8(ecx + 0x13u) != 0u)
    {
        eax = eax + 1u;
        ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x13u);
        ecx = ecx + 0xeu;
        goto L_101f7450;
    }
    eax = eax + 1u;
L_101f7479: ;
    eax = 0xffffffffu;
L_101f747c: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
