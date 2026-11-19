/* f_0x101488a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101488a0(Guest* g)
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
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101488b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x3cu); goto E_101488b7;
    case 0x101488cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_24 = rd32(sp0 - 0x24u); goto E_101488cd;
    case 0x10148929u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10148929;
    case 0x1014893bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1014893b;
    case 0x1014897au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_1014897a;
    case 0x10148996u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10148996;
    case 0x1014899au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1014899a;
    case 0x1014899fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1014899f;
    case 0x101489a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489a4;
    case 0x101489a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489a9;
    case 0x101489bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489bc;
    case 0x101489c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489c0;
    case 0x101489c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489c5;
    case 0x101489cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489ca;
    case 0x101489cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489cf;
    case 0x101489e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101489e7;
    case 0x101489ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_101489ec;
    case 0x101489f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_101489f9;
    case 0x10148a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10148a54;
    case 0x10148a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10148a72;
    case 0x10148aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_24 = rd32(sp0 - 0x24u); goto E_10148aac;
    default: break;
    }
#endif

    COW_AT(101488a0)
    wr32(sp0 - 0x3cu, in_ebp);
    wr32(sp0 - 0x2cu, self);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_3c = in_ebp;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101488b7)
        wr32(sp0 - 0x40u, 2u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x24u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t6;
            ebx = in_ebx;
            esi = in_esi;
            edi = in_edi;
            loc_3c = in_ebp;
        }
        else
        {
            eax = t4;
            ecx = t5;
            loc_24 = t4;
    COW_AT(101488cd)
            wr32(sp0 - 0x40u, in_ebx);
            wr32(sp0 - 0x44u, in_esi);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, COW_IMG(0x10485704u));
            t7 = rd16(self + 0x14u);
            wr16(sp0 - 0x20u, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0xau));
            wr16(sp0 - 0x1eu, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0xf5u));
            wr16(sp0 - 0x18u, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0x5fu));
            wr16(sp0 - 0x16u, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0x6eu));
            wr16(sp0 - 0x14u, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0x7du));
            wr16(sp0 - 0x12u, (uint16_t)(((ecx & 0xffff0000u) | t7) + 0x7du));
            wr32(sp0 - 0x28u, 0x400u);
            t8 = (((ecx & 0xffff0000u) | t7) + 0x7du & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x13u);
            wr32(sp0 - 0x38u, t8);
            wr32(sp0 - 0x48u, in_edi);
            ecx = t8;
            edx = 0x400u;
            ebx = in_ebx;
            ebp = self;
            loc_40 = in_ebx;
            loc_44 = in_esi;
            loc_30 = 0u;
            loc_34 = COW_IMG(0x10485704u);
            loc_28 = 0x400u;
            loc_38 = t8;
            loc_48 = in_edi;
L_10148929: ;
    COW_AT(10148929)
            if (rd16(loc_34) == 0xffffu)
            {
                ebx = (ebx & 0xffff0000u) | rd16(loc_34);
            }
            else
            {
                ebx = (ebx & 0xffff0000u) | rd16(loc_34);
    COW_AT(1014893b)
                wr32(sp0 - 0x4cu, 0u);
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, 0x80808080u);
                wr32(sp0 - 0x58u, (uint32_t)(int16_t)ecx);
                t9 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
                wr32(sp0 - 0x5cu, t9);
                g->eax = rd32(eax);
                g->edx = edx;
                t10 = rd32(eax);
                t11 = rd32(edx + rd32(eax));
                g->esp = sp0 - 0x48u;
                t12 = cow_thiscall(g, COW_IMG(0x1011fb60u), t11, 5, t9, (uint32_t)(int16_t)ecx, 0x80808080u, 0u, 0u);
                t13 = g->ecx;
                t14 = g->edx;
                if ((ebx & 0x1fu) >= 0x10u)
                {
                    eax = t12;
                    ecx = (t13 & 0xffffff00u) | (ebx & 0x1fu);
                }
                else
                {
                    eax = t12;
                    edx = t14;
                    esi = (-((ebx & 0x8000u) != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
                    edi = (uint32_t)(int16_t)ecx;
                    ecx = (t13 & 0xffffff00u) | (ebx & 0x1fu);
    COW_AT(1014897a)
                    wr32(sp0 - 0x4cu, 0u);
                    wr32(sp0 - 0x50u, 1u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x48u;
                    t15 = cow_cdecl(g, COW_IMG(0x101d29c0u), 2, 1u, 0u);
                    t16 = g->edx;
                    if ((uint8_t)t15 != 0u)
                    {
                        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t16 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(101489bc)
                        if ((int8_t)edx < 0)
                        {
    COW_AT(101489c0)
                            if (eax == 2u) goto L_101489ca;
    COW_AT(101489c5)
                            if (eax != 3u) goto L_101489cf;
L_101489ca: ;
    COW_AT(101489ca)
                            eax = 1u;
                        }
L_101489cf: ;
    COW_AT(101489cf)
                        wr32(sp0 - 0x4cu, 0u);
                        wr32(sp0 - 0x50u, 0u);
                        wr32(sp0 - 0x54u, esi);
                        wr32(sp0 - 0x58u, edi);
                        t18 = (uint32_t)(int16_t)rd16(eax * 2u + sp0 - 0x18u);
                        wr32(sp0 - 0x5cu, t18);
                        g->eax = eax;
                        g->esp = sp0 - 0x48u;
                        t19 = cow_call_regs(g, COW_IMG(0x103149e0u), g->eax, t18, edx, 1, 5, t18, edi, esi, 0u, 0u);
                        t20 = g->edx;
                        if ((int32_t)(t19 & 0x8000000fu) >= 0)
                        {
                            eax = t19 & 0x8000000fu;
                            edx = t20;
                            loc_54 = rd32(sp0 - 0x54u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_5c = rd32(sp0 - 0x5cu);
                        }
                        else
                        {
                            eax = t19 & 0x8000000fu;
                            edx = t20;
    COW_AT(101489e7)
                            eax = (eax - 1u | 0xfffffff0u) + 1u;
                            loc_54 = rd32(sp0 - 0x54u);
                            loc_58 = rd32(sp0 - 0x58u);
                            loc_5c = rd32(sp0 - 0x5cu);
                        }
                    }
                    else
                    {
                        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                        edx = (t16 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    COW_AT(10148996)
                        if ((int8_t)edx < 0)
                        {
    COW_AT(1014899a)
                            if (eax == 2u) goto L_101489a4;
    COW_AT(1014899f)
                            if (eax != 3u) goto L_101489a9;
L_101489a4: ;
    COW_AT(101489a4)
                            eax = 1u;
                        }
L_101489a9: ;
    COW_AT(101489a9)
                        wr32(sp0 - 0x4cu, 0u);
                        wr32(sp0 - 0x50u, 0u);
                        wr32(sp0 - 0x54u, esi);
                        wr32(sp0 - 0x58u, edi);
                        t17 = (uint32_t)(int16_t)rd16(eax * 2u + sp0 - 0x18u);
                        wr32(sp0 - 0x5cu, t17);
                        eax = ebx & 0x1fu;
                        edx = t17;
                        loc_54 = esi;
                        loc_58 = edi;
                        loc_5c = t17;
                    }
    COW_AT(101489ec)
                    g->eax = eax;
                    t21 = rd32(eax * 4u + rd32(sp0 - 0x2cu) + 0x1cu);
                    t22 = rd32(sp0 - 0x2cu);
                    g->esp = sp0 - 0x48u;
                    t23 = cow_thiscall(g, COW_IMG(0x1011fb60u), t21, 5, loc_5c, loc_58, loc_54, 0u, 0u);
                    t24 = g->ecx;
                    eax = t23;
                    ecx = t24;
                    ebp = t22;
                }
    COW_AT(101489f9)
                t25 = ebx >> 5u & 0x3ffu;
                wr32(sp0 - 0x4cu, t25);
                wr32(sp0 - 0x50u, COW_IMG(0x103718bcu));
                wr32(sp0 - 0x54u, sp0 - 0x10u);
                g->ebx = t25;
                g->edx = sp0 - 0x10u;
                g->esp = sp0 - 0x40u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x103718bcu), t25, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
                t26 = g->edx;
                wr32(sp0 - 0x58u, 0x3f800000u);
                wr32(sp0 - 0x5cu, 0x3f800000u);
                wr32(sp0 - 0x60u, 1u);
                wr32(sp0 - 0x64u, 0x80808080u);
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                t27 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x6cu, t27);
                t28 = rd32(sp0 - 0x1eu);
                wr32(sp0 - 0x70u, t28);
                g->esp = sp0 - 0x54u;
                cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t28, 7, t28, t27, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                wr32(sp0 - 0x38u, t27 + 0xeu);
                t29 = rd32(sp0 - 0x30u) + 1u;
                wr32(sp0 - 0x30u, t29);
                eax = rd32(sp0 - 0x24u);
                ecx = t27 + 0xeu;
                edx = rd32(sp0 - 0x28u);
                ebx = t25;
                loc_40 = rd32(sp0 - 0x40u);
                loc_24 = rd32(sp0 - 0x24u);
                loc_44 = rd32(sp0 - 0x44u);
                loc_30 = t29;
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = t27 + 0xeu;
                loc_48 = rd32(sp0 - 0x48u);
            }
    COW_AT(10148a54)
            wr32(sp0 - 0x28u, edx + 4u);
            wr32(sp0 - 0x34u, loc_34 + 2u);
            if ((int32_t)(edx + 4u) < 1084)
            {
                loc_34 = loc_34 + 2u;
                loc_28 = edx + 4u;
                edx = edx + 4u;
                goto L_10148929;
            }
    COW_AT(10148a72)
            wr32(sp0 - 0x4cu, 0u);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, 0u);
            t30 = (uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) * 0xeu + 0x16u;
            wr32(sp0 - 0x58u, t30);
            t31 = ((uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) * 8u - (uint32_t)((int32_t)(loc_30 - (uint32_t)((int32_t)loc_30 >> 0x1fu)) >> 1u) & 0xffff0000u) | (uint16_t)(rd16(ebp + 0x18u) - rd16(ebp + 0x14u));
            wr32(sp0 - 0x5cu, t31);
            t32 = (t30 & 0xffff0000u) | rd16(ebp + 0x16u);
            wr32(sp0 - 0x60u, t32);
            t33 = (ecx & 0xffff0000u) | rd16(ebp + 0x14u);
            wr32(sp0 - 0x64u, t33);
            g->eax = t32;
            g->edx = t31;
            g->esp = sp0 - 0x48u;
            t34 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(ebp + 8u), 7, t33, t32, t31, t30, 0u, 0u, 0u);
            t35 = g->edx;
            eax = t34;
            edx = t35;
            ebx = rd32(sp0 - 0x40u);
            esi = rd32(sp0 - 0x44u);
            edi = rd32(sp0 - 0x48u);
            loc_3c = rd32(sp0 - 0x3cu);
        }
    }
    COW_AT(10148aac)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_3c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101488a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101488b7u:
    {
        uint32_t eax;
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
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x2cu, self);
        (void)sp0;
        return 1;
    }
    case 0x101488cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x10148929u:
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
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1014893bu:
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
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1014897au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10148996u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1014899au:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1014899fu:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489a4u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489a9u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489bcu:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489c0u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489c5u:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489cau:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489cfu:
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
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x101489e7u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101489ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x4cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101489f9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10148a54u:
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
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10148a72u:
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
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x10148aacu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101488a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101488a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
