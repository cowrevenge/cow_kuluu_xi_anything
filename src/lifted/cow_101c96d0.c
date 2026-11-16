/* f_0x101c96d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101c96d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 0u) goto L_101c96dd;
    return 0u;
L_101c96dd: ;
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->ecx;
    if (rd8(arg2) == 0u)
    {
        eax = 0u;
        ebx = rd32(sp0 + 4u);
        goto L_101c976f;
    }
    eax = 0u;
    ecx = (t2 & 0xffffff00u) | rd8(arg2);
    ebx = rd32(sp0 + 4u);
    edi = t1;
L_101c96f7: ;
    if ((int16_t)ebx <= 0)
    {
        sf = (int16_t)ebx < 0;
        goto L_101c9772;
    }
    if ((int32_t)eax <= 0)
    {
        edx = 0u;
    }
    else
    {
        edx = (uint32_t)(int8_t)rd8(arg2 + eax - 1u);
    }
    t3 = rd8(arg2 + eax);
    wr8(sp0 + 4u, (uint8_t)t3);
    if ((uint8_t)t3 == 0x85u)
    {
        ecx = (ecx & 0xffffff00u) | t3;
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | t3;
        if ((uint8_t)edx != 0x85u) goto L_101c9738;
        if ((uint8_t)ecx != 0xdau) goto L_101c9729;
        ecx = rd32(rd32(edi) + 0x17cu);
L_101c9756: ;
        if (ecx != 0u)
        {
            ebx = ebx + ((edx & 0xffff0000u) | (uint16_t)(rd16(ecx + 0x20u) - rd16(ecx + 0x22u))) + 1u;
        }
    }
L_101c9766: ;
    if (rd8(arg2 + eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg2 + eax + 1u);
        eax = eax + 1u;
        goto L_101c96f7;
    }
    eax = eax + 1u;
L_101c976f: ;
    sf = (int16_t)ebx < 0;
L_101c9772: ;
    if (sf)
    {
        eax = eax - 1u;
    }
    return eax;
L_101c9729: ;
    if ((uint8_t)ecx != 0xc8u) goto L_101c9738;
    ecx = rd32(rd32(edi) + 0x180u);
    edx = rd32(edi);
    goto L_101c9756;
L_101c9738: ;
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
        goto L_101c9766;
    }
    ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    if ((int32_t)ecx > 139) goto L_101c9766;
    ecx = rd32(ecx * 4u + rd32(edi));
    edx = rd32(edi);
    goto L_101c9756;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c96d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c96d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
