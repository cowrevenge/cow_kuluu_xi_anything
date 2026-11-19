/* f_0x1005eef0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1005eef0(Guest* g)
{
    double d16;
    double d17;
    double d18;
    double d19;
    double d24;
    double d25;
    double d26;
    double d27;
    double d3;
    double d4;
    double d5;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d6;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_2c_f;
    uint32_t loc_34;
    double loc_38_f;
    double loc_3c_f;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
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
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005eeffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1005eeff;
    case 0x1005ef03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1005ef03;
    case 0x1005ef05u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1005ef05;
    case 0x1005eff3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c_f = rdf32(sp0 - 0x3cu); loc_38_f = rdf32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1005eff3;
    case 0x1005f005u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f005;
    case 0x1005f020u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f020;
    case 0x1005f02au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f02a;
    case 0x1005f033u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f033;
    case 0x1005f041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f041;
    case 0x1005f0d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_2c_f = rdf32(sp0 - 0x2cu); goto E_1005f0d9;
    case 0x1005f0e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f0e8;
    case 0x1005f0f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f0f6;
    case 0x1005f104u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f104;
    case 0x1005f10eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f10e;
    case 0x1005f117u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f117;
    case 0x1005f14bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f14b;
    case 0x1005f162u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f162;
    case 0x1005f191u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005f191;
    case 0x1005f1ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f1eb;
    case 0x1005f1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f1f5;
    case 0x1005f204u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f204;
    case 0x1005f20eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f20e;
    case 0x1005f220u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f220;
    case 0x1005f22cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f22c;
    case 0x1005f23cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f23c;
    case 0x1005f248u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f248;
    case 0x1005f25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f25a;
    case 0x1005f266u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f266;
    case 0x1005f276u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f276;
    case 0x1005f282u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f282;
    case 0x1005f289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005f289;
    default: break;
    }
#endif

    COW_AT(1005eef0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd32(self + 0x74u) == 0u)
    {
    COW_AT(1005ef03)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x74u);
    COW_AT(1005eeff)
        eax = rd32(eax);
    }
    COW_AT(1005ef05)
    wr32(sp0 - 0x50u, arg1);
    wr32(sp0 - 0x54u, sp0 - 0x20u);
    g->eax = eax;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t1 = cow_thiscall(g, COW_IMG(0x10063c30u), eax + 0x30u, 2, sp0 - 0x20u, arg1);
    t2 = g->edx;
    if (rd32(self + 0x9cu) == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c_f = (double)rdf32(sp0 - 0x3cu);
        loc_38_f = (double)rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
    }
    else
    {
        eax = t1;
        ecx = rd32(self + 0x9cu);
        edx = t2;
    COW_AT(1005ef27)
        if (rd8(self + 0xa0u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
            ebx = (in_ebx & 0xffffff00u) | 1u;
            loc_40 = rd32(sp0 - 0x40u);
            loc_3c_f = (double)rdf32(sp0 - 0x3cu);
            loc_38_f = (double)rdf32(sp0 - 0x38u);
            loc_34 = rd32(sp0 - 0x34u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
    COW_AT(1005ef35)
            d3 = fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(self + 0x80u));
            wr32(sp0 - 0x40u, 0u);
            wrf32(sp0 - 0x30u, (float)(double)(float)d3);
            d4 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(self + 0x84u));
            wrf32(sp0 - 0x2cu, (float)(double)(float)d4);
            d5 = fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(self + 0x88u));
            wrf32(sp0 - 0x28u, (float)(double)(float)d5);
            d6 = fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2((double)(float)d5, (double)(float)d3)));
            wrf32(sp0 - 0x3cu, (float)(double)(float)d6);
            if ((cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                loc_2c_f = (double)(float)d4;
                loc_3c_f = (double)(float)d6;
                x0 = fr(g, sqrt(fr(g, fr(g, (double)(float)d3 * (double)(float)d3) + fr(g, (double)(float)d5 * (double)(float)d5))));
            }
            else
            {
                eax = cow_fsw(g, d6, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                loc_2c_f = (double)(float)d4;
                loc_3c_f = (double)(float)d6;
                x0 = fr(g, sqrt(fr(g, fr(g, (double)(float)d3 * (double)(float)d3) + fr(g, (double)(float)d5 * (double)(float)d5))));
    COW_AT(1005ef9e)
                d7 = fr(g, loc_3c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(sp0 - 0x3cu, (float)(double)(float)d7);
                loc_3c_f = (double)(float)d7;
            }
    COW_AT(1005efac)
            if (!(loc_3c_f < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    COW_AT(1005efbd)
                d8 = fr(g, loc_3c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(sp0 - 0x3cu, (float)(double)(float)d8);
                loc_3c_f = (double)(float)d8;
            }
    COW_AT(1005efcb)
            if ((ecx & 2u) != 0u)
            {
                loc_38_f = (double)rdf32(sp0 - 0x38u);
            }
            else
            {
    COW_AT(1005efd0)
                d9 = (double)(float)fr(g, atan2(loc_2c_f, x0));
                wrf32(sp0 - 0x38u, (float)d9);
                loc_38_f = d9;
            }
    COW_AT(1005efdc)
            wr32(sp0 - 0x34u, 0x3f800000u);
            if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                ebx = (in_ebx & 0xffffff00u) | 1u;
                loc_40 = 0u;
                loc_34 = 0x3f800000u;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
    COW_AT(1005eff1)
                ebx = in_ebx & 0xffffff00u;
                loc_40 = 0u;
                loc_34 = 0x3f800000u;
            }
        }
    }
    COW_AT(1005eff3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    t10 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    t11 = g->edx;
    if (t10 != 0u)
    {
        eax = t10;
        edx = t11;
    COW_AT(1005f005)
        wr32(sp0 - 0x50u, COW_IMG(0x1032df68u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t12 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x1032df68u));
        t13 = g->edx;
        t14 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t12, t13, 1, COW_IMG(0x1032df68u));
        t15 = g->edx;
        if ((uint8_t)t14 != 0u)
        {
            eax = t14;
            edx = t15;
    COW_AT(1005f020)
            if (rd8(self + 0xa1u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                goto L_1005f033;
            }
    COW_AT(1005f02a)
            eax = sp0 - 0x20u;
L_1005f0d9: ;
    COW_AT(1005f0d9)
            wr32(sp0 - 0x50u, eax);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t28 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, eax);
            t29 = g->edx;
            g->edx = t29;
            cow_thiscall(g, COW_IMG(0x100a57c0u), t28, 1, rd32(sp0 - 0x50u));
            t30 = g->edx;
            edx = t30;
L_1005f0e8: ;
    COW_AT(1005f0e8)
            if (rd32(self + 0x9cu) != 0u)
            {
                eax = rd32(self + 0x9cu);
    COW_AT(1005f0f6)
                if (rd8(self + 0xa0u) != 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
    COW_AT(1005f104)
                    if (rd8(self + 0xa3u) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
    COW_AT(1005f14b)
                        wr32(sp0 - 0x50u, COW_IMG(0x10330684u));
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x4cu;
                        t36 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x10330684u));
                        t37 = g->edx;
                        t38 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t36, t37, 1, COW_IMG(0x10330684u));
                        t39 = g->edx;
                        if ((uint8_t)t38 == 0u)
                        {
                            eax = t38;
                            edx = t39;
                        }
                        else
                        {
                            eax = t38;
                            edx = t39;
    COW_AT(1005f162)
                            g->eax = eax;
                            g->esp = sp0 - 0x4cu;
                            t40 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                            t41 = rd32(sp0 - 0x40u);
                            wr32(t40 + 0x744u, t41);
                            t42 = rd32(sp0 - 0x3cu);
                            wr32(t40 + 0x748u, t42);
                            t43 = rd32(sp0 - 0x38u);
                            wr32(t40 + 0x74cu, t43);
                            t44 = rd32(sp0 - 0x34u);
                            wr32(t40 + 0x750u, t44);
                            eax = t40;
                            edx = t44;
                        }
    COW_AT(1005f191)
                        g->eax = eax;
                        g->esp = sp0 - 0x4cu;
                        t45 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                        t46 = rd32(sp0 - 0x40u);
                        wr32(t45 + 0xe4u, t46);
                        t47 = rd32(sp0 - 0x3cu);
                        wr32(t45 + 0xe8u, t47);
                        t48 = rd32(sp0 - 0x38u);
                        wr32(t45 + 0xecu, t48);
                        t49 = rd32(sp0 - 0x34u);
                        wr32(t45 + 0xf0u, t49);
                        g->edx = t49;
                        t50 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                        t51 = g->ecx;
                        t52 = g->edx;
                        wr32(sp0 - 0x50u, sp0 - 0x40u);
                        wr32(sp0 - 0x54u, t50 + 0x44u);
                        g->eax = sp0 - 0x40u;
                        t53 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t50 + 0x44u, sp0 - 0x40u);
                        d54 = (double)rdf32(t50 + 0x44u);
                        if ((cow_fsw(g, d54, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d54, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            ebx = t50 + 0x44u;
                            edi = t50;
                        }
                        else
                        {
                            eax = cow_fsw(g, d54, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                            ebx = t50 + 0x44u;
                            edi = t50;
    COW_AT(1005f1eb)
                            d55 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(ebx, (float)d55);
                        }
    COW_AT(1005f1f5)
                        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(1005f204)
                            d56 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(ebx, (float)d56);
                        }
    COW_AT(1005f20e)
                        d57 = (double)rdf32(edi + 0x48u);
                        if ((cow_fsw(g, d57, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d57, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, d57, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(1005f220)
                            d58 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x48u, (float)d58);
                        }
    COW_AT(1005f22c)
                        d59 = (double)rdf32(edi + 0x48u);
                        if (!(d59 < (double)rdf32(COW_IMG(0x10329d28u))))
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                        }
                        else
                        {
                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d59, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(1005f23c)
                            d60 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x48u, (float)d60);
                        }
    COW_AT(1005f248)
                        d61 = (double)rdf32(edi + 0x4cu);
                        if ((cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                        {
                            eax = cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        }
                        else
                        {
                            eax = cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(1005f25a)
                            d62 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x4cu, (float)d62);
                        }
    COW_AT(1005f266)
                        d63 = (double)rdf32(edi + 0x4cu);
                        if (d63 < (double)rdf32(COW_IMG(0x10329d28u)))
                        {
    COW_AT(1005f276)
                            d64 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                            wrf32(edi + 0x4cu, (float)d64);
                        }
    COW_AT(1005f282)
                        wr8(self + 0xa3u, 1u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
    COW_AT(1005f10e)
                        if ((uint8_t)ebx == 1u)
                        {
    COW_AT(1005f117)
                            g->eax = eax;
                            g->esp = sp0 - 0x4cu;
                            t31 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
                            t32 = rd32(sp0 - 0x40u);
                            wr32(t31 + 0xe4u, t32);
                            t33 = rd32(sp0 - 0x3cu);
                            wr32(t31 + 0xe8u, t33);
                            t34 = rd32(sp0 - 0x38u);
                            wr32(t31 + 0xecu, t34);
                            t35 = rd32(sp0 - 0x34u);
                            wr32(t31 + 0xf0u, t35);
                        }
                    }
                }
            }
        }
    }
    COW_AT(1005f289)
    t65 = rd32(sp0 - 0x20u);
    t66 = rd32(sp0 - 0x18u);
    t67 = rd32(sp0 - 0x1cu);
    t68 = rd32(sp0 - 0x4cu);
    wr32(self + 0x80u, t65);
    t69 = rd32(sp0 - 0x14u);
    wr32(self + 0x84u, t67);
    wr32(self + 0x88u, t66);
    wr32(self + 0x8cu, t69);
    g->ebx = rd32(sp0 - 0x44u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = t68;
    return;
L_1005f033: ;
    COW_AT(1005f033)
    if (rd8(self + 0xa0u) == 0u) goto L_1005f0e8;
    COW_AT(1005f041)
    d16 = fr(g, (double)rdf32(sp0 - 0x20u) - (double)rdf32(self + 0x80u));
    wrf32(sp0 - 0x10u, (float)(double)(float)d16);
    d17 = fr(g, (double)rdf32(sp0 - 0x1cu) - (double)rdf32(self + 0x84u));
    wr32(sp0 - 0x30u, cow_f2bits((double)(float)d16));
    wrf32(sp0 - 0xcu, (float)(double)(float)d17);
    d18 = fr(g, (double)rdf32(sp0 - 0x18u) - (double)rdf32(self + 0x88u));
    wr32(sp0 - 0x2cu, cow_f2bits((double)(float)d17));
    wrf32(sp0 - 8u, (float)(double)(float)d18);
    d19 = fr(g, (double)rdf32(sp0 - 0x14u) - (double)rdf32(self + 0x8cu));
    wr32(sp0 - 0x28u, cow_f2bits((double)(float)d18));
    wrf32(sp0 - 4u, (float)(double)(float)d19);
    wr32(sp0 - 0x24u, cow_f2bits((double)(float)d19));
    g->eax = cow_f2bits((double)(float)d18);
    g->esp = sp0 - 0x4cu;
    t20 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t20);
    t21 = rd32(t20);
    t22 = cow_thiscall(g, rd32(t21 + 0x1bcu), t20, 0);
    t23 = g->edx;
    d24 = fr(g, (double)rdf32(sp0 - 0x30u) + (double)rdf32(t22));
    wrf32(sp0 - 0x30u, (float)(double)(float)d24);
    d25 = fr(g, (double)rdf32(sp0 - 0x2cu) + (double)rdf32(t22 + 4u));
    wrf32(sp0 - 0x2cu, (float)(double)(float)d25);
    d26 = fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(t22 + 8u));
    wrf32(sp0 - 0x28u, (float)(double)(float)d26);
    d27 = fr(g, (double)rdf32(sp0 - 0x24u) + (double)rdf32(t22 + 0xcu));
    wrf32(sp0 - 0x24u, (float)(double)(float)d27);
    eax = sp0 - 0x30u;
    edx = t23;
    goto L_1005f0d9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1005eef0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005eeffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1005ef03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1005ef05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1005eff3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        uint32_t loc_34;
        double loc_38_f;
        double loc_3c_f;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_38_f = rdf32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f005u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f020u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f02au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f033u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f041u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f0d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_2c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_2c_f = rdf32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f0e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f0f6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f104u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f10eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f117u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f14bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f162u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f191u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x4cu;
        g->edi = self + 0x34u;
        wr32(sp0 - 0x54u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1005f1ebu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f1f5u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f204u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f20eu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f220u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f22cu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f23cu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f248u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f25au:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f266u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f276u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f282u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1005f289u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1005ef27: holds in_ebx, which no location here says
     1005ef35: holds in_ebx, which no location here says
     1005ef9e: holds in_ebx, which no location here says
     1005efac: holds in_ebx, which no location here says
     1005efbd: holds in_ebx, which no location here says
     1005efcb: holds in_ebx, which no location here says
     1005efd0: holds in_ebx, which no location here says
     1005efdc: holds in_ebx, which no location here says
     1005eff1: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1005eef0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1005eef0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
