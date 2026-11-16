/* f_0x1018f7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018f7c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(sp0 + 4u) > 0x400u)
    {
        eax = rd32(sp0 + 4u);
        goto L_1018f84c;
    }
    eax = rd32(sp0 + 4u);
    zf = rd32(sp0 + 4u) == 0x400u;
    if (zf)
    {
        edx = in_edx;
        goto L_1018f841;
    }
    if (eax == 4u) goto L_1018f824;
    if (eax != 8u)
    {
        edx = in_edx;
        goto L_1018f848;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x10377cbcu));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1018f813;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101b5c70u), rd32(self + 0x14u), 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        goto L_1018f813;
    }
    eax = t3;
    edx = t4;
    wr8(self + 0x2200u, 1u);
    wr32(sp0 + 4u, COW_IMG(0x10377cbcu));
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
L_1018f813: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x10377cbcu));
    t6 = g->edx;
    eax = t5;
    edx = t6;
L_1018f885: ;
    if ((uint8_t)eax == 0u) goto L_1018f848;
    wr8(self + 0x2200u, 0u);
    wr32(sp0 + 4u, COW_IMG(0x10377cbcu));
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
L_1018f824: ;
    if (rd8(self + 0x2200u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x2200u);
        edx = in_edx;
        goto L_1018f848;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1018f841: ;
    wr8(self + 0x2200u, 0u);
L_1018f848: ;
    g->edx = edx;
    return eax;
L_1018f84c: ;
    if (eax == 0x800u) goto L_1018f87d;
    if (eax != 0x2000u)
    {
        edx = in_edx;
        goto L_1018f848;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t11 = g->edx;
    wr8(self + 0x2200u, 0u);
    g->edx = t11;
    return t10;
L_1018f87d: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x101b5c70u), rd32(self + 0x14u), 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    goto L_1018f885;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018f7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018f7c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
