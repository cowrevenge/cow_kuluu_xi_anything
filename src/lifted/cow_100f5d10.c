/* f_0x100f5d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f5d10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f5d1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); in_ebx = rd32(sp0 - 0x54u); g->ebp = rd32(sp0 - 0x58u); g->ebx = rd32(sp0 - 0x54u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100f5d1f;
    case 0x100f5d53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5d53;
    case 0x100f5d60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5d60;
    case 0x100f5d69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5d69;
    case 0x100f5d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_100f5d6f;
    case 0x100f5d77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); loc_50 = rd32(sp0 - 0x50u); goto E_100f5d77;
    case 0x100f5d97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5d97;
    case 0x100f5dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5dad;
    case 0x100f5dbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5dbb;
    case 0x100f5dcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5dca;
    case 0x100f5dd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5dd4;
    case 0x100f5ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5ddf;
    case 0x100f5df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5df4;
    case 0x100f5e0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100f5e0a;
    case 0x100f5e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5e0e;
    case 0x100f5e17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5e17;
    case 0x100f5e1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100f5e1d;
    case 0x100f5e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_100f5e2e;
    case 0x100f5e33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_50 = rd32(sp0 - 0x50u); goto E_100f5e33;
    default: break;
    }
#endif

    COW_AT(100f5d10)
    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if (arg2 != 0u)
    {
        loc_54 = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
    }
    else
    {
    COW_AT(100f5d1f)
        wr32(sp0 - 0x64u, 0u);
        wr32(sp0 - 0x68u, 0x200u);
        wr32(sp0 - 0x6cu, arg1 + 0xc48u);
        edi = arg1 + 0xc48u;
        eax = 0u;
        ecx = 0x80u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x70u, 7u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = arg1 + 0xc48u;
        g->esp = sp0 - 0x60u;
        t1 = cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 7u, arg1 + 0xc48u, 0x200u, 0u);
        t2 = g->ecx;
        t3 = g->edx;
        g->ecx = t2;
        g->edx = t3;
        t4 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int16_t)t4 <= 0)
        {
            loc_54 = in_ebx;
            loc_58 = in_ebp;
            loc_5c = in_esi;
            loc_60 = in_edi;
            goto L_100f5d6f;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
        esi = 0u;
        edi = t4;
L_100f5d53: ;
    COW_AT(100f5d53)
        wr32(sp0 - 0x64u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, esi);
        t8 = g->ecx;
        t9 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
        }
        else
        {
            eax = t7;
            ecx = t8;
            edx = t9;
    COW_AT(100f5d60)
            wr32(sp0 - 0x64u, eax);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t10 = cow_cdecl(g, COW_IMG(0x100e63c0u), 1, eax);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
    COW_AT(100f5d69)
        if ((int16_t)(esi + 1u) < (int16_t)edi)
        {
            esi = esi + 1u;
            goto L_100f5d53;
        }
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
    }
L_100f5d6f: ;
    COW_AT(100f5d6f)
    wr32(sp0 - 0x50u, 0xau);
    loc_50 = 0xau;
L_100f5d77: ;
    COW_AT(100f5d77)
    wr32(sp0 - 0x64u, arg1 + 8u);
    wr32(sp0 - 0x68u, sp0 - 0x4cu);
    wr32(sp0 - 0x6cu, arg2);
    g->eax = arg2;
    g->edx = sp0 - 0x4cu;
    g->esp = sp0 - 0x60u;
    t13 = cow_thiscall(g, COW_IMG(0x100f42d0u), arg1, 3, arg2, sp0 - 0x4cu, arg1 + 8u);
    t14 = g->edx;
    if (t13 != 0x18u)
    {
        eax = t13;
        edx = t14;
        goto L_100f5e33;
    }
    eax = t13;
    COW_AT(100f5d97)
    t15 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x64u, t15);
    wr32(sp0 - 0x68u, sp0 - 0x48u);
    g->eax = eax;
    g->ecx = t15;
    g->edx = sp0 - 0x48u;
    g->esp = sp0 - 0x60u;
    t16 = cow_cdecl(g, COW_IMG(0x1031046fu), 2, sp0 - 0x48u, t15);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 != 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(100f5dad)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t19 = cow_stdcall(g, COW_IMG(0x100e6b10u), 0);
        t20 = g->ecx;
        t21 = g->edx;
        if ((int16_t)t19 <= 0)
        {
            edx = t21;
            goto L_100f5e1d;
        }
        eax = t19;
        ecx = t20;
        edx = t21;
        ebx = 0u;
        ebp = t19;
L_100f5dbb: ;
    COW_AT(100f5dbb)
        wr32(sp0 - 0x64u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t22 = cow_thiscall_cdecl(g, COW_IMG(0x100e6c40u), ecx, 1, ebx);
        t23 = g->ecx;
        t24 = g->edx;
        if (t22 == 0u)
        {
            eax = t22;
            ecx = t23;
            edx = t24;
        }
        else
        {
            edx = t24;
            esi = t22;
    COW_AT(100f5dca)
            if (rd32(esi) != rd32(sp0 - 0x48u))
            {
                eax = rd32(esi);
                ecx = rd32(sp0 - 0x48u);
            }
            else
            {
    COW_AT(100f5dd4)
                if (rd32(esi + 4u) != rd32(sp0 - 0x44u))
                {
                    eax = rd32(sp0 - 0x44u);
                    ecx = rd32(esi + 4u);
                }
                else
                {
    COW_AT(100f5ddf)
                    if (!(rd32(esi + 0x98u) & 1u))
                    {
                        eax = rd32(esi + 0x98u) & 1u;
                        ecx = rd32(esi + 0x9cu);
                        edx = 0u;
                    }
                    else
                    {
                        ecx = rd32(esi + 0x9cu);
    COW_AT(100f5df4)
                        if ((ecx >> 0xdu & 0x3fu) != (uint8_t)rd32(sp0 - 0xcu))
                        {
                            eax = (uint8_t)rd32(sp0 - 0xcu);
                            ecx = ecx >> 0xdu & 0x3fu;
                            edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0xcu) >> 0x1fu);
                        }
                        else
                        {
                            eax = (uint8_t)rd32(sp0 - 0xcu);
                            ecx = ecx >> 0xdu & 0x3fu;
                            edx = (uint32_t)((int32_t)(uint8_t)rd32(sp0 - 0xcu) >> 0x1fu);
    COW_AT(100f5e0a)
                            if (0u == edx)
                            {
    COW_AT(100f5e0e)
                                wr32(sp0 - 0x64u, esi);
                                g->eax = eax;
                                g->ecx = ecx;
                                g->edx = edx;
                                g->esp = sp0 - 0x60u;
                                t25 = cow_cdecl(g, COW_IMG(0x100e63b0u), 1, esi);
                                t26 = g->ecx;
                                t27 = g->edx;
                                eax = t25;
                                ecx = t26;
                                edx = t27;
                            }
                        }
                    }
                }
            }
        }
    COW_AT(100f5e17)
        if ((int16_t)(ebx + 1u) < (int16_t)ebp)
        {
            ebx = ebx + 1u;
            goto L_100f5dbb;
        }
    }
L_100f5e1d: ;
    COW_AT(100f5e1d)
    t28 = rd32(sp0 - 0x50u) - 1u;
    t29 = rd32(sp0 - 0x50u);
    wr32(sp0 - 0x50u, t28);
    if ((int32_t)(t29 - 1u) > 0)
    {
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_50 = t28;
        goto L_100f5d77;
    }
    COW_AT(100f5e2e)
    eax = 0x16u;
L_100f5e33: ;
    COW_AT(100f5e33)
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f5d10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f5d1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        in_ebx = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d53u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d60u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d69u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d6fu:
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
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        uint32_t loc_54;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100f5d97u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x100f5dadu:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5dbbu:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5dcau:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5dd4u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5ddfu:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5df4u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x60u;
        g->edi = 0u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e0eu:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e17u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e1du:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x68u, sp0 - 0x48u);
        (void)sp0;
        return 1;
    }
    case 0x100f5e33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f5d10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f5d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
