/* f_0x101920c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101920c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
        goto L_101921a9;
    }
    eax = rd32(sp0 + 4u);
    zf = rd32(sp0 + 4u) == 0x400u;
    if (zf)
    {
        edx = in_edx;
        goto L_101921c8;
    }
    if (eax == 4u) goto L_1019214d;
    if (eax != 8u)
    {
        edx = in_edx;
        goto L_101921cc;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798a4u));
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1019211f;
    }
    edx = t2;
    g->edx = edx;
    t3 = rd32(self + 0x18u);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101b5c70u), rd32(t3 + 0x18u), 0);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        edx = t5;
        goto L_1019211f;
    }
    eax = t4;
    edx = t5;
    wr8(self + 0x20u, 1u);
    wr32(sp0 + 4u, COW_IMG(0x103798a4u));
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
L_1019211f: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x103798a4u));
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101921cc;
    }
    eax = t6;
    edx = t7;
    wr8(self + 0x20u, 0u);
    wr32(sp0 + 4u, COW_IMG(0x103798a4u));
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1015e910u), eax, COW_IMG(0x10621838u), edx);
L_1019214d: ;
    if (rd8(self + 0x20u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x20u);
        edx = in_edx;
        goto L_101921cc;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798a4u), 1u, 0u);
    t8 = g->edx;
    t9 = rd32(self + 0x18u);
    wr8(self + 0x20u, 0u);
    g->edx = t8;
    t10 = cow_thiscall(g, COW_IMG(0x101911e0u), t9, 0);
    t11 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_1019218d;
    }
    eax = t10;
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798f4u), 1u, eax);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_1019218d: ;
    if (eax != 2u) goto L_101921cc;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10379908u), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_101921a9: ;
    if (eax != 0x2000u)
    {
        edx = in_edx;
        goto L_101921cc;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), in_edx, 1, 0);
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    t18 = g->edx;
    eax = t17;
    edx = t18;
L_101921c8: ;
    wr8(self + 0x20u, 0u);
L_101921cc: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101920c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101920c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
