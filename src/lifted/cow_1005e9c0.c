/* f_0x1005e9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1005e9c0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d13;
    double d3;
    double d58;
    double d60;
    double d62;
    double d64;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    double loc_3c_f;
    double loc_44_f;
    uint32_t loc_48;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t59;
    uint32_t t6;
    uint32_t t61;
    uint32_t t63;
    uint32_t t65;
    uint32_t t66;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1005e9e8u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); x0 = ST(0); g->esi = rd32(sp0 - 0x48u); goto E_1005e9e8;
    case 0x1005e9f8u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_1005e9f8;
    case 0x1005e9ffu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_1005e9ff;
    case 0x1005ea03u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_1005ea03;
    case 0x1005ea05u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); g->esi = rd32(sp0 - 0x48u); goto E_1005ea05;
    case 0x1005eaffu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_3c_f = rdf32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); goto E_1005eaff;
    case 0x1005eb11u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb11;
    case 0x1005eb2cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb2c;
    case 0x1005eb36u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb36;
    case 0x1005eb3cu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb3c;
    case 0x1005eb46u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb46;
    case 0x1005eb95u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eb95;
    case 0x1005eba4u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005eba4;
    case 0x1005ebb2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebb2;
    case 0x1005ebbcu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebbc;
    case 0x1005ebc6u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebc6;
    case 0x1005ebcbu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebcb;
    case 0x1005ebe0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebe0;
    case 0x1005ebf7u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ebf7;
    case 0x1005ec0au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1005ec0a;
    case 0x1005ec37u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1005ec37;
    case 0x1005ec5au: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1005ec5a;
    case 0x1005ec61u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1005ec61;
    case 0x1005ec65u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1005ec65;
    case 0x1005ec67u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_1005ec67;
    case 0x1005ec7fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); x0 = ST(0); g->esi = rd32(sp0 - 0x48u); goto E_1005ec7f;
    case 0x1005ec8cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); x0 = ST(0); g->esi = rd32(sp0 - 0x48u); goto E_1005ec8c;
    case 0x1005ec92u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); x0 = ST(0); g->esi = rd32(sp0 - 0x48u); goto E_1005ec92;
    case 0x1005eca1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005eca1;
    case 0x1005ecb1u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecb1;
    case 0x1005ecbbu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecbb;
    case 0x1005eccbu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005eccb;
    case 0x1005eccfu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005eccf;
    case 0x1005ecdfu: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecdf;
    case 0x1005ecefu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecef;
    case 0x1005ecf3u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecf3;
    case 0x1005ecf7u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecf7;
    case 0x1005ecf9u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x48u); goto E_1005ecf9;
    case 0x1005ed05u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; x0 = ST(0); goto E_1005ed05;
    case 0x1005ed09u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44_f = rdf32(sp0 - 0x44u); goto E_1005ed09;
    default: break;
    }
#endif

    COW_AT(1005e9c0)
    wr32(sp0 - 0x48u, in_esi);
    d1 = fr(g, (double)rdf32(self + 0x78u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    t2 = rd32(COW_IMG(0x1047bfa8u));
    d3 = (double)rdf32(COW_IMG(0x103295d8u));
    wrf32(self + 0x78u, (float)d1);
    if (!(d1 < d3))
    {
        eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
        x0 = d1;
        goto L_1005ec7f;
    }
    eax = (t2 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d3, 1u);
    x0 = d1;
    COW_AT(1005e9e8)
    if (rd8(self + 0xa0u) == 0u)
    {
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_48 = in_esi;
    }
    else
    {
    COW_AT(1005e9f8)
        if (rd32(self + 0x74u) == 0u)
        {
    COW_AT(1005ea03)
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x74u);
    COW_AT(1005e9ff)
            eax = rd32(eax);
        }
    COW_AT(1005ea05)
        wr32(sp0 - 0x4cu, in_ebx);
        wr32(sp0 - 0x50u, in_edi);
        wr32(sp0 - 0x54u, 0x3f800000u);
        wr32(sp0 - 0x58u, sp0 - 0x20u);
        g->edx = in_edx;
        g->esp = sp0 - 0x50u;
        cow_thiscall(g, COW_IMG(0x10063c30u), eax + 0x30u, 2, sp0 - 0x20u, 0x3f800000u);
        t4 = g->edx;
        if (rd32(self + 0x9cu) == 0u)
        {
            eax = rd32(self + 0x9cu);
            edx = t4;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
        else
        {
            eax = rd32(self + 0x9cu);
            edx = t4;
    COW_AT(1005ea29)
            if (rd8(self + 0xa0u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
                ebx = (in_ebx & 0xffffff00u) | 1u;
            }
            else
            {
    COW_AT(1005ea37)
                wr32(sp0 - 0x54u, self + 0x80u);
                wr32(sp0 - 0x58u, sp0 - 0x10u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x50u;
                t5 = cow_thiscall(g, COW_IMG(0x1005ed30u), sp0 - 0x20u, 2, sp0 - 0x10u, self + 0x80u);
                wr32(sp0 - 0x30u, rd32(t5));
                t6 = rd32(t5 + 8u);
                d7 = fr(g, cow_bits2f(rd32(t5)) * cow_bits2f(rd32(t5)));
                wr32(sp0 - 0x28u, t6);
                t8 = rd32(t5 + 4u);
                wr32(sp0 - 0x2cu, t8);
                wr32(sp0 - 0x40u, 0u);
                t9 = rd32(t5 + 0xcu);
                wr32(sp0 - 0x24u, t9);
                d10 = fr(g, (double)rdf32(self + 0x94u) - fr(g, atan2(cow_bits2f(t6), cow_bits2f(rd32(t5)))));
                wrf32(sp0 - 0x3cu, (float)(double)(float)d10);
                if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                    edx = t9;
                    loc_2c = t8;
                    loc_3c_f = (double)(float)d10;
                    x0 = fr(g, sqrt(fr(g, d7 + fr(g, cow_bits2f(t6) * cow_bits2f(t6)))));
                }
                else
                {
                    eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x10329d30u)), 1u) & 0x4100u;
                    edx = t9;
                    loc_2c = t8;
                    loc_3c_f = (double)(float)d10;
                    x0 = fr(g, sqrt(fr(g, d7 + fr(g, cow_bits2f(t6) * cow_bits2f(t6)))));
    COW_AT(1005eaa6)
                    d11 = fr(g, loc_3c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x3cu, (float)(double)(float)d11);
                    loc_3c_f = (double)(float)d11;
                }
    COW_AT(1005eab4)
                if (!(loc_3c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_3c_f, (double)rdf32(COW_IMG(0x10329d28u)), 1u);
    COW_AT(1005eac5)
                    d12 = fr(g, loc_3c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x3cu, (float)(double)(float)d12);
                }
    COW_AT(1005ead3)
                if ((rd8(self + 0x9cu) & 2u) == 0u)
                {
    COW_AT(1005eadc)
                    d13 = (double)(float)fr(g, atan2(cow_bits2f(loc_2c), x0));
                    wrf32(sp0 - 0x38u, (float)d13);
                }
    COW_AT(1005eae8)
                wr32(sp0 - 0x34u, 0x3f800000u);
                if (!(x0 < (double)rdf32(COW_IMG(0x1032a378u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
                    ebx = (in_ebx & 0xffffff00u) | 1u;
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a378u)), 0u);
    COW_AT(1005eafd)
                    ebx = in_ebx & 0xffffff00u;
                }
            }
        }
    COW_AT(1005eaff)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x50u;
        t14 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
        t15 = g->edx;
        if (t14 != 0u)
        {
            eax = t14;
            edx = t15;
    COW_AT(1005eb11)
            wr32(sp0 - 0x54u, COW_IMG(0x1032df68u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t16 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x1032df68u));
            t17 = g->edx;
            t18 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t16, t17, 1, COW_IMG(0x1032df68u));
            t19 = g->edx;
            if ((uint8_t)t18 != 0u)
            {
                eax = t18;
                edx = t19;
    COW_AT(1005eb2c)
                if (rd8(self + 0xa1u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0xa1u);
                    goto L_1005eb3c;
                }
    COW_AT(1005eb36)
                eax = sp0 - 0x20u;
L_1005eb95: ;
    COW_AT(1005eb95)
                wr32(sp0 - 0x54u, eax);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t29 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, eax);
                t30 = g->edx;
                g->edx = t30;
                cow_thiscall(g, COW_IMG(0x100a57c0u), t29, 1, rd32(sp0 - 0x54u));
                t31 = g->edx;
                edx = t31;
L_1005eba4: ;
    COW_AT(1005eba4)
                if (rd32(self + 0x9cu) != 0u)
                {
                    eax = rd32(self + 0x9cu);
    COW_AT(1005ebb2)
                    if (rd8(self + 0xa0u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
    COW_AT(1005ebbc)
                        if (rd8(self + 0xa3u) == 0u)
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
    COW_AT(1005ebe0)
                            wr32(sp0 - 0x54u, COW_IMG(0x10330684u));
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t34 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, COW_IMG(0x10330684u));
                            t35 = g->edx;
                            t36 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t34, t35, 1, COW_IMG(0x10330684u));
                            t37 = g->edx;
                            if ((uint8_t)t36 == 0u)
                            {
                                edx = t37;
                            }
                            else
                            {
                                eax = t36;
    COW_AT(1005ebf7)
                                wr32(sp0 - 0x54u, sp0 - 0x40u);
                                g->eax = eax;
                                g->edx = sp0 - 0x40u;
                                g->esp = sp0 - 0x50u;
                                t38 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                                t39 = g->edx;
                                g->edx = t39;
                                cow_thiscall(g, COW_IMG(0x1005eec0u), t38, 1, sp0 - 0x40u);
                                t40 = g->edx;
                                edx = t40;
                            }
    COW_AT(1005ec0a)
                            wr32(sp0 - 0x54u, sp0 - 0x40u);
                            g->eax = sp0 - 0x40u;
                            g->edx = edx;
                            g->esp = sp0 - 0x50u;
                            t41 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                            t42 = g->edx;
                            g->edx = t42;
                            t43 = cow_thiscall(g, COW_IMG(0x1005ee90u), t41, 1, sp0 - 0x40u);
                            t44 = g->edx;
                            wr32(sp0 - 0x54u, sp0 - 0x40u);
                            g->edx = t44;
                            t45 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                            t46 = g->edx;
                            cow_thiscall(g, COW_IMG(0x1005edc0u), t45, 1, sp0 - 0x40u);
                            wr8(self + 0xa3u, 1u);
                        }
                        else
                        {
                            eax = (eax & 0xffffff00u) | rd8(self + 0xa3u);
    COW_AT(1005ebc6)
                            if ((uint8_t)ebx == 1u)
                            {
    COW_AT(1005ebcb)
                                wr32(sp0 - 0x54u, sp0 - 0x40u);
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x50u;
                                t32 = cow_thiscall_cdecl(g, COW_IMG(0x1003b6d0u), self + 0x34u, 1, sp0 - 0x40u);
                                t33 = g->edx;
                                cow_thiscall(g, COW_IMG(0x1005ee90u), t32, 1, sp0 - 0x40u);
                            }
                        }
                    }
                }
            }
        }
    COW_AT(1005ec37)
        t47 = rd32(sp0 - 0x20u);
        t48 = rd32(sp0 - 0x1cu);
        t49 = rd32(sp0 - 0x4cu);
        t50 = rd32(sp0 - 0x50u);
        wr32(self + 0x80u, t47);
        t51 = rd32(sp0 - 0x18u);
        wr32(self + 0x84u, t48);
        t52 = rd32(sp0 - 0x14u);
        wr32(self + 0x88u, t51);
        wr32(self + 0x8cu, t52);
        edx = self + 0x80u;
        ebx = t49;
        edi = t50;
        loc_48 = rd32(sp0 - 0x48u);
    }
    COW_AT(1005ec5a)
    if (rd32(self + 0x74u) == 0u)
    {
    COW_AT(1005ec65)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x74u);
    COW_AT(1005ec61)
        eax = rd32(eax);
    }
    COW_AT(1005ec67)
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t53 = cow_fastcall(g, COW_IMG(0x10063b20u), eax + 0x30u, edx, 0);
    wr32(sp0 - 0x4cu, 1u);
    g->edx = rd32(self);
    t54 = rd32(self);
    t55 = cow_thiscall(g, rd32(t54 + 0x18u), self, 1, 1u);
    t56 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x48u);
    g->edi = edi;
    g->edx = t56;
    return (t55 & 0xffffff00u) | 1u;
L_1005eb3c: ;
    COW_AT(1005eb3c)
    if (rd8(self + 0xa0u) == 0u) goto L_1005eba4;
    eax = (eax & 0xffffff00u) | rd8(self + 0xa0u);
    COW_AT(1005eb46)
    wr32(sp0 - 0x54u, self + 0x80u);
    wr32(sp0 - 0x58u, sp0 - 0x10u);
    g->eax = eax;
    g->esp = sp0 - 0x50u;
    t20 = cow_thiscall(g, COW_IMG(0x1005ed30u), sp0 - 0x20u, 2, sp0 - 0x10u, self + 0x80u);
    wr32(sp0 - 0x30u, rd32(t20));
    t21 = rd32(t20 + 4u);
    wr32(sp0 - 0x2cu, t21);
    t22 = rd32(t20 + 8u);
    wr32(sp0 - 0x28u, t22);
    t23 = rd32(t20 + 0xcu);
    wr32(sp0 - 0x24u, t23);
    t24 = cow_thiscall(g, COW_IMG(0x1003b6d0u), self + 0x34u, 0);
    g->edx = rd32(t24);
    t25 = rd32(t24);
    t26 = cow_thiscall(g, rd32(t25 + 0x1bcu), t24, 0);
    t27 = g->edx;
    wr32(sp0 - 0x54u, t26);
    g->edx = t27;
    cow_thiscall(g, COW_IMG(0x1005ed90u), sp0 - 0x30u, 1, t26);
    t28 = g->edx;
    eax = sp0 - 0x30u;
    edx = t28;
    goto L_1005eb95;
L_1005ec7f: ;
    COW_AT(1005ec7f)
    if (rd8(self + 0xa2u) == 0u)
    {
        x0 = fr(g, x0 / (double)rdf32(self + 0x7cu));
    }
    else
    {
        x0 = fr(g, x0 / (double)rdf32(self + 0x7cu));
    COW_AT(1005ec8c)
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    }
    COW_AT(1005ec92)
    wrf32(sp0 - 0x44u, (float)(double)(float)x0);
    if ((int32_t)rd32(self + 0xa8u) >= 5)
    {
        loc_44_f = (double)(float)x0;
        goto L_1005ecb1;
    }
    eax = rd32(self + 0xa8u);
    loc_44_f = (double)(float)x0;
    COW_AT(1005eca1)
    wr32(sp0 - 0x4cu, eax);
    wr32(sp0 - 0x50u, cow_f2bits(loc_44_f));
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10055ad0u), 2, cow_f2bits(loc_44_f), eax);
    t57 = g->edx;
    d58 = cow_take_float(g);
    edx = t57;
    x0 = d58;
L_1005ed05: ;
    COW_AT(1005ed05)
    wrf32(sp0 - 0x44u, (float)(double)(float)x0);
    loc_48 = rd32(sp0 - 0x48u);
    loc_44_f = (double)(float)x0;
L_1005ed09: ;
    COW_AT(1005ed09)
    wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
    g->eax = cow_f2bits(loc_44_f);
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t65 = cow_thiscall(g, COW_IMG(0x1005eef0u), self, 1, cow_f2bits(loc_44_f));
    t66 = g->edx;
    wr8(self + 0xa0u, 1u);
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x48u);
    g->edi = in_edi;
    g->edx = t66;
    return t65 & 0xffffff00u;
L_1005ecb1: ;
    COW_AT(1005ecb1)
    if (rd32(self + 0xa4u) == 0u)
    {
        edx = in_edx;
        loc_48 = in_esi;
        goto L_1005ed09;
    }
    eax = rd32(self + 0xa4u);
    COW_AT(1005ecbb)
    if (rd8(self + 0xacu) == 0u)
    {
        eax = rd32(self + 0xa4u);
    COW_AT(1005ecef)
        if (eax == 0u)
        {
    COW_AT(1005ecf7)
            eax = 0u;
        }
        else
        {
    COW_AT(1005ecf3)
            eax = rd32(eax);
        }
    COW_AT(1005ecf9)
        wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
        g->edx = cow_f2bits(loc_44_f);
        g->esp = sp0 - 0x48u;
        cow_call_regs(g, COW_IMG(0x10054500u), eax, eax, g->edx, 0, 1, cow_f2bits(loc_44_f));
        t63 = g->edx;
        d64 = cow_take_float(g);
        edx = t63;
        x0 = d64;
    }
    else
    {
        eax = rd32(self + 0xa4u);
    COW_AT(1005eccb)
        if (eax == 0u)
        {
    COW_AT(1005ecdf)
            wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
            g->edx = in_edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x100547a0u), 0u, 0u, g->edx, 0, 1, cow_f2bits(loc_44_f));
            t61 = g->edx;
            d62 = cow_take_float(g);
            edx = t61;
            x0 = d62;
        }
        else
        {
    COW_AT(1005eccf)
            wr32(sp0 - 0x4cu, cow_f2bits(loc_44_f));
            g->edx = in_edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x100547a0u), rd32(eax), rd32(eax), g->edx, 0, 1, cow_f2bits(loc_44_f));
            t59 = g->edx;
            d60 = cow_take_float(g);
            edx = t59;
            x0 = d60;
        }
    }
    goto L_1005ed05;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1005e9c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1005e9e8u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005e9f8u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005e9ffu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ea03u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ea05u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005eaffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        double loc_3c_f;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_3c_f = rdf32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb11u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb2cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb36u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb46u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eb95u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005eba4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebb2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebbcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebe0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ebf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x50u;
        g->edi = self + 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec37u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec5au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec61u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec65u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ec7fu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x48u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1005ec8cu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x48u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1005ec92u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        x0 = ST(0);
        g->esp = sp0 - 0x48u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1005eca1u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1005ecb1u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecbbu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005eccbu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005eccfu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecdfu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecefu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecf3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecf7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ecf9u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_44_f;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ed05u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double x0;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1005ed09u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        double loc_44_f;
        uint32_t loc_48;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44_f = rdf32(sp0 - 0x44u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1005ea29: holds in_ebx, which no location here says
     1005ea37: holds in_ebx, which no location here says
     1005eaa6: holds in_ebx, which no location here says
     1005eab4: holds in_ebx, which no location here says
     1005eac5: holds in_ebx, which no location here says
     1005ead3: holds in_ebx, which no location here says
     1005eadc: holds in_ebx, which no location here says
     1005eae8: holds in_ebx, which no location here says
     1005eafd: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1005e9c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1005e9c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
