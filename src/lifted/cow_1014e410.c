/* f_0x1014e410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014e410(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int16_t)rd16(rd32(self + 8u) + 0x56u) > 0)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1014e4fe;
    }
    ecx = rd32(self + 8u);
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        edi = (in_edi & 0xffff0000u) | rd16(self + 0x30u);
        goto L_1014e4f2;
    }
    edi = (in_edi & 0xffff0000u) | rd16(self + 0x30u);
    t1 = rd32(COW_IMG(0x1014e504u) + rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t1 - RD)
    {
    case 0x1014e444u: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e444;
    case 0x1014e45eu: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e45e;
    case 0x1014e47eu: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e47e;
    case 0x1014e48du: goto L_1014e48d;
    case 0x1014e49cu: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e49c;
    case 0x1014e4abu: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e4ab;
    case 0x1014e4bau: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e4ba;
    case 0x1014e4d0u: edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e4d0;
    case 0x1014e4f2u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = rd8(COW_IMG(0x1014e528u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1014e4f2;
    default: rt_fatal(g, COW_IMG(0x1014e43du), "switch");
    }
    return 0;
L_1014e444: ;
    wr16(self + 0x30u, (uint16_t)((((uint32_t)(int16_t)arg1 - 1u & 0xffff0000u) | (uint16_t)((uint16_t)arg2 + rd16(self + 0x32u))) - 1u));
    g->edx = edx;
    t26 = rd16(self + 0x32u);
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x1014e1d0u), self, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
L_1014e4f2: ;
    if ((uint16_t)edi != rd16(self + 0x30u))
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t30 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
L_1014e4fe: ;
    g->edx = edx;
    return eax;
L_1014e45e: ;
    if (rd8(COW_IMG(0x10485a70u)) != 1u)
    {
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t23 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    }
    else
    {
        wr16(self + 0x548u, 0xffu);
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t20 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
        t21 = g->ecx;
        t22 = g->edx;
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    goto L_1014e4f2;
L_1014e47e: ;
    g->esp = sp0 - 8u;
    t17 = cow_fastcall(g, COW_IMG(0x1014e0f0u), self, edx, 2, edi + 1u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    goto L_1014e4f2;
L_1014e48d: ;
    g->esp = sp0 - 8u;
    t14 = cow_fastcall(g, COW_IMG(0x1014e0f0u), self, edi - 1u, 2, edi - 1u, 0u);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    goto L_1014e4f2;
L_1014e49c: ;
    g->esp = sp0 - 8u;
    t11 = cow_fastcall(g, COW_IMG(0x1014e0f0u), self, edx, 2, edi + 3u, 1u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    goto L_1014e4f2;
L_1014e4ab: ;
    g->esp = sp0 - 8u;
    t8 = cow_fastcall(g, COW_IMG(0x1014e0f0u), self, edx, 2, edi - 3u, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_1014e4f2;
L_1014e4ba: ;
    t4 = ((edx & 0xffff0000u) | (uint16_t)((uint16_t)arg2 + rd16(self + 0x32u))) - 1u;
    g->esp = sp0 - 8u;
    t5 = cow_fastcall(g, COW_IMG(0x1014e0f0u), self, t4, 2, t4, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    eax = t5;
    ecx = t6;
    edx = t7;
    goto L_1014e4f2;
L_1014e4d0: ;
    if (rd32(ecx + 0x88u) == 0u)
    {
        eax = rd32(ecx + 0x88u);
    }
    else
    {
        eax = rd32(ecx + 0x88u);
        t2 = rd16(eax + 0x14u);
        t3 = rd16(self + 0x32u);
        wr16(self + 0x32u, (uint16_t)(((ecx & 0xffff0000u) | t3) + ((eax & 0xffff0000u) | (uint16_t)(t2 - t3))));
        wr16(self + 0x30u, (uint16_t)(edi + ((eax & 0xffff0000u) | (uint16_t)(t2 - t3))));
        ecx = ((ecx & 0xffff0000u) | t3) + ((eax & 0xffff0000u) | (uint16_t)(t2 - t3));
        edx = edi + ((eax & 0xffff0000u) | (uint16_t)(t2 - t3));
        eax = (eax & 0xffff0000u) | (uint16_t)(t2 - t3);
    }
    goto L_1014e4f2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014e410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014e410(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
