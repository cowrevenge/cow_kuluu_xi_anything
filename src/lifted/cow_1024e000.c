/* f_0x1024e000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1024e000(Guest* g)
{
    double d20;
    double d21;
    double d22;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d38;
    double d41;
    double d42;
    double d49;
    double d50;
    double d51;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_80;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
    uint32_t t37;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 196u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024e01eu: ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 0x8cu); in_ebx = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x90u); goto E_1024e01e;
    case 0x1024e027u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x90u); in_ebp = rd32(sp0 - 0x8cu); in_ebx = rd32(sp0 - 0x88u); g->ebp = rd32(sp0 - 0x8cu); g->ebx = rd32(sp0 - 0x88u); g->esi = rd32(sp0 - 0x90u); goto E_1024e027;
    case 0x1024e073u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_1024e073;
    case 0x1024e074u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); loc_80 = rd32(sp0 - 0x80u); loc_50 = rd32(sp0 - 0x50u); goto E_1024e074;
    case 0x1024e08cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e08c;
    case 0x1024e0b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e0b5;
    case 0x1024e104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e104;
    case 0x1024e111u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e111;
    case 0x1024e1e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e1e2;
    case 0x1024e1efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e1ef;
    case 0x1024e27au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e27a;
    case 0x1024e28au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_80 = rd32(sp0 - 0x80u); goto E_1024e28a;
    case 0x1024e28bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_8c = rd32(sp0 - 0x8cu); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_50 = rd32(sp0 - 0x50u); goto E_1024e28b;
    default: break;
    }
#endif

    COW_AT(1024e000)
    wr32(sp0 - 0x88u, in_ebx);
    wr32(sp0 - 0x8cu, in_ebp);
    wr32(sp0 - 0x90u, in_esi);
    if (arg1 + 0xccu == 0u)
    {
        edi = in_edi;
        loc_88 = in_ebx;
        loc_8c = in_ebp;
        loc_90 = in_esi;
    }
    else
    {
    COW_AT(1024e01e)
        if ((rd8(arg1 + 0xccu) & 4u) == 0u)
        {
            edi = in_edi;
            loc_88 = in_ebx;
            loc_8c = in_ebp;
            loc_90 = in_esi;
        }
        else
        {
    COW_AT(1024e027)
            wr32(sp0 - 0x94u, sp0 - 0x84u);
            wr32(sp0 - 0x98u, 0u);
            wr32(sp0 - 0x9cu, 3u);
            g->eax = sp0 - 0x84u;
            g->esp = sp0 - 0x90u;
            t1 = cow_cdecl(g, COW_IMG(0x10273390u), 3, 3u, 0u, sp0 - 0x84u);
            t2 = rd32(sp0 - 0x84u) + 0x68u;
            wr32(sp0 - 0xa0u, t2);
            wr32(sp0 - 0xa4u, sp0 - 0x60u);
            g->ecx = t2;
            g->edx = sp0 - 0x60u;
            g->esp = sp0 - 0x9cu;
            cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x60u, t2);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(sp0 - 0xa8u, sp0 - 0x84u);
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 - 0xb0u, 4u);
            g->ecx = t3;
            g->edx = t4;
            g->esp = sp0 - 0xa4u;
            cow_cdecl(g, COW_IMG(0x10273390u), 3, 4u, 0u, sp0 - 0x84u);
            t5 = g->ecx;
            t6 = g->edx;
            t7 = rd32(arg1 + 0xecu);
            wr32(sp0 - 0x50u, t7);
            wr32(sp0 - 0x80u, 0u);
            if ((int32_t)rd32(t7 + 0x44u) <= 0)
            {
                edi = in_edi;
                loc_88 = in_ebx;
                loc_8c = in_ebp;
                loc_90 = in_esi;
            }
            else
            {
                eax = rd32(t7 + 0x44u);
                ecx = t5;
                edx = t6;
                ebx = t7;
                loc_50 = t7;
    COW_AT(1024e073)
                wr32(sp0 - 0x94u, in_edi);
                ebp = 0u;
                loc_94 = in_edi;
                loc_80 = 0u;
L_1024e074: ;
    COW_AT(1024e074)
                wr32(sp0 - 0x98u, ebp);
                wr32(sp0 - 0x9cu, ebx);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x94u;
                t8 = cow_cdecl(g, COW_IMG(0x10279890u), 2, ebx, ebp);
                t9 = g->ecx;
                t10 = g->edx;
                if (rd32(t8) != 0xb0001u)
                {
                    ecx = t9;
                    edx = t10;
                }
                else
                {
                    esi = t8;
    COW_AT(1024e08c)
                    wr32(sp0 - 0x98u, sp0 - 0x7cu);
                    t11 = rd32(esi + 0x1cu);
                    t12 = rd32(rd32(esi + 0x1cu) + 0x68u);
                    wr32(t11 + 0x68u, 0u);
                    t13 = rd32(esi + 0x20u) + 0x1f0u;
                    wr32(sp0 - 0x9cu, t13);
                    wr32(sp0 - 0xa0u, esi);
                    g->ecx = sp0 - 0x7cu;
                    g->edx = t13;
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027cd10u), 3, esi, t13, sp0 - 0x7cu);
                    t14 = g->ecx;
                    t15 = g->edx;
                    if (t12 == 0u)
                    {
                        ecx = t14;
                        edx = t15;
                        edi = t12;
    COW_AT(1024e104)
                        wr32(sp0 - 0x98u, sp0 - 0x70u);
                        g->eax = sp0 - 0x70u;
                        g->edx = edx;
                        g->esp = sp0 - 0x94u;
                        t25 = cow_cdecl(g, COW_IMG(0x1027ae70u), 1, sp0 - 0x70u);
                        t26 = g->edx;
                        eax = t25;
                        edx = t26;
                    }
                    else
                    {
                        edx = t15;
                        edi = t12;
    COW_AT(1024e0b5)
                        wr32(sp0 - 0x98u, sp0 - 0x7cu);
                        t16 = rd32(edi + 0x64u) + 0x68u;
                        wr32(sp0 - 0x9cu, t16);
                        wr32(sp0 - 0xa0u, sp0 - 0x7cu);
                        g->eax = sp0 - 0x7cu;
                        g->ecx = sp0 - 0x7cu;
                        t17 = rd32(edi + 0x64u);
                        g->esp = sp0 - 0x94u;
                        t18 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x7cu, t16, sp0 - 0x7cu);
                        t19 = g->ecx;
                        d20 = fr(g, (double)rdf32(sp0 - 0x7cu) + (double)rdf32(t17 + 0x5cu));
                        wr32(sp0 - 0xa4u, t16);
                        wr32(sp0 - 0xa8u, sp0 - 0x70u);
                        wrf32(sp0 - 0x7cu, (float)(double)(float)d20);
                        d21 = fr(g, (double)rdf32(sp0 - 0x78u) + (double)rdf32(t17 + 0x60u));
                        wrf32(sp0 - 0x78u, (float)(double)(float)d21);
                        d22 = fr(g, (double)rdf32(sp0 - 0x74u) + (double)rdf32(t17 + 0x64u));
                        wrf32(sp0 - 0x74u, (float)(double)(float)d22);
                        g->edx = sp0 - 0x70u;
                        g->esp = sp0 - 0xa0u;
                        t23 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x70u, t16);
                        t24 = g->edx;
                        eax = t23;
                        edx = t24;
                        ebx = rd32(sp0 - 0x50u);
                        ebp = rd32(sp0 - 0x80u);
                    }
    COW_AT(1024e111)
                    wr32(sp0 - 0x98u, 0x40490fdbu);
                    wr32(sp0 - 0x9cu, sp0 - 0x20u);
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027abf0u), 2, sp0 - 0x20u, 0x40490fdbu);
                    wr32(sp0 - 0xa0u, sp0 - 0x70u);
                    wr32(sp0 - 0xa4u, sp0 - 0x20u);
                    wr32(sp0 - 0xa8u, sp0 - 0x10u);
                    g->ecx = sp0 - 0x10u;
                    g->esp = sp0 - 0x9cu;
                    cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x10u, sp0 - 0x20u, sp0 - 0x70u);
                    t27 = g->ecx;
                    wr32(sp0 - 0xacu, sp0 - 0x10u);
                    wr32(sp0 - 0xb0u, sp0 - 0x70u);
                    g->eax = sp0 - 0x70u;
                    g->esp = sp0 - 0xa8u;
                    t28 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x70u, sp0 - 0x10u);
                    d29 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x70u));
                    wr32(sp0 - 0xb4u, sp0 - 0x4cu);
                    wr32(sp0 - 0xb8u, sp0 - 0x4cu);
                    wrf32(sp0 - 0x4cu, (float)(double)(float)d29);
                    d30 = fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(sp0 - 0x6cu));
                    wrf32(sp0 - 0x48u, (float)(double)(float)d30);
                    d31 = fr(g, (double)rdf32(sp0 - 0x58u) - (double)rdf32(sp0 - 0x68u));
                    wrf32(sp0 - 0x44u, (float)(double)(float)d31);
                    d32 = fr(g, (double)rdf32(sp0 - 0x54u) - (double)rdf32(sp0 - 0x64u));
                    wrf32(sp0 - 0x40u, (float)(double)(float)d32);
                    d33 = fr(g, (double)rdf32(sp0 - 0x70u) + (double)rdf32(sp0 - 0x60u));
                    wrf32(sp0 - 0x3cu, (float)(double)(float)d33);
                    d34 = fr(g, (double)rdf32(sp0 - 0x6cu) + (double)rdf32(sp0 - 0x5cu));
                    wrf32(sp0 - 0x38u, (float)(double)(float)d34);
                    d35 = fr(g, (double)rdf32(sp0 - 0x68u) + (double)rdf32(sp0 - 0x58u));
                    wrf32(sp0 - 0x34u, (float)(double)(float)d35);
                    d36 = fr(g, (double)rdf32(sp0 - 0x64u) + (double)rdf32(sp0 - 0x54u));
                    wrf32(sp0 - 0x30u, (float)(double)(float)d36);
                    g->edx = sp0 - 0x4cu;
                    g->esp = sp0 - 0xb0u;
                    cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0x4cu, sp0 - 0x4cu);
                    t37 = g->edx;
                    d38 = cow_take_float(g);
                    wrf32(sp0 - 0x80u, (float)(double)(float)d38);
                    wr32(sp0 - 0xbcu, sp0 - 0x3cu);
                    wr32(sp0 - 0xc0u, sp0 - 0x3cu);
                    g->eax = sp0 - 0x3cu;
                    g->ecx = sp0 - 0x3cu;
                    g->esp = sp0 - 0xb8u;
                    t39 = cow_cdecl(g, COW_IMG(0x1027aee0u), 2, sp0 - 0x3cu, sp0 - 0x3cu);
                    t40 = g->ecx;
                    d41 = cow_take_float(g);
                    d42 = (double)rdf32(sp0 - 0x80u);
                    if (d41 < d42)
                    {
                        eax = (t39 & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, d42, 0u);
                        ecx = t40;
    COW_AT(1024e1e2)
                        wr32(sp0 - 0x98u, sp0 - 0x70u);
                        g->esp = sp0 - 0x94u;
                        cow_cdecl(g, COW_IMG(0x1027af10u), 1, sp0 - 0x70u);
                    }
    COW_AT(1024e1ef)
                    wr32(sp0 - 0x98u, sp0 - 0x70u);
                    t43 = rd32(esi + 0x1cu);
                    wr32(t43 + 0x68u, edi);
                    t44 = rd32(sp0 - 0x84u) + 0x68u;
                    wr32(sp0 - 0x9cu, t44);
                    g->esp = sp0 - 0x94u;
                    cow_cdecl(g, COW_IMG(0x1027a720u), 2, t44, sp0 - 0x70u);
                    wr32(sp0 - 0xa0u, sp0 - 0x2cu);
                    wr32(rd32(sp0 - 0x84u) + 0x78u, 0x41a00000u);
                    wr32(sp0 - 0x2cu, 0u);
                    wr32(sp0 - 0x28u, 0u);
                    t45 = rd32(sp0 - 0x84u) + 0x68u;
                    wr32(sp0 - 0xa4u, t45);
                    t46 = rd32(sp0 - 0x84u) + 0x5cu;
                    wr32(sp0 - 0xa8u, t46);
                    wr32(sp0 - 0x24u, 0xc1a00000u);
                    g->ecx = sp0 - 0x2cu;
                    g->edx = t45;
                    g->esp = sp0 - 0x9cu;
                    cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, t46, t45, sp0 - 0x2cu);
                    t47 = g->ecx;
                    t48 = g->edx;
                    d49 = fr(g, (double)rdf32(sp0 - 0x7cu) + (double)rdf32(rd32(sp0 - 0x84u) + 0x5cu));
                    wrf32(rd32(sp0 - 0x84u) + 0x5cu, (float)d49);
                    d50 = fr(g, (double)rdf32(sp0 - 0x78u) + (double)rdf32(rd32(sp0 - 0x84u) + 0x60u));
                    wrf32(rd32(sp0 - 0x84u) + 0x60u, (float)d50);
                    d51 = fr(g, (double)rdf32(sp0 - 0x74u) + (double)rdf32(rd32(sp0 - 0x84u) + 0x64u));
                    wrf32(rd32(sp0 - 0x84u) + 0x64u, (float)d51);
                    t52 = rd32(sp0 - 0x84u);
                    wr32(sp0 - 0xacu, t52);
                    g->ecx = t47;
                    g->edx = t48;
                    g->esp = sp0 - 0xa8u;
                    cow_cdecl(g, COW_IMG(0x1026e210u), 1, t52);
                    t53 = g->ecx;
                    t54 = g->edx;
                    ecx = t53;
                    edx = t54;
                }
    COW_AT(1024e27a)
                wr32(sp0 - 0x80u, ebp + 1u);
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(ebx + 0x44u))
                {
                    eax = rd32(ebx + 0x44u);
                    loc_94 = rd32(sp0 - 0x94u);
                    loc_50 = rd32(sp0 - 0x50u);
                    loc_80 = ebp + 1u;
                    ebp = ebp + 1u;
                    goto L_1024e074;
                }
    COW_AT(1024e28a)
                edi = rd32(sp0 - 0x94u);
                loc_88 = rd32(sp0 - 0x88u);
                loc_8c = rd32(sp0 - 0x8cu);
                loc_90 = rd32(sp0 - 0x90u);
            }
        }
    }
    COW_AT(1024e28b)
    g->ebx = loc_88;
    g->esi = loc_90;
    g->edi = edi;
    g->ebp = loc_8c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024e000(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024e01eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 0x8cu);
        in_ebx = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        g->eax = arg1 + 0xccu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e027u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x90u);
        in_ebp = rd32(sp0 - 0x8cu);
        in_ebx = rd32(sp0 - 0x88u);
        g->esp = sp0 - 0x90u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024e073u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x90u;
        g->ebp = 0u;
        wr32(sp0 - 0xa8u, sp0 - 0x84u);
        wr32(sp0 - 0xa4u, sp0 - 0x60u);
        wr32(sp0 - 0x94u, sp0 - 0x84u);
        wr32(sp0 - 0x80u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024e074u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        uint32_t loc_80;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1024e08cu:
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
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1024e0b5u:
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
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1024e104u:
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
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1024e111u:
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
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1024e1e2u:
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
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0xc0u, sp0 - 0x3cu);
        wr32(sp0 - 0xbcu, sp0 - 0x3cu);
        wr32(sp0 - 0xb8u, sp0 - 0x4cu);
        wr32(sp0 - 0xb4u, sp0 - 0x4cu);
        wr32(sp0 - 0xb0u, sp0 - 0x70u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xa8u, sp0 - 0x10u);
        wr32(sp0 - 0xa4u, sp0 - 0x20u);
        wr32(sp0 - 0xa0u, sp0 - 0x70u);
        wr32(sp0 - 0x9cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1024e1efu:
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
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0xc0u, sp0 - 0x3cu);
        wr32(sp0 - 0xbcu, sp0 - 0x3cu);
        wr32(sp0 - 0xb8u, sp0 - 0x4cu);
        wr32(sp0 - 0xb4u, sp0 - 0x4cu);
        wr32(sp0 - 0xb0u, sp0 - 0x70u);
        wr32(sp0 - 0xacu, sp0 - 0x10u);
        wr32(sp0 - 0xa8u, sp0 - 0x10u);
        wr32(sp0 - 0xa4u, sp0 - 0x20u);
        wr32(sp0 - 0xa0u, sp0 - 0x70u);
        wr32(sp0 - 0x9cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1024e27au:
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
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1024e28au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_80 = rd32(sp0 - 0x80u);
        g->esp = sp0 - 0x94u;
        (void)sp0;
        return 1;
    }
    case 0x1024e28bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_8c;
        uint32_t loc_90;
        uint32_t loc_94;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_8c = rd32(sp0 - 0x8cu);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x90u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024e000(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024e000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
