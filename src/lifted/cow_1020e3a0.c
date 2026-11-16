/* f_0x1020e3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020e3a0(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10664494u));
        edx = in_edx;
        goto L_1020e4b7;
    }
    eax = rd32(COW_IMG(0x10664494u));
    if ((uint32_t)(int16_t)arg1 - 3u > 0xeu)
    {
        edx = in_edx;
        goto L_1020e4b7;
    }
    t1 = rd32(COW_IMG(0x1020e4bcu) + rd8(COW_IMG(0x1020e4d4u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    edx = rd8(COW_IMG(0x1020e4d4u) + (uint32_t)(int16_t)arg1 - 3u);
    switch (t1 - RD)
    {
    case 0x1020e3d0u: goto L_1020e3d0;
    case 0x1020e3e9u: goto L_1020e3e9;
    case 0x1020e481u: goto L_1020e481;
    case 0x1020e499u: goto L_1020e499;
    case 0x1020e4aau: goto L_1020e4aa;
    case 0x1020e4b7u: goto L_1020e4b7;
    default: rt_fatal(g, COW_IMG(0x1020e3c9u), "switch");
    }
    return 0;
L_1020e3d0: ;
    if ((uint16_t)arg2 != 1u) goto L_1020e4b7;
    g->esp = sp0 - 4u;
    t24 = cow_call_regs(g, COW_IMG(0x1020e290u), eax, self, edx, 0, 1, 1u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_1020e3e9: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_1020e45e;
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_1020e40e;
    if ((uint32_t)(int16_t)arg2 != 3u) goto L_1020e4b7;
L_1020e3fb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385af0u));
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_1020e40e: ;
    g->ecx = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101076e0u), 1, eax + 0x5cu);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x10107690u), 2, eax + 0x5cu, self + 0x18u);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t12, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, eax + 0x5cu, 1u, 0u, 0u, 0u);
    t15 = g->edx;
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385af0u));
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t19 = g->edx;
    g->edx = t19;
    return t18;
L_1020e45e: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1020e476;
    }
    eax = rd32(self + 0x14u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
L_1020e476: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t22 = cow_fastcall(g, COW_IMG(0x1020e220u), self, edx, 0);
    t23 = g->edx;
    g->edx = t23;
    return t22;
L_1020e481: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1020e3fb;
    }
    eax = rd32(self + 0x14u);
    g->esp = sp0 - 4u;
    t6 = cow_call_regs(g, COW_IMG(0x1020e290u), eax, self, edx, 0, 1, 1u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_1020e499: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 4u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1020e4aa: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 5u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1020e4b7: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020e3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020e3a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
