/* f_0x10068ae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10068ae0(Guest* g)
{
    double d20;
    double d23;
    double d26;
    double d27;
    double d32;
    double d33;
    double d40;
    double d43;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 8u, rd32(self));
    if (rd32(self + 4u) > 3u)
    {
        eax = rd32(self + 4u);
        edx = in_edx;
        goto L_10068c85;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10068c94u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10068b00u: goto L_10068b00;
    case 0x10068b66u: goto L_10068b66;
    case 0x10068bf0u: goto L_10068bf0;
    case 0x10068c7cu: goto L_10068c7c;
    default: rt_fatal(g, COW_IMG(0x10068af9u), "switch");
    }
    return 0;
L_10068b00: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068c85;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t34 = rd32(COW_IMG(0x10068ca4u) + edx * 4u);
    switch (t34 - RD)
    {
    case 0x10068b17u: goto L_10068b17;
    case 0x10068b1eu: goto L_10068b1e;
    case 0x10068b4au: goto L_10068b4a;
    case 0x10068c53u: goto L_10068c53;
    default: rt_fatal(g, COW_IMG(0x10068b10u), "switch");
    }
    return 0;
L_10068b17: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t44 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
L_10068b4f: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t46 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    wr32(sp0 - 8u, t46 * eax);
    eax = 0u;
L_10068c61: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 - 8u);
    edx = sp0 - 8u;
    loc_14 = eax;
    loc_18 = sp0 - 8u;
L_10068c67: ;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, edx, 2, loc_18, loc_14);
    return arg1;
L_10068b1e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t39 = g->edx;
    d40 = cow_take_float(g);
    wrf32(sp0 - 8u, (float)(double)(float)d40);
    g->edx = t39;
    t41 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t42 = g->edx;
    wr32(sp0 + 8u, t41);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d43 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(sp0 - 8u));
    wrf32(sp0 + 8u, (float)d43);
    eax = t41;
    edx = t42;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
L_10068b4a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t36 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    goto L_10068b4f;
L_10068b66: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068c85;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t15 = rd32(COW_IMG(0x10068cb4u) + edx * 4u);
    switch (t15 - RD)
    {
    case 0x10068b7du: goto L_10068b7d;
    case 0x10068ba1u: goto L_10068ba1;
    case 0x10068bc5u: goto L_10068bc5;
    case 0x10068c53u: goto L_10068c53;
    default: rt_fatal(g, COW_IMG(0x10068b76u), "switch");
    }
    return 0;
L_10068b7d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t29 = g->edx;
    wr32(sp0 + 8u, t28);
    g->edx = t29;
    t30 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t31 = g->edx;
    d32 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d33 = fr(g, d32 * (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d33);
    eax = t30;
    edx = t31;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
L_10068ba1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t22 = g->edx;
    d23 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d23);
    g->edx = t22;
    t24 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t25 = g->edx;
    d26 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d27 = fr(g, d26 * (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d27);
    eax = t24;
    edx = t25;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
L_10068bc5: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t19 = g->edx;
    d20 = cow_take_float(g);
    wr32(sp0 - 8u, t16);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d20 * (double)(int32_t)t16));
    eax = t18;
    edx = t19;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
L_10068bf0: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068c85;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t3 = rd32(COW_IMG(0x10068cc4u) + edx * 4u);
    switch (t3 - RD)
    {
    case 0x10068c07u: goto L_10068c07;
    case 0x10068c20u: goto L_10068c20;
    case 0x10068c37u: goto L_10068c37;
    case 0x10068c53u: goto L_10068c53;
    default: rt_fatal(g, COW_IMG(0x10068c00u), "switch");
    }
    return 0;
L_10068c07: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t13 = g->edx;
    t14 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t14 * t12);
    eax = 0u;
    goto L_10068c61;
L_10068c20: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t8 = g->edx;
    d9 = cow_take_float(g);
    g->edx = t8;
    t10 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t11 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    eax = t10;
    edx = t11;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
L_10068c37: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t6 * t4);
    eax = 1u;
    goto L_10068c61;
L_10068c53: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, COW_IMG(0x10069a50u), ecx, 0);
    eax = t35;
L_10068c58: ;
    wr32(sp0 - 8u, eax);
    eax = 3u;
    goto L_10068c61;
L_10068c7c: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = t2;
    goto L_10068c58;
L_10068c85: ;
    if (eax != 2u) goto L_10068c61;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 + 8u);
    loc_14 = eax;
    loc_18 = sp0 + 8u;
    goto L_10068c67;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10068ae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10068ae0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
