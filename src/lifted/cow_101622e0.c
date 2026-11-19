/* f_0x101622e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_101622e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
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
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 120u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101622fbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101622fb;
    case 0x10162309u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10162309;
    case 0x1016231cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1016231c;
    case 0x10162331u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10162331;
    case 0x10162339u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10162339;
    case 0x1016234au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); self = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1016234a;
    case 0x1016234du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1016234d;
    case 0x10162367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10162367;
    case 0x10162380u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10162380;
    case 0x1016239eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1016239e;
    case 0x101623a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101623a6;
    case 0x101623a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101623a8;
    case 0x101623b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101623b0;
    case 0x101623eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_4 = rd32(sp0 - 4u); goto E_101623ea;
    case 0x101623f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101623f6;
    case 0x10162412u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10162412;
    case 0x1016242fu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1016242f;
    case 0x10162433u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10162433;
    case 0x10162440u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10162440;
    case 0x10162446u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10162446;
    case 0x10162482u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_10162482;
    case 0x10162491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10162491;
    case 0x10162499u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10162499;
    case 0x1016249eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1016249e;
    default: break;
    }
#endif

    COW_AT(101622e0)
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 8u) == 0u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1016249e;
    }
    eax = rd32(COW_IMG(0x104568fcu));
    ecx = (self & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 8u);
    COW_AT(101622fb)
    if ((int16_t)rd16(sp0 + 0x10u) <= 0)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1016249e;
    }
    edx = (in_edx & 0xffff0000u) | rd16(sp0 + 0x10u);
    COW_AT(10162309)
    if (arg1 >> 0x10u == arg2 >> 0x10u)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1016249e;
    }
    eax = (eax & 0xffff0000u) | arg1 >> 0x10u;
    ecx = (ecx & 0xffff0000u) | arg2 >> 0x10u;
    COW_AT(1016231c)
    if ((int32_t)((uint32_t)(int16_t)arg5 + (uint32_t)(int16_t)ecx) < (int16_t)eax)
    {
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_1016249e;
    }
    eax = (uint32_t)(int16_t)eax;
    ecx = (uint32_t)(int16_t)arg5 + (uint32_t)(int16_t)ecx;
    COW_AT(10162331)
    if (rd32(sp0 + 0x18u) == 0u)
    {
        ebx = in_ebx;
        loc_c = self;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        esi = rd32(sp0 + 0x18u);
    COW_AT(10162339)
        wr32(sp0 + 0x18u, arg3);
        if ((int16_t)edx <= 0)
        {
            ecx = arg3;
            ebx = (uint32_t)(int16_t)edx;
            loc_c = self;
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            ebx = (uint32_t)(int16_t)edx;
    COW_AT(1016234a)
            ebp = 0u;
            edi = (uint32_t)(int16_t)arg5 - 0x10u;
            loc_c = self;
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
L_1016234d: ;
    COW_AT(1016234d)
            wr32(sp0 - 0x20u, sp0 - 8u);
            wr32(sp0 - 0x24u, sp0 + 0x18u);
            g->edx = sp0 - 8u;
            t1 = rd32(loc_c + 0x18u);
            g->esp = sp0 - 0x1cu;
            t2 = cow_call_regs(g, COW_IMG(0x101292e0u), sp0 + 0x18u, t1, g->edx, 0, 2, sp0 + 0x18u, sp0 - 8u);
            t3 = g->ecx;
            t4 = g->edx;
            if (t2 == 0u)
            {
                ecx = t3;
                edx = t4;
                goto L_101623a8;
            }
    COW_AT(10162367)
            if ((rd8(rd32(sp0 - 8u) + 0x15u) & 0x40u) == 0u)
            {
                eax = edi + (uint32_t)(int16_t)(arg2 >> 0x10u);
                ecx = (uint32_t)(int16_t)arg1 + 4u;
                edx = rd32(sp0 - 8u);
            }
            else
            {
                eax = edi + (uint32_t)(int16_t)(arg2 >> 0x10u);
    COW_AT(10162380)
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, eax);
                t5 = (uint32_t)(int16_t)arg1 + (uint32_t)(int16_t)rd16(esi + 0x20u) - (uint32_t)(int16_t)rd16(esi + 0x22u) + 4u;
                wr32(sp0 - 0x30u, t5);
                g->eax = (uint32_t)(int16_t)rd16(esi + 0x22u);
                g->edx = t5;
                t6 = rd16(esi + 0x22u);
                g->esp = sp0 - 0x1cu;
                t7 = cow_thiscall(g, COW_IMG(0x1011fb60u), esi, 5, t5, eax, 0x80808080u, 0u, 0u);
                t8 = g->ecx;
                t9 = g->edx;
                eax = t7;
                ecx = t8;
                edx = t9;
            }
    COW_AT(1016239e)
            if ((int32_t)(ebp + 1u) < (int32_t)ebx)
            {
                ebp = ebp + 1u;
                edi = edi - 0x10u;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
                goto L_1016234d;
            }
    COW_AT(101623a6)
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
L_101623b0: ;
    COW_AT(101623b0)
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x101620d0u), g->eax, g->ecx, edx, 1, 0);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = arg2;
    g->edx = arg1;
    cow_cdecl(g, COW_IMG(0x10162010u), 2, arg1, arg2);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 + 0x18u, arg3);
    wr32(sp0 - 8u, 0u);
    t13 = (uint32_t)(int16_t)rd16(sp0 + 0x10u);
    wr32(sp0 - 4u, t13);
    if ((int16_t)rd16(sp0 + 0x10u) <= 0)
    {
        eax = t13;
        ecx = t11;
        edx = t12;
        goto L_10162499;
    }
    ebx = ebx & 0xffffff00u;
    loc_4 = t13;
    COW_AT(101623ea)
    t14 = (uint32_t)(int16_t)arg5 - 0x10u;
    wr32(sp0 + 0x10u, t14);
    loc_8 = 0u;
L_101623f6: ;
    COW_AT(101623f6)
    wr32(sp0 - 0x20u, sp0 + 0x14u);
    wr32(sp0 - 0x24u, sp0 + 0x18u);
    g->edx = sp0 + 0x18u;
    t15 = rd32(sp0 - 0xcu);
    g->esp = sp0 - 0x1cu;
    t16 = cow_call_regs(g, COW_IMG(0x101292e0u), t15, rd32(t15 + 0x18u), g->edx, 0, 2, sp0 + 0x18u, sp0 + 0x14u);
    t17 = g->edx;
    if (t16 == 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10162491;
    }
    eax = t16;
    ebp = t16;
    COW_AT(10162412)
    if (rd8(arg5 + 0x12u) != 1u)
    {
        ecx = rd32(sp0 + 0x10u) + (uint32_t)(int16_t)(arg2 >> 0x10u);
        goto L_10162440;
    }
    ecx = rd32(sp0 + 0x10u) + (uint32_t)(int16_t)(arg2 >> 0x10u);
    COW_AT(1016242f)
    if ((uint8_t)ebx != 0u) goto L_10162440;
    COW_AT(10162433)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 + 4u);
    wr32(sp0 - 0x28u, 1u);
    eax = sp0 + 4u;
    ebx = (ebx & 0xffffff00u) | 1u;
    loc_24 = sp0 + 4u;
    loc_28 = 1u;
L_10162446: ;
    COW_AT(10162446)
    wr32(sp0 - 0x2cu, 0x7fu);
    wr32(sp0 - 0x30u, ecx);
    t18 = (uint32_t)(int16_t)arg1 + 4u;
    wr32(sp0 - 0x34u, t18);
    wr32(sp0 - 0x74u, ebp);
    esi = arg5;
    edi = sp0 - 0x70u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0x18u;
    cow_bridge_indirect(g, COW_IMG(0x101620f0u), 0u, 23u, (const uint32_t[]){ebp, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), t18, ecx, 0x7fu, loc_28, loc_24, 0u, rd32(sp0 - 0x1cu)}, g->ecx, g->edx, g->eax, 92u);
    t19 = rd32(sp0 - 8u) + 1u;
    t20 = rd32(sp0 - 8u);
    wr32(sp0 - 8u, t19);
    t21 = rd32(sp0 + 0x10u) - 0x10u;
    t22 = rd32(sp0 - 4u);
    wr32(sp0 + 0x10u, t21);
    if ((int32_t)(t20 + 1u) < (int32_t)t22)
    {
        loc_8 = t19;
        loc_4 = rd32(sp0 - 4u);
        goto L_101623f6;
    }
    eax = t19;
    ecx = t22;
    edx = t21;
    COW_AT(10162482)
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x101620b0u), 0);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    return;
L_101623a8: ;
    COW_AT(101623a8)
    wr32(sp0 + 0x18u, arg3);
    eax = arg3;
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_101623b0;
L_10162440: ;
    COW_AT(10162440)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    loc_24 = 0u;
    loc_28 = 0u;
    goto L_10162446;
L_10162491: ;
    COW_AT(10162491)
    wr32(sp0 + 0x18u, arg3);
    ecx = arg3;
L_10162499: ;
    COW_AT(10162499)
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, COW_IMG(0x101620b0u), 0);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_1016249e: ;
    COW_AT(1016249e)
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101622e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101622fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10162309u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1016231cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10162331u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = (uint32_t)(int16_t)arg5;
        wr32(sp0 - 0x10u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10162339u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = (uint32_t)(int16_t)arg5;
        (void)sp0;
        return 1;
    }
    case 0x1016234au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        self = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = (uint32_t)(int16_t)arg5;
        (void)sp0;
        return 1;
    }
    case 0x1016234du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10162367u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10162380u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ecx = (uint32_t)(int16_t)arg1 + 4u;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1016239eu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101623a6u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101623a8u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101623b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101623eau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101623f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10162412u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1016242fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = (uint32_t)(int16_t)arg1 + 4u;
        g->esi = arg5;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10162433u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = (uint32_t)(int16_t)arg1 + 4u;
        g->esi = arg5;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10162440u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->edx = (uint32_t)(int16_t)arg1 + 4u;
        g->esi = arg5;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10162446u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->edx = (uint32_t)(int16_t)arg1 + 4u;
        g->esi = arg5;
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10162482u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10162491u:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x24u, sp0 + 0x18u);
        wr32(sp0 - 0x20u, sp0 + 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x10162499u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1016249eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101622e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101622e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */
