/* f_0x1014ec40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014ec40(Guest* g)
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1014ec4cu: eax = g->eax; in_edx = g->edx; goto E_1014ec4c;
    case 0x1014ec5bu: in_edx = g->edx; goto E_1014ec5b;
    case 0x1014ec62u: eax = g->eax; in_edx = g->edx; goto E_1014ec62;
    case 0x1014ec79u: in_edx = g->edx; goto E_1014ec79;
    case 0x1014ec91u: edx = g->edx; goto E_1014ec91;
    case 0x1014ecacu: in_edx = g->edx; goto E_1014ecac;
    case 0x1014ecbdu: in_edx = g->edx; goto E_1014ecbd;
    case 0x1014ecceu: in_edx = g->edx; goto E_1014ecce;
    case 0x1014ecdfu: in_edx = g->edx; goto E_1014ecdf;
    case 0x1014ecf0u: in_edx = g->edx; goto E_1014ecf0;
    case 0x1014ed01u: in_edx = g->edx; goto E_1014ed01;
    case 0x1014ed12u: in_edx = g->edx; goto E_1014ed12;
    case 0x1014ed23u: in_edx = g->edx; goto E_1014ed23;
    case 0x1014ed34u: in_edx = g->edx; goto E_1014ed34;
    case 0x1014ed45u: in_edx = g->edx; goto E_1014ed45;
    case 0x1014ed56u: in_edx = g->edx; goto E_1014ed56;
    case 0x1014ed67u: eax = g->eax; in_edx = g->edx; goto E_1014ed67;
    case 0x1014ed7bu: eax = g->eax; edx = g->edx; goto E_1014ed7b;
    default: break;
    }
#endif

    COW_AT(1014ec40)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1014ed7b;
    }
    COW_AT(1014ec4c)
    if ((uint32_t)(int16_t)arg2 - 1u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1014ed7b;
    }
    COW_AT(1014ec5b)
    t1 = rd32(COW_IMG(0x1014ed80u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1014ec62u: goto L_1014ec62;
    case 0x1014ec79u: goto L_1014ec79;
    case 0x1014ec91u: goto L_1014ec91;
    case 0x1014ecacu: goto L_1014ecac;
    case 0x1014ecbdu: goto L_1014ecbd;
    case 0x1014ecceu: goto L_1014ecce;
    case 0x1014ecdfu: goto L_1014ecdf;
    case 0x1014ecf0u: goto L_1014ecf0;
    case 0x1014ed01u: goto L_1014ed01;
    case 0x1014ed12u: goto L_1014ed12;
    case 0x1014ed23u: goto L_1014ed23;
    case 0x1014ed34u: goto L_1014ed34;
    case 0x1014ed45u: goto L_1014ed45;
    case 0x1014ed56u: goto L_1014ed56;
    case 0x1014ed67u: goto L_1014ed67;
    default: rt_fatal(g, COW_IMG(0x1014ec5bu), "switch");
    }
    return 0;
L_1014ec62: ;
    COW_AT(1014ec62)
    g->edx = in_edx;
    t32 = rd32(COW_IMG(0x10663760u));
    g->esp = sp0;
    t33 = cow_call_regs(g, COW_IMG(0x101dae10u), t32, g->ecx, g->edx, 1, 4, t32, 1u, 0u, 0u);
    t34 = g->edx;
    g->edx = t34;
    return t33;
L_1014ec79: ;
    COW_AT(1014ec79)
    g->edx = in_edx;
    g->esp = sp0;
    t30 = cow_call_regs(g, COW_IMG(0x101dae10u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 4, rd32(COW_IMG(0x10663768u)), 2u, 0u, 0u);
    t31 = g->edx;
    g->edx = t31;
    return t30;
L_1014ec91: ;
    COW_AT(1014ec91)
    g->edx = rd32(COW_IMG(0x10663764u));
    t27 = rd32(COW_IMG(0x10663764u));
    g->esp = sp0;
    t28 = cow_call_regs(g, COW_IMG(0x101dae10u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 4, t27, 4u, COW_IMG(0x101dadd0u), 0u);
    t29 = g->edx;
    g->edx = t29;
    return t28;
L_1014ecac: ;
    COW_AT(1014ecac)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t25 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 5u, 1u);
    t26 = g->edx;
    g->edx = t26;
    return t25;
L_1014ecbd: ;
    COW_AT(1014ecbd)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t23 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 6u, 0u);
    t24 = g->edx;
    g->edx = t24;
    return t23;
L_1014ecce: ;
    COW_AT(1014ecce)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 7u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_1014ecdf: ;
    COW_AT(1014ecdf)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 8u, 0u);
    t20 = g->edx;
    g->edx = t20;
    return t19;
L_1014ecf0: ;
    COW_AT(1014ecf0)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xau, 0u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_1014ed01: ;
    COW_AT(1014ed01)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xbu, 0u);
    t16 = g->edx;
    g->edx = t16;
    return t15;
L_1014ed12: ;
    COW_AT(1014ed12)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xcu, 0u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1014ed23: ;
    COW_AT(1014ed23)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xdu, 0u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1014ed34: ;
    COW_AT(1014ed34)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xeu, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1014ed45: ;
    COW_AT(1014ed45)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0xfu, 0u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1014ed56: ;
    COW_AT(1014ed56)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x101daf70u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, g->edx, 1, 2, 0x10u, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1014ed67: ;
    COW_AT(1014ed67)
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10663778u));
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x101dae10u), t2, g->ecx, g->edx, 1, 4, t2, 9u, 0u, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_1014ed7b: ;
    COW_AT(1014ed7b)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1014ec40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1014ec4cu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014ec5bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ec62u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014ec79u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ec91u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ecacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ecbdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ecceu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ecdfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ecf0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed01u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed12u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed23u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed34u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed56u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edx;
        in_edx = g->edx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1014ed67u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1014ed7bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1014ec40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1014ec40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
