/* f_0x102201f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102201f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10220201u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10220201;
    case 0x10220267u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10220267;
    case 0x10220288u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_10220288;
    case 0x102202a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102202a4;
    case 0x102202b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102202b8;
    case 0x102202c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102202c4;
    case 0x102202cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102202ca;
    case 0x102202ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; zf = g->zf; goto E_102202ec;
    case 0x1022031bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_1022031b;
    case 0x10220320u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10220320;
    case 0x10220322u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_10220322;
    case 0x10220342u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); goto E_10220342;
    default: break;
    }
#endif

    COW_AT(102201f0)
    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    if (rd8(self + 0x2eu) == 0u)
    {
        loc_44 = in_ebx;
        loc_48 = in_esi;
        loc_4c = in_edi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x2eu);
    COW_AT(10220201)
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x40u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10220350u), self, 3, in_edi, in_esi, in_ebx);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 0x50u, t1);
        g->ecx = t2;
        g->edx = t3;
        g->esp = sp0 - 0x4cu;
        t4 = cow_cdecl(g, COW_IMG(0x101039e0u), 1, t1);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x54u, t4);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x50u;
        t7 = cow_cdecl(g, COW_IMG(0x10103b30u), 1, t4);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x54u, t7);
        g->ecx = t8;
        g->edx = t9;
        t10 = cow_cdecl(g, COW_IMG(0x101039e0u), 1, t7);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x58u, t10);
        g->ecx = t11;
        g->edx = t12;
        g->esp = sp0 - 0x54u;
        t13 = cow_cdecl(g, COW_IMG(0x10103b10u), 1, t10);
        t14 = g->ecx;
        t15 = g->edx;
        wr32(sp0 - 0x58u, t13);
        wr32(sp0 - 0x5cu, COW_IMG(0x10385f5cu));
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10385f5cu), t13, rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
        wr32(sp0 - 0x64u, 0x80808080u);
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        wr32(sp0 - 0x6cu, arg2 + 0x1au);
        wr32(sp0 - 0x70u, arg1 - 0x32u);
        g->eax = arg1 - 0x32u;
        g->ecx = sp0 - 0x40u;
        g->edx = arg2 + 0x1au;
        t16 = cow_cdecl(g, COW_IMG(0x101c9780u), 9, arg1 - 0x32u, arg2 + 0x1au, sp0 - 0x40u, 0x80808080u, sp0 - 0x40u, COW_IMG(0x10385f5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x74u, 4u);
        g->ecx = t17;
        g->edx = t18;
        g->esp = sp0 - 0x70u;
        t19 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
        t20 = g->ecx;
        t21 = g->edx;
        if (t19 == 0u)
        {
            loc_44 = in_ebx;
            loc_48 = in_esi;
            loc_4c = in_edi;
        }
        else
        {
            eax = t19;
            ecx = t20;
            edx = t21;
            esi = t19;
    COW_AT(10220267)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t22 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
            t23 = g->ecx;
            t24 = g->edx;
            wr32(sp0 - 0x50u, t22);
            t25 = cow_cdecl(g, COW_IMG(0x10103ae0u), 1, t22);
            if (rd32(rd32(esi) + rd16(COW_IMG(0x10385ee8u) + t25 * 2u) * 4u) == 0u)
            {
                eax = t25;
                ecx = rd32(rd32(esi) + rd16(COW_IMG(0x10385ee8u) + t25 * 2u) * 4u);
                edx = rd32(esi);
            }
            else
            {
                ecx = rd32(rd32(esi) + rd16(COW_IMG(0x10385ee8u) + t25 * 2u) * 4u);
    COW_AT(10220288)
                wr32(sp0 - 0x50u, 0u);
                wr32(sp0 - 0x54u, 0u);
                wr32(sp0 - 0x58u, 0x80808080u);
                t26 = (uint32_t)(int16_t)arg2 + 0x1au;
                wr32(sp0 - 0x5cu, t26);
                t27 = (uint32_t)(int16_t)arg1 - 0x44u;
                wr32(sp0 - 0x60u, t27);
                g->eax = t26;
                g->edx = t27;
                g->esp = sp0 - 0x4cu;
                t28 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t27, t26, 0x80808080u, 0u, 0u);
                t29 = g->ecx;
                t30 = g->edx;
                eax = t28;
                ecx = t29;
                edx = t30;
            }
    COW_AT(102202a4)
            wr32(sp0 - 0x50u, 0xeu);
            g->eax = eax;
            g->esp = sp0 - 0x4cu;
            t31 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xeu);
            if (t31 == 0u)
            {
                loc_44 = rd32(sp0 - 0x44u);
                loc_48 = rd32(sp0 - 0x48u);
                loc_4c = rd32(sp0 - 0x4cu);
            }
            else
            {
                eax = t31;
                ecx = t31;
    COW_AT(102202b8)
                if (rd16(COW_IMG(0x10485fe0u)) < 4u)
                {
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_48 = rd32(sp0 - 0x48u);
                    loc_4c = rd32(sp0 - 0x4cu);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x10485fe0u));
    COW_AT(102202c4)
                    if ((uint16_t)eax >= 0x14u)
                    {
                        loc_44 = rd32(sp0 - 0x44u);
                        loc_48 = rd32(sp0 - 0x48u);
                        loc_4c = rd32(sp0 - 0x4cu);
                    }
                    else
                    {
    COW_AT(102202ca)
                        if (rd32(rd32(ecx) + rd16(COW_IMG(0x10385ef8u) + (uint32_t)((int32_t)((uint16_t)eax - 4u - (uint32_t)((int32_t)((uint16_t)eax - 4u) >> 0x1fu)) >> 1u) * 2u) * 4u) == 0u)
                        {
                            loc_44 = rd32(sp0 - 0x44u);
                            loc_48 = rd32(sp0 - 0x48u);
                            loc_4c = rd32(sp0 - 0x4cu);
                        }
                        else
                        {
                            edx = rd16(COW_IMG(0x10385ef8u) + (uint32_t)((int32_t)((uint16_t)eax - 4u - (uint32_t)((int32_t)((uint16_t)eax - 4u) >> 0x1fu)) >> 1u) * 2u);
                            esi = rd32(rd32(ecx) + rd16(COW_IMG(0x10385ef8u) + (uint32_t)((int32_t)((uint16_t)eax - 4u - (uint32_t)((int32_t)((uint16_t)eax - 4u) >> 0x1fu)) >> 1u) * 2u) * 4u);
                            eax = rd32(ecx);
    COW_AT(102202ec)
                            wr32(sp0 - 0x50u, 0u);
                            wr32(sp0 - 0x54u, 0u);
                            wr32(sp0 - 0x58u, 0x80808080u);
                            t32 = (uint32_t)(int16_t)arg2 - 0x2au;
                            wr32(sp0 - 0x5cu, t32);
                            t33 = (uint32_t)(int16_t)arg1 - 0x44u;
                            wr32(sp0 - 0x60u, t33);
                            g->esp = sp0 - 0x4cu;
                            cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t33, t32, 0x80808080u, 0u, 0u);
                            if ((int32_t)(rd16(COW_IMG(0x10485fe0u)) & 0x80000001u) >= 0)
                            {
                                edi = t32;
                                zf = (rd16(COW_IMG(0x10485fe0u)) & 0x80000001u) == 0u;
                            }
                            else
                            {
                                edx = rd16(COW_IMG(0x10485fe0u)) & 0x80000001u;
                                edi = t32;
    COW_AT(1022031b)
                                zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
                            }
    COW_AT(10220320)
                            if (zf)
                            {
                                loc_44 = rd32(sp0 - 0x44u);
                                loc_48 = rd32(sp0 - 0x48u);
                                loc_4c = rd32(sp0 - 0x4cu);
                            }
                            else
                            {
    COW_AT(10220322)
                                wr32(sp0 - 0x50u, 0u);
                                wr32(sp0 - 0x54u, 0u);
                                wr32(sp0 - 0x58u, 0x80808080u);
                                wr32(sp0 - 0x5cu, edi);
                                t34 = (uint32_t)(int16_t)arg1 + (uint32_t)(int16_t)rd16(esi + 0x22u) - (uint32_t)(int16_t)rd16(esi + 0x20u) - 0x44u;
                                wr32(sp0 - 0x60u, t34);
                                g->esp = sp0 - 0x4cu;
                                cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t34, edi, 0x80808080u, 0u, 0u);
                                loc_44 = rd32(sp0 - 0x44u);
                                loc_48 = rd32(sp0 - 0x48u);
                                loc_4c = rd32(sp0 - 0x4cu);
                            }
                        }
                    }
                }
            }
        }
    }
    COW_AT(10220342)
    g->ebx = loc_44;
    g->esi = loc_48;
    g->edi = loc_4c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102201f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10220201u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x44u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10220267u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10220288u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        wr32(sp0 - 0x60u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102202a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102202b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102202c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102202cau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x102202ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x1022031bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = (uint32_t)(int16_t)arg1;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10220320u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = (uint32_t)(int16_t)arg1;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10220322u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x4cu;
        g->ebx = (uint32_t)(int16_t)arg1;
        wr32(sp0 - 0x68u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10220342u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102201f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102201f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
