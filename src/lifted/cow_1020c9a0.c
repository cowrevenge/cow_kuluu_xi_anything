/* f_0x1020c9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020c9a0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 292u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020c9b7u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9b7;
    case 0x1020c9c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9c6;
    case 0x1020c9d8u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9d8;
    case 0x1020c9dfu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020c9df;
    case 0x1020c9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020c9ec;
    case 0x1020c9f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020c9f3;
    case 0x1020ca49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca49;
    case 0x1020ca57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca57;
    case 0x1020ca65u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020ca65;
    case 0x1020ca9du: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020ca9d;
    case 0x1020caaau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020caaa;
    case 0x1020cab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cab3;
    case 0x1020cac9u: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cac9;
    case 0x1020cad6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cad6;
    case 0x1020cadfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cadf;
    case 0x1020cae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cae5;
    case 0x1020cafau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cafa;
    case 0x1020cb0fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb0f;
    case 0x1020cb17u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb17;
    case 0x1020cb1eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb1e;
    case 0x1020cb52u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb52;
    case 0x1020cb5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb5b;
    case 0x1020cb60u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb60;
    case 0x1020cb6bu: ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x104u); g->esi = rd32(sp0 - 0x104u); goto E_1020cb6b;
    case 0x1020cb74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb74;
    case 0x1020cb79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb79;
    case 0x1020cb81u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb81;
    case 0x1020cb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb84;
    case 0x1020cb8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cb8e;
    case 0x1020cbafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1020cbaf;
    case 0x1020cbb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_1020cbb8;
    case 0x1020cbd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1020cbd1;
    case 0x1020cbe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_1020cbe0;
    default: break;
    }
#endif

    COW_AT(1020c9a0)
    wr32(sp0 - 0x104u, in_esi);
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_104 = in_esi;
        goto L_1020cbe0;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020c9b7)
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_104 = in_esi;
        goto L_1020cbe0;
    }
    COW_AT(1020c9c6)
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    COW_AT(1020c9d8)
    t1 = rd32(COW_IMG(0x1020cbecu) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1020c9dfu: goto L_1020c9df;
    case 0x1020ca9du: goto L_1020ca9d;
    case 0x1020cac9u: goto L_1020cac9;
    case 0x1020cb0fu: goto L_1020cb0f;
    case 0x1020cb6bu: goto L_1020cb6b;
    default: rt_fatal(g, COW_IMG(0x1020c9d8u), "switch");
    }
    return 0;
L_1020c9df: ;
    COW_AT(1020c9df)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t33 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t34 = g->edx;
    if (t33 == 0u)
    {
        eax = t33;
        edx = t34;
        loc_104 = in_esi;
    }
    else
    {
        eax = t33;
        edx = t34;
    COW_AT(1020c9ec)
        if (rd32(self + 0x14u) != 0u)
        {
    COW_AT(1020ca57)
            if (rd32(COW_IMG(0x104dfd98u)) == 0u)
            {
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
                ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(1020ca65)
                t48 = rd16(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xfcu) >> 1u;
                wr32(sp0 - 0x108u, t48);
                t49 = (uint32_t)(int8_t)rd8(rd32(COW_IMG(0x10480af0u) + rd16(ecx + 0x40da8u) * 4u) + 0xefu);
                wr32(sp0 - 0x10cu, t49);
                wr32(sp0 - 0x110u, eax + 4u);
                g->edx = t48;
                g->esp = sp0 - 0x104u;
                t50 = cow_call_regs(g, COW_IMG(0x101ffc20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 3, eax + 4u, t49, t48);
                t51 = g->edx;
                eax = t50;
                edx = t51;
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
        else
        {
            ecx = rd32(self + 0x14u);
    COW_AT(1020c9f3)
            wr32(sp0 - 0x108u, in_ebx);
            wr32(sp0 - 0x10cu, in_edi);
            edi = eax + 8u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t35 = ~ecx - 1u;
            edi = COW_IMG(0x1036f9b0u);
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0xffu);
            af = 0u;
            zf = 0u;
            sf = 1u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t36 = t35 + ~ecx + 3u;
            wr32(sp0 - 0x110u, t36);
            g->eax = t36;
            g->esp = sp0 - 0x104u;
            t37 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ~ecx - 1u, t35, 1, 3, t36, in_edi, in_ebx);
            t38 = g->ecx;
            t39 = g->edx;
            wr32(sp0 - 0x114u, eax + 8u);
            wr32(sp0 - 0x118u, COW_IMG(0x1036f9b0u));
            wr32(sp0 - 0x11cu, COW_IMG(0x1036f9a8u));
            wr32(sp0 - 0x120u, t37);
            g->ebx = eax + 8u;
            g->esp = sp0 - 0x10cu;
            t40 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t37, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), eax + 8u, rd32(sp0 - 0x110u));
            wr32(sp0 - 0x110u, t37);
            g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
            t41 = rd32(COW_IMG(0x10662d40u));
            t42 = rd32(rd32(COW_IMG(0x10662d40u)));
            t43 = cow_thiscall(g, rd32(t42 + 0x24u), t41, 1, t37);
            t44 = g->ecx;
            t45 = g->edx;
            if (t37 == 0u)
            {
                eax = t43;
                edx = t45;
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
                eax = t43;
                ecx = t44;
                edx = t45;
                esi = t37;
    COW_AT(1020ca49)
                wr32(sp0 - 0x108u, esi);
                g->eax = eax;
                g->esp = sp0 - 0x104u;
                t46 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
                t47 = g->edx;
                eax = t46;
                edx = t47;
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
    }
L_1020cbd1: ;
    COW_AT(1020cbd1)
    wr32(sp0 - 0x108u, COW_IMG(0x10385a50u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t52 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a50u));
    t53 = g->edx;
    eax = t52;
    edx = t53;
    loc_104 = rd32(sp0 - 0x104u);
L_1020cbe0: ;
    COW_AT(1020cbe0)
    g->ebx = in_ebx;
    g->esi = loc_104;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1020ca9d: ;
    COW_AT(1020ca9d)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t29 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t30 = g->edx;
    if (t29 == 0u)
    {
        eax = t29;
        edx = t30;
        loc_104 = in_esi;
    }
    else
    {
        eax = t29;
        edx = t30;
    COW_AT(1020caaa)
        if (rd32(eax) != 0u)
        {
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
    COW_AT(1020cab3)
            wr32(sp0 - 0x108u, 0u);
            wr32(sp0 - 0x10cu, eax + 4u);
            g->edx = edx;
            g->esp = sp0 - 0x104u;
            t31 = cow_call_regs(g, COW_IMG(0x101ffa20u), eax + 4u, rd32(COW_IMG(0x10663ab8u)), g->edx, 0, 2, eax + 4u, 0u);
            t32 = g->edx;
            eax = t31;
            edx = t32;
            loc_104 = rd32(sp0 - 0x104u);
        }
    }
    goto L_1020cbd1;
L_1020cac9: ;
    COW_AT(1020cac9)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t20 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        edx = t22;
        loc_104 = in_esi;
    }
    else
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(1020cad6)
        if (rd32(eax) != 0u)
        {
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
    COW_AT(1020cadf)
            if ((rd8(eax + 0x34u) & 8u) == 0u)
            {
    COW_AT(1020cafa)
                wr32(sp0 - 0x108u, 0u);
                wr32(sp0 - 0x10cu, 0u);
                t26 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t26);
                g->eax = t26;
                g->edx = edx;
                g->esp = sp0 - 0x104u;
                t27 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t26, 0u, 0u);
                t28 = g->edx;
                eax = t27;
                edx = t28;
                loc_104 = rd32(sp0 - 0x104u);
            }
            else
            {
    COW_AT(1020cae5)
                wr32(sp0 - 0x108u, 5u);
                wr32(sp0 - 0x10cu, 0u);
                t23 = rd32(eax + 0x1cu);
                wr32(sp0 - 0x110u, t23);
                g->eax = eax;
                g->edx = t23;
                g->esp = sp0 - 0x104u;
                t24 = cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, t23, 0u, 5u);
                t25 = g->edx;
                eax = t24;
                edx = t25;
                loc_104 = rd32(sp0 - 0x104u);
            }
        }
    }
    goto L_1020cbd1;
L_1020cb0f: ;
    COW_AT(1020cb0f)
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        goto L_1020cb52;
    }
    eax = rd32(self + 0x20u);
    COW_AT(1020cb17)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    eax = eax - 1u;
    COW_AT(1020cb1e)
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x10cu, 1u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, 0x140u);
    wr32(sp0 - 0x11cu, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x140u);
    t11 = g->edx;
    wr32(sp0 - 0x118u, t10);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x120u, COW_IMG(0x1020cc00u));
    g->edx = t11;
    g->esp = sp0 - 0x104u;
    t12 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x1020cc00u), 0u, t10, 0u, 0u, 1u, 0u);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t13;
    return t12;
L_1020cb52: ;
    COW_AT(1020cb52)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t14 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    eax = t14;
    edx = t15;
    COW_AT(1020cb5b)
    if (rd32(eax) != 0u)
    {
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb60)
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f560u));
    loc_108 = eax + 8u;
    eax = eax + 8u;
    loc_10c = COW_IMG(0x1036f560u);
L_1020cbb8: ;
    COW_AT(1020cbb8)
    wr32(sp0 - 0x110u, sp0 - 0x100u);
    g->eax = eax;
    g->ecx = sp0 - 0x100u;
    g->esp = sp0 - 0xfcu;
    t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, loc_10c, loc_108, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
    t17 = g->ecx;
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x110u;
    t18 = cow_cdecl(g, COW_IMG(0x10080dc0u), 2, sp0 - 0x100u, 0u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1020cbd1;
L_1020cb6b: ;
    COW_AT(1020cb6b)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0x104u;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), ecx, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        loc_104 = in_esi;
        goto L_1020cbd1;
    }
    eax = t2;
    edx = t3;
    COW_AT(1020cb74)
    if (rd32(eax) != 0u)
    {
        loc_104 = rd32(sp0 - 0x104u);
        goto L_1020cbd1;
    }
    COW_AT(1020cb79)
    if (rd32(self + 0x20u) == 0u) goto L_1020cbaf;
    ecx = rd32(self + 0x20u);
    COW_AT(1020cb81)
    if (ecx != 1u)
    {
        loc_104 = rd32(sp0 - 0x104u);
    }
    else
    {
    COW_AT(1020cb84)
        if (rd32(COW_IMG(0x10664494u)) == 0u)
        {
            loc_104 = rd32(sp0 - 0x104u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020cb8e)
            wr32(sp0 - 0x108u, eax + 8u);
            g->esp = sp0 - 0x104u;
            cow_call_regs(g, COW_IMG(0x1020c410u), g->eax, g->ecx, edx, 0, 1, eax + 8u);
            t4 = g->edx;
            g->eax = rd32(rd32(COW_IMG(0x10664494u)));
            g->edx = t4;
            t5 = rd32(rd32(COW_IMG(0x10664494u)));
            t6 = cow_thiscall(g, rd32(t5 + 0x74u), rd32(COW_IMG(0x10664494u)), 0);
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_thiscall(g, COW_IMG(0x1020c390u), rd32(COW_IMG(0x10664494u)), 0);
            t9 = g->edx;
            eax = t8;
            edx = t9;
            loc_104 = rd32(sp0 - 0x104u);
        }
    }
    goto L_1020cbd1;
L_1020cbaf: ;
    COW_AT(1020cbaf)
    wr32(sp0 - 0x108u, eax + 8u);
    wr32(sp0 - 0x10cu, COW_IMG(0x1036f980u));
    loc_108 = eax + 8u;
    eax = eax + 8u;
    loc_10c = COW_IMG(0x1036f980u);
    goto L_1020cbb8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020c9a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020c9b7u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9c6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9d8u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9dfu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020c9f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca49u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca57u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca65u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020ca9du:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020caaau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cab3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cac9u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cad6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cadfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cae5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cafau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb17u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb1eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb5bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb6bu:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb74u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb79u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb81u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb84u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cb8eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbafu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbb8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x10cu;
        (void)sp0;
        return 1;
    }
    case 0x1020cbd1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    case 0x1020cbe0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_104;
        uint32_t loc_108;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x104u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020c9a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020c9a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
