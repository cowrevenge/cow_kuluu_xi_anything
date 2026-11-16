/* f_0x100685f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100685f0(Guest* g)
{
    double d18;
    double d21;
    double d29;
    double d37;
    double d40;
    double d43;
    double d44;
    double d49;
    double d50;
    double d59;
    double d62;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t41;
    uint32_t t42;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
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
        goto L_1006882c;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x1006883cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10068610u: goto L_10068610;
    case 0x1006868eu: goto L_1006868e;
    case 0x10068741u: goto L_10068741;
    case 0x100687d5u: goto L_100687d5;
    default: rt_fatal(g, COW_IMG(0x10068609u), "switch");
    }
    return 0;
L_10068610: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_1006882c;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t51 = rd32(COW_IMG(0x1006884cu) + edx * 4u);
    switch (t51 - RD)
    {
    case 0x10068627u: goto L_10068627;
    case 0x1006862eu: goto L_1006862e;
    case 0x1006865au: goto L_1006865a;
    case 0x10068675u: goto L_10068675;
    default: rt_fatal(g, COW_IMG(0x10068620u), "switch");
    }
    return 0;
L_10068627: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t63 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t64 = g->edx;
    eax = t63;
    edx = t64;
L_1006865f: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t65 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    wr32(sp0 - 8u, eax + t65);
    eax = 0u;
L_10068801: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 - 8u);
    edx = sp0 - 8u;
    loc_14 = eax;
    loc_18 = sp0 - 8u;
L_10068807: ;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x10068590u), arg1, edx, 2, loc_18, loc_14);
    return arg1;
L_1006862e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t57 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t58 = g->edx;
    d59 = cow_take_float(g);
    wrf32(sp0 - 8u, (float)(double)(float)d59);
    g->edx = t58;
    t60 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t61 = g->edx;
    wr32(sp0 + 8u, t60);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d62 = fr(g, (double)(int32_t)rd32(sp0 + 8u) + (double)rdf32(sp0 - 8u));
    wrf32(sp0 + 8u, (float)d62);
    eax = t60;
    edx = t61;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068807;
L_1006865a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t55 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t56 = g->edx;
    eax = t55;
    edx = t56;
    goto L_1006865f;
L_10068675: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_thiscall(g, COW_IMG(0x10069a50u), ecx, 0);
    t53 = g->edx;
    t54 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    wr32(sp0 - 8u, t52 + t54);
L_100687fc: ;
    eax = 3u;
    goto L_10068801;
L_1006868e: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = in_edx;
        goto L_1006882c;
    }
    ecx = rd32(rd32(sp0 + 8u) + 4u);
    edi = rd32(sp0 + 8u);
    t25 = rd32(COW_IMG(0x1006885cu) + ecx * 4u);
    switch (t25 - RD)
    {
    case 0x100686a5u: goto L_100686a5;
    case 0x100686cbu: goto L_100686cb;
    case 0x100686f1u: goto L_100686f1;
    case 0x10068721u: goto L_10068721;
    default: rt_fatal(g, COW_IMG(0x1006869eu), "switch");
    }
    return 0;
L_100686a5: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t45 = cow_thiscall(g, COW_IMG(0x10069970u), edi, 0);
    t46 = g->edx;
    wr32(sp0 + 8u, t45);
    g->edx = t46;
    t47 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t48 = g->edx;
    d49 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d50 = fr(g, d49 + (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d50);
    eax = t47;
    edx = t48;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068807;
L_100686cb: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, COW_IMG(0x100699d0u), edi, 0);
    t39 = g->edx;
    d40 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d40);
    g->edx = t39;
    t41 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t42 = g->edx;
    d43 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d44 = fr(g, d43 + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d44);
    eax = t41;
    edx = t42;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068807;
L_100686f1: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_thiscall(g, COW_IMG(0x100699a0u), edi, 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t36 = g->edx;
    d37 = cow_take_float(g);
    wr32(sp0 - 8u, t33);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d37 + (double)(int32_t)t33));
    eax = t35;
    edx = t36;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068807;
L_10068721: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t27 = g->ecx;
    t28 = g->edx;
    d29 = cow_take_float(g);
    g->edx = t28;
    fpush(g, d29);
    t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
    t31 = g->edx;
    t32 = cow_thiscall(g, COW_IMG(0x10069a50u), edi, 0);
    wr32(sp0 - 8u, t30 + t32);
    goto L_100687fc;
L_10068741: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_1006882c;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t9 = rd32(COW_IMG(0x1006886cu) + edx * 4u);
    switch (t9 - RD)
    {
    case 0x10068758u: goto L_10068758;
    case 0x10068773u: goto L_10068773;
    case 0x100687a4u: goto L_100687a4;
    case 0x100687bfu: goto L_100687bf;
    default: rt_fatal(g, COW_IMG(0x10068751u), "switch");
    }
    return 0;
L_10068758: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t22 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t23 = g->edx;
    t24 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t22 + t24);
    eax = 0u;
    goto L_10068801;
L_10068773: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t17 = g->edx;
    d18 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d18);
    g->edx = t17;
    t19 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t20 = g->edx;
    wr32(sp0 - 8u, t19);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d21 = fr(g, (double)(int64_t)cow_i64(t19, 0u) + (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d21);
    eax = t19;
    edx = t20;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068807;
L_100687a4: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t13 + t15);
    eax = 1u;
    goto L_10068801;
L_100687bf: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x10069a50u), ecx, 0);
    t11 = g->edx;
    t12 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    wr32(sp0 - 8u, t10 + t12);
    goto L_100687fc;
L_100687d5: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_1006882c;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t2 = rd32(COW_IMG(0x1006887cu) + edx * 4u);
    switch (t2 - RD)
    {
    case 0x100687e8u: goto L_100687e8;
    case 0x1006881cu: goto L_1006881c;
    case 0x10068823u: goto L_10068823;
    default: rt_fatal(g, COW_IMG(0x100687e1u), "switch");
    }
    return 0;
L_100687e8: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_100687ed: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = eax + t8;
L_100687f8: ;
    wr32(sp0 - 8u, eax);
    goto L_100687fc;
L_1006881c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    goto L_100687ed;
L_10068823: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = t3;
    goto L_100687f8;
L_1006882c: ;
    if (eax != 2u) goto L_10068801;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 + 8u);
    loc_14 = eax;
    loc_18 = sp0 + 8u;
    goto L_10068807;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100685f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100685f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
