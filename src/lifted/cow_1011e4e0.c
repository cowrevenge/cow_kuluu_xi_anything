/* f_0x1011e4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1011e4e0(Guest* g)
{
    double d31;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011e4f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1011e4f6;
    case 0x1011e503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e503;
    case 0x1011e510u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e510;
    case 0x1011e52au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e52a;
    case 0x1011e536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e536;
    case 0x1011e542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e542;
    case 0x1011e54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e54e;
    case 0x1011e55au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e55a;
    case 0x1011e566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e566;
    case 0x1011e577u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1011e577;
    case 0x1011e583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e583;
    case 0x1011e58cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e58c;
    case 0x1011e590u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e590;
    case 0x1011e599u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e599;
    case 0x1011e5a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5a3;
    case 0x1011e5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5a8;
    case 0x1011e5b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5b4;
    case 0x1011e5bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5bd;
    case 0x1011e5c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5c1;
    case 0x1011e5cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5cd;
    case 0x1011e5d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5d6;
    case 0x1011e5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e5da;
    case 0x1011e600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011e600;
    case 0x1011e608u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1011e608;
    case 0x1011e60du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e60d;
    case 0x1011e610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e610;
    case 0x1011e620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e620;
    case 0x1011e62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e62c;
    case 0x1011e638u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e638;
    case 0x1011e644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e644;
    case 0x1011e650u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e650;
    case 0x1011e65cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e65c;
    case 0x1011e697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1011e697;
    case 0x1011e6c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1011e6c1;
    case 0x1011e6c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1011e6c8;
    default: break;
    }
#endif

    COW_AT(1011e4e0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    ecx = self;
    edx = in_edx;
    ebx = self + 0xc8u;
    ebp = 4u;
    edi = rd32(sp0 + 4u);
    loc_4 = self;
    loc_8 = in_ebx;
    loc_c = in_ebp;
    loc_10 = in_esi;
    loc_14 = in_edi;
L_1011e4f6: ;
    COW_AT(1011e4f6)
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, sp0 + 4u, edi, 2u, loc_14, loc_10, loc_c, loc_8);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1011e503)
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, sp0 - 4u);
    g->eax = eax;
    g->ecx = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, sp0 - 4u, edi, 2u, sp0 + 4u, rd32(sp0 - 0x1cu), 2u, rd32(sp0 - 0x14u));
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(1011e510)
    t6 = rd16(sp0 - 4u);
    t7 = rd16(sp0 + 4u);
    wr16(ebx - 8u, (uint16_t)t7);
    wr16(ebx, (uint16_t)t6);
    if (ebp != 1u)
    {
        edx = (edx & 0xffff0000u) | t7;
        ebx = ebx + 2u;
        ebp = ebp - 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1011e4f6;
    }
    eax = (eax & 0xffff0000u) | t6;
    edx = (edx & 0xffff0000u) | t7;
    COW_AT(1011e52a)
    wr32(sp0 - 0x18u, 2u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, self + 8u);
    g->eax = eax;
    g->ecx = self + 8u;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 8u, edi, 2u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t9 = g->ecx;
    eax = t8;
    ecx = t9;
    COW_AT(1011e536)
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, self + 0xau);
    g->ecx = ecx;
    g->edx = self + 0xau;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0xau, edi, 2u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), 2u, rd32(sp0 - 0x14u));
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    COW_AT(1011e542)
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, self + 0xcu);
    g->eax = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t12 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0xcu, edi, 2u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), 2u, rd32(sp0 - 0x20u));
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1011e54e)
    wr32(sp0 - 0x3cu, 2u);
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, self + 0xeu);
    g->eax = eax;
    g->ecx = self + 0xeu;
    g->esp = sp0 - 0x28u;
    t14 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0xeu, edi, 2u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 2u, rd32(sp0 - 0x2cu));
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(1011e55a)
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, edi);
    wr32(sp0 - 0x50u, self + 0x1cu);
    g->ecx = ecx;
    g->edx = self + 0x1cu;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x1cu, edi, 1u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), 2u, rd32(sp0 - 0x38u));
    t16 = g->ecx;
    t17 = g->edx;
    ecx = t16;
    edx = t17;
    COW_AT(1011e566)
    wr32(sp0 - 4u, 0xffffffdfu - self);
    eax = 0xffffffdfu - self;
    ebp = self + 0x21u;
    loc_4 = 0xffffffdfu - self;
L_1011e577: ;
    COW_AT(1011e577)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ebp - 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, ebp - 4u, edi, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    ebx = ebp - 4u;
    COW_AT(1011e583)
    if (rd8(ebx) >= 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
    COW_AT(1011e58c)
        wr8(ebx, (uint8_t)((uint8_t)eax + 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    }
    COW_AT(1011e590)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ebp);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, ebp, edi, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(1011e599)
    if (rd8(ebp) >= 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebp);
    COW_AT(1011e5a3)
        wr8(ebp, (uint8_t)((uint8_t)eax + 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    }
    COW_AT(1011e5a8)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ebp + 4u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, ebp + 4u, edi, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    ebx = ebp + 4u;
    COW_AT(1011e5b4)
    if (rd8(ebx) >= 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
    COW_AT(1011e5bd)
        wr8(ebx, (uint8_t)((uint8_t)eax + 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
    }
    COW_AT(1011e5c1)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, ebp + 8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, ebp + 8u, edi, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    ebx = ebp + 8u;
    COW_AT(1011e5cd)
    if (rd8(ebx) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
    COW_AT(1011e5d6)
        if ((uint8_t)eax < 0xffu)
        {
    COW_AT(1011e5da)
            wr8(ebx, (uint8_t)((uint8_t)eax + 1u));
            t30 = (uint8_t)((uint8_t)eax + 1u);
            wr32(sp0 + 4u, t30);
            d31 = fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3acu)));
            if ((cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x100u) != 0u)
            {
                eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x100u;
                x0 = d31;
            }
            else
            {
                eax = cow_fsw(g, d31, (double)rdf32(COW_IMG(0x10329a20u)), 1u) & 0x100u;
                x0 = d31;
    COW_AT(1011e600)
                x0 = (double)rdf32(COW_IMG(0x10329a20u));
            }
    COW_AT(1011e608)
            g->ecx = ecx;
            g->edx = edx;
            fpush(g, x0);
            g->esp = sp0 - 0x14u;
            t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t33 = g->ecx;
            t34 = g->edx;
            eax = t32;
            ecx = t33;
            edx = t34;
    COW_AT(1011e60d)
            wr8(ebp + 8u, (uint8_t)eax);
        }
    }
    COW_AT(1011e610)
    if ((int32_t)(ebp + rd32(sp0 - 4u) + 1u) < 4)
    {
        eax = ebp + rd32(sp0 - 4u) + 1u;
        ebp = ebp + 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1011e577;
    }
    eax = ebp + rd32(sp0 - 4u) + 1u;
    COW_AT(1011e620)
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 0x20u, self + 0x2du);
    g->eax = eax;
    g->ecx = self + 0x2du;
    g->esp = sp0 - 4u;
    t35 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x2du, edi, 1u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t36 = g->ecx;
    eax = t35;
    ecx = t36;
    COW_AT(1011e62c)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, self + 0x2eu);
    g->ecx = ecx;
    g->edx = self + 0x2eu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x2eu, edi, 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), 1u, rd32(sp0 - 0x14u));
    t37 = g->ecx;
    t38 = g->edx;
    ecx = t37;
    edx = t38;
    COW_AT(1011e638)
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, self + 0x2fu);
    g->eax = self + 0x2fu;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t39 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x2fu, edi, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), 1u, rd32(sp0 - 0x20u));
    t40 = g->edx;
    eax = t39;
    edx = t40;
    COW_AT(1011e644)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, edi);
    wr32(sp0 - 0x44u, self + 0x30u);
    g->eax = eax;
    g->ecx = self + 0x30u;
    g->esp = sp0 - 0x28u;
    t41 = cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x30u, edi, 1u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 1u, rd32(sp0 - 0x2cu));
    t42 = g->ecx;
    eax = t41;
    ecx = t42;
    COW_AT(1011e650)
    wr32(sp0 - 0x48u, 0x10u);
    wr32(sp0 - 0x4cu, edi);
    wr32(sp0 - 0x50u, self + 0x32u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1011e4b0u), 7, self + 0x32u, edi, 0x10u, rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), 1u, rd32(sp0 - 0x38u));
    COW_AT(1011e65c)
    wr32(self + 0xacu, 0u);
    wr32(self + 0x90u, 0u);
    wr32(self + 0x74u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0xb0u, 0x3f800000u);
    wr32(self + 0x94u, 0x3f800000u);
    wr32(self + 0x78u, 0x3f800000u);
    wr32(self + 0x5cu, 0x3f800000u);
    eax = self + 0x1du;
    edi = self + 0x60u;
L_1011e697: ;
    COW_AT(1011e697)
    t43 = (((uint32_t)rd8(eax + 0xcu) << 8u | rd8(eax)) << 8u | rd8(eax + 4u)) << 8u | rd8(eax + 8u);
    t44 = rd8(eax + 8u);
    wr32(edi, t43);
    if ((int32_t)(eax - self - 0x1cu) < 4)
    {
        eax = eax + 1u;
        edi = edi + 0x1cu;
        goto L_1011e697;
    }
    eax = eax + 1u;
    edx = t44;
    COW_AT(1011e6c1)
    g->ebx = ebx;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x1011e6d0u), self, edx, 0);
    COW_AT(1011e6c8)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011e4e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011e4f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e503u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011e510u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e52au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011e536u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x18u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011e542u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x24u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011e54eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x30u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011e55au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, 2u);
        (void)sp0;
        return 1;
    }
    case 0x1011e566u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1011e577u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e583u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011e58cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e590u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e599u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e5dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e600u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e608u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e60du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e610u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e620u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e62cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x18u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1011e638u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1011e644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x30u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1011e650u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x3cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x1011e65cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1011e697u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = 0xffffffe3u - self;
        (void)sp0;
        return 1;
    }
    case 0x1011e6c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1011e6c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e4e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1011e4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
