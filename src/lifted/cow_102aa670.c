/* f_0x102aa670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102aa670(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d14;
    double d15;
    double d16;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d24;
    double d25;
    double d26;
    double d27;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d38;
    double d39;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d57;
    double d6;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_50;
    uint32_t t1;
    uint32_t t13;
    uint32_t t17;
    uint32_t t2;
    uint32_t t23;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t37;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t58;
    uint32_t t59;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102aa685u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102aa685;
    case 0x102aa690u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102aa690;
    case 0x102aa6a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aa6a0;
    case 0x102aa6bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_102aa6bb;
    case 0x102aa6e7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x50u); g->ebp = rd32(sp0 - 0x50u); goto E_102aa6e7;
    case 0x102aa6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa6eb;
    case 0x102aa6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa6fc;
    case 0x102aa704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aa704;
    case 0x102aa708u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa708;
    case 0x102aa84eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aa84e;
    case 0x102aa853u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa853;
    case 0x102aa864u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa864;
    case 0x102aa86cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aa86c;
    case 0x102aa878u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa878;
    case 0x102aa87cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa87c;
    case 0x102aa8a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa8a3;
    case 0x102aa8a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa8a8;
    case 0x102aa8aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa8ae;
    case 0x102aa8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa8b2;
    case 0x102aa8c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa8c1;
    case 0x102aa9f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aa9f1;
    case 0x102aa9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aa9fd;
    case 0x102aaa0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102aaa0c;
    case 0x102aaa22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102aaa22;
    case 0x102aaa24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aaa24;
    case 0x102aaa3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102aaa3f;
    case 0x102aaa46u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebx = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x44u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_102aaa46;
    case 0x102aaa6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_102aaa6c;
    default: break;
    }
#endif

    COW_AT(102aa670)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102aaa46;
    }
    eax = rd32(arg1 + 0x34u);
    COW_AT(102aa685)
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102aaa46;
    }
    ecx = rd32(eax + 0x14u);
    COW_AT(102aa690)
    wr32(sp0 - 0x50u, eax);
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x102a9f10u), 3, eax, in_edi, in_esi);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(arg1 + 0x54u) == 0u)
    {
        ecx = t1;
        edx = t2;
    COW_AT(102aa6a0)
        wr32(sp0 - 0x50u, 0xe8u);
        wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x58u, 0xcu);
        t3 = rd32(arg1 + 0x44u);
        wr32(sp0 - 0x5cu, t3);
        g->eax = t3;
        g->esp = sp0 - 0x48u;
        t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t3, 0xcu, COW_IMG(0x103be980u), 0xe8u, rd32(sp0 - 0x4cu));
        wr32(arg1 + 0x54u, t4);
    }
    COW_AT(102aa6bb)
    wr32(sp0 - 0x50u, in_ebp);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    if (rd32(rd32(arg1 + 0x48u)) == 0u)
    {
        eax = rd32(arg1 + 0x48u) + 4u;
        ecx = rd32(rd32(arg1 + 0x48u));
        loc_50 = in_ebp;
        loc_3c = 0u;
        loc_40 = rd32(sp0 - 0x40u);
    }
    else
    {
        eax = rd32(arg1 + 0x48u) + 4u;
        ecx = rd32(rd32(arg1 + 0x48u));
        esi = rd32(rd32(arg1 + 0x34u) + 0x58u);
        edi = rd32(rd32(arg1 + 0x34u) + 0x54u);
    COW_AT(102aa6e7)
        wr32(sp0 - 0x20u, ecx);
        edx = 0u;
        ebp = 0u;
        loc_50 = in_ebp;
        loc_3c = 0u;
        loc_34 = 0u;
        loc_30 = 0u;
        loc_20 = ecx;
L_102aa6eb: ;
    COW_AT(102aa6eb)
        wr32(sp0 - 0x40u, rd32(eax));
        if ((int32_t)rd32(eax) <= 0)
        {
            ecx = rd32(eax);
            eax = eax + 4u;
            goto L_102aa853;
        }
        loc_40 = rd32(eax);
        eax = eax + 4u;
    COW_AT(102aa6fc)
        edx = edx * 0xcu;
L_102aa708: ;
    COW_AT(102aa708)
        t5 = rd32(eax + 4u);
        wr32(sp0 - 0x34u, t5);
        wr32(sp0 - 0x30u, rd32(eax));
        d6 = fr(g, (double)rdf32(edi + t5 * 0xcu + 8u) - (double)rdf32(edi + rd32(eax) * 0xcu + 8u));
        d7 = fr(g, (double)rdf32(edi + t5 * 0xcu + 4u) - (double)rdf32(edi + rd32(eax) * 0xcu + 4u));
        d8 = fr(g, (double)rdf32(edi + t5 * 0xcu) - (double)rdf32(edi + rd32(eax) * 0xcu));
        wr32(sp0 - 0x38u, eax + 0xcu);
        t9 = rd32(eax + 8u);
        wr32(sp0 - 0x2cu, t9);
        wr32(sp0 - 0x40u, loc_40 - 3u);
        wr32(sp0 - 0x28u, t9 * 3u);
        d10 = fr(g, (double)rdf32(edi + t9 * 0xcu) - (double)rdf32(edi + rd32(eax) * 0xcu));
        wrf32(sp0 - 0xcu, (float)(double)(float)d10);
        d11 = fr(g, (double)rdf32(edi + t9 * 0xcu + 4u) - (double)rdf32(edi + rd32(eax) * 0xcu + 4u));
        wrf32(sp0 - 8u, (float)(double)(float)d11);
        d12 = fr(g, (double)rdf32(edi + t9 * 0xcu + 8u) - (double)rdf32(edi + rd32(eax) * 0xcu + 8u));
        wr32(sp0 - 0x24u, edx + 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        t13 = edx + rd32(arg1 + 0x54u);
        wr32(sp0 - 0x58u, t13);
        wr32(sp0 - 0x3cu, loc_3c + 1u);
        d14 = (double)(float)fr(g, fr(g, d12 * d7) - fr(g, (double)(float)d11 * d6));
        wrf32(sp0 - 0x18u, (float)d14);
        d15 = (double)(float)fr(g, fr(g, (double)(float)d10 * d6) - fr(g, d8 * d12));
        wrf32(sp0 - 0x14u, (float)d15);
        d16 = (double)(float)fr(g, fr(g, d8 * (double)(float)d11) - fr(g, (double)(float)d10 * d7));
        wrf32(sp0 - 0x10u, (float)d16);
        t17 = rd32(eax);
        g->esp = sp0 - 0x50u;
        cow_cdecl(g, COW_IMG(0x10274670u), 2, t13, sp0 - 0x18u);
        d18 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t17 * 0xcu));
        wrf32(esi + t17 * 0xcu, (float)d18);
        d19 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t17 * 0xcu + 4u));
        wrf32(esi + t17 * 0xcu + 4u, (float)d19);
        d20 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t17 * 0xcu + 8u));
        wrf32(esi + t17 * 0xcu + 8u, (float)d20);
        d21 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t5 * 0xcu));
        wrf32(esi + t5 * 0xcu, (float)d21);
        d22 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t5 * 0xcu + 4u));
        wrf32(esi + t5 * 0xcu + 4u, (float)d22);
        t23 = rd32(sp0 - 0x28u);
        d24 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t5 * 0xcu + 8u));
        wrf32(esi + t5 * 0xcu + 8u, (float)d24);
        d25 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t23 * 4u));
        wrf32(esi + t23 * 4u, (float)d25);
        d26 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t23 * 4u + 4u));
        wrf32(esi + t23 * 4u + 4u, (float)d26);
        d27 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t23 * 4u + 8u));
        wrf32(esi + t23 * 4u + 8u, (float)d27);
        if (rd32(sp0 - 0x40u) != 0u)
        {
            eax = rd32(sp0 - 0x38u);
            goto L_102aa704;
        }
        eax = rd32(sp0 - 0x38u);
    COW_AT(102aa84e)
L_102aa9f1: ;
    COW_AT(102aa9f1)
        edx = rd32(sp0 - 0x3cu);
        ebp = rd32(sp0 - 0x2cu);
        loc_50 = rd32(sp0 - 0x50u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_40 = rd32(sp0 - 0x40u);
L_102aa9fd: ;
    COW_AT(102aa9fd)
        wr32(sp0 - 0x20u, loc_20 - 1u);
        if (loc_20 != 1u)
        {
            loc_20 = loc_20 - 1u;
            goto L_102aa6eb;
        }
        ecx = loc_20 - 1u;
    }
    COW_AT(102aaa0c)
    t51 = rd32(arg1 + 0x34u);
    wr32(sp0 - 0x54u, t51);
    g->ecx = ecx;
    g->edx = t51;
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x102aa260u), 7, t51, loc_50, rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), loc_40, loc_3c);
    t52 = g->ecx;
    t53 = g->edx;
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        eax = rd32(arg1 + 0x44u);
        edx = t53;
        ebp = rd32(sp0 - 0x50u);
        goto L_102aaa6c;
    }
    ecx = t52;
    edx = t53;
    ebp = rd32(sp0 - 0x50u);
    COW_AT(102aaa22)
    esi = 0u;
    edi = 0u;
L_102aaa24: ;
    COW_AT(102aaa24)
    t54 = edi + rd32(arg1 + 0x54u);
    wr32(sp0 - 0x50u, t54);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10274910u), 1, t54);
    t55 = g->ecx;
    t56 = g->edx;
    d57 = cow_take_float(g);
    if ((int32_t)(esi + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        ecx = t55;
        edx = t56;
        esi = esi + 1u;
        edi = edi + 0xcu;
        goto L_102aaa24;
    }
    eax = rd32(arg1 + 0x44u);
    edx = t56;
    COW_AT(102aaa3f)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_102aa704: ;
    COW_AT(102aa704)
    edx = rd32(sp0 - 0x24u);
    loc_50 = rd32(sp0 - 0x50u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102aa708;
L_102aa853: ;
    COW_AT(102aa853)
    wr32(sp0 - 0x40u, -ecx);
    if (-ecx == 0u)
    {
        loc_40 = -ecx;
        goto L_102aa9fd;
    }
    loc_40 = -ecx;
    COW_AT(102aa864)
    ecx = 0u;
    edx = edx * 0xcu;
L_102aa878: ;
    COW_AT(102aa878)
    if (ecx != 0u)
    {
    COW_AT(102aa8a3)
        if (ecx != 1u)
        {
    COW_AT(102aa8ae)
            wr32(sp0 - 0x34u, ebp);
            loc_34 = ebp;
        }
        else
        {
    COW_AT(102aa8a8)
            wr32(sp0 - 0x30u, ebp);
            loc_30 = ebp;
        }
    COW_AT(102aa8b2)
        wr32(sp0 - 0x40u, loc_40 - 1u);
        wr32(sp0 - 0x24u, -ecx);
        loc_40 = loc_40 - 1u;
        loc_24 = -ecx;
    }
    else
    {
    COW_AT(102aa87c)
        wr32(sp0 - 0x30u, rd32(eax));
        wr32(sp0 - 0x24u, 1u);
        t28 = rd32(eax + 4u);
        wr32(sp0 - 0x34u, t28);
        wr32(sp0 - 0x40u, loc_40 - 3u);
        loc_34 = t28;
        loc_30 = rd32(eax);
        eax = eax + 8u;
        loc_40 = loc_40 - 3u;
        loc_24 = 1u;
    }
    COW_AT(102aa8c1)
    wr32(sp0 - 0x38u, eax + 4u);
    t29 = rd32(eax) * 3u;
    d30 = fr(g, (double)rdf32(edi + rd32(eax) * 0xcu) - (double)rdf32(edi + loc_30 * 0xcu));
    d31 = fr(g, (double)rdf32(edi + loc_34 * 0xcu + 8u) - (double)rdf32(edi + loc_30 * 0xcu + 8u));
    d32 = fr(g, (double)rdf32(edi + loc_34 * 0xcu + 4u) - (double)rdf32(edi + loc_30 * 0xcu + 4u));
    d33 = fr(g, (double)rdf32(edi + loc_34 * 0xcu) - (double)rdf32(edi + loc_30 * 0xcu));
    wr32(sp0 - 0x28u, t29);
    wr32(sp0 - 0x2cu, rd32(eax));
    wrf32(sp0 - 0xcu, (float)(double)(float)d30);
    d34 = fr(g, (double)rdf32(edi + t29 * 4u + 4u) - (double)rdf32(edi + loc_30 * 0xcu + 4u));
    wrf32(sp0 - 8u, (float)(double)(float)d34);
    d35 = fr(g, (double)rdf32(edi + t29 * 4u + 8u) - (double)rdf32(edi + loc_30 * 0xcu + 8u));
    wr32(sp0 - 0x3cu, loc_3c + 1u);
    wr32(sp0 - 0x54u, sp0 - 0x18u);
    d36 = (double)(float)fr(g, fr(g, d35 * d32) - fr(g, (double)(float)d34 * d31));
    wrf32(sp0 - 0x18u, (float)d36);
    t37 = edx + rd32(arg1 + 0x54u);
    wr32(sp0 - 0x58u, t37);
    wr32(sp0 - 0x1cu, edx + 0xcu);
    d38 = (double)(float)fr(g, fr(g, (double)(float)d30 * d31) - fr(g, d33 * d35));
    wrf32(sp0 - 0x14u, (float)d38);
    d39 = (double)(float)fr(g, fr(g, d33 * (double)(float)d34) - fr(g, (double)(float)d30 * d32));
    wrf32(sp0 - 0x10u, (float)d39);
    t40 = rd32(eax);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10274670u), 2, t37, sp0 - 0x18u);
    t41 = rd32(sp0 - 0x28u);
    d42 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + loc_30 * 0xcu));
    wrf32(esi + loc_30 * 0xcu, (float)d42);
    d43 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + loc_30 * 0xcu + 4u));
    wrf32(esi + loc_30 * 0xcu + 4u, (float)d43);
    d44 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + loc_30 * 0xcu + 8u));
    wrf32(esi + loc_30 * 0xcu + 8u, (float)d44);
    d45 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + loc_34 * 0xcu));
    wrf32(esi + loc_34 * 0xcu, (float)d45);
    d46 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + loc_34 * 0xcu + 4u));
    wrf32(esi + loc_34 * 0xcu + 4u, (float)d46);
    d47 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + loc_34 * 0xcu + 8u));
    wrf32(esi + loc_34 * 0xcu + 8u, (float)d47);
    d48 = fr(g, (double)rdf32(sp0 - 0x18u) + (double)rdf32(esi + t41 * 4u));
    wrf32(esi + t41 * 4u, (float)d48);
    d49 = fr(g, (double)rdf32(sp0 - 0x14u) + (double)rdf32(esi + t41 * 4u + 4u));
    wrf32(esi + t41 * 4u + 4u, (float)d49);
    d50 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + t41 * 4u + 8u));
    wrf32(esi + t41 * 4u + 8u, (float)d50);
    if (rd32(sp0 - 0x40u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
        goto L_102aa86c;
    }
    eax = rd32(sp0 - 0x38u);
    goto L_102aa9f1;
L_102aa86c: ;
    COW_AT(102aa86c)
    ecx = rd32(sp0 - 0x24u);
    edx = rd32(sp0 - 0x1cu);
    ebp = rd32(sp0 - 0x2cu);
    loc_50 = rd32(sp0 - 0x50u);
    loc_3c = rd32(sp0 - 0x3cu);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_40 = rd32(sp0 - 0x40u);
    goto L_102aa878;
L_102aaa46: ;
    COW_AT(102aaa46)
    wr32(sp0 - 0x50u, 0xe3u);
    wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x58u, COW_IMG(0x103b379cu));
    g->ebx = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t58 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103be980u));
    t59 = g->ecx;
    t60 = g->edx;
    wr32(sp0 - 0x5cu, COW_IMG(0x103beae0u));
    wr32(sp0 - 0x60u, COW_IMG(0x103beaa4u));
    g->ebx = arg1;
    g->edx = t60;
    g->esp = sp0 - 0x58u;
    t61 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103beae0u));
    t62 = g->edx;
    eax = t61;
    edx = t62;
    ebp = in_ebp;
L_102aaa6c: ;
    COW_AT(102aaa6c)
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102aa670(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102aa685u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa690u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa6a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa6bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa6e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x50u;
        g->edx = 0u;
        g->ebx = arg1;
        g->ebp = 0u;
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x30u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102aa6ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa6fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa704u:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102aa708u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa84eu:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102aa853u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aa864u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aa86cu:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102aa878u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa87cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa8a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa8a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa8aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa8b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa8c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x102aa9f1u:
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
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102aa9fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aaa0cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x50u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aaa22u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102aaa24u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aaa3fu:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x102aaa46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebx = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aaa6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa670(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102aa670(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
