/* f_0x10068ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10068ce0(Guest* g)
{
    double d11;
    double d24;
    double d27;
    double d30;
    double d31;
    double d36;
    double d37;
    double d47;
    double d50;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
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
    uint32_t t54;
    uint32_t t55;
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
        goto L_10068e9d;
    }
    eax = rd32(self + 4u);
    t1 = rd32(COW_IMG(0x10068eacu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10068d00u: goto L_10068d00;
    case 0x10068d7cu: goto L_10068d7c;
    case 0x10068e06u: goto L_10068e06;
    case 0x10068e94u: goto L_10068e94;
    default: rt_fatal(g, COW_IMG(0x10068cf9u), "switch");
    }
    return 0;
L_10068d00: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068e9d;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t38 = rd32(COW_IMG(0x10068ebcu) + edx * 4u);
    switch (t38 - RD)
    {
    case 0x10068d17u: goto L_10068d17;
    case 0x10068d33u: goto L_10068d33;
    case 0x10068d5fu: goto L_10068d5f;
    case 0x10068e6bu: goto L_10068e6b;
    default: rt_fatal(g, COW_IMG(0x10068d10u), "switch");
    }
    return 0;
L_10068d17: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t51 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t52 = g->edx;
    t53 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t54 = cow_divs(g, t53, t51);
    t55 = cow_mods(g, t53, t51);
    wr32(sp0 - 8u, t54);
    eax = 0u;
L_10068e79: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 - 8u);
    edx = sp0 - 8u;
    loc_14 = eax;
    loc_18 = sp0 - 8u;
L_10068e7f: ;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10068590u), arg1, 2, loc_18, loc_14);
    return arg1;
L_10068d33: ;
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
    d50 = fr(g, (double)(int32_t)rd32(sp0 + 8u) / (double)rdf32(sp0 - 8u));
    wrf32(sp0 + 8u, (float)d50);
    eax = t48;
    edx = t49;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
L_10068d5f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t40 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t41 = g->edx;
    t42 = cow_thiscall(g, COW_IMG(0x10069970u), self, 0);
    t43 = cow_divu(g, t42, t40);
    t44 = cow_modu(g, t42, t40);
    wr32(sp0 - 8u, t43);
    eax = 0u;
    goto L_10068e79;
L_10068d7c: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068e9d;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t19 = rd32(COW_IMG(0x10068eccu) + edx * 4u);
    switch (t19 - RD)
    {
    case 0x10068d93u: goto L_10068d93;
    case 0x10068db7u: goto L_10068db7;
    case 0x10068ddbu: goto L_10068ddb;
    case 0x10068e6bu: goto L_10068e6b;
    default: rt_fatal(g, COW_IMG(0x10068d8cu), "switch");
    }
    return 0;
L_10068d93: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t32 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t33 = g->edx;
    wr32(sp0 + 8u, t32);
    g->edx = t33;
    t34 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t35 = g->edx;
    d36 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d37 = fr(g, d36 / (double)(int32_t)rd32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d37);
    eax = t34;
    edx = t35;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
L_10068db7: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t25 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t26 = g->edx;
    d27 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d27);
    g->edx = t26;
    t28 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t29 = g->edx;
    d30 = cow_take_float(g);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    d31 = fr(g, d30 / (double)rdf32(sp0 + 8u));
    wrf32(sp0 + 8u, (float)d31);
    eax = t28;
    edx = t29;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
L_10068ddb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x100699d0u), self, 0);
    t23 = g->edx;
    d24 = cow_take_float(g);
    wr32(sp0 - 8u, t20);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    wrf32(sp0 + 8u, (float)fr(g, d24 / (double)(int32_t)t20));
    eax = t22;
    edx = t23;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
L_10068e06: ;
    if (rd32(rd32(sp0 + 8u) + 4u) > 3u)
    {
        edx = rd32(rd32(sp0 + 8u) + 4u);
        goto L_10068e9d;
    }
    ecx = rd32(sp0 + 8u);
    edx = rd32(rd32(sp0 + 8u) + 4u);
    t3 = rd32(COW_IMG(0x10068edcu) + edx * 4u);
    switch (t3 - RD)
    {
    case 0x10068e1du: goto L_10068e1d;
    case 0x10068e37u: goto L_10068e37;
    case 0x10068e4eu: goto L_10068e4e;
    case 0x10068e6bu: goto L_10068e6b;
    default: rt_fatal(g, COW_IMG(0x10068e16u), "switch");
    }
    return 0;
L_10068e1d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x10069970u), ecx, 0);
    t15 = g->edx;
    t16 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t17 = cow_divu(g, t16, t14);
    t18 = cow_modu(g, t16, t14);
    wr32(sp0 - 8u, t17);
    eax = 0u;
    goto L_10068e79;
L_10068e37: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x100699d0u), ecx, 0);
    t10 = g->edx;
    d11 = cow_take_float(g);
    g->edx = t10;
    t12 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t13 = g->edx;
    wr32(sp0 - 0x14u, 2u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    eax = t12;
    edx = t13;
    loc_14 = 2u;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
L_10068e4e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x100699a0u), ecx, 0);
    t5 = g->edx;
    t6 = cow_thiscall(g, COW_IMG(0x100699a0u), self, 0);
    t7 = cow_divu(g, t6, t4);
    t8 = cow_modu(g, t6, t4);
    wr32(sp0 - 8u, t7);
    eax = 1u;
    goto L_10068e79;
L_10068e6b: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t39 = cow_thiscall(g, COW_IMG(0x10069a50u), ecx, 0);
    eax = t39;
L_10068e70: ;
    wr32(sp0 - 8u, eax);
    eax = 3u;
    goto L_10068e79;
L_10068e94: ;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10069a20u), self, 0);
    eax = t2;
    goto L_10068e70;
L_10068e9d: ;
    if (eax != 2u) goto L_10068e79;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 + 8u);
    loc_14 = eax;
    loc_18 = sp0 + 8u;
    goto L_10068e7f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10068ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10068ce0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
