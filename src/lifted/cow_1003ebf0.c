/* f_0x1003ebf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1003ebf0(Guest* g)
{
    double d13;
    double d19;
    double d20;
    double d22;
    double d23;
    double d25;
    double d3;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    double loc_20_f;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t21;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    uint32_t t54;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003ec10u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x30u); goto E_1003ec10;
    case 0x1003ec3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_1003ec3b;
    case 0x1003ec58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_1003ec58;
    case 0x1003ec70u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_1003ec70;
    case 0x1003ec78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_1003ec78;
    case 0x1003ec8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_1003ec8b;
    case 0x1003ec92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ec92;
    case 0x1003ecc2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ecc2;
    case 0x1003ecd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ecd7;
    case 0x1003ecdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ecdc;
    case 0x1003ed32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ed32;
    case 0x1003ed36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ed36;
    case 0x1003ed4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ed4d;
    case 0x1003ed4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1003ed4f;
    case 0x1003ed5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ed5a;
    case 0x1003ed61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ed61;
    case 0x1003ed7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ed7c;
    case 0x1003ed91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003ed91;
    case 0x1003ed9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_1003ed9d;
    case 0x1003edb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003edb1;
    case 0x1003edbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1003edbb;
    case 0x1003edbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1003edbe;
    case 0x1003edd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1003edd2;
    case 0x1003edecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1003edec;
    case 0x1003edf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1003edf8;
    case 0x1003ee0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003ee0c;
    case 0x1003ee16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1003ee16;
    case 0x1003ee19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_1003ee19;
    case 0x1003ee28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_1003ee28;
    default: break;
    }
#endif

    COW_AT(1003ebf0)
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x14u, self);
    t1 = (uint32_t)(int8_t)rd8(self + 0x36u) * 6u;
    wr32(sp0 - 0x34u, t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    COW_RET(0x1003ec10u);
    cow_thiscall(g, COW_IMG(0x10044010u), rd32(COW_IMG(0x1047bba8u)), 1, t1);
    t2 = g->edx;
    edx = t2;
    COW_AT(1003ec10)
    d3 = fr(g, (double)rdf32(sp0 + 0x10u) - (double)rdf32(sp0 + 8u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d3);
    t4 = rd32(COW_IMG(0x1047bfa8u));
    t5 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u);
    d6 = fr(g, (double)rdf32(sp0 + 0x14u) - (double)rdf32(sp0 + 0xcu));
    wrf32(sp0 + 0x14u, (float)d6);
    g->eax = t4;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    COW_RET(0x1003ec3bu);
    t7 = cow_thiscall(g, COW_IMG(0x10009e00u), t5, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(1003ec3b)
    d9 = fr(g, (double)(int32_t)rd32(eax + 8u) * (double)rdf32(COW_IMG(0x1032a9f0u)));
    wrf32(sp0 - 0x24u, (float)(double)(float)d9);
    g->eax = rd32(COW_IMG(0x1047bfa8u));
    g->edx = edx;
    t10 = rd32(COW_IMG(0x1047bfa8u));
    g->esp = sp0 - 0x30u;
    COW_RET(0x1003ec58u);
    t11 = cow_thiscall(g, COW_IMG(0x10009e00u), rd32(t10 + 0xdc8u), 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1003ec58)
    d13 = fr(g, (double)(int32_t)rd32(eax + 0xcu) * (double)rdf32(COW_IMG(0x1032a9f0u)));
    wrf32(sp0 - 0x1cu, (float)(double)(float)d13);
    g->eax = eax;
    g->edx = edx;
    t14 = rd32(COW_IMG(0x1047bba8u));
    g->esp = sp0 - 0x30u;
    COW_RET(0x1003ec70u);
    t15 = cow_thiscall(g, COW_IMG(0x10044130u), t14, 0);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(1003ec70)
    if (eax == 0u)
    {
        ebx = in_ebx;
        edi = in_edi;
    }
    else
    {
    COW_AT(1003ec78)
        t18 = rd8(self + 0x35u);
        wr32(sp0 + 0x10u, 0u);
        if ((int8_t)t18 <= 0)
        {
            ebx = in_ebx;
            esi = self;
            edi = in_edi;
        }
        else
        {
    COW_AT(1003ec8b)
            wr32(sp0 - 0x34u, in_ebx);
            wr32(sp0 - 0x38u, in_edi);
            ebp = self + 0x48u;
            esi = self;
            loc_34 = in_ebx;
            loc_38 = in_edi;
L_1003ec92: ;
    COW_AT(1003ec92)
            d19 = fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(ebp + 4u)) + (double)rdf32(sp0 + 8u));
            wrf32(sp0 - 0x20u, (float)(double)(float)d19);
            d20 = fr(g, fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(ebp + 4u)) + (double)rdf32(sp0 + 0xcu));
            wrf32(sp0 - 0x18u, (float)(double)(float)d20);
            if ((int32_t)((uint32_t)(int8_t)rd8(ebp + 2u) * 6u) <= 0)
            {
                ecx = ebp + 0x14u;
                goto L_1003ed36;
            }
            ecx = ebp + 0x14u;
            edi = 0u;
            loc_20_f = (double)(float)d19;
            loc_18_f = (double)(float)d20;
L_1003ecc2: ;
    COW_AT(1003ecc2)
            if (rd8(ecx + 0xfu) * rd32(sp0 + 4u) >> 8u <= 0xffu)
            {
                edx = rd8(ecx + 0xfu) * rd32(sp0 + 4u) >> 8u;
            }
            else
            {
    COW_AT(1003ecd7)
                edx = 0xffu;
            }
    COW_AT(1003ecdc)
            t21 = rd32(ecx + 0xcu);
            d22 = fr(g, fr(g, (double)rdf32(sp0 - 0x24u) * (double)rdf32(ecx)) + loc_20_f);
            wrf32(eax, (float)d22);
            d23 = fr(g, (double)rdf32(sp0 - 0x1cu) * (double)rdf32(ecx + 4u));
            wr32(eax + 8u, 0u);
            wr32(eax + 0xcu, 0x3f800000u);
            t24 = (t21 & 0xffffffu) | edx << 0x18u;
            wr32(eax + 0x10u, t24);
            d25 = fr(g, d23 + (double)rdf32(sp0 - 0x18u));
            wrf32(eax + 4u, (float)d25);
            t26 = rd32(ecx + 0x10u);
            wr32(eax + 0x14u, t26);
            t27 = rd32(ecx + 0x14u);
            wr32(eax + 0x18u, t27);
            if ((int32_t)(edi + 1u) < (int32_t)((uint32_t)(int8_t)rd8(ebp + 2u) * 6u))
            {
                eax = eax + 0x1cu;
                ecx = ecx + 0x18u;
                edi = edi + 1u;
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_20_f = (double)rdf32(sp0 - 0x20u);
                loc_18_f = (double)rdf32(sp0 - 0x18u);
                goto L_1003ecc2;
            }
            eax = eax + 0x1cu;
            ecx = ecx + 0x18u;
    COW_AT(1003ed32)
            esi = rd32(sp0 - 0x14u);
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
L_1003ed36: ;
    COW_AT(1003ed36)
            t28 = rd32(sp0 + 0x10u) + 1u;
            t29 = rd8(esi + 0x35u);
            t30 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t28);
            if ((int32_t)(t30 + 1u) < (int8_t)t29)
            {
                ebp = ecx;
                goto L_1003ec92;
            }
            edx = (uint32_t)(int8_t)t29;
    COW_AT(1003ed4d)
            ebx = loc_34;
            edi = loc_38;
        }
    COW_AT(1003ed4f)
        g->esp = sp0 - 0x30u;
        COW_RET(0x1003ed5au);
        cow_fastcall(g, COW_IMG(0x100441a0u), rd32(COW_IMG(0x1047bba8u)), edx, 0);
        t31 = g->edx;
        edx = t31;
    COW_AT(1003ed5a)
        if (rd32(esi + 0x44u) != 0u)
        {
            eax = rd32(esi + 0x44u);
    COW_AT(1003ed61)
            wr32(sp0 - 0x10u, rd32(eax));
            t32 = rd32(eax + 4u);
            wr32(sp0 - 0xcu, t32);
            t33 = rd32(eax + 8u);
            wr32(sp0 - 8u, t33);
            t34 = rd32(eax + 0xcu);
            wr32(sp0 - 4u, t34);
            edx = t34;
        }
    COW_AT(1003ed7c)
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0u);
        g->eax = sp0 - 0x10u;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        COW_RET(0x1003ed91u);
        t35 = cow_thiscall(g, COW_IMG(0x10075690u), esi + 0x38u, 5, 0u, 0u, 0u, 0u, sp0 - 0x10u);
        t36 = g->ecx;
        t37 = g->edx;
        eax = t35;
        ecx = t36;
        edx = t37;
    COW_AT(1003ed91)
        if (rd8(COW_IMG(0x1047b9c5u)) & 1u)
        {
            eax = (eax & 0xffffff00u) | 1u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 1u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047b9c5u));
    COW_AT(1003ed9d)
            wr8(COW_IMG(0x1047b9c5u), (uint8_t)(ecx | eax));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x30u;
            COW_RET(0x1003edb1u);
            t38 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9acu), 0);
            t39 = g->ecx;
            t40 = g->edx;
            eax = t38;
            ecx = t39;
            edx = t40;
    COW_AT(1003edb1)
            wr32(sp0 - 0x34u, COW_IMG(0x1003ee40u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            COW_RET(0x1003edbbu);
            t41 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003ee40u));
            t42 = g->edx;
            eax = t41;
            edx = t42;
    COW_AT(1003edbb)
        }
    COW_AT(1003edbe)
        wr32(sp0 - 0x34u, COW_IMG(0x103520a8u));
        wr32(sp0 - 0x38u, COW_IMG(0x10352180u));
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        COW_RET(0x1003edd2u);
        t43 = cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047b9acu), edx, 2, COW_IMG(0x10352180u), COW_IMG(0x103520a8u));
        t44 = g->edx;
        eax = t43;
        edx = t44;
    COW_AT(1003edd2)
        wr32(sp0 - 0x34u, 0xffffffffu);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 4u);
        t45 = (uint32_t)(int8_t)rd8(esi + 0x36u) * 2u;
        wr32(sp0 - 0x40u, t45);
        wr32(sp0 - 0x44u, 0u);
        g->eax = eax;
        g->edx = edx;
        t46 = rd32(COW_IMG(0x1047bba8u));
        g->esp = sp0 - 0x30u;
        COW_RET(0x1003edecu);
        t47 = cow_thiscall(g, COW_IMG(0x10043f40u), t46, 5, 0u, t45, 4u, 0u, 0xffffffffu);
        t48 = g->ecx;
        t49 = g->edx;
        eax = t47;
        ecx = t48;
        edx = t49;
    COW_AT(1003edec)
        if ((rd8(COW_IMG(0x1047b9c5u)) & 2u) != 0u)
        {
            eax = (eax & 0xffffff00u) | 2u;
        }
        else
        {
            eax = (eax & 0xffffff00u) | 2u;
            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047b9c5u));
    COW_AT(1003edf8)
            wr8(COW_IMG(0x1047b9c5u), (uint8_t)(ecx | eax));
            g->eax = eax;
            g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
            g->esp = sp0 - 0x30u;
            COW_RET(0x1003ee0cu);
            t50 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b9a0u), 0);
            t51 = g->ecx;
            t52 = g->edx;
            eax = t50;
            ecx = t51;
            edx = t52;
    COW_AT(1003ee0c)
            wr32(sp0 - 0x34u, COW_IMG(0x1003ee30u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            COW_RET(0x1003ee16u);
            t53 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003ee30u));
            t54 = g->edx;
            eax = t53;
            edx = t54;
    COW_AT(1003ee16)
        }
    COW_AT(1003ee19)
        wr32(sp0 - 0x34u, COW_IMG(0x103521d0u));
        g->esp = sp0 - 0x30u;
        COW_RET(0x1003ee28u);
        cow_fastcall(g, COW_IMG(0x1006af00u), COW_IMG(0x1047b9a0u), edx, 1, COW_IMG(0x103521d0u));
    }
    COW_AT(1003ee28)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x30u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x2cu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003ebf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003ec10u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x14u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003ec3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1003ec58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1003ec70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1003ec78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1003ec8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1003ec92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ecc2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ecd7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ecdcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->ebx = 0x3f800000u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed4du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_20_f;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ed91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003ed9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003edb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1003edbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1003edbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003edd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003edecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003edf8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ee0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ee16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1003ee19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003ee28u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ebf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003ebf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
