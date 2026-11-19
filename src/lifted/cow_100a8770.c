/* f_0x100a8770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100a8770(Guest* g)
{
    double d3;
    double d34;
    double d40;
    double d41;
    double d44;
    double d47;
    double d48;
    double d51;
    double d52;
    double d56;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a8792u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_100a8792;
    case 0x100a87ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a87cc;
    case 0x100a87d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a87d4;
    case 0x100a87e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a87e3;
    case 0x100a87f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a87f5;
    case 0x100a8800u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8800;
    case 0x100a8805u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8805;
    case 0x100a880au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a880a;
    case 0x100a880fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a880f;
    case 0x100a8814u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8814;
    case 0x100a881du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a881d;
    case 0x100a882au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a882a;
    case 0x100a8838u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8838;
    case 0x100a884au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a884a;
    case 0x100a885cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a885c;
    case 0x100a886cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a886c;
    case 0x100a887cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a887c;
    case 0x100a888au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a888a;
    case 0x100a8898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8898;
    case 0x100a88abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a88ab;
    case 0x100a88b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a88b2;
    case 0x100a88bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a88bb;
    case 0x100a88c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a88c5;
    case 0x100a88fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); goto E_100a88fc;
    case 0x100a8904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); goto E_100a8904;
    case 0x100a8906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8906;
    case 0x100a8917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8917;
    case 0x100a891fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a891f;
    case 0x100a8952u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8952;
    case 0x100a8963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a8963;
    case 0x100a896du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a896d;
    case 0x100a8987u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_100a8987;
    case 0x100a8992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_100a8992;
    case 0x100a89b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a89b4;
    case 0x100a89cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100a89ca;
    case 0x100a89d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); goto E_100a89d1;
    default: break;
    }
#endif

    COW_AT(100a8770)
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    d3 = cow_take_float(g);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d3);
    g->edx = t2;
    t4 = cow_thiscall(g, COW_IMG(0x10084600u), self, 0);
    t5 = g->edx;
    if ((uint8_t)t4 >= 3u)
    {
        eax = t4;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_100a89d1;
    }
    edx = t5;
    COW_AT(100a8792)
    wr32(sp0 - 0x2cu, self + 0xd4u);
    wr32(sp0 - 0x30u, sp0 - 0x18u);
    g->ecx = sp0 - 0x18u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x18u, self + 0xd4u);
    t6 = g->ecx;
    t7 = rd32(sp0 + 4u);
    wr32(sp0 - 0x34u, t7);
    wr32(sp0 - 0x38u, sp0 - 0x18u);
    g->eax = sp0 - 0x18u;
    g->ecx = t6;
    g->edx = t7;
    g->esp = sp0 - 0x30u;
    t8 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x18u, t7);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 + 4u, 0x42800000u);
    g->esp = sp0 - 0x28u;
    t11 = cow_call_regs(g, COW_IMG(0x10085240u), g->eax, g->ecx, t10, 1, 0);
    t12 = g->edx;
    if (t11 == 0u)
    {
        eax = t11;
        loc_20 = in_ebp;
        loc_24 = in_esi;
        loc_28 = in_edi;
        goto L_100a89d1;
    }
    eax = t11;
    edx = t12;
    ebp = 0u;
    esi = t11;
L_100a87cc: ;
    COW_AT(100a87cc)
    if (esi != self)
    {
    COW_AT(100a87d4)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t13 = cow_thiscall(g, COW_IMG(0x10085490u), esi, 0);
        t14 = g->edx;
        if ((uint8_t)t13 != 0u)
        {
            eax = t13;
            edx = t14;
        }
        else
        {
            eax = t13;
    COW_AT(100a87e3)
            g->eax = eax;
            g->edx = rd32(esi);
            t15 = rd32(esi);
            g->esp = sp0 - 0x28u;
            t16 = cow_thiscall(g, rd32(t15 + 0x128u), esi, 0);
            t17 = g->edx;
            if (t16 != 0u)
            {
                eax = t16;
                edx = t17;
            }
            else
            {
                eax = t16;
                edx = t17;
    COW_AT(100a87f5)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x28u;
                t18 = cow_thiscall(g, COW_IMG(0x10084400u), esi, 0);
                t19 = g->edx;
                if (t18 == 0u)
                {
                    eax = t18;
                    edx = t19;
                    goto L_100a881d;
                }
                eax = t18;
                edx = t19;
    COW_AT(100a8800)
                if (eax == 1u) goto L_100a881d;
    COW_AT(100a8805)
                if (eax == 2u) goto L_100a881d;
    COW_AT(100a880a)
                if (eax == 6u) goto L_100a881d;
    COW_AT(100a880f)
                if (eax == 7u) goto L_100a881d;
    COW_AT(100a8814)
                if (eax != 8u) goto L_100a8906;
L_100a881d: ;
    COW_AT(100a881d)
                if ((rd8(esi + 0xb2u) & 2u) == 0u)
                {
    COW_AT(100a882a)
                    if (rd16(esi + 0xb2u) == 0u)
                    {
    COW_AT(100a8838)
                        g->eax = rd32(esi);
                        g->edx = edx;
                        t20 = rd32(esi);
                        g->esp = sp0 - 0x28u;
                        t21 = cow_thiscall(g, rd32(t20 + 0x34cu), esi, 0);
                        t22 = g->edx;
                        if (t21 != 0u)
                        {
                            eax = t21;
                            edx = t22;
                        }
                        else
                        {
                            eax = t21;
    COW_AT(100a884a)
                            g->eax = eax;
                            g->edx = rd32(esi);
                            t23 = rd32(esi);
                            g->esp = sp0 - 0x28u;
                            t24 = cow_thiscall(g, rd32(t23 + 0x358u), esi, 0);
                            t25 = g->edx;
                            if (t24 != 0u)
                            {
                                eax = t24;
                                edx = t25;
                            }
                            else
                            {
                                eax = t24;
                                edx = t25;
    COW_AT(100a885c)
                                g->eax = eax;
                                g->edx = edx;
                                g->esp = sp0 - 0x28u;
                                t26 = cow_thiscall(g, COW_IMG(0x10084390u), esi, 0);
                                t27 = g->edx;
                                if (t26 == 3u)
                                {
                                    eax = t26;
                                    edx = t27;
                                }
                                else
                                {
                                    eax = t26;
                                    edx = t27;
    COW_AT(100a886c)
                                    g->eax = eax;
                                    g->edx = edx;
                                    g->esp = sp0 - 0x28u;
                                    t28 = cow_thiscall(g, COW_IMG(0x10084390u), esi, 0);
                                    t29 = g->edx;
                                    if (t28 == 2u)
                                    {
                                        eax = t28;
                                        edx = t29;
                                    }
                                    else
                                    {
                                        eax = t28;
                                        edx = t29;
    COW_AT(100a887c)
                                        wr32(sp0 - 0x2cu, 0u);
                                        g->eax = eax;
                                        g->esp = sp0 - 0x28u;
                                        t30 = cow_fastcall(g, COW_IMG(0x10084480u), esi, edx, 1, 0u);
                                        t31 = g->edx;
                                        if ((int32_t)t30 < 50)
                                        {
                                            eax = t30;
                                            edx = t31;
                                            goto L_100a8898;
                                        }
                                        eax = t30;
                                        edx = t31;
    COW_AT(100a888a)
                                        wr32(sp0 - 0x2cu, 0u);
                                        g->eax = eax;
                                        g->esp = sp0 - 0x28u;
                                        t32 = cow_fastcall(g, COW_IMG(0x10084480u), esi, edx, 1, 0u);
                                        t33 = g->edx;
                                        if ((int32_t)t32 <= 59)
                                        {
                                            eax = t32;
                                            edx = t33;
                                            goto L_100a8906;
                                        }
                                        eax = t32;
                                        edx = t33;
L_100a8898: ;
    COW_AT(100a8898)
                                        d34 = (double)rdf32(esi + 0x59cu);
                                        if (d34 < (double)rdf32(COW_IMG(0x1032961cu)))
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
                                        }
                                        else
                                        {
                                            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(100a88ab)
                                            if (rd32(esi + 0x70u) == 0u) goto L_100a88c5;
                                            ecx = rd32(esi + 0x70u);
    COW_AT(100a88b2)
                                            g->eax = eax;
                                            g->edx = edx;
                                            g->esp = sp0 - 0x28u;
                                            t35 = cow_thiscall(g, COW_IMG(0x1008e140u), ecx, 0);
                                            t36 = g->edx;
                                            if ((uint8_t)t35 == 0u) goto L_100a88c5;
                                            eax = t35;
                                            edx = t36;
    COW_AT(100a88bb)
                                            if ((int16_t)rd16(esi + 0x5aeu) <= 0) goto L_100a8906;
L_100a88c5: ;
    COW_AT(100a88c5)
                                            wr32(sp0 - 0x2cu, sp0 - 0x18u);
                                            wr32(sp0 - 0x30u, esi + 0xd4u);
                                            wr32(sp0 - 0x34u, sp0 - 0xcu);
                                            g->edx = sp0 - 0xcu;
                                            g->esp = sp0 - 0x28u;
                                            cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, esi + 0xd4u, sp0 - 0x18u);
                                            t37 = g->edx;
                                            wr32(sp0 - 0x38u, sp0 - 0xcu);
                                            wr32(sp0 - 0x3cu, sp0 - 0xcu);
                                            g->eax = sp0 - 0xcu;
                                            g->edx = t37;
                                            g->esp = sp0 - 0x34u;
                                            t38 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
                                            t39 = g->edx;
                                            d40 = cow_take_float(g);
                                            d41 = (double)rdf32(sp0 + 4u);
                                            if ((cow_fsw(g, d41, d40, 1u) & 0x4100u) != 0u)
                                            {
                                                eax = cow_fsw(g, d41, d40, 1u) & 0x4100u;
                                                edx = t39;
                                                x0 = d40;
    COW_AT(100a8904)
                                            }
                                            else
                                            {
                                                eax = cow_fsw(g, d41, d40, 1u) & 0x4100u;
                                                edx = t39;
                                                x0 = d40;
    COW_AT(100a88fc)
                                                wrf32(sp0 + 4u, (float)x0);
                                                ebp = esi;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_100a8906: ;
    COW_AT(100a8906)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t42 = cow_fastcall(g, COW_IMG(0x10085270u), esi, edx, 0);
    t43 = g->edx;
    if (t42 != 0u)
    {
        eax = t42;
        edx = t43;
        esi = t42;
        goto L_100a87cc;
    }
    eax = t42;
    edx = t43;
    COW_AT(100a8917)
    if (ebp == 0u)
    {
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_100a89d1;
    }
    COW_AT(100a891f)
    d44 = fr(g, sqrt((double)rdf32(sp0 + 4u)));
    wr32(sp0 - 0x2cu, self);
    wrf32(sp0 + 4u, (float)d44);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t45 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, self);
    t46 = g->edx;
    d47 = cow_take_float(g);
    d48 = fr(g, (double)rdf32(sp0 + 4u) - d47);
    wr32(sp0 - 0x2cu, ebp);
    wrf32(sp0 + 4u, (float)d48);
    g->edx = t46;
    t49 = cow_stdcall(g, COW_IMG(0x100aaef0u), 1, ebp);
    t50 = g->edx;
    d51 = cow_take_float(g);
    d52 = fr(g, (double)rdf32(sp0 + 4u) - d51);
    if (!(d52 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t49 & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t50;
        goto L_100a89b4;
    }
    eax = (t49 & 0xffff0000u) | (uint16_t)cow_fsw(g, d52, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    edx = t50;
    COW_AT(100a8952)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t53 = cow_thiscall(g, COW_IMG(0x10081550u), self + 0x5a0u, 0);
    t54 = g->ecx;
    t55 = g->edx;
    if (t53 != ebp)
    {
        eax = t53;
        edx = t55;
        goto L_100a8992;
    }
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(100a8963)
    if (rd8(self + 0x5b0u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x5b0u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        goto L_100a89d1;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x5b0u);
    COW_AT(100a896d)
    d56 = (double)rdf32(sp0 - 0x1cu);
    fpush(g, d56);
    g->esp = sp0 - 0x28u;
    t57 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr16(self + 0x5acu, (uint16_t)(rd16(self + 0x5acu) - (uint16_t)t57));
    if ((int16_t)rd16(self + 0x5acu) < 0)
    {
        eax = t57;
        goto L_100a89ca;
    }
    eax = t57;
    COW_AT(100a8987)
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (eax & 0xffffff00u) | 1u;
L_100a8992: ;
    COW_AT(100a8992)
    wr32(sp0 - 0x2cu, ebp);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t58 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5a0u, 1, ebp);
    wr16(self + 0x5acu, 0x1eu);
    wr8(self + 0x5b0u, 1u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (t58 & 0xffffff00u) | 1u;
L_100a89b4: ;
    COW_AT(100a89b4)
    wr32(sp0 - 0x2cu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t59 = cow_thiscall(g, COW_IMG(0x100814f0u), self + 0x5a0u, 1, 0u);
    wr16(self + 0x5acu, 0u);
    eax = t59;
L_100a89ca: ;
    COW_AT(100a89ca)
    wr8(self + 0x5b0u, 0u);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
    loc_28 = rd32(sp0 - 0x28u);
L_100a89d1: ;
    COW_AT(100a89d1)
    g->esi = loc_24;
    g->edi = loc_28;
    g->ebp = loc_20;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a8770(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a8792u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a87ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a87d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a87e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a87f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8800u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8805u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a880au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a880fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8814u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a881du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a882au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8838u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a884au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a885cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a886cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a887cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a888au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a88abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a88b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a88bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a88c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a88fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a8904u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, sp0 - 0xcu);
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x34u, sp0 - 0xcu);
        wr32(sp0 - 0x2cu, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100a8906u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8917u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a891fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8952u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a896du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8987u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a8992u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        g->esi = self + 0x5a0u;
        (void)sp0;
        return 1;
    }
    case 0x100a89b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a89cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x100a89d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a8770(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a8770(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
