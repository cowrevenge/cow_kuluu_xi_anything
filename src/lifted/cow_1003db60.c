/* f_0x1003db60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1003db60(Guest* g)
{
    double d30;
    double d34;
    double d35;
    double d36;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
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
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003db71u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_1003db71;
    case 0x1003db81u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_1003db81;
    case 0x1003db90u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1003db90;
    case 0x1003dba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dba0;
    case 0x1003dbaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dbae;
    case 0x1003dbb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dbb7;
    case 0x1003dbccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dbcc;
    case 0x1003dbd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dbd6;
    case 0x1003dbd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1003dbd9;
    case 0x1003dbf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003dbf0;
    case 0x1003dc58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003dc58;
    case 0x1003dc6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003dc6e;
    case 0x1003dc79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003dc79;
    case 0x1003dc97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1003dc97;
    case 0x1003dcaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1003dcae;
    case 0x1003dcbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dcba;
    case 0x1003dcd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1003dcd3;
    case 0x1003dce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003dce9;
    case 0x1003dcf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1003dcf2;
    case 0x1003dd05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd05;
    case 0x1003dd19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd19;
    case 0x1003dd36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd36;
    case 0x1003dd4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd4e;
    case 0x1003dd69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd69;
    case 0x1003dd81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd81;
    case 0x1003dd99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003dd99;
    case 0x1003ddb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_1003ddb1;
    case 0x1003dde8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1003dde8;
    default: break;
    }
#endif

    COW_AT(1003db60)
    wr32(sp0 - 0x2cu, in_esi);
    if (rd32(COW_IMG(0x1047bfa8u)) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_2c = in_esi;
    }
    else
    {
    COW_AT(1003db71)
        if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            edi = in_edi;
            loc_2c = in_esi;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x18u);
    COW_AT(1003db81)
            wr32(sp0 - 0x24u, eax + 0x4cu);
            if (eax + 0x4cu == 0u)
            {
                ebx = in_ebx;
                ebp = in_ebp;
                edi = in_edi;
                loc_2c = in_esi;
            }
            else
            {
                esi = eax + 0x4cu;
                loc_24 = eax + 0x4cu;
    COW_AT(1003db90)
                t1 = (self & 0xffffff00u) | rd8(esi + 2u);
                wr32(sp0 - 0x30u, t1);
                t2 = (in_edx & 0xffffff00u) | rd8(esi + 1u);
                wr32(sp0 - 0x34u, t2);
                t3 = (eax & 0xffffff00u) | rd8(esi);
                wr32(sp0 - 0x38u, t3);
                g->eax = t3;
                g->edx = t2;
                g->esp = sp0 - 0x2cu;
                t4 = cow_cdecl(g, COW_IMG(0x10014d90u), 3, t3, t2, t1);
                t5 = g->edx;
                eax = t4;
                edx = t5;
    COW_AT(1003dba0)
                if (rd8(esi + 0x12u) <= 2u)
                {
                    ebx = in_ebx;
                    ebp = in_ebp;
                    edi = in_edi;
                    loc_2c = rd32(sp0 - 0x2cu);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(esi + 0x12u);
    COW_AT(1003dbae)
                    if (rd8(COW_IMG(0x1047b984u)) & 1u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b984u));
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047b984u));
    COW_AT(1003dbb7)
                        wr8(COW_IMG(0x1047b984u), (uint8_t)(eax | 1u));
                        g->eax = eax;
                        g->edx = (edx & 0xffffff00u) | (uint8_t)(eax | 1u);
                        g->esp = sp0 - 0x2cu;
                        t6 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047b994u), 0);
                        t7 = g->ecx;
                        t8 = g->edx;
                        eax = t6;
                        ecx = t7;
                        edx = t8;
    COW_AT(1003dbcc)
                        wr32(sp0 - 0x30u, COW_IMG(0x1003ddf0u));
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x2cu;
                        t9 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1003ddf0u));
                        t10 = g->edx;
                        eax = t9;
                        edx = t10;
    COW_AT(1003dbd6)
                    }
    COW_AT(1003dbd9)
                    wr32(sp0 - 0x30u, in_ebx);
                    wr32(sp0 - 0x34u, in_ebp);
                    wr32(sp0 - 0x38u, in_edi);
                    wr32(sp0 - 0x3cu, COW_IMG(0x10351df8u));
                    wr32(sp0 - 0x40u, COW_IMG(0x10351e4cu));
                    g->esp = sp0 - 0x38u;
                    cow_fastcall(g, COW_IMG(0x1006ae30u), COW_IMG(0x1047b994u), edx, 2, COW_IMG(0x10351e4cu), COW_IMG(0x10351df8u));
    COW_AT(1003dbf0)
                    t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t12 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t11);
                    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
                    edi = t12;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    t13 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
                    t14 = rd32(COW_IMG(0x1047cf7cu));
                    t15 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
                    wr32(t14 + 0xa90u, t13);
                    wr32(sp0 - 0x3cu, t15);
                    t16 = rd32(COW_IMG(0x1047bfa8u));
                    esi = rd32(COW_IMG(0x1047bfa8u)) + 0xd50u;
                    edi = t15;
                    ecx = 0x10u;
                    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    g->edx = t16;
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t15);
                    t17 = g->edx;
                    edx = t17;
                    ebx = t12;
                    ebp = t15;
    COW_AT(1003dc58)
                    t18 = rd32(COW_IMG(0x1047cf7cu)) + 0x810u;
                    wr32(sp0 - 0x3cu, t18);
                    g->eax = t18;
                    g->edx = edx;
                    g->esp = sp0 - 0x38u;
                    t19 = cow_thiscall(g, COW_IMG(0x1006a480u), rd32(COW_IMG(0x1047bfa8u)), 1, t18);
                    t20 = g->edx;
                    eax = t19;
                    edx = t20;
    COW_AT(1003dc6e)
                    g->edx = edx;
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1006a4c0u), rd32(COW_IMG(0x1047bfa8u)), 0);
                    t21 = g->edx;
                    edx = t21;
    COW_AT(1003dc79)
                    wr32(ebx + 0x3cu, 0x3f800000u);
                    wr32(ebx + 0x30u, 0u);
                    wr32(ebx + 0x34u, 0u);
                    wr32(ebx + 0x38u, 0u);
                    wr32(sp0 - 0x3cu, ebx);
                    g->eax = 0u;
                    g->esp = sp0 - 0x38u;
                    t22 = cow_thiscall(g, COW_IMG(0x1006a520u), rd32(COW_IMG(0x1047bfa8u)), 1, ebx);
                    eax = t22;
    COW_AT(1003dc97)
                    wr32(sp0 - 0x28u, sp0 - 0x20u);
                    t23 = rd32(sp0 - 0x24u);
                    wr32(sp0 - 0x24u, 8u);
                    esi = t23;
                    edi = t23 + 0x20u;
                    loc_28 = sp0 - 0x20u;
                    loc_24 = 8u;
L_1003dcae: ;
    COW_AT(1003dcae)
                    wr32(sp0 - 0x3cu, rd32(edi));
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1003e280u), loc_28, 1, rd32(edi));
                    loc_28 = rd32(sp0 - 0x28u);
    COW_AT(1003dcba)
                    wr32(sp0 - 0x28u, loc_28 + 4u);
                    t24 = rd32(sp0 - 0x24u) - 1u;
                    t25 = rd32(sp0 - 0x24u);
                    wr32(sp0 - 0x24u, t24);
                    if (t25 != 1u)
                    {
                        eax = t24;
                        edi = edi + 4u;
                        loc_28 = loc_28 + 4u;
                        loc_24 = t24;
                        goto L_1003dcae;
                    }
    COW_AT(1003dcd3)
                    wr32(sp0 - 0x3cu, esi + 0x40u);
                    wr32(sp0 - 0x40u, sp0 - 0x20u);
                    t26 = rd8(esi + 0x12u);
                    wr32(sp0 - 0x44u, t26);
                    wr32(sp0 - 0x48u, 8u);
                    g->eax = esi + 0x40u;
                    g->ecx = sp0 - 0x20u;
                    g->edx = t26;
                    g->esp = sp0 - 0x48u;
                    t27 = cow_stdcall(g, COW_IMG(0x10014d80u), 0);
                    t28 = g->ecx;
                    t29 = g->edx;
                    d30 = cow_take_float(g);
                    eax = t27;
                    ecx = t28;
                    edx = t29;
                    x0 = d30;
    COW_AT(1003dce9)
                    wrf32(sp0 - 0x24u, (float)(double)(float)x0);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x48u;
                    t31 = cow_stdcall(g, COW_IMG(0x10014d70u), 0);
                    t32 = g->ecx;
                    t33 = g->edx;
                    d34 = cow_take_float(g);
                    eax = t31;
                    ecx = t32;
                    edx = t33;
                    x0 = d34;
    COW_AT(1003dcf2)
                    d35 = fr(g, (double)rdf32(sp0 - 0x24u) - x0);
                    wr32(sp0 - 0x4cu, ecx);
                    d36 = fr(g, d35 * (double)rdf32(COW_IMG(0x10329a34u)));
                    wrf32(sp0 - 0x4cu, (float)(double)(float)d36);
                    g->esp = sp0 - 0x48u;
                    cow_cdecl(g, COW_IMG(0x1003d640u), 1, cow_f2bits((double)(float)d36));
    COW_AT(1003dd05)
                    t37 = rd32(sp0 - 0x20u);
                    wr32(sp0 - 0x50u, t37);
                    t38 = rd32(sp0 - 0x1fu);
                    wr32(sp0 - 0x54u, t38);
                    t39 = rd32(sp0 - 0x1eu);
                    wr32(sp0 - 0x58u, t39);
                    g->edx = t39;
                    g->esp = sp0 - 0x4cu;
                    cow_cdecl(g, COW_IMG(0x10014d90u), 3, t39, t38, t37);
                    t40 = g->edx;
                    edx = t40;
    COW_AT(1003dd19)
                    t41 = rd32(COW_IMG(0x1045666cu));
                    wr32(t41 + 0x178u, 0x43000000u);
                    g->edx = edx;
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, COW_IMG(0x1006a4f0u), rd32(COW_IMG(0x1047bfa8u)), 0);
                    t42 = g->edx;
                    edx = t42;
    COW_AT(1003dd36)
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x1bu);
                    t43 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t43);
                    t44 = rd32(t43);
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, rd32(t44 + 0xc8u), t44, 3, t43, 0x1bu, 0u);
                    t45 = g->ecx;
                    ecx = t45;
    COW_AT(1003dd4e)
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0x89u);
                    t46 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t46);
                    g->edx = rd32(t46);
                    t47 = rd32(t46);
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, rd32(t47 + 0xc8u), ecx, 3, t46, 0x89u, 1u);
                    t48 = g->edx;
                    edx = t48;
    COW_AT(1003dd69)
                    wr32(sp0 - 0x3cu, 0u);
                    wr32(sp0 - 0x40u, 0x1cu);
                    t49 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t49);
                    t50 = rd32(t49);
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, rd32(t50 + 0xc8u), t50, 3, t49, 0x1cu, 0u);
                    t51 = g->ecx;
                    ecx = t51;
    COW_AT(1003dd81)
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0x16u);
                    t52 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t52);
                    g->edx = rd32(t52);
                    t53 = rd32(t52);
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, rd32(t53 + 0xc8u), ecx, 3, t52, 0x16u, 1u);
                    t54 = g->edx;
                    edx = t54;
    COW_AT(1003dd99)
                    wr32(sp0 - 0x3cu, 1u);
                    wr32(sp0 - 0x40u, 0xeu);
                    t55 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
                    wr32(sp0 - 0x44u, t55);
                    g->esp = sp0 - 0x38u;
                    cow_thiscall(g, rd32(rd32(t55) + 0xc8u), rd32(t55), 3, t55, 0xeu, 1u);
    COW_AT(1003ddb1)
                    t56 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t57 = rd32(COW_IMG(0x1047cf7cu));
                    t58 = rd32(sp0 - 0x38u);
                    wr32(t57 + 0xa90u, t56);
                    wr32(t56 * 4u + t57 + 0xa10u, ebp);
                    t59 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
                    t60 = rd32(COW_IMG(0x1047cf7cu));
                    t61 = rd32(sp0 - 0x34u);
                    wr32(t60 + 0xa90u, t59);
                    wr32(t59 * 4u + t60 + 0xa10u, ebx);
                    ebx = rd32(sp0 - 0x30u);
                    ebp = t61;
                    edi = t58;
                    loc_2c = rd32(sp0 - 0x2cu);
                }
            }
        }
    }
    COW_AT(1003dde8)
    g->ebx = ebx;
    g->esi = loc_2c;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003db60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003db71u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003db81u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003db90u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003dba0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dbaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003dbb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003dbccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003dbd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1003dbd9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1003dbf0u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dc58u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dc6eu:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dc79u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dc97u:
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
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dcaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dcbau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dcd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dce9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003dcf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003dd05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003dd19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003dd36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1003dd4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dd69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dd81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dd99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003ddb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1003dde8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003db60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003db60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
