/* f_0x1028ab70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1028ab70(Guest* g)
{
    double d27;
    double d31;
    double d35;
    double d39;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
    int64_t q3;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028ab87u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1028ab87;
    case 0x1028ab95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028ab95;
    case 0x1028ab9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028ab9c;
    case 0x1028abaau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abaa;
    case 0x1028abaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abae;
    case 0x1028abb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abb3;
    case 0x1028abbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abbe;
    case 0x1028abc3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abc3;
    case 0x1028abc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abc7;
    case 0x1028abd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028abd1;
    case 0x1028ac09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1028ac09;
    case 0x1028ac18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1028ac18;
    case 0x1028ac4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1028ac4f;
    case 0x1028ac54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ac54;
    case 0x1028acb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028acb4;
    case 0x1028acc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028acc6;
    case 0x1028acd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028acd3;
    case 0x1028ad0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1028ad0a;
    case 0x1028ad0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ad0f;
    case 0x1028ad6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ad6f;
    case 0x1028ad81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028ad81;
    case 0x1028ad8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028ad8e;
    case 0x1028adc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028adc5;
    case 0x1028ae68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ae68;
    case 0x1028ae7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028ae7a;
    case 0x1028ae87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028ae87;
    case 0x1028aebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1028aebb;
    case 0x1028aebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028aebd;
    case 0x1028af04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028af04;
    case 0x1028af16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028af16;
    case 0x1028af23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028af23;
    case 0x1028af57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1028af57;
    case 0x1028af59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028af59;
    case 0x1028afa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028afa0;
    case 0x1028afb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028afb2;
    case 0x1028afcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028afcb;
    case 0x1028afddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028afdd;
    default: break;
    }
#endif

    COW_AT(1028ab70)
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) == 0u)
    {
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
        goto L_1028afdd;
    }
    ecx = rd32(COW_IMG(0x1099d200u));
    edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u);
    COW_AT(1028ab87)
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(ecx + 0x9a0u) - 1u > 5u) goto L_1028abc3;
    eax = rd32(ecx + 0x9a0u) - 1u;
    COW_AT(1028ab95)
    t1 = rd32(COW_IMG(0x1028afe4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1028ab9cu: goto L_1028ab9c;
    case 0x1028abaau: goto L_1028abaa;
    case 0x1028abaeu: goto L_1028abae;
    case 0x1028abb3u: goto L_1028abb3;
    case 0x1028abbeu: goto L_1028abbe;
    default: rt_fatal(g, COW_IMG(0x1028ab95u), "switch");
    }
    return;
L_1028ab9c: ;
    COW_AT(1028ab9c)
    q3 = (int64_t)cow_muls(0x55555556u, edx);
    edx = cow_qhi(q3) + (cow_qhi(q3) >> 0x1fu);
L_1028abaa: ;
    COW_AT(1028abaa)
    ebp = edx;
L_1028abc7: ;
    COW_AT(1028abc7)
    if (rd32(ecx + 0x2d0u) != 0u)
    {
        eax = rd32(ecx + 0x2d0u);
    COW_AT(1028ac09)
        wr32(sp0 - 0x14u, in_edi);
        if (!(rd8(ecx + 0xa30u) & 1u))
        {
            loc_c = in_ebp;
            loc_10 = in_esi;
            loc_14 = in_edi;
        }
        else
        {
    COW_AT(1028ac18)
            wr32(sp0 - 0x18u, 0x2000u);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            t7 = rd32(ecx + 0x998u) * 0xcu;
            wr32(sp0 - 0x20u, t7);
            wr32(sp0 - 0x24u, 0u);
            t8 = rd32(ecx + 0x958u);
            wr32(sp0 - 0x28u, t8);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(rd32(ecx + 0x958u)) + 0x2cu), t7, 5, t8, 0u, t7, sp0 - 8u, 0x2000u);
            t9 = g->ecx;
            if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) <= 0)
            {
                ecx = t9;
                edx = rd32(COW_IMG(0x1099d200u));
            }
            else
            {
                edx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028ac4f)
                eax = 8u;
                esi = 0u;
L_1028ac54: ;
    COW_AT(1028ac54)
                t10 = rd32(rd32(edx + 0x918u) + (uint32_t)(int16_t)rd16(esi * 2u + rd32(edx + 0x99cu)) * 0xcu);
                t11 = rd16(esi * 2u + rd32(edx + 0x99cu));
                wr32(eax + rd32(sp0 - 8u) - 8u, t10);
                t12 = rd32((uint32_t)(int16_t)t11 * 0xcu + rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u) + 4u);
                wr32(eax + rd32(sp0 - 8u) - 4u, t12);
                t13 = rd32((uint32_t)(int16_t)t11 * 0xcu + rd32(rd32(COW_IMG(0x1099d200u)) + 0x918u) + 8u);
                wr32(eax + rd32(sp0 - 8u), t13);
                if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u))
                {
                    eax = eax + 0xcu;
                    edx = rd32(COW_IMG(0x1099d200u));
                    esi = esi + 1u;
                    goto L_1028ac54;
                }
                ecx = t13;
                edx = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028acb4)
            t14 = rd32(edx + 0x958u);
            wr32(sp0 - 0x18u, t14);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(t14) + 0x30u), ecx, 1, t14);
            ecx = rd32(COW_IMG(0x1099d200u));
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    COW_AT(1028acc6)
        if ((rd8(ecx + 0xa30u) & 2u) != 0u)
        {
    COW_AT(1028acd3)
            wr32(sp0 - 0x18u, 0x2000u);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            t15 = rd32(ecx + 0x998u) * 0xcu;
            wr32(sp0 - 0x20u, t15);
            wr32(sp0 - 0x24u, 0u);
            t16 = rd32(ecx + 0x960u);
            wr32(sp0 - 0x28u, t16);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(rd32(ecx + 0x960u)) + 0x2cu), t15, 5, t16, 0u, t15, sp0 - 8u, 0x2000u);
            t17 = g->ecx;
            if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) <= 0)
            {
                ecx = t17;
                edx = rd32(COW_IMG(0x1099d200u));
            }
            else
            {
                edx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028ad0a)
                eax = 8u;
                esi = 0u;
L_1028ad0f: ;
    COW_AT(1028ad0f)
                t18 = rd32(rd32(edx + 0x91cu) + (uint32_t)(int16_t)rd16(esi * 2u + rd32(edx + 0x99cu)) * 0xcu);
                t19 = rd16(esi * 2u + rd32(edx + 0x99cu));
                wr32(eax + rd32(sp0 - 8u) - 8u, t18);
                t20 = rd32((uint32_t)(int16_t)t19 * 0xcu + rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu) + 4u);
                wr32(eax + rd32(sp0 - 8u) - 4u, t20);
                t21 = rd32((uint32_t)(int16_t)t19 * 0xcu + rd32(rd32(COW_IMG(0x1099d200u)) + 0x91cu) + 8u);
                wr32(eax + rd32(sp0 - 8u), t21);
                if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u))
                {
                    eax = eax + 0xcu;
                    edx = rd32(COW_IMG(0x1099d200u));
                    esi = esi + 1u;
                    goto L_1028ad0f;
                }
                ecx = t21;
                edx = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028ad6f)
            t22 = rd32(edx + 0x960u);
            wr32(sp0 - 0x18u, t22);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(t22) + 0x30u), ecx, 1, t22);
            ecx = rd32(COW_IMG(0x1099d200u));
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    COW_AT(1028ad81)
        if ((rd8(ecx + 0xa30u) & 8u) != 0u)
        {
    COW_AT(1028ad8e)
            wr32(sp0 - 0x18u, 0x2000u);
            wr32(sp0 - 0x1cu, sp0 - 4u);
            t23 = rd32(ecx + 0x998u) << 2u;
            wr32(sp0 - 0x20u, t23);
            wr32(sp0 - 0x24u, 0u);
            t24 = rd32(ecx + 0x988u);
            wr32(sp0 - 0x28u, t24);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(rd32(ecx + 0x988u)) + 0x2cu), t23, 5, t24, 0u, t23, sp0 - 4u, 0x2000u);
            if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) <= 0)
            {
                eax = rd32(COW_IMG(0x1099d200u));
                ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u);
                goto L_1028ae68;
            }
            eax = rd32(COW_IMG(0x1099d200u));
            ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u);
            esi = 0u;
L_1028adc5: ;
    COW_AT(1028adc5)
            t25 = rd32(eax + 0x930u);
            t26 = rd16(esi * 2u + rd32(eax + 0x99cu));
            d27 = fr(g, (double)rdf32(rd32(eax + 0x930u) + (uint32_t)(int16_t)rd16(esi * 2u + rd32(eax + 0x99cu)) * 0x10u) * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d27);
            g->esp = sp0 - 0x14u;
            t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t25, g->ecx, g->edx, 1, 0);
            t29 = rd32(sp0 - 4u);
            wr8(esi * 4u + t29 + 2u, (uint8_t)t28);
            t30 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u);
            d31 = fr(g, (double)rdf32((uint32_t)(int16_t)t26 * 0x10u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u) + 4u) * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d31);
            t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t30, g->ecx, g->edx, 1, 0);
            t33 = rd32(sp0 - 4u);
            wr8(esi * 4u + t33 + 1u, (uint8_t)t32);
            t34 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u);
            d35 = fr(g, (double)rdf32((uint32_t)(int16_t)t26 * 0x10u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u) + 8u) * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d35);
            t36 = cow_call_regs(g, COW_IMG(0x10311c6cu), t34, g->ecx, g->edx, 1, 0);
            t37 = rd32(sp0 - 4u);
            wr8(esi * 4u + t37, (uint8_t)t36);
            t38 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u);
            d39 = fr(g, (double)rdf32((uint32_t)(int16_t)t26 * 0x10u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x930u) + 0xcu) * (double)rdf32(COW_IMG(0x10329a20u)));
            fpush(g, d39);
            t40 = cow_call_regs(g, COW_IMG(0x10311c6cu), t38, g->ecx, g->edx, 1, 0);
            t41 = rd32(sp0 - 4u);
            wr8(esi * 4u + t41 + 3u, (uint8_t)t40);
            if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u))
            {
                eax = rd32(COW_IMG(0x1099d200u));
                ecx = t41;
                esi = esi + 1u;
                goto L_1028adc5;
            }
            eax = rd32(COW_IMG(0x1099d200u));
            ecx = t41;
L_1028ae68: ;
    COW_AT(1028ae68)
            t42 = rd32(eax + 0x988u);
            wr32(sp0 - 0x18u, t42);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(t42) + 0x30u), ecx, 1, t42);
            ecx = rd32(COW_IMG(0x1099d200u));
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    COW_AT(1028ae7a)
        if ((rd8(ecx + 0xa34u) & 4u) != 0u)
        {
    COW_AT(1028ae87)
            wr32(sp0 - 0x18u, 0x2000u);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            t43 = rd32(ecx + 0x998u) << 3u;
            wr32(sp0 - 0x20u, t43);
            wr32(sp0 - 0x24u, 0u);
            t44 = rd32(ecx + 0x968u);
            wr32(sp0 - 0x28u, t44);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(rd32(ecx + 0x968u)) + 0x2cu), t43, 5, t44, 0u, t43, sp0 - 8u, 0x2000u);
            if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) <= 0)
            {
                eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u);
                ecx = rd32(COW_IMG(0x1099d200u));
            }
            else
            {
                ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028aebb)
                eax = 0u;
                esi = 0u;
L_1028aebd: ;
    COW_AT(1028aebd)
                t45 = rd32(rd32(ecx + 0x920u) + (uint32_t)(int16_t)rd16(eax + rd32(ecx + 0x99cu)) * 8u);
                t46 = rd16(eax + rd32(ecx + 0x99cu));
                wr32(eax * 4u + rd32(sp0 - 8u), t45);
                t47 = rd32((uint32_t)(int16_t)t46 * 8u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x920u) + 4u);
                wr32(eax * 4u + rd32(sp0 - 8u) + 4u, t47);
                if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u))
                {
                    eax = eax + 2u;
                    ecx = rd32(COW_IMG(0x1099d200u));
                    esi = esi + 1u;
                    goto L_1028aebd;
                }
                eax = eax + 2u;
                ecx = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028af04)
            t48 = rd32(ecx + 0x968u);
            wr32(sp0 - 0x18u, t48);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(t48) + 0x30u), t48, 1, t48);
            ecx = rd32(COW_IMG(0x1099d200u));
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    COW_AT(1028af16)
        if ((rd8(ecx + 0xa38u) & 4u) != 0u)
        {
    COW_AT(1028af23)
            wr32(sp0 - 0x18u, 0x2000u);
            wr32(sp0 - 0x1cu, sp0 - 8u);
            t49 = rd32(ecx + 0x998u) << 3u;
            wr32(sp0 - 0x20u, t49);
            wr32(sp0 - 0x24u, 0u);
            t50 = rd32(ecx + 0x96cu);
            wr32(sp0 - 0x28u, t50);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(rd32(ecx + 0x96cu)) + 0x2cu), t49, 5, t50, 0u, t49, sp0 - 8u, 0x2000u);
            if ((int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u) <= 0)
            {
                eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u);
                ecx = rd32(COW_IMG(0x1099d200u));
            }
            else
            {
                ecx = rd32(COW_IMG(0x1099d200u));
    COW_AT(1028af57)
                eax = 0u;
                esi = 0u;
L_1028af59: ;
    COW_AT(1028af59)
                t51 = rd32(rd32(ecx + 0x924u) + (uint32_t)(int16_t)rd16(eax + rd32(ecx + 0x99cu)) * 8u);
                t52 = rd16(eax + rd32(ecx + 0x99cu));
                wr32(eax * 4u + rd32(sp0 - 8u), t51);
                t53 = rd32((uint32_t)(int16_t)t52 * 8u + rd32(rd32(COW_IMG(0x1099d200u)) + 0x924u) + 4u);
                wr32(eax * 4u + rd32(sp0 - 8u) + 4u, t53);
                if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(COW_IMG(0x1099d200u)) + 0x998u))
                {
                    eax = eax + 2u;
                    ecx = rd32(COW_IMG(0x1099d200u));
                    esi = esi + 1u;
                    goto L_1028af59;
                }
                eax = eax + 2u;
                ecx = rd32(COW_IMG(0x1099d200u));
            }
    COW_AT(1028afa0)
            t54 = rd32(ecx + 0x96cu);
            wr32(sp0 - 0x18u, t54);
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, rd32(rd32(t54) + 0x30u), t54, 1, t54);
            ecx = rd32(COW_IMG(0x1099d200u));
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    COW_AT(1028afb2)
        wr32(sp0 - 0x18u, ebp);
        wr32(sp0 - 0x1cu, 0u);
        t55 = rd32(ecx + 0x9a0u);
        wr32(sp0 - 0x20u, t55);
        wr32(sp0 - 0x24u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x118u), t55, 4, rd32(COW_IMG(0x1066941cu)), t55, 0u, ebp);
        edi = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = rd32(ecx + 0x2d0u);
    COW_AT(1028abd1)
        t4 = rd32(ecx + 0x990u);
        wr32(sp0 - 0x14u, t4);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(t4) + 0x30u), t4, 1, t4);
        wr32(sp0 - 0x14u, ebp);
        wr32(sp0 - 0x18u, 0u);
        t5 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x940u);
        wr32(sp0 - 0x1cu, t5);
        wr32(sp0 - 0x20u, 0u);
        t6 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x9a0u);
        wr32(sp0 - 0x24u, t6);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x11cu), t6, 6, rd32(COW_IMG(0x1066941cu)), t6, 0u, t5, 0u, ebp);
        edi = in_edi;
    }
    COW_AT(1028afcb)
    t56 = rd32(sp0 - 0xcu);
    t57 = rd32(sp0 - 0x10u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x998u, 0u);
    ebp = t56;
    esi = t57;
L_1028afdd: ;
    COW_AT(1028afdd)
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1028abae: ;
    COW_AT(1028abae)
    ebp = edx - 2u;
    goto L_1028abc7;
L_1028abb3: ;
    COW_AT(1028abb3)
    t2 = edx - (uint32_t)((int32_t)edx >> 0x1fu);
    ebp = (uint32_t)((int32_t)t2 >> 1u);
    goto L_1028abc7;
L_1028abbe: ;
    COW_AT(1028abbe)
    ebp = edx - 1u;
    goto L_1028abc7;
L_1028abc3: ;
    COW_AT(1028abc3)
    ebp = rd32(sp0 - 4u);
    goto L_1028abc7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028ab70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028ab87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1028ab95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028ab9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abaau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abb3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abc3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028abd1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028ac09u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028ac18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028ac4fu:
    {
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
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028ac54u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028acb4u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028acc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028acd3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028ad0au:
    {
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
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028ad0fu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028ad6fu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028ad81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028ad8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028adc5u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1028ae68u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1028ae7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028ae87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028aebbu:
    {
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
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028aebdu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028af04u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028af16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028af23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028af57u:
    {
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
        g->esp = sp0 - 0x14u;
        g->esi = 0u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028af59u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028afa0u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028afb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1028afcbu:
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
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028afddu:
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
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028ab70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028ab70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
