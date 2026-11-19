/* f_0x10082c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10082c80(Guest* g)
{
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_1c_f;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10082c94u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10082c94;
    case 0x10082ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10082ca2;
    case 0x10082cafu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082caf;
    case 0x10082cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082cb6;
    case 0x10082cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082cba;
    case 0x10082cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082cc1;
    case 0x10082ccbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082ccb;
    case 0x10082ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082ccf;
    case 0x10082cdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082cde;
    case 0x10082ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082ce9;
    case 0x10082d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10082d09;
    case 0x10082d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10082d1c;
    case 0x10082d24u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10082d24;
    case 0x10082d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d26;
    case 0x10082d2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d2d;
    case 0x10082d37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d37;
    case 0x10082d3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082d3e;
    case 0x10082d42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082d42;
    case 0x10082d49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10082d49;
    case 0x10082d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d50;
    case 0x10082d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d54;
    case 0x10082d5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d5e;
    case 0x10082d65u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_10082d65;
    default: break;
    }
#endif

    COW_AT(10082c80)
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x1cu, 0x42100000u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10082c94)
    wr32(sp0 - 0x28u, eax + 0x44u);
    wr32(sp0 - 0x2cu, sp0 - 0xcu);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xcu, eax + 0x44u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(10082ca2)
    if (rd32(COW_IMG(0x1047d578u)) == 0u)
    {
        edi = 0u;
        goto L_10082d2d;
    }
    esi = rd32(COW_IMG(0x1047d578u));
    edi = 0u;
    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
L_10082caf: ;
    COW_AT(10082caf)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10082cb6)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10082cba)
        g->eax = eax;
        g->edx = rd32(esi);
        t8 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t9 = cow_thiscall(g, rd32(t8 + 0x20u), esi, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    COW_AT(10082cc1)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t11 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(10082ccb)
    if (eax == esi)
    {
        loc_1c_f = (double)rdf32(sp0 - 0x1cu);
    }
    else
    {
    COW_AT(10082ccf)
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = rd32(esi);
        t13 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t14 = cow_thiscall_cdecl(g, rd32(t13 + 0x1bcu), esi, 1, sp0 - 0xcu);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(10082cde)
        wr32(sp0 - 0x2cu, eax);
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        g->eax = sp0 - 0x18u;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t17 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, eax, sp0 - 0xcu);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    COW_AT(10082ce9)
        d19 = (double)rdf32(sp0 - 0x10u);
        d20 = (double)rdf32(sp0 - 0x18u);
        d21 = fr(g, fr(g, d19 * d19) + fr(g, d20 * d20));
        d22 = (double)rdf32(sp0 - 0x1cu);
        if (!(d21 < d22))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 1u);
            x0 = d21;
            goto L_10082d24;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 1u);
        x0 = d21;
    COW_AT(10082d09)
        d23 = (double)rdf32(esi + 0x8cu);
        if (!(d23 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            goto L_10082d24;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d23, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(10082d1c)
        wrf32(sp0 - 0x1cu, (float)(double)(float)x0);
        edi = esi;
        loc_1c_f = (double)(float)x0;
    }
L_10082d26: ;
    COW_AT(10082d26)
    if (rd32(esi + 0x54u) != 0u)
    {
        esi = rd32(esi + 0x54u);
        goto L_10082caf;
    }
L_10082d2d: ;
    COW_AT(10082d2d)
    if (rd32(COW_IMG(0x1047d578u)) == 0u) goto L_10082d50;
    esi = rd32(COW_IMG(0x1047d578u));
L_10082d37: ;
    COW_AT(10082d37)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t24 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
    t25 = g->edx;
    eax = t24;
    edx = t25;
    COW_AT(10082d3e)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10082d42)
        g->eax = eax;
        g->edx = rd32(esi);
        t26 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t27 = cow_thiscall(g, rd32(t26 + 0x20u), esi, 0);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    COW_AT(10082d49)
    if (rd32(esi + 0x54u) != 0u)
    {
        esi = rd32(esi + 0x54u);
        goto L_10082d37;
    }
L_10082d50: ;
    COW_AT(10082d50)
    if (edi != 0u)
    {
    COW_AT(10082d54)
        if (rd16(edi + 0xb2u) != 0u)
        {
    COW_AT(10082d5e)
            wr8(edi + 0xb2u, rd8(edi + 0xb2u) & 0xfeu);
        }
    }
    COW_AT(10082d65)
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
L_10082d24: ;
    COW_AT(10082d24)
    loc_1c_f = (double)rdf32(sp0 - 0x1cu);
    goto L_10082d26;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10082c80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10082c94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x24u;
        g->edi = 0u;
        wr32(sp0 - 0x1cu, 0x42100000u);
        (void)sp0;
        return 1;
    }
    case 0x10082ca2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = 0u;
        wr32(sp0 - 0x2cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082cafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082cb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082cbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082cc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082ccbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082ccfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082cdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082d09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082d1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082d24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10082d26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10082d65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10082c80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10082c80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
