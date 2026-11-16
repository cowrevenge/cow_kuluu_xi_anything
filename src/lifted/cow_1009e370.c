/* f_0x1009e370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_1009e370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_1009e37f;
    return 0u;
L_1009e37f: ;
    if (arg2 == 0u)
    {
        eax = 0u;
        goto L_1009e3a5;
    }
    if (rd8(arg2 + 0x200u) != 0u)
    {
        eax = rd8(arg2 + 0x200u);
        goto L_1009e393;
    }
    eax = rd8(arg2 + 0x200u);
    return eax;
L_1009e393: ;
    if (rd8(arg2 + 0x201u) == 0u) goto L_1009e3a1;
    edx = (in_edx & 0xffffff00u) | rd8(arg2 + 0x201u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e3a1: ;
    eax = (eax & 0xffff0000u) | (uint8_t)eax;
L_1009e3a5: ;
    if (arg3 == 0u)
    {
        ecx = arg2;
        edx = arg3;
        goto L_1009e3e3;
    }
    if (rd8(arg3 + 0x200u) != 0u)
    {
        ecx = (arg2 & 0xffffff00u) | rd8(arg3 + 0x200u);
        goto L_1009e3bb;
    }
    g->edx = arg3;
    return eax & 0xffffff00u;
L_1009e3bb: ;
    if (rd8(arg3 + 0x201u) == 0u) goto L_1009e3cb;
    g->edx = arg3;
    return eax & 0xffffff00u;
L_1009e3cb: ;
    if ((uint16_t)eax == 0u)
    {
        edx = arg3;
        goto L_1009e3de;
    }
    if ((uint16_t)eax == (uint8_t)ecx)
    {
        edx = (arg3 & 0xffff0000u) | (uint8_t)ecx;
        goto L_1009e3de;
    }
    edx = (arg3 & 0xffff0000u) | (uint8_t)ecx;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e3de: ;
    eax = (eax & 0xffff0000u) | (uint8_t)ecx;
L_1009e3e3: ;
    if ((uint16_t)eax != 0u) goto L_1009e3ec;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1009e3ec: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint16_t)eax != rd8(arg1 + 0x200u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009e370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009e370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
