/* f_0x10320960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10320960(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((arg1 & 3u) != 0u) goto L_103209ac;
    ecx = arg2;
    edx = arg1;
L_10320970: ;
    if ((uint8_t)rd32(edx) != rd8(ecx))
    {
        eax = rd32(edx);
        cf = (uint8_t)rd32(edx) < rd8(ecx);
        goto L_103209a4;
    }
    eax = rd32(edx);
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 1u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 1u);
        goto L_103209a4;
    }
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103209a0;
    eax = (eax & 0xffff00ffu) | (uint8_t)(eax >> 8u) << 8u;
    if ((uint8_t)(eax >> 0x10u) != rd8(ecx + 2u))
    {
        cf = (uint8_t)(eax >> 0x10u) < rd8(ecx + 2u);
        eax = eax >> 0x10u;
        goto L_103209a4;
    }
    eax = eax >> 0x10u;
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 3u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 3u);
        goto L_103209a4;
    }
    if ((uint8_t)(eax >> 8u) != 0u)
    {
        ecx = ecx + 4u;
        edx = edx + 4u;
        goto L_10320970;
    }
    edx = edx + 4u;
L_103209a0: ;
    g->edx = edx;
    return 0u;
L_103209a4: ;
    g->edx = edx;
    return (-cf << 1u) + 1u;
L_103209ac: ;
    if (!(arg1 & 1u))
    {
        eax = in_eax;
        ecx = arg2;
        edx = arg1;
        goto L_103209c8;
    }
    if (rd8(arg1) != rd8(arg2))
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg1);
        edx = arg1 + 1u;
        cf = rd8(arg1) < rd8(arg2);
        goto L_103209a4;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    if ((uint8_t)eax == 0u)
    {
        edx = arg1 + 1u;
        goto L_103209a0;
    }
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    if ((arg1 + 1u & 2u) == 0u)
    {
        ecx = arg2 + 1u;
        edx = arg1 + 1u;
        goto L_10320970;
    }
    ecx = arg2 + 1u;
    edx = arg1 + 1u;
L_103209c8: ;
    if ((uint8_t)rd16(edx) != rd8(ecx))
    {
        eax = (eax & 0xffff0000u) | rd16(edx);
        cf = (uint8_t)rd16(edx) < rd8(ecx);
        edx = edx + 2u;
        goto L_103209a4;
    }
    eax = (eax & 0xffff0000u) | rd16(edx);
    edx = edx + 2u;
    if ((uint8_t)eax == 0u) goto L_103209a0;
    eax = (eax & 0xffffff00u) | (uint8_t)eax;
    if ((uint8_t)(eax >> 8u) != rd8(ecx + 1u))
    {
        cf = (uint8_t)(eax >> 8u) < rd8(ecx + 1u);
        goto L_103209a4;
    }
    if ((uint8_t)(eax >> 8u) == 0u) goto L_103209a0;
    ecx = ecx + 2u;
    goto L_10320970;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10320960(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
