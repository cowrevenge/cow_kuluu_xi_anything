/* f_0x1020d7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020d7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = rd32(COW_IMG(0x10664494u));
        goto L_1020d862;
    }
    edx = rd32(COW_IMG(0x10664494u));
    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        goto L_1020d862;
    }
    if ((uint32_t)(int16_t)rd16(self + 0x14u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x14u);
        goto L_1020d865;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x14u);
    zf = (uint32_t)(int16_t)rd16(self + 0x14u) == 0u;
    sf = (int16_t)rd16(self + 0x14u) < 0;
    if (!(zf || sf))
    {
        if ((int32_t)eax <= 2)
        {
            g->ecx = self;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x10108070u), 1, edx + 0x5cu);
            t1 = g->ecx;
            t2 = g->edx;
            t3 = (uint32_t)(int16_t)rd16(sp0 + 8u) << 4u;
            g->edx = t2;
            g->esp = sp0 - 8u;
            t4 = cow_cdecl(g, COW_IMG(0x10108040u), 2, edx + 0x5cu, t3);
            t5 = g->edx;
            g->edx = t5;
            g->esp = sp0 - 4u;
            t6 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t4, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, edx + 0x5cu, 1u, 0u, 0u, 0u);
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385b04u));
            t9 = g->edx;
            g->edx = t9;
            t10 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
    }
L_1020d862: ;
    g->edx = edx;
    return eax;
L_1020d865: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 4u > 3u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
        ecx = (uint32_t)(int16_t)rd16(sp0 + 8u);
        edx = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
        goto L_1020d8df;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 8u);
    ecx = (uint32_t)(int16_t)rd16(sp0 + 8u);
    edx = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
    t12 = rd32(COW_IMG(0x1020d8fcu) + edx * 4u);
    switch (t12 - RD)
    {
    case 0x1020d87cu: goto L_1020d87c;
    case 0x1020d883u: goto L_1020d883;
    case 0x1020d89du: goto L_1020d89d;
    case 0x1020d8b7u: goto L_1020d8b7;
    default: rt_fatal(g, COW_IMG(0x1020d875u), "switch");
    }
    return 0;
L_1020d87c: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(eax << 4u | 3u);
L_1020d8bc: ;
    t15 = rd32(COW_IMG(0x10663484u));
    wr8(t15 + 0x16u, 2u);
    wr8(t15 + 0x17u, (uint8_t)eax);
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f868u), 1u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_1020d883: ;
    wr32(sp0 + 8u, ecx << 4u);
    t14 = rd32(COW_IMG(0x106644ccu));
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1020d9e0u), eax, t14, edx);
L_1020d89d: ;
    wr32(sp0 + 8u, ecx << 4u);
    t13 = rd32(COW_IMG(0x106644d0u));
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1020dab0u), eax, t13, edx);
L_1020d8b7: ;
    eax = (eax & 0xffffff00u) | (uint8_t)(eax << 4u | 1u);
    goto L_1020d8bc;
L_1020d8df: ;
    wr32(sp0 + 8u, ecx << 4u);
    t18 = rd32(COW_IMG(0x106644c8u));
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1020d910u), eax, t18, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020d7f0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
