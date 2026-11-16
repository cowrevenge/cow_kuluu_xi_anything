/* f_0x10068890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10068890(Guest* g)
{
    double d15;
    double d18;
    double d27;
    double d30;
    double d33;
    double d34;
    double d39;
    double d40;
    double d47;
    double d50;
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
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
        goto L_10068a7b;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10068a88u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100688b0u: goto L_100688b0;
    case 0x10068915u: goto L_10068915;
    case 0x100689a2u: goto L_100689a2;
    case 0x10068a24u: goto L_10068a24;
    default: rt_fatal(g, COW_IMG(0x100688a9u), "switch");
    }
    return 0;
L_100688b0: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068a7b;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t41 = rd32(COW_IMG(0x10068a98u) + edx * 4u);
    switch (t41 - RD)
    {
    case 0x100688c7u: goto L_100688c7;
    case 0x100688ceu: goto L_100688ce;
    case 0x100688fau: goto L_100688fa;
    case 0x10068a1du: goto L_10068a1d;
    default: rt_fatal(g, COW_IMG(0x100688c0u), "switch");
    }
    return 0;
L_100688c7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t51 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t52 = g->edx;
    eax = t51;
    edx = t52;
L_100688ff: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t53 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    wr32(sp0 - 8u, t53 - eax);
    eax = 0u;
L_10068a50: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 - 8u);
    edx = sp0 - 8u;
    loc_14 = eax;
    loc_18 = sp0 - 8u;
L_10068a56: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10068590u), arg1, 2, loc_18, loc_14);
    return arg1;
L_100688ce: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t45 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t46 = g->edx;
    d47 = cow_take_float(g);
    wrf32(sp0 - 8u, (float)(double)(float)d47);
    g->edx = t46;
    t48 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t49 = g->edx;
    wr32(sp0 + 8u, t48);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d50 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(sp0 - 8u));
    wrf32(sp0 + 8u, (float)d50);
    eax = t48;
    edx = t49;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
L_100688fa: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t43 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t44 = g->edx;
    eax = t43;
    edx = t44;
    goto L_100688ff;
L_10068915: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068a7b;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t22 = rd32(COW_IMG(0x10068aa8u) + edx * 4u);
    switch (t22 - RD)
    {
    case 0x1006892cu: goto L_1006892c;
    case 0x10068950u: goto L_10068950;
    case 0x10068974u: goto L_10068974;
    case 0x10068a1du: goto L_10068a1d;
    default: rt_fatal(g, COW_IMG(0x10068925u), "switch");
    }
    return 0;
L_1006892c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t35 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t36 = g->edx;
    wr32(sp0 + 8u, t35);
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t38 = g->edx;
    d39 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d40 = fr(g, d39 - (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d40);
    eax = t37;
    edx = t38;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
L_10068950: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t28 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t29 = g->edx;
    d30 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d30);
    g->edx = t29;
    t31 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t32 = g->edx;
    d33 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d34 = fr(g, d33 - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d34);
    eax = t31;
    edx = t32;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
L_10068974: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t23 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t26 = g->edx;
    d27 = cow_take_float(g);
    wr32(sp0 - 8u, t23);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d27 - (double)(int32_t)t23));
    eax = t25;
    edx = t26;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
L_100689a2: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068a7b;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t9 = rd32(COW_IMG(0x10068ab8u) + edx * 4u);
    switch (t9 - RD)
    {
    case 0x100689b9u: goto L_100689b9;
    case 0x100689d1u: goto L_100689d1;
    case 0x10068a02u: goto L_10068a02;
    case 0x10068a1du: goto L_10068a1d;
    default: rt_fatal(g, COW_IMG(0x100689b2u), "switch");
    }
    return 0;
L_100689b9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t20 = g->edx;
    t21 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t21 - t19);
    eax = 0u;
    goto L_10068a50;
L_100689d1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t14 = g->edx;
    d15 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d15);
    g->edx = t14;
    t16 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t17 = g->edx;
    wr32(sp0 - 8u, t16);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d18 = fr(g, (double)(int64_t)cow_i64(t16, 0u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d18);
    eax = t16;
    edx = t17;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
L_10068a02: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t11 = g->edx;
    t12 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t12 - t10);
    eax = 1u;
    goto L_10068a50;
L_10068a1d: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t42 = cow_thiscall(g, COW_IMG(0x10069a50u), ecx, 0);
    eax = t42;
L_10068a47: ;
    wr32(sp0 - 8u, eax);
    eax = 3u;
    goto L_10068a50;
L_10068a24: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068a7b;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t2 = rd32(COW_IMG(0x10068ac8u) + edx * 4u);
    switch (t2 - RD)
    {
    case 0x10068a37u: goto L_10068a37;
    case 0x10068a6bu: goto L_10068a6b;
    case 0x10068a72u: goto L_10068a72;
    default: rt_fatal(g, COW_IMG(0x10068a30u), "switch");
    }
    return 0;
L_10068a37: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_10068a3c: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = t8 - eax;
    goto L_10068a47;
L_10068a6b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    goto L_10068a3c;
L_10068a72: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = t3;
    goto L_10068a47;
L_10068a7b: ;
    if (eax != 2u) goto L_10068a50;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 + 8u);
    loc_14 = eax;
    loc_18 = sp0 + 8u;
    goto L_10068a56;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10068890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10068890(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
