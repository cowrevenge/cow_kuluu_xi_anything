/* f_0x10252ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10252ce0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_28;
    uint32_t loc_2c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10252cf2u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252cf2;
    case 0x10252cffu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252cff;
    case 0x10252d0fu: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252d0f;
    case 0x10252d18u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252d18;
    case 0x10252d1du: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252d1d;
    case 0x10252d26u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252d26;
    case 0x10252d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252d4c;
    case 0x10252d5cu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252d5c;
    case 0x10252d62u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252d62;
    case 0x10252d6eu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252d6e;
    case 0x10252d79u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252d79;
    case 0x10252d82u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252d82;
    case 0x10252db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252db2;
    case 0x10252db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252db8;
    case 0x10252dd0u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252dd0;
    case 0x10252de6u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252de6;
    case 0x10252e08u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e08;
    case 0x10252e0eu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e0e;
    case 0x10252e13u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e13;
    case 0x10252e1cu: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e1c;
    case 0x10252e21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e21;
    case 0x10252e28u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e28;
    case 0x10252e36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252e36;
    case 0x10252e40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10252e40;
    case 0x10252e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); goto E_10252e4e;
    case 0x10252e5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); goto E_10252e5e;
    case 0x10252e60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e60;
    case 0x10252e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e68;
    case 0x10252e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e82;
    case 0x10252e89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_18 = rd32(sp0 - 0x18u); goto E_10252e89;
    case 0x10252eabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); goto E_10252eab;
    case 0x10252eb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_ebp = rd32(sp0 - 0x20u); g->ebp = rd32(sp0 - 0x20u); goto E_10252eb4;
    default: break;
    }
#endif

    COW_AT(10252ce0)
    wr32(sp0 - 0x20u, in_ebp);
    if ((int32_t)rd32(sp0 + 8u) < 0)
    {
        eax = rd32(sp0 + 8u);
        goto L_10252eb4;
    }
    eax = rd32(sp0 + 8u);
    COW_AT(10252cf2)
    if ((int32_t)eax >= (int32_t)rd32(rd32(sp0 + 4u) + 0x34u)) goto L_10252eb4;
    ebp = rd32(sp0 + 4u);
    COW_AT(10252cff)
    t1 = rd32(ebp);
    wr32(sp0 + 8u, 0u);
    if ((t1 & 4u) == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        edi = in_edi;
        loc_20 = in_ebp;
    }
    else
    {
        ecx = t1;
    COW_AT(10252d0f)
        if ((ecx & 8u) == 0u)
        {
            ebx = in_ebx;
            esi = in_esi;
            edi = in_edi;
            loc_20 = in_ebp;
        }
        else
        {
    COW_AT(10252d18)
            if (eax != rd32(ebp + 0x30u))
            {
    COW_AT(10252d1d)
                wr32(ebp + 4u, 0u);
                wr32(ebp + 8u, 0u);
                wr32(ebp + 0x30u, eax);
            }
    COW_AT(10252d26)
            wr32(sp0 - 0x24u, in_edi);
            t2 = eax * 0x10u + rd32(ebp + 0x3cu);
            wr32(sp0 - 0x28u, sp0 - 0x1cu);
            wr32(sp0 - 0x2cu, t2);
            t3 = rd32(ebp + 0x3cu);
            wr32(sp0 + 4u, t2);
            g->eax = sp0 - 0x1cu;
            g->edx = 0u;
            g->esp = sp0 - 0x24u;
            t4 = cow_cdecl(g, COW_IMG(0x10289ec0u), 2, t2, sp0 - 0x1cu);
            t5 = g->edx;
            if (t4 == 0xffffffffu)
            {
                ebx = in_ebx;
                esi = in_esi;
            }
            else
            {
                edx = t5;
                edi = t2;
    COW_AT(10252d4c)
                if ((int32_t)arg3 < (int32_t)rd32(sp0 - 0x18u))
                {
                    ebx = in_ebx;
                    esi = in_esi;
                }
                else
                {
    COW_AT(10252d5c)
                    wr32(sp0 - 0x28u, in_ebx);
                    wr32(sp0 - 0x2cu, in_esi);
                    loc_28 = in_ebx;
                    loc_2c = in_esi;
                    loc_18 = rd32(sp0 - 0x18u);
L_10252d62: ;
    COW_AT(10252d62)
                    if (rd32(sp0 - 0x1cu) != 0u)
                    {
                        eax = rd32(sp0 - 0x1cu);
    COW_AT(10252e0e)
                        if (eax != 1u)
                        {
    COW_AT(10252e1c)
                            if (eax != 2u)
                            {
                                ecx = arg3;
                            }
                            else
                            {
    COW_AT(10252e21)
                                t20 = rd32(sp0 - 0x14u);
                                wr32(ebp + 8u, t20);
                                ecx = t20;
                            }
                        }
                        else
                        {
    COW_AT(10252e13)
                            t19 = rd32(sp0 - 0x14u);
                            wr32(ebp + 4u, t19);
                            eax = t19;
                            ecx = arg3;
                        }
                    }
                    else
                    {
                        eax = rd32(sp0 - 0x1cu);
    COW_AT(10252d6e)
                        if (rd32(ebp + 0x14u) == 0u)
                        {
                            ecx = arg3;
                            goto L_10252e08;
                        }
                        esi = rd32(ebp + 0x14u);
    COW_AT(10252d79)
                        if (rd32(esi) == 0u)
                        {
                            ecx = arg3;
                            goto L_10252e08;
                        }
    COW_AT(10252d82)
                        t6 = rd32(sp0 - 0x14u);
                        wr32(sp0 - 0x30u, t6);
                        wr32(sp0 - 0x34u, COW_IMG(0x10350958u));
                        wr32(sp0 - 0x38u, sp0 - 0x10u);
                        g->ebx = arg4;
                        g->esp = sp0 - 0x24u;
                        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10350958u), t6, loc_2c, loc_28);
                        t7 = rd32(sp0 - 0x10u);
                        wr32(sp0 - 0x30u, t7);
                        wr32(sp0 - 0x34u, 0x3du);
                        wr32(sp0 - 0x38u, sp0 + 0x10u);
                        g->eax = sp0 + 0x10u;
                        g->edx = t7;
                        t8 = rd32(esi);
                        g->esp = sp0 - 0x2cu;
                        t9 = cow_thiscall(g, COW_IMG(0x10072290u), t8, 3, sp0 + 0x10u, 0x3du, t7);
                        t10 = g->ecx;
                        t11 = g->edx;
                        if (rd32(t9) == 0u)
                        {
                            eax = rd32(t9);
                            ecx = t10;
                            edx = t11;
                            loc_28 = rd32(sp0 - 0x28u);
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_18 = rd32(sp0 - 0x18u);
                            goto L_10252e08;
                        }
                        eax = rd32(t9);
                        ecx = t10;
                        edx = t11;
    COW_AT(10252db2)
                        if (rd32(eax) == 0u)
                        {
                            eax = rd32(eax);
                            loc_28 = rd32(sp0 - 0x28u);
                            loc_2c = rd32(sp0 - 0x2cu);
                            loc_18 = rd32(sp0 - 0x18u);
                            goto L_10252e08;
                        }
                        eax = rd32(eax);
    COW_AT(10252db8)
                        esi = sp0 - 0x10u;
                        edi = COW_IMG(0x10389c64u);
                        ecx = 5u;
                        cf = 0u;
                        pf = PARITY(0u);
                        af = 0u;
                        zf = 1u;
                        sf = 0u;
                        of = 0u;
                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                        wr32(sp0 - 0x30u, 0x7fu);
                        if (!zf)
                        {
                            ecx = eax;
                            goto L_10252de6;
                        }
                        ecx = eax;
    COW_AT(10252dd0)
                        wr32(sp0 - 0x34u, 0x40u);
                        g->edx = 0u;
                        g->esp = sp0 - 0x2cu;
                        cow_thiscall(g, COW_IMG(0x10036f00u), ecx, 2, 0x40u, 0x7fu);
                        t12 = g->ecx;
                        t13 = g->edx;
                        t14 = rd32(sp0 + 8u) + 1u;
                        t15 = rd32(sp0 + 4u);
                        wr32(sp0 + 8u, t14);
                        eax = t14;
                        ecx = t12;
                        edx = t13;
                        edi = t15;
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_18 = rd32(sp0 - 0x18u);
                    }
L_10252e28: ;
    COW_AT(10252e28)
                    wr32(sp0 - 0x30u, edi);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x2cu;
                    t21 = cow_cdecl(g, COW_IMG(0x10289f30u), 1, edi);
                    t22 = g->ecx;
                    t23 = g->edx;
                    if (t21 != 0xffffffffu)
                    {
                        eax = t21;
                        ecx = t22;
    COW_AT(10252e40)
                        wr32(sp0 - 0x30u, sp0 - 0x1cu);
                        wr32(sp0 - 0x34u, edi);
                        g->edx = sp0 - 0x1cu;
                        g->esp = sp0 - 0x2cu;
                        cow_cdecl(g, COW_IMG(0x10289ec0u), 2, edi, sp0 - 0x1cu);
                        t24 = g->edx;
                        edx = t24;
                        loc_18 = rd32(sp0 - 0x18u);
                    }
                    else
                    {
                        edx = t23;
    COW_AT(10252e36)
                        wr32(sp0 - 0x18u, 0x7fffffffu);
                        loc_18 = 0x7fffffffu;
                    }
    COW_AT(10252e4e)
                    if ((int32_t)arg3 >= (int32_t)loc_18)
                    {
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        goto L_10252d62;
                    }
    COW_AT(10252e5e)
                    ebx = rd32(sp0 - 0x28u);
                    esi = rd32(sp0 - 0x2cu);
                }
            }
    COW_AT(10252e60)
            if ((int32_t)rd32(ebp + 4u) <= 0)
            {
                edi = rd32(sp0 - 0x24u);
            }
            else
            {
                ecx = rd32(ebp + 4u);
                edi = rd32(sp0 - 0x24u);
    COW_AT(10252e68)
                t25 = rd32(COW_IMG(0x10455c20u));
                t26 = rd32(rd32(COW_IMG(0x10455c20u)) + 0xdb4u);
                wr8(t25 + 0xdbcu, 1u);
                wr32(t25 + 0xdb4u, ecx + t26);
            }
    COW_AT(10252e82)
            if ((int32_t)rd32(ebp + 8u) <= 0)
            {
                loc_20 = rd32(sp0 - 0x20u);
            }
            else
            {
                eax = rd32(ebp + 8u);
    COW_AT(10252e89)
                t27 = rd32(COW_IMG(0x10455c20u));
                t28 = rd32(rd32(COW_IMG(0x10455c20u)) + 0xdb4u);
                wr8(t27 + 0xdbcu, 1u);
                t29 = t28 + ((int32_t)eax > 127);
                wr32(t27 + 0xdb4u, t29);
                loc_20 = rd32(sp0 - 0x20u);
            }
        }
    }
    COW_AT(10252eab)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_20;
    return rd32(sp0 + 8u);
L_10252de6: ;
    COW_AT(10252de6)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x42800000u);
    wr32(sp0 - 0x40u, 0x44000000u);
    wr32(sp0 - 0x44u, 0x41a00000u);
    wr32(sp0 - 0x48u, 0x40400000u);
    wr32(sp0 - 0x4cu, arg4);
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 0x2cu;
    t16 = cow_thiscall(g, COW_IMG(0x10037020u), ecx, 8, arg4, 0x40400000u, 0x41a00000u, 0x44000000u, 0x42800000u, 0u, 0u, 0x7fu);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    edi = rd32(sp0 + 4u);
    loc_28 = rd32(sp0 - 0x28u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_18 = rd32(sp0 - 0x18u);
L_10252e08: ;
    COW_AT(10252e08)
    wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
    goto L_10252e28;
L_10252eb4: ;
    COW_AT(10252eb4)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10252ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10252cf2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252cffu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252d0fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252d18u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252d1du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252d26u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10252d4cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10252d5cu:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x24u;
        g->ecx = arg3;
        wr32(sp0 - 0x28u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10252d62u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252d6eu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252d79u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252d82u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252db2u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        wr32(sp0 - 0x38u, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10252db8u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        wr32(sp0 - 0x38u, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10252dd0u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->ebx = arg4;
        wr32(sp0 - 0x38u, sp0 + 0x10u);
        wr32(sp0 - 0x30u, 0x7fu);
        (void)sp0;
        return 1;
    }
    case 0x10252de6u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        g->ebx = arg4;
        wr32(sp0 - 0x38u, sp0 + 0x10u);
        wr32(sp0 - 0x30u, 0x7fu);
        (void)sp0;
        return 1;
    }
    case 0x10252e08u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e0eu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e13u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e1cu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ecx = arg3;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e21u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e28u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        uint32_t loc_2c;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e36u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e40u:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e4eu:
    {
        unsigned af;
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        g->ebx = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10252e5eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x10252e60u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10252e68u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10252e82u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10252e89u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_28;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10252eabu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_28;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10252eb4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_ebp = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10252ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10252ce0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
