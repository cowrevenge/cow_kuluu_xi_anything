/* f_0x101088c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101088c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(self + 8u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10108952;
    }
    eax = rd32(self + 4u);
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_1010890d;
    }
    edx = in_edx;
L_101088d2: ;
    if (rd16(eax + 8u) == 0u)
    {
        edx = (edx & 0xffff0000u) | rd16(eax + 8u);
        goto L_1010890d;
    }
    edx = (edx & 0xffff0000u) | rd16(eax + 8u);
    if (rd16(self + 8u) <= (uint16_t)edx) goto L_1010890d;
    wr32(rd32(self) + 4u, eax);
    wr32(rd32(self + 4u), rd32(self));
    t1 = rd32(self + 4u);
    wr32(self, t1);
    t2 = rd32(t1 + 4u);
    t3 = rd32(self);
    wr32(self + 4u, t2);
    wr32(t3 + 4u, self);
    if (rd32(self + 4u) == 0u)
    {
        edx = t3;
        goto L_1010890d;
    }
    eax = rd32(self + 4u);
    edx = t3;
    wr32(eax, self);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_101088d2;
    }
L_1010890d: ;
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        goto L_10108989;
    }
    eax = rd32(self);
L_10108913: ;
    if (rd32(eax) == 0u) goto L_10108989;
    if (rd16(eax + 8u) == 0u) goto L_10108927;
    edx = (edx & 0xffff0000u) | rd16(eax + 8u);
    if (rd16(self + 8u) >= (uint16_t)edx) goto L_10108989;
L_10108927: ;
    t4 = rd32(self + 4u);
    wr32(eax + 4u, t4);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        wr32(eax, rd32(self));
    }
    t5 = rd32(self);
    wr32(self + 4u, t5);
    t6 = rd32(t5);
    wr32(self, t6);
    wr32(t6 + 4u, self);
    wr32(rd32(self + 4u), self);
    if (rd32(self) != 0u)
    {
        eax = rd32(self);
        edx = t5;
        goto L_10108913;
    }
    eax = rd32(self);
    edx = t5;
    g->edx = edx;
    return eax;
L_10108952: ;
    if (eax == 0u)
    {
        edx = in_edx;
        goto L_10108989;
    }
    edx = in_edx;
L_10108956: ;
    if (rd16(eax + 8u) == 0u) goto L_10108989;
    wr32(rd32(self) + 4u, eax);
    wr32(rd32(self + 4u), rd32(self));
    t7 = rd32(self + 4u);
    wr32(self, t7);
    t8 = rd32(t7 + 4u);
    t9 = rd32(self);
    wr32(self + 4u, t8);
    wr32(t9 + 4u, self);
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        edx = t9;
        goto L_10108989;
    }
    eax = rd32(self + 4u);
    edx = t9;
    wr32(eax, self);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
        goto L_10108956;
    }
    eax = rd32(self + 4u);
L_10108989: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101088c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101088c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
