/* f_0x101c9550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c9550(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_101c955d;
    }
    return 0u;
L_101c955d: ;
    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        goto L_101c956d;
    }
    eax = t1;
    return eax;
L_101c956d: ;
    if (rd8(esi) == 0u)
    {
        edi = 0u;
        goto L_101c95e9;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi);
    ebx = esi;
    edi = 0u;
L_101c9579: ;
    if (ebx == esi)
    {
        edx = 0u;
    }
    else
    {
        edx = (uint32_t)(int8_t)rd8(esi - 1u);
    }
    wr8(sp0 + 4u, (uint8_t)ecx);
    if ((uint8_t)ecx != 0x85u)
    {
        if ((uint8_t)edx != 0x85u) goto L_101c95b1;
        if ((uint8_t)ecx != 0xdau) goto L_101c95a2;
        ecx = rd32(rd32(eax) + 0x17cu);
L_101c95cf: ;
        if (ecx != 0u)
        {
            edi = edi + (uint32_t)(int16_t)rd16(ecx + 0x22u) - (uint32_t)(int16_t)rd16(ecx + 0x20u) - 1u;
            ecx = (uint32_t)(int16_t)rd16(ecx + 0x20u);
        }
    }
L_101c95e1: ;
    if (rd8(esi + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        goto L_101c9579;
    }
L_101c95e9: ;
    return edi;
L_101c95a2: ;
    if ((uint8_t)ecx != 0xc8u) goto L_101c95b1;
    ecx = rd32(rd32(eax) + 0x180u);
    goto L_101c95cf;
L_101c95b1: ;
    if ((int32_t)((uint8_t)rd32(sp0 + 4u) - 0x20u) < 0)
    {
        ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
        goto L_101c95e1;
    }
    ecx = (uint8_t)rd32(sp0 + 4u) - 0x20u;
    if ((int32_t)ecx > 139) goto L_101c95e1;
    ecx = rd32(ecx * 4u + rd32(eax));
    goto L_101c95cf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c9550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c9550(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
