/* f_0x100fa9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100fa9f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_26fc;
    uint32_t loc_2700;
    uint32_t loc_271c;
    uint32_t loc_2720;
    uint32_t loc_2728;
    uint32_t loc_2730;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 10036u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fa9fau: self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100fa9fa;
    case 0x100faa09u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa09;
    case 0x100faa1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa1e;
    case 0x100faa23u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa23;
    case 0x100faa39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa39;
    case 0x100faa51u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa51;
    case 0x100faa59u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa59;
    case 0x100faa7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa7f;
    case 0x100faa85u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x2718u); in_esi = rd32(sp0 - 0x2714u); g->edi = rd32(sp0 - 0x2718u); g->esi = rd32(sp0 - 0x2714u); goto E_100faa85;
    case 0x100faa8au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100faa8a;
    case 0x100faa8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100faa8e;
    case 0x100faa95u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_271c = rd32(sp0 - 0x271cu); goto E_100faa95;
    case 0x100faa98u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_271c = rd32(sp0 - 0x271cu); goto E_100faa98;
    case 0x100faaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100faaa0;
    case 0x100faaadu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100faaad;
    case 0x100faab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100faab2;
    case 0x100fab0au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab0a;
    case 0x100fab15u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab15;
    case 0x100fab1au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab1a;
    case 0x100fab58u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab58;
    case 0x100fab7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_2730 = rd32(sp0 - 0x2730u); loc_2728 = rd32(sp0 - 0x2728u); loc_2720 = rd32(sp0 - 0x2720u); loc_271c = rd32(sp0 - 0x271cu); loc_2700 = rd32(sp0 - 0x2700u); loc_26fc = rd32(sp0 - 0x26fcu); goto E_100fab7b;
    case 0x100fab80u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab80;
    case 0x100fab8du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab8d;
    case 0x100fab9au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fab9a;
    case 0x100fabc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fabc9;
    case 0x100fabd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fabd7;
    case 0x100fabddu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fabdd;
    case 0x100fabfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fabfd;
    case 0x100fac02u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac02;
    case 0x100fac10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac10;
    case 0x100fac39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac39;
    case 0x100fac3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac3e;
    case 0x100fac4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac4b;
    case 0x100fac55u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac55;
    case 0x100fac75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac75;
    case 0x100fac7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac7f;
    case 0x100fac86u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac86;
    case 0x100fac94u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_100fac94;
    default: break;
    }
#endif

    COW_AT(100fa9f0)
    COW_AT(100fa9fa)
    wr32(sp0 - 0x2714u, in_esi);
    wr32(sp0 - 0x2718u, in_edi);
    if (rd8(arg1 + 0xcu) != 3u)
    {
        eax = 0x2710u;
        ecx = self;
        edx = in_edx;
    }
    else
    {
    COW_AT(100faa09)
        t1 = rd16(arg1 + 0xau);
        if ((int32_t)(rd16(arg1 + 6u) - t1) < -1) goto L_100faa59;
        eax = rd16(arg1 + 6u) - t1;
    COW_AT(100faa1e)
        if ((int32_t)eax > 1) goto L_100faa59;
    COW_AT(100faa23)
        if (rd32(arg1 + 0x417cu) <= rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu))
        {
            eax = rd32(arg1 + 0x417cu);
            ecx = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu);
            edx = rd32(COW_IMG(0x104dfd94u));
        }
        else
        {
            eax = rd32(arg1 + 0x417cu);
            ecx = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu);
            edx = rd32(COW_IMG(0x104dfd94u));
    COW_AT(100faa39)
            wr32(arg1 + 0x417cu, eax - ecx);
            if (eax - ecx >= rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu))
            {
                eax = eax - ecx;
                ecx = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu);
            }
            else
            {
                eax = eax - ecx;
                ecx = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu);
    COW_AT(100faa51)
                wr32(arg1 + 0x417cu, ecx);
            }
        }
    }
L_100faa85: ;
    COW_AT(100faa85)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2718u;
    t3 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(100faa8a)
    if ((eax & 4u) != 0u)
    {
    COW_AT(100faa8e)
        wr32(sp0 - 0x271cu, 8u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x2718u;
        cow_cdecl(g, COW_IMG(0x100fc180u), 1, 8u);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    COW_AT(100faa95)
    }
    COW_AT(100faa98)
    wr32(sp0 - 0x271cu, rd32(arg1));
    g->eax = rd32(arg1);
    g->ecx = ecx;
    g->edx = edx;
    t8 = rd32(arg1);
    g->esp = sp0 - 0x271cu;
    t9 = cow_stdcall(g, COW_IMG(0x100dc6d0u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(100faaa0)
    if (eax == 0u) goto L_100fac94;
    edi = eax;
    COW_AT(100faaad)
    g->esp = sp0 - 0x2718u;
    cow_stdcall(g, COW_IMG(0x100fc650u), 0);
    COW_AT(100faab2)
    t12 = rd32(COW_IMG(0x104dfd98u));
    t13 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x416cu);
    wr16(edi + 0x554u, 2u);
    wr32(edi + 0x558u, t13);
    t14 = rd32(COW_IMG(0x104dfd98u));
    t15 = rd16(rd32(COW_IMG(0x104dfd98u)) + 0x4170u);
    wr16(edi + 0x556u, (uint16_t)t15);
    t16 = rd32(COW_IMG(0x104dfd94u)) + 0x43634u;
    wr32(sp0 - 0x271cu, t16);
    t17 = (t14 & 0xffff0000u) | rd16(arg1 + 0xau);
    wr32(sp0 - 0x2720u, t17);
    t18 = ((t12 | t15) & 0xffff0000u) | rd16(arg1 + 8u);
    wr32(sp0 - 0x2724u, t18);
    t19 = (t16 & 0xffff0000u) | rd16(arg1 + 6u);
    wr32(sp0 - 0x2728u, t19);
    wr32(sp0 - 0x272cu, arg1 + 0x10u);
    wr32(sp0 - 0x2730u, sp0 - 0x2710u);
    g->esp = sp0 - 0x2710u;
    t20 = cow_call_regs(g, COW_IMG(0x100fdbf0u), arg1 + 0x10u, sp0 - 0x2710u, g->edx, 1, 8, sp0 - 0x2710u, arg1 + 0x10u, t19, t18, t17, t16, rd32(sp0 - 0x2718u), rd32(sp0 - 0x2714u));
    t21 = g->ecx;
    eax = t20;
    ecx = t21;
    COW_AT(100fab0a)
    if (rd8(arg1 + 0xcu) == 1u) goto L_100fab58;
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + 0xcu);
    COW_AT(100fab15)
    if ((uint8_t)ecx == 2u) goto L_100fab58;
    COW_AT(100fab1a)
    t22 = rd32(arg1 + 0x4164u);
    wr32(sp0 - 0x2700u, t22);
    t23 = rd32(arg1 + 0x4168u);
    wr32(sp0 - 0x26fcu, t23);
    t24 = rd32(COW_IMG(0x104dfd94u)) + 0x43634u;
    wr32(sp0 - 0x271cu, t24);
    wr32(sp0 - 0x2720u, eax);
    wr32(sp0 - 0x2724u, sp0 - 0x2710u);
    wr32(sp0 - 0x2728u, arg1 + 0x30c0u);
    wr32(sp0 - 0x272cu, 0x550u);
    wr8(sp0 - 0x2704u, 1u);
    wr32(sp0 - 0x2730u, edi + 4u);
    ecx = arg1 + 0x30c0u;
    edx = edi + 4u;
    loc_2730 = edi + 4u;
    loc_2700 = t22;
    loc_26fc = t23;
    loc_271c = t24;
    loc_2720 = eax;
    eax = sp0 - 0x2710u;
    loc_2728 = arg1 + 0x30c0u;
L_100fab7b: ;
    COW_AT(100fab7b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x262cu;
    t26 = cow_bridge_indirect(g, COW_IMG(0x100dd590u), 0u, 65u, (const uint32_t[]){loc_2730, 0x550u, loc_2728, sp0 - 0x2710u, loc_2720, loc_271c, rd32(sp0 - 0x2718u), rd32(sp0 - 0x2714u), rd32(sp0 - 0x2710u), rd32(sp0 - 0x270cu), rd32(sp0 - 0x2708u), rd32(sp0 - 0x2704u), loc_2700, loc_26fc, rd32(sp0 - 0x26f8u), rd32(sp0 - 0x26f4u), rd32(sp0 - 0x26f0u), rd32(sp0 - 0x26ecu), rd32(sp0 - 0x26e8u), rd32(sp0 - 0x26e4u), rd32(sp0 - 0x26e0u), rd32(sp0 - 0x26dcu), rd32(sp0 - 0x26d8u), rd32(sp0 - 0x26d4u), rd32(sp0 - 0x26d0u), rd32(sp0 - 0x26ccu), rd32(sp0 - 0x26c8u), rd32(sp0 - 0x26c4u), rd32(sp0 - 0x26c0u), rd32(sp0 - 0x26bcu), rd32(sp0 - 0x26b8u), rd32(sp0 - 0x26b4u), rd32(sp0 - 0x26b0u), rd32(sp0 - 0x26acu), rd32(sp0 - 0x26a8u), rd32(sp0 - 0x26a4u), rd32(sp0 - 0x26a0u), rd32(sp0 - 0x269cu), rd32(sp0 - 0x2698u), rd32(sp0 - 0x2694u), rd32(sp0 - 0x2690u), rd32(sp0 - 0x268cu), rd32(sp0 - 0x2688u), rd32(sp0 - 0x2684u), rd32(sp0 - 0x2680u), rd32(sp0 - 0x267cu), rd32(sp0 - 0x2678u), rd32(sp0 - 0x2674u), rd32(sp0 - 0x2670u), rd32(sp0 - 0x266cu), rd32(sp0 - 0x2668u), rd32(sp0 - 0x2664u), rd32(sp0 - 0x2660u), rd32(sp0 - 0x265cu), rd32(sp0 - 0x2658u), rd32(sp0 - 0x2654u), rd32(sp0 - 0x2650u), rd32(sp0 - 0x264cu), rd32(sp0 - 0x2648u), rd32(sp0 - 0x2644u), rd32(sp0 - 0x2640u), rd32(sp0 - 0x263cu), rd32(sp0 - 0x2638u), rd32(sp0 - 0x2634u), rd32(sp0 - 0x2630u)}, g->ecx, g->edx, g->eax, 260u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(100fab80)
    wr32(edi, eax);
    if ((int32_t)eax <= 0) goto L_100fac94;
    COW_AT(100fab8d)
    wr32(sp0 - 0x271cu, eax);
    wr32(sp0 - 0x2720u, arg1 + 0x4638u);
    g->esp = sp0 - 0x2718u;
    cow_cdecl(g, COW_IMG(0x100fcac0u), 2, arg1 + 0x4638u, eax);
    COW_AT(100fab9a)
    t28 = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x9cu) + 1u;
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x9cu, t28);
    t29 = rd32(edi) + rd32(rd32(COW_IMG(0x104e0af0u)) + 0x194u);
    t30 = rd32(edi);
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x194u, t29);
    wr32(sp0 - 0x2724u, rd32(arg1));
    g->edx = t30;
    g->esp = sp0 - 0x2720u;
    cow_cdecl(g, COW_IMG(0x100dc6e0u), 1, rd32(arg1));
    t31 = g->edx;
    edx = t31;
    COW_AT(100fabc9)
    wr16(arg1 + 6u, (uint16_t)(rd16(arg1 + 6u) + 1u));
    if (rd16(arg1 + 6u) == 0u)
    {
    COW_AT(100fabd7)
        wr16(arg1 + 6u, 1u);
    }
    COW_AT(100fabdd)
    t32 = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x94u) + 1u;
    t33 = rd32(COW_IMG(0x104e0af0u));
    wr32(t33 + 0x94u, t32);
    if (rd8(arg1 + 0x4160u) != rd8(arg1 + 0x4161u))
    {
        eax = t33;
        ecx = (t32 & 0xffffff00u) | rd8(arg1 + 0x4160u);
        goto L_100fac39;
    }
    eax = t33;
    ecx = (t32 & 0xffffff00u) | rd8(arg1 + 0x4160u);
    COW_AT(100fabfd)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x2718u;
    t34 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t35 = g->ecx;
    eax = t34;
    ecx = t35;
    COW_AT(100fac02)
    wr32(sp0 - 0x271cu, arg1 + 0x2020u);
    g->eax = eax;
    g->esp = sp0 - 0x2718u;
    t36 = cow_cdecl(g, COW_IMG(0x100dd570u), 1, arg1 + 0x2020u);
    edi = eax;
    eax = t36;
    COW_AT(100fac10)
    t37 = rd8(arg1 + 0x4160u);
    wr32(arg1 + 0x41a0u, edi);
    wr8(arg1 + 0x4160u, (uint8_t)(t37 + 1u));
    wr16(arg1 + 0x4196u, 0u);
    g->esi = rd32(sp0 - 0x2714u);
    g->edi = rd32(sp0 - 0x2718u);
    return;
L_100faa59: ;
    COW_AT(100faa59)
    t2 = rd32(arg1 + 0x417cu) + 0x32u;
    wr32(arg1 + 0x417cu, t2);
    if (rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu) + 0xbb8u >= t2)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu) + 0xbb8u;
        ecx = t2;
        edx = rd32(COW_IMG(0x104dfd94u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd94u)) + 0x44bacu) + 0xbb8u;
        ecx = t2;
        edx = rd32(COW_IMG(0x104dfd94u));
    COW_AT(100faa7f)
        wr32(arg1 + 0x417cu, eax);
    }
    goto L_100faa85;
L_100fab58: ;
    COW_AT(100fab58)
    t25 = rd32(COW_IMG(0x104dfd94u));
    wr8(sp0 - 0x2704u, 0u);
    wr32(sp0 - 0x271cu, t25 + 0x43634u);
    wr32(sp0 - 0x2720u, eax);
    wr32(sp0 - 0x2724u, sp0 - 0x2710u);
    wr32(sp0 - 0x2728u, 0u);
    wr32(sp0 - 0x272cu, 0x550u);
    wr32(sp0 - 0x2730u, edi + 4u);
    ecx = t25 + 0x43634u;
    edx = sp0 - 0x2710u;
    loc_2730 = edi + 4u;
    loc_2700 = rd32(sp0 - 0x2700u);
    loc_26fc = rd32(sp0 - 0x26fcu);
    loc_271c = t25 + 0x43634u;
    loc_2720 = eax;
    eax = edi + 4u;
    loc_2728 = 0u;
    goto L_100fab7b;
L_100fac39: ;
    COW_AT(100fac39)
    g->eax = eax;
    g->esp = sp0 - 0x2718u;
    t38 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    eax = t38;
    COW_AT(100fac3e)
    if (rd16(arg1 + 0x4196u) < 5u)
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x4196u);
    }
    else
    {
        edi = (edi & 0xffff0000u) | rd16(arg1 + 0x4196u);
    COW_AT(100fac4b)
        if (eax > rd32(arg1 + 0x41a0u))
        {
            ecx = rd32(arg1 + 0x41a0u);
    COW_AT(100fac55)
            t39 = eax + rd32(arg1 + 0x419cu) - ecx;
            wr32(arg1 + 0x419cu, t39);
            if (rd16(arg1 + 0x4198u) != 0u)
            {
                ecx = (t39 & 0xffff0000u) | rd16(arg1 + 0x4198u);
                edx = t39;
    COW_AT(100fac75)
                if (edx > (uint16_t)ecx)
                {
    COW_AT(100fac7f)
                    wr8(arg1 + 0x4194u, 1u);
                }
            }
        }
    }
    COW_AT(100fac86)
    wr32(arg1 + 0x41a0u, eax);
    wr16(arg1 + 0x4196u, (uint16_t)(edi + 1u));
L_100fac94: ;
    COW_AT(100fac94)
    g->esi = rd32(sp0 - 0x2714u);
    g->edi = rd32(sp0 - 0x2718u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fa9f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fa9fau:
    {
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x2710u;
        g->eax = 0x2710u;
        (void)sp0;
        return 1;
    }
    case 0x100faa09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa23u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa51u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x2718u);
        in_esi = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa8eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa95u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_271c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_271c = rd32(sp0 - 0x271cu);
        g->esp = sp0 - 0x271cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faa98u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_271c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_271c = rd32(sp0 - 0x271cu);
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faaa0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x271cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faaadu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100faab2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fab0au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2730u;
        g->esi = arg1;
        wr32(sp0 - 0x2730u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab15u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        wr32(sp0 - 0x2730u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab1au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        wr32(sp0 - 0x2730u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab58u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        wr32(sp0 - 0x2730u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab7bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_26fc;
        uint32_t loc_2700;
        uint32_t loc_271c;
        uint32_t loc_2720;
        uint32_t loc_2728;
        uint32_t loc_2730;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_2730 = rd32(sp0 - 0x2730u);
        loc_2728 = rd32(sp0 - 0x2728u);
        loc_2720 = rd32(sp0 - 0x2720u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2700 = rd32(sp0 - 0x2700u);
        loc_26fc = rd32(sp0 - 0x26fcu);
        g->esp = sp0 - 0x2730u;
        g->esi = arg1;
        wr32(sp0 - 0x272cu, 0x550u);
        wr32(sp0 - 0x2724u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2730u;
        g->esi = arg1;
        wr32(sp0 - 0x2724u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        wr32(sp0 - 0x2724u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fab9au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2720u;
        g->esi = arg1;
        wr32(sp0 - 0x2724u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fabc9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2724u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fabd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fabddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fabfdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x271cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac39u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac4bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fac94u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x2718u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa9f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100fa9f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
