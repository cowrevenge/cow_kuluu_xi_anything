/* f_0x10145e70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10145e70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 6u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_10145e94;
    }
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), in_edx);
L_10145e94: ;
    if ((uint16_t)eax != 5u)
    {
        edx = in_edx;
        goto L_101460cd;
    }
    if (rd32(self + 0x14u) != 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
        goto L_10145fcd;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
    if (eax - 1u > 0xeu)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101460cd;
    }
    eax = eax - 1u;
    t2 = rd32(COW_IMG(0x101460d0u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10145ebfu: goto L_10145ebf;
    case 0x10145ee4u: goto L_10145ee4;
    case 0x10145ef3u: goto L_10145ef3;
    case 0x10145f01u: goto L_10145f01;
    case 0x10145f12u: goto L_10145f12;
    case 0x10145f23u: goto L_10145f23;
    case 0x10145f34u: goto L_10145f34;
    case 0x10145f45u: goto L_10145f45;
    case 0x10145f56u: goto L_10145f56;
    case 0x10145f67u: goto L_10145f67;
    case 0x10145f78u: goto L_10145f78;
    case 0x10145f89u: goto L_10145f89;
    case 0x10145f9au: goto L_10145f9a;
    case 0x10145fabu: goto L_10145fab;
    case 0x10145fbcu: goto L_10145fbc;
    default: rt_fatal(g, COW_IMG(0x10145eb8u), "switch");
    }
    return 0;
L_10145ebf: ;
    ecx = rd32(COW_IMG(0x10663760u));
    loc_4 = 0u;
    loc_8 = 0u;
    loc_c = 1u;
L_10145ecb: ;
    edx = in_edx;
    loc_10 = ecx;
L_10145ecc: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t48 = cow_call_regs(g, COW_IMG(0x101dae10u), eax, g->ecx, g->edx, 1, 4, loc_10, loc_c, loc_8, loc_4);
    t49 = g->ecx;
    t50 = g->edx;
    if ((uint8_t)t48 != 0u)
    {
        eax = t48;
        edx = t50;
        goto L_101460cd;
    }
    eax = t48;
    ecx = t49;
    edx = t50;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t51 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t52 = g->edx;
    g->edx = t52;
    return t51;
L_10145ee4: ;
    ecx = self;
    edx = rd32(COW_IMG(0x10663778u));
    loc_4 = 0u;
    loc_8 = 0u;
    loc_c = 9u;
    loc_10 = rd32(COW_IMG(0x10663778u));
    goto L_10145ecc;
L_10145ef3: ;
    eax = rd32(COW_IMG(0x10663768u));
    ecx = self;
    edx = in_edx;
    loc_4 = 0u;
    loc_8 = 0u;
    loc_c = 2u;
    loc_10 = rd32(COW_IMG(0x10663768u));
    goto L_10145ecc;
L_10145f01: ;
    ecx = rd32(COW_IMG(0x10663764u));
    loc_4 = 0u;
    loc_8 = COW_IMG(0x101dadd0u);
    loc_c = 4u;
    goto L_10145ecb;
L_10145f12: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 5u, 1u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_10145f23: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 6u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_10145f34: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 7u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_10145f45: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 8u, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_10145f56: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xau, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_10145f67: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xbu, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_10145f78: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xcu, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_10145f89: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xdu, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10145f9a: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xeu, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10145fab: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xfu, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_10145fbc: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0x10u, 0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_10145fcd: ;
    if (eax - 1u > 0xdu)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101460cd;
    }
    eax = eax - 1u;
    t25 = rd32(COW_IMG(0x1014610cu) + eax * 4u);
    switch (t25 - RD)
    {
    case 0x10145fdeu: goto L_10145fde;
    case 0x10145ff0u: goto L_10145ff0;
    case 0x10146001u: goto L_10146001;
    case 0x10146015u: goto L_10146015;
    case 0x10146026u: goto L_10146026;
    case 0x10146037u: goto L_10146037;
    case 0x10146048u: goto L_10146048;
    case 0x10146059u: goto L_10146059;
    case 0x1014606au: goto L_1014606a;
    case 0x1014607bu: goto L_1014607b;
    case 0x1014608cu: goto L_1014608c;
    case 0x1014609du: goto L_1014609d;
    case 0x101460aeu: goto L_101460ae;
    case 0x101460bfu: goto L_101460bf;
    default: rt_fatal(g, COW_IMG(0x10145fd7u), "switch");
    }
    return 0;
L_10145fde: ;
    ecx = self;
    edx = rd32(COW_IMG(0x10663760u));
    loc_4 = 1u;
    loc_8 = 0u;
    loc_c = 1u;
    loc_10 = rd32(COW_IMG(0x10663760u));
    goto L_10145ecc;
L_10145ff0: ;
    eax = rd32(COW_IMG(0x10663778u));
    ecx = self;
    edx = in_edx;
    loc_4 = 1u;
    loc_8 = 0u;
    loc_c = 9u;
    loc_10 = rd32(COW_IMG(0x10663778u));
    goto L_10145ecc;
L_10146001: ;
    ecx = rd32(COW_IMG(0x10663764u));
    loc_4 = 1u;
    loc_8 = COW_IMG(0x101dadd0u);
    loc_c = 4u;
    goto L_10145ecb;
L_10146015: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t46 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 5u, 1u);
    t47 = g->edx;
    g->edx = t47;
    return t46;
L_10146026: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t44 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 6u, 0u);
    t45 = g->edx;
    g->edx = t45;
    return t44;
L_10146037: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t42 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 7u, 0u);
    t43 = g->edx;
    g->edx = t43;
    return t42;
L_10146048: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 8u, 0u);
    t41 = g->edx;
    g->edx = t41;
    return t40;
L_10146059: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t38 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xau, 0u);
    t39 = g->edx;
    g->edx = t39;
    return t38;
L_1014606a: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t36 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xbu, 0u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_1014607b: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t34 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xcu, 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_1014608c: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t32 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xdu, 0u);
    t33 = g->edx;
    g->edx = t33;
    return t32;
L_1014609d: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t30 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xeu, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_101460ae: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t28 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0xfu, 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_101460bf: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t26 = cow_call_regs(g, COW_IMG(0x101daf70u), eax, g->ecx, g->edx, 1, 2, 0x10u, 0u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
L_101460cd: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10145e70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10145e70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
