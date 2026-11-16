/* f_0x100d0b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_100d0b50(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((uint8_t)arg4 == 0u) goto L_100d0d0c;
    if (arg3 != rd32(self + 0x9ecu)) goto L_100d0d1b;
    if (arg1 == 0u) goto L_100d0d1b;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if (t1 == 6u)
    {
        edx = t2;
        goto L_100d0bbc;
    }
    eax = t1 - 6u;
    edx = t2;
    if (eax != 1u) goto L_100d0bed;
    if (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) != 9u) goto L_100d0bed;
    wr32(sp0 - 0x14u, 0u);
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 0u);
    t4 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_100d0bb5;
    }
    eax = t3;
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10085010u), self, 1, arg1);
    t5 = g->edx;
    edx = t5;
L_100d0bed: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t12 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t13 = g->edx;
    if (rd32(t12) != 0u)
    {
        eax = rd32(t12);
        edx = t13;
        goto L_100d0c0f;
    }
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x1002b6a0u), self + 0x674u, 0);
    t15 = g->edx;
    if (t14 == 0u) goto L_100d0d1b;
    eax = t14;
    edx = t15;
L_100d0c0f: ;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100cfa50u), self, 2, arg1, eax);
    t16 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0x45u);
    wr32(sp0 - 0x1cu, rd32(arg1));
    wr32(sp0 - 0x20u, sp0 + 0x10u);
    g->edx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x10072430u), sp0 + 0x10u, g->ecx, g->edx, 0, 4, sp0 + 0x10u, rd32(arg1), 0x45u, 0u);
    t18 = g->edx;
    if (rd32(t17) == 0u)
    {
        cf = 0u;
        pf = PARITY((uint8_t)rd32(t17));
        zf = rd32(t17) == 0u;
        sf = (int32_t)rd32(t17) < 0;
        of = 0u;
        goto L_100d0cee;
    }
    eax = rd32(t17);
    edx = t18;
    if (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u > 6u)
    {
        cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u;
        pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u));
        zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u;
        sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0;
        of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu;
        goto L_100d0cee;
    }
    eax = rd32(eax);
    t19 = rd32(COW_IMG(0x100d0d24u) + ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) * 4u - 8u);
    switch (t19 - RD)
    {
    case 0x100d0c48u: goto L_100d0c48;
    case 0x100d0c56u: goto L_100d0c56;
    case 0x100d0c6du: goto L_100d0c6d;
    case 0x100d0c9cu: goto L_100d0c9c;
    case 0x100d0ce5u: goto L_100d0ce5;
    case 0x100d0ceeu: cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u; pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)); zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u; sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0; of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu; goto L_100d0cee;
    default: rt_fatal(g, COW_IMG(0x100d0c41u), "switch");
    }
    return;
L_100d0bb5: ;
    wr32(sp0 - 0x18u, sp0 + 0x10u);
L_100d0bdb: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10052870u), self + 0x864u, 2, sp0 + 0x10u, arg1);
    t10 = g->edx;
    g->edx = t10;
    cow_call_regs(g, COW_IMG(0x10071e90u), t9, rd32(arg1), g->edx, 1, 0);
    t11 = g->edx;
    edx = t11;
    goto L_100d0bed;
L_100d0bbc: ;
    if (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) != 9u) goto L_100d0bed;
    g->esp = sp0 - 0x10u;
    t6 = cow_fastcall(g, COW_IMG(0x10084420u), self, edx, 0);
    t7 = g->edx;
    wr32(sp0 - 0x14u, arg1);
    if (t6 != 0u)
    {
        eax = t6;
        goto L_100d0bd6;
    }
    eax = t6;
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10085010u), self, 1, arg1);
    t8 = g->edx;
    edx = t8;
    goto L_100d0bed;
L_100d0bd6: ;
    wr32(sp0 - 0x18u, sp0 + 0x10u);
    edx = sp0 + 0x10u;
    goto L_100d0bdb;
L_100d0c48: ;
    wr8(self + 0x881u, rd8(eax + 0x39u));
    cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u;
    pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u));
    zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u;
    sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0;
    of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu;
L_100d0cee: ;
    t26 = (uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu;
    t27 = rd32(self + 0x8b0u) | 1u << (t26 & 0x1fu);
    t28 = rd32(sp0 - 0x10u);
    wr32(self + 0x8b0u, t27);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = t28;
    g->ebp = rd32(sp0 - 8u);
    return;
L_100d0c56: ;
    wr8(self + 0x879u, rd8(eax + 0x31u));
    wr8(self + 0x87au, rd8(eax + 0x32u));
    cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u;
    pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u));
    zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u;
    sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0;
    of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu;
    goto L_100d0cee;
L_100d0c6d: ;
    t24 = rd8(eax + 0x33u);
    wr8(self + 0x87bu, (uint8_t)t24);
    t25 = rd8(eax + 0x34u);
    wr8(self + 0x87cu, (uint8_t)t25);
    wr8(self + 0x87eu, rd8(eax + 0x36u));
    wr8(self + 0x880u, rd8(eax + 0x38u));
    wr8(self + 0x88bu, rd8(eax + 0x30u));
    cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u;
    pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u));
    zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u;
    sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0;
    of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu;
    goto L_100d0cee;
L_100d0c9c: ;
    t20 = rd8(eax + 0x34u);
    wr8(self + 0x87fu, (uint8_t)t20);
    t21 = rd8(eax + 0x36u);
    wr8(self + 0x888u, (uint8_t)t21);
    t22 = rd8(eax + 0x38u);
    wr8(self + 0x889u, (uint8_t)t22);
    if (rd8(self + 0x8b5u) == 0u)
    {
        pf = PARITY(rd8(self + 0x8b5u));
        zf = rd8(self + 0x8b5u) == 0u;
        sf = (int8_t)rd8(self + 0x8b5u) < 0;
        wr8(self + 0x88au, 0u);
        wr8(self + 0x87du, rd8(eax + 0x35u));
        cf = 0u;
        of = 0u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | t21;
        pf = PARITY(rd8(self + 0x8b5u));
        zf = rd8(self + 0x8b5u) == 0u;
        sf = (int8_t)rd8(self + 0x8b5u) < 0;
        t23 = rd8(eax + 0x33u);
        wr8(self + 0x87du, 0u);
        wr8(self + 0x88au, (uint8_t)t23);
        cf = 0u;
        of = 0u;
    }
    goto L_100d0cee;
L_100d0ce5: ;
    wr8(self + 0x886u, rd8(eax + 0x3eu));
    cf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u < 6u;
    pf = PARITY((uint8_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u));
    zf = ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) == 8u;
    sf = (int32_t)(((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u) < 0;
    of = ((((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ 6u) & (((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 2u ^ ((uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu) - 8u)) >> 0x1fu;
    goto L_100d0cee;
L_100d0d0c: ;
    t29 = (uint32_t)((int32_t)arg2 >> 0xcu) & 0xfu;
    wr32(self + 0x8b0u, rd32(self + 0x8b0u) | 1u << (t29 & 0x1fu));
L_100d0d1b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d0b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d0b50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
