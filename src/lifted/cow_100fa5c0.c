/* f_0x100fa5c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100fa5c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2714;
    uint32_t loc_2718;
    uint32_t loc_271c;
    uint32_t loc_2734;
    uint32_t sf;
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
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 10056u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100fa5e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x272cu); in_esi = rd32(sp0 - 0x2728u); in_ebp = rd32(sp0 - 0x2724u); in_ebx = rd32(sp0 - 0x2720u); g->ebp = rd32(sp0 - 0x2724u); g->ebx = rd32(sp0 - 0x2720u); g->edi = rd32(sp0 - 0x272cu); g->esi = rd32(sp0 - 0x2728u); goto E_100fa5e6;
    case 0x100fa5f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; in_edi = rd32(sp0 - 0x272cu); in_esi = rd32(sp0 - 0x2728u); in_ebp = rd32(sp0 - 0x2724u); in_ebx = rd32(sp0 - 0x2720u); g->ebp = rd32(sp0 - 0x2724u); g->ebx = rd32(sp0 - 0x2720u); g->edi = rd32(sp0 - 0x272cu); g->esi = rd32(sp0 - 0x2728u); goto E_100fa5f3;
    case 0x100fa611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa611;
    case 0x100fa620u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa620;
    case 0x100fa653u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa653;
    case 0x100fa660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa660;
    case 0x100fa662u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa662;
    case 0x100fa670u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa670;
    case 0x100fa6bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa6bf;
    case 0x100fa6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa6e1;
    case 0x100fa6f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); goto E_100fa6f9;
    case 0x100fa70du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); goto E_100fa70d;
    case 0x100fa716u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa716;
    case 0x100fa737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); goto E_100fa737;
    case 0x100fa74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa74f;
    case 0x100fa76bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa76b;
    case 0x100fa781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa781;
    case 0x100fa78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa78f;
    case 0x100fa7b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7b4;
    case 0x100fa7c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7c4;
    case 0x100fa7ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa7ce;
    case 0x100fa7d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7d8;
    case 0x100fa7e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7e2;
    case 0x100fa7ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7ec;
    case 0x100fa7f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa7f6;
    case 0x100fa812u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa812;
    case 0x100fa81eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa81e;
    case 0x100fa829u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa829;
    case 0x100fa82du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa82d;
    case 0x100fa836u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa836;
    case 0x100fa83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa83c;
    case 0x100fa83fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa83f;
    case 0x100fa84du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); goto E_100fa84d;
    case 0x100fa84fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa84f;
    case 0x100fa861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; loc_2734 = rd32(sp0 - 0x2734u); loc_271c = rd32(sp0 - 0x271cu); loc_2718 = rd32(sp0 - 0x2718u); loc_2714 = rd32(sp0 - 0x2714u); goto E_100fa861;
    case 0x100fa8a5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8a5;
    case 0x100fa8b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8b8;
    case 0x100fa8d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8d8;
    case 0x100fa8e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8e2;
    case 0x100fa8f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8f0;
    case 0x100fa8fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa8fa;
    case 0x100fa904u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa904;
    case 0x100fa917u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa917;
    case 0x100fa91eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; sf = g->sf; goto E_100fa91e;
    default: break;
    }
#endif

    COW_AT(100fa5c0)
    wr32(sp0 - 0x2720u, in_ebx);
    wr32(sp0 - 0x2724u, in_ebp);
    wr32(sp0 - 0x2728u, in_esi);
    wr32(sp0 - 0x272cu, in_edi);
    wr32(sp0 - 0x2730u, rd32(arg1));
    g->eax = rd32(arg1);
    g->edx = in_edx;
    t1 = rd32(arg1);
    g->esp = sp0 - 0x272cu;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x100dc670u), self, 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        edi = t2;
        goto L_100fa5f3;
    }
    eax = t2;
    COW_AT(100fa5e6)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_100fa5f3: ;
    COW_AT(100fa5f3)
    wr32(sp0 - 0x2730u, 3u);
    g->esp = sp0 - 0x272cu;
    t5 = cow_call_regs(g, COW_IMG(0x100fa940u), eax, g->ecx, g->edx, 1, 1, 3u);
    if (rd32(edi + 0x558u) == rd32(rd32(COW_IMG(0x104dfd98u)) + 0x416cu)) goto L_100fa620;
    eax = t5;
    ecx = rd32(edi + 0x558u);
    edx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(100fa611)
    wr32(sp0 - 0x2730u, 1u);
    g->esp = sp0 - 0x272cu;
    t6 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 1u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_100fa8b8: ;
    COW_AT(100fa8b8)
    wr32(sp0 - 0x2730u, rd32(arg1));
    g->ecx = rd32(arg1);
    g->edx = edx;
    t84 = rd32(arg1);
    g->esp = sp0 - 0x2730u;
    t85 = cow_call_regs(g, COW_IMG(0x100dc6c0u), eax, g->ecx, g->edx, 1, 0);
    t86 = g->ecx;
    t87 = g->edx;
    g->esp = sp0 - 0x272cu;
    t88 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t89 = rd16(arg1 + 0x4196u);
    wr32(arg1 + 0x4188u, t88);
    if ((uint16_t)t89 >= 5u)
    {
        eax = t88;
    }
    else
    {
        eax = t88;
    COW_AT(100fa8d8)
        if (eax > rd32(arg1 + 0x41a4u))
        {
            edx = rd32(arg1 + 0x41a4u);
    COW_AT(100fa8e2)
            if (rd32(arg1 + 0x419cu) <= eax - edx)
            {
    COW_AT(100fa8fa)
                wr32(arg1 + 0x419cu, 0u);
            }
            else
            {
                ecx = eax - edx;
                edx = rd32(arg1 + 0x419cu);
    COW_AT(100fa8f0)
                wr32(arg1 + 0x419cu, edx - ecx);
            }
    COW_AT(100fa904)
            if (rd32(arg1 + 0x419cu) <= rd16(arg1 + 0x419au))
            {
    COW_AT(100fa917)
                wr8(arg1 + 0x4194u, 0u);
            }
        }
    }
    COW_AT(100fa91e)
    wr16(arg1 + 0x4196u, 0u);
    wr32(arg1 + 0x41a4u, eax);
    g->ebx = rd32(sp0 - 0x2720u);
    g->esi = rd32(sp0 - 0x2728u);
    g->edi = rd32(sp0 - 0x272cu);
    g->ebp = rd32(sp0 - 0x2724u);
    return (eax & 0xffffff00u) | 1u;
L_100fa620: ;
    COW_AT(100fa620)
    wr32(sp0 - 0x2730u, rd32(edi));
    wr32(sp0 - 0x2734u, edi + 4u);
    t8 = rd32(COW_IMG(0x104dfd94u)) + 0x40e44u;
    wr32(sp0 - 0x2738u, t8);
    wr32(sp0 - 0x273cu, arg1 + 0x2020u);
    wr32(sp0 - 0x2740u, 0x2710u);
    wr32(sp0 - 0x2744u, sp0 - 0x2710u);
    g->eax = arg1 + 0x2020u;
    g->ecx = sp0 - 0x2710u;
    g->edx = t8;
    g->esp = sp0 - 0x1bbcu;
    t9 = cow_bridge_indirect(g, COW_IMG(0x100dd6c0u), 0u, 738u, (const uint32_t[]){sp0 - 0x2710u, 0x2710u, arg1 + 0x2020u, t8, edi + 4u, rd32(edi), rd32(sp0 - 0x272cu), rd32(sp0 - 0x2728u), rd32(sp0 - 0x2724u), rd32(sp0 - 0x2720u), rd32(sp0 - 0x271cu), rd32(sp0 - 0x2718u), rd32(sp0 - 0x2714u), rd32(sp0 - 0x2710u), rd32(sp0 - 0x270cu), rd32(sp0 - 0x2708u), rd32(sp0 - 0x2704u), rd32(sp0 - 0x2700u), rd32(sp0 - 0x26fcu), rd32(sp0 - 0x26f8u), rd32(sp0 - 0x26f4u), rd32(sp0 - 0x26f0u), rd32(sp0 - 0x26ecu), rd32(sp0 - 0x26e8u), rd32(sp0 - 0x26e4u), rd32(sp0 - 0x26e0u), rd32(sp0 - 0x26dcu), rd32(sp0 - 0x26d8u), rd32(sp0 - 0x26d4u), rd32(sp0 - 0x26d0u), rd32(sp0 - 0x26ccu), rd32(sp0 - 0x26c8u), rd32(sp0 - 0x26c4u), rd32(sp0 - 0x26c0u), rd32(sp0 - 0x26bcu), rd32(sp0 - 0x26b8u), rd32(sp0 - 0x26b4u), rd32(sp0 - 0x26b0u), rd32(sp0 - 0x26acu), rd32(sp0 - 0x26a8u), rd32(sp0 - 0x26a4u), rd32(sp0 - 0x26a0u), rd32(sp0 - 0x269cu), rd32(sp0 - 0x2698u), rd32(sp0 - 0x2694u), rd32(sp0 - 0x2690u), rd32(sp0 - 0x268cu), rd32(sp0 - 0x2688u), rd32(sp0 - 0x2684u), rd32(sp0 - 0x2680u), rd32(sp0 - 0x267cu), rd32(sp0 - 0x2678u), rd32(sp0 - 0x2674u), rd32(sp0 - 0x2670u), rd32(sp0 - 0x266cu), rd32(sp0 - 0x2668u), rd32(sp0 - 0x2664u), rd32(sp0 - 0x2660u), rd32(sp0 - 0x265cu), rd32(sp0 - 0x2658u), rd32(sp0 - 0x2654u), rd32(sp0 - 0x2650u), rd32(sp0 - 0x264cu), rd32(sp0 - 0x2648u), rd32(sp0 - 0x2644u), rd32(sp0 - 0x2640u), rd32(sp0 - 0x263cu), rd32(sp0 - 0x2638u), rd32(sp0 - 0x2634u), rd32(sp0 - 0x2630u), rd32(sp0 - 0x262cu), rd32(sp0 - 0x2628u), rd32(sp0 - 0x2624u), rd32(sp0 - 0x2620u), rd32(sp0 - 0x261cu), rd32(sp0 - 0x2618u), rd32(sp0 - 0x2614u), rd32(sp0 - 0x2610u), rd32(sp0 - 0x260cu), rd32(sp0 - 0x2608u), rd32(sp0 - 0x2604u), rd32(sp0 - 0x2600u), rd32(sp0 - 0x25fcu), rd32(sp0 - 0x25f8u), rd32(sp0 - 0x25f4u), rd32(sp0 - 0x25f0u), rd32(sp0 - 0x25ecu), rd32(sp0 - 0x25e8u), rd32(sp0 - 0x25e4u), rd32(sp0 - 0x25e0u), rd32(sp0 - 0x25dcu), rd32(sp0 - 0x25d8u), rd32(sp0 - 0x25d4u), rd32(sp0 - 0x25d0u), rd32(sp0 - 0x25ccu), rd32(sp0 - 0x25c8u), rd32(sp0 - 0x25c4u), rd32(sp0 - 0x25c0u), rd32(sp0 - 0x25bcu), rd32(sp0 - 0x25b8u), rd32(sp0 - 0x25b4u), rd32(sp0 - 0x25b0u), rd32(sp0 - 0x25acu), rd32(sp0 - 0x25a8u), rd32(sp0 - 0x25a4u), rd32(sp0 - 0x25a0u), rd32(sp0 - 0x259cu), rd32(sp0 - 0x2598u), rd32(sp0 - 0x2594u), rd32(sp0 - 0x2590u), rd32(sp0 - 0x258cu), rd32(sp0 - 0x2588u), rd32(sp0 - 0x2584u), rd32(sp0 - 0x2580u), rd32(sp0 - 0x257cu), rd32(sp0 - 0x2578u), rd32(sp0 - 0x2574u), rd32(sp0 - 0x2570u), rd32(sp0 - 0x256cu), rd32(sp0 - 0x2568u), rd32(sp0 - 0x2564u), rd32(sp0 - 0x2560u), rd32(sp0 - 0x255cu), rd32(sp0 - 0x2558u), rd32(sp0 - 0x2554u), rd32(sp0 - 0x2550u), rd32(sp0 - 0x254cu), rd32(sp0 - 0x2548u), rd32(sp0 - 0x2544u), rd32(sp0 - 0x2540u), rd32(sp0 - 0x253cu), rd32(sp0 - 0x2538u), rd32(sp0 - 0x2534u), rd32(sp0 - 0x2530u), rd32(sp0 - 0x252cu), rd32(sp0 - 0x2528u), rd32(sp0 - 0x2524u), rd32(sp0 - 0x2520u), rd32(sp0 - 0x251cu), rd32(sp0 - 0x2518u), rd32(sp0 - 0x2514u), rd32(sp0 - 0x2510u), rd32(sp0 - 0x250cu), rd32(sp0 - 0x2508u), rd32(sp0 - 0x2504u), rd32(sp0 - 0x2500u), rd32(sp0 - 0x24fcu), rd32(sp0 - 0x24f8u), rd32(sp0 - 0x24f4u), rd32(sp0 - 0x24f0u), rd32(sp0 - 0x24ecu), rd32(sp0 - 0x24e8u), rd32(sp0 - 0x24e4u), rd32(sp0 - 0x24e0u), rd32(sp0 - 0x24dcu), rd32(sp0 - 0x24d8u), rd32(sp0 - 0x24d4u), rd32(sp0 - 0x24d0u), rd32(sp0 - 0x24ccu), rd32(sp0 - 0x24c8u), rd32(sp0 - 0x24c4u), rd32(sp0 - 0x24c0u), rd32(sp0 - 0x24bcu), rd32(sp0 - 0x24b8u), rd32(sp0 - 0x24b4u), rd32(sp0 - 0x24b0u), rd32(sp0 - 0x24acu), rd32(sp0 - 0x24a8u), rd32(sp0 - 0x24a4u), rd32(sp0 - 0x24a0u), rd32(sp0 - 0x249cu), rd32(sp0 - 0x2498u), rd32(sp0 - 0x2494u), rd32(sp0 - 0x2490u), rd32(sp0 - 0x248cu), rd32(sp0 - 0x2488u), rd32(sp0 - 0x2484u), rd32(sp0 - 0x2480u), rd32(sp0 - 0x247cu), rd32(sp0 - 0x2478u), rd32(sp0 - 0x2474u), rd32(sp0 - 0x2470u), rd32(sp0 - 0x246cu), rd32(sp0 - 0x2468u), rd32(sp0 - 0x2464u), rd32(sp0 - 0x2460u), rd32(sp0 - 0x245cu), rd32(sp0 - 0x2458u), rd32(sp0 - 0x2454u), rd32(sp0 - 0x2450u), rd32(sp0 - 0x244cu), rd32(sp0 - 0x2448u), rd32(sp0 - 0x2444u), rd32(sp0 - 0x2440u), rd32(sp0 - 0x243cu), rd32(sp0 - 0x2438u), rd32(sp0 - 0x2434u), rd32(sp0 - 0x2430u), rd32(sp0 - 0x242cu), rd32(sp0 - 0x2428u), rd32(sp0 - 0x2424u), rd32(sp0 - 0x2420u), rd32(sp0 - 0x241cu), rd32(sp0 - 0x2418u), rd32(sp0 - 0x2414u), rd32(sp0 - 0x2410u), rd32(sp0 - 0x240cu), rd32(sp0 - 0x2408u), rd32(sp0 - 0x2404u), rd32(sp0 - 0x2400u), rd32(sp0 - 0x23fcu), rd32(sp0 - 0x23f8u), rd32(sp0 - 0x23f4u), rd32(sp0 - 0x23f0u), rd32(sp0 - 0x23ecu), rd32(sp0 - 0x23e8u), rd32(sp0 - 0x23e4u), rd32(sp0 - 0x23e0u), rd32(sp0 - 0x23dcu), rd32(sp0 - 0x23d8u), rd32(sp0 - 0x23d4u), rd32(sp0 - 0x23d0u), rd32(sp0 - 0x23ccu), rd32(sp0 - 0x23c8u), rd32(sp0 - 0x23c4u), rd32(sp0 - 0x23c0u), rd32(sp0 - 0x23bcu), rd32(sp0 - 0x23b8u), rd32(sp0 - 0x23b4u), rd32(sp0 - 0x23b0u), rd32(sp0 - 0x23acu), rd32(sp0 - 0x23a8u), rd32(sp0 - 0x23a4u), rd32(sp0 - 0x23a0u), rd32(sp0 - 0x239cu), rd32(sp0 - 0x2398u), rd32(sp0 - 0x2394u), rd32(sp0 - 0x2390u), rd32(sp0 - 0x238cu), rd32(sp0 - 0x2388u), rd32(sp0 - 0x2384u), rd32(sp0 - 0x2380u), rd32(sp0 - 0x237cu), rd32(sp0 - 0x2378u), rd32(sp0 - 0x2374u), rd32(sp0 - 0x2370u), rd32(sp0 - 0x236cu), rd32(sp0 - 0x2368u), rd32(sp0 - 0x2364u), rd32(sp0 - 0x2360u), rd32(sp0 - 0x235cu), rd32(sp0 - 0x2358u), rd32(sp0 - 0x2354u), rd32(sp0 - 0x2350u), rd32(sp0 - 0x234cu), rd32(sp0 - 0x2348u), rd32(sp0 - 0x2344u), rd32(sp0 - 0x2340u), rd32(sp0 - 0x233cu), rd32(sp0 - 0x2338u), rd32(sp0 - 0x2334u), rd32(sp0 - 0x2330u), rd32(sp0 - 0x232cu), rd32(sp0 - 0x2328u), rd32(sp0 - 0x2324u), rd32(sp0 - 0x2320u), rd32(sp0 - 0x231cu), rd32(sp0 - 0x2318u), rd32(sp0 - 0x2314u), rd32(sp0 - 0x2310u), rd32(sp0 - 0x230cu), rd32(sp0 - 0x2308u), rd32(sp0 - 0x2304u), rd32(sp0 - 0x2300u), rd32(sp0 - 0x22fcu), rd32(sp0 - 0x22f8u), rd32(sp0 - 0x22f4u), rd32(sp0 - 0x22f0u), rd32(sp0 - 0x22ecu), rd32(sp0 - 0x22e8u), rd32(sp0 - 0x22e4u), rd32(sp0 - 0x22e0u), rd32(sp0 - 0x22dcu), rd32(sp0 - 0x22d8u), rd32(sp0 - 0x22d4u), rd32(sp0 - 0x22d0u), rd32(sp0 - 0x22ccu), rd32(sp0 - 0x22c8u), rd32(sp0 - 0x22c4u), rd32(sp0 - 0x22c0u), rd32(sp0 - 0x22bcu), rd32(sp0 - 0x22b8u), rd32(sp0 - 0x22b4u), rd32(sp0 - 0x22b0u), rd32(sp0 - 0x22acu), rd32(sp0 - 0x22a8u), rd32(sp0 - 0x22a4u), rd32(sp0 - 0x22a0u), rd32(sp0 - 0x229cu), rd32(sp0 - 0x2298u), rd32(sp0 - 0x2294u), rd32(sp0 - 0x2290u), rd32(sp0 - 0x228cu), rd32(sp0 - 0x2288u), rd32(sp0 - 0x2284u), rd32(sp0 - 0x2280u), rd32(sp0 - 0x227cu), rd32(sp0 - 0x2278u), rd32(sp0 - 0x2274u), rd32(sp0 - 0x2270u), rd32(sp0 - 0x226cu), rd32(sp0 - 0x2268u), rd32(sp0 - 0x2264u), rd32(sp0 - 0x2260u), rd32(sp0 - 0x225cu), rd32(sp0 - 0x2258u), rd32(sp0 - 0x2254u), rd32(sp0 - 0x2250u), rd32(sp0 - 0x224cu), rd32(sp0 - 0x2248u), rd32(sp0 - 0x2244u), rd32(sp0 - 0x2240u), rd32(sp0 - 0x223cu), rd32(sp0 - 0x2238u), rd32(sp0 - 0x2234u), rd32(sp0 - 0x2230u), rd32(sp0 - 0x222cu), rd32(sp0 - 0x2228u), rd32(sp0 - 0x2224u), rd32(sp0 - 0x2220u), rd32(sp0 - 0x221cu), rd32(sp0 - 0x2218u), rd32(sp0 - 0x2214u), rd32(sp0 - 0x2210u), rd32(sp0 - 0x220cu), rd32(sp0 - 0x2208u), rd32(sp0 - 0x2204u), rd32(sp0 - 0x2200u), rd32(sp0 - 0x21fcu), rd32(sp0 - 0x21f8u), rd32(sp0 - 0x21f4u), rd32(sp0 - 0x21f0u), rd32(sp0 - 0x21ecu), rd32(sp0 - 0x21e8u), rd32(sp0 - 0x21e4u), rd32(sp0 - 0x21e0u), rd32(sp0 - 0x21dcu), rd32(sp0 - 0x21d8u), rd32(sp0 - 0x21d4u), rd32(sp0 - 0x21d0u), rd32(sp0 - 0x21ccu), rd32(sp0 - 0x21c8u), rd32(sp0 - 0x21c4u), rd32(sp0 - 0x21c0u), rd32(sp0 - 0x21bcu), rd32(sp0 - 0x21b8u), rd32(sp0 - 0x21b4u), rd32(sp0 - 0x21b0u), rd32(sp0 - 0x21acu), rd32(sp0 - 0x21a8u), rd32(sp0 - 0x21a4u), rd32(sp0 - 0x21a0u), rd32(sp0 - 0x219cu), rd32(sp0 - 0x2198u), rd32(sp0 - 0x2194u), rd32(sp0 - 0x2190u), rd32(sp0 - 0x218cu), rd32(sp0 - 0x2188u), rd32(sp0 - 0x2184u), rd32(sp0 - 0x2180u), rd32(sp0 - 0x217cu), rd32(sp0 - 0x2178u), rd32(sp0 - 0x2174u), rd32(sp0 - 0x2170u), rd32(sp0 - 0x216cu), rd32(sp0 - 0x2168u), rd32(sp0 - 0x2164u), rd32(sp0 - 0x2160u), rd32(sp0 - 0x215cu), rd32(sp0 - 0x2158u), rd32(sp0 - 0x2154u), rd32(sp0 - 0x2150u), rd32(sp0 - 0x214cu), rd32(sp0 - 0x2148u), rd32(sp0 - 0x2144u), rd32(sp0 - 0x2140u), rd32(sp0 - 0x213cu), rd32(sp0 - 0x2138u), rd32(sp0 - 0x2134u), rd32(sp0 - 0x2130u), rd32(sp0 - 0x212cu), rd32(sp0 - 0x2128u), rd32(sp0 - 0x2124u), rd32(sp0 - 0x2120u), rd32(sp0 - 0x211cu), rd32(sp0 - 0x2118u), rd32(sp0 - 0x2114u), rd32(sp0 - 0x2110u), rd32(sp0 - 0x210cu), rd32(sp0 - 0x2108u), rd32(sp0 - 0x2104u), rd32(sp0 - 0x2100u), rd32(sp0 - 0x20fcu), rd32(sp0 - 0x20f8u), rd32(sp0 - 0x20f4u), rd32(sp0 - 0x20f0u), rd32(sp0 - 0x20ecu), rd32(sp0 - 0x20e8u), rd32(sp0 - 0x20e4u), rd32(sp0 - 0x20e0u), rd32(sp0 - 0x20dcu), rd32(sp0 - 0x20d8u), rd32(sp0 - 0x20d4u), rd32(sp0 - 0x20d0u), rd32(sp0 - 0x20ccu), rd32(sp0 - 0x20c8u), rd32(sp0 - 0x20c4u), rd32(sp0 - 0x20c0u), rd32(sp0 - 0x20bcu), rd32(sp0 - 0x20b8u), rd32(sp0 - 0x20b4u), rd32(sp0 - 0x20b0u), rd32(sp0 - 0x20acu), rd32(sp0 - 0x20a8u), rd32(sp0 - 0x20a4u), rd32(sp0 - 0x20a0u), rd32(sp0 - 0x209cu), rd32(sp0 - 0x2098u), rd32(sp0 - 0x2094u), rd32(sp0 - 0x2090u), rd32(sp0 - 0x208cu), rd32(sp0 - 0x2088u), rd32(sp0 - 0x2084u), rd32(sp0 - 0x2080u), rd32(sp0 - 0x207cu), rd32(sp0 - 0x2078u), rd32(sp0 - 0x2074u), rd32(sp0 - 0x2070u), rd32(sp0 - 0x206cu), rd32(sp0 - 0x2068u), rd32(sp0 - 0x2064u), rd32(sp0 - 0x2060u), rd32(sp0 - 0x205cu), rd32(sp0 - 0x2058u), rd32(sp0 - 0x2054u), rd32(sp0 - 0x2050u), rd32(sp0 - 0x204cu), rd32(sp0 - 0x2048u), rd32(sp0 - 0x2044u), rd32(sp0 - 0x2040u), rd32(sp0 - 0x203cu), rd32(sp0 - 0x2038u), rd32(sp0 - 0x2034u), rd32(sp0 - 0x2030u), rd32(sp0 - 0x202cu), rd32(sp0 - 0x2028u), rd32(sp0 - 0x2024u), rd32(sp0 - 0x2020u), rd32(sp0 - 0x201cu), rd32(sp0 - 0x2018u), rd32(sp0 - 0x2014u), rd32(sp0 - 0x2010u), rd32(sp0 - 0x200cu), rd32(sp0 - 0x2008u), rd32(sp0 - 0x2004u), rd32(sp0 - 0x2000u), rd32(sp0 - 0x1ffcu), rd32(sp0 - 0x1ff8u), rd32(sp0 - 0x1ff4u), rd32(sp0 - 0x1ff0u), rd32(sp0 - 0x1fecu), rd32(sp0 - 0x1fe8u), rd32(sp0 - 0x1fe4u), rd32(sp0 - 0x1fe0u), rd32(sp0 - 0x1fdcu), rd32(sp0 - 0x1fd8u), rd32(sp0 - 0x1fd4u), rd32(sp0 - 0x1fd0u), rd32(sp0 - 0x1fccu), rd32(sp0 - 0x1fc8u), rd32(sp0 - 0x1fc4u), rd32(sp0 - 0x1fc0u), rd32(sp0 - 0x1fbcu), rd32(sp0 - 0x1fb8u), rd32(sp0 - 0x1fb4u), rd32(sp0 - 0x1fb0u), rd32(sp0 - 0x1facu), rd32(sp0 - 0x1fa8u), rd32(sp0 - 0x1fa4u), rd32(sp0 - 0x1fa0u), rd32(sp0 - 0x1f9cu), rd32(sp0 - 0x1f98u), rd32(sp0 - 0x1f94u), rd32(sp0 - 0x1f90u), rd32(sp0 - 0x1f8cu), rd32(sp0 - 0x1f88u), rd32(sp0 - 0x1f84u), rd32(sp0 - 0x1f80u), rd32(sp0 - 0x1f7cu), rd32(sp0 - 0x1f78u), rd32(sp0 - 0x1f74u), rd32(sp0 - 0x1f70u), rd32(sp0 - 0x1f6cu), rd32(sp0 - 0x1f68u), rd32(sp0 - 0x1f64u), rd32(sp0 - 0x1f60u), rd32(sp0 - 0x1f5cu), rd32(sp0 - 0x1f58u), rd32(sp0 - 0x1f54u), rd32(sp0 - 0x1f50u), rd32(sp0 - 0x1f4cu), rd32(sp0 - 0x1f48u), rd32(sp0 - 0x1f44u), rd32(sp0 - 0x1f40u), rd32(sp0 - 0x1f3cu), rd32(sp0 - 0x1f38u), rd32(sp0 - 0x1f34u), rd32(sp0 - 0x1f30u), rd32(sp0 - 0x1f2cu), rd32(sp0 - 0x1f28u), rd32(sp0 - 0x1f24u), rd32(sp0 - 0x1f20u), rd32(sp0 - 0x1f1cu), rd32(sp0 - 0x1f18u), rd32(sp0 - 0x1f14u), rd32(sp0 - 0x1f10u), rd32(sp0 - 0x1f0cu), rd32(sp0 - 0x1f08u), rd32(sp0 - 0x1f04u), rd32(sp0 - 0x1f00u), rd32(sp0 - 0x1efcu), rd32(sp0 - 0x1ef8u), rd32(sp0 - 0x1ef4u), rd32(sp0 - 0x1ef0u), rd32(sp0 - 0x1eecu), rd32(sp0 - 0x1ee8u), rd32(sp0 - 0x1ee4u), rd32(sp0 - 0x1ee0u), rd32(sp0 - 0x1edcu), rd32(sp0 - 0x1ed8u), rd32(sp0 - 0x1ed4u), rd32(sp0 - 0x1ed0u), rd32(sp0 - 0x1eccu), rd32(sp0 - 0x1ec8u), rd32(sp0 - 0x1ec4u), rd32(sp0 - 0x1ec0u), rd32(sp0 - 0x1ebcu), rd32(sp0 - 0x1eb8u), rd32(sp0 - 0x1eb4u), rd32(sp0 - 0x1eb0u), rd32(sp0 - 0x1eacu), rd32(sp0 - 0x1ea8u), rd32(sp0 - 0x1ea4u), rd32(sp0 - 0x1ea0u), rd32(sp0 - 0x1e9cu), rd32(sp0 - 0x1e98u), rd32(sp0 - 0x1e94u), rd32(sp0 - 0x1e90u), rd32(sp0 - 0x1e8cu), rd32(sp0 - 0x1e88u), rd32(sp0 - 0x1e84u), rd32(sp0 - 0x1e80u), rd32(sp0 - 0x1e7cu), rd32(sp0 - 0x1e78u), rd32(sp0 - 0x1e74u), rd32(sp0 - 0x1e70u), rd32(sp0 - 0x1e6cu), rd32(sp0 - 0x1e68u), rd32(sp0 - 0x1e64u), rd32(sp0 - 0x1e60u), rd32(sp0 - 0x1e5cu), rd32(sp0 - 0x1e58u), rd32(sp0 - 0x1e54u), rd32(sp0 - 0x1e50u), rd32(sp0 - 0x1e4cu), rd32(sp0 - 0x1e48u), rd32(sp0 - 0x1e44u), rd32(sp0 - 0x1e40u), rd32(sp0 - 0x1e3cu), rd32(sp0 - 0x1e38u), rd32(sp0 - 0x1e34u), rd32(sp0 - 0x1e30u), rd32(sp0 - 0x1e2cu), rd32(sp0 - 0x1e28u), rd32(sp0 - 0x1e24u), rd32(sp0 - 0x1e20u), rd32(sp0 - 0x1e1cu), rd32(sp0 - 0x1e18u), rd32(sp0 - 0x1e14u), rd32(sp0 - 0x1e10u), rd32(sp0 - 0x1e0cu), rd32(sp0 - 0x1e08u), rd32(sp0 - 0x1e04u), rd32(sp0 - 0x1e00u), rd32(sp0 - 0x1dfcu), rd32(sp0 - 0x1df8u), rd32(sp0 - 0x1df4u), rd32(sp0 - 0x1df0u), rd32(sp0 - 0x1decu), rd32(sp0 - 0x1de8u), rd32(sp0 - 0x1de4u), rd32(sp0 - 0x1de0u), rd32(sp0 - 0x1ddcu), rd32(sp0 - 0x1dd8u), rd32(sp0 - 0x1dd4u), rd32(sp0 - 0x1dd0u), rd32(sp0 - 0x1dccu), rd32(sp0 - 0x1dc8u), rd32(sp0 - 0x1dc4u), rd32(sp0 - 0x1dc0u), rd32(sp0 - 0x1dbcu), rd32(sp0 - 0x1db8u), rd32(sp0 - 0x1db4u), rd32(sp0 - 0x1db0u), rd32(sp0 - 0x1dacu), rd32(sp0 - 0x1da8u), rd32(sp0 - 0x1da4u), rd32(sp0 - 0x1da0u), rd32(sp0 - 0x1d9cu), rd32(sp0 - 0x1d98u), rd32(sp0 - 0x1d94u), rd32(sp0 - 0x1d90u), rd32(sp0 - 0x1d8cu), rd32(sp0 - 0x1d88u), rd32(sp0 - 0x1d84u), rd32(sp0 - 0x1d80u), rd32(sp0 - 0x1d7cu), rd32(sp0 - 0x1d78u), rd32(sp0 - 0x1d74u), rd32(sp0 - 0x1d70u), rd32(sp0 - 0x1d6cu), rd32(sp0 - 0x1d68u), rd32(sp0 - 0x1d64u), rd32(sp0 - 0x1d60u), rd32(sp0 - 0x1d5cu), rd32(sp0 - 0x1d58u), rd32(sp0 - 0x1d54u), rd32(sp0 - 0x1d50u), rd32(sp0 - 0x1d4cu), rd32(sp0 - 0x1d48u), rd32(sp0 - 0x1d44u), rd32(sp0 - 0x1d40u), rd32(sp0 - 0x1d3cu), rd32(sp0 - 0x1d38u), rd32(sp0 - 0x1d34u), rd32(sp0 - 0x1d30u), rd32(sp0 - 0x1d2cu), rd32(sp0 - 0x1d28u), rd32(sp0 - 0x1d24u), rd32(sp0 - 0x1d20u), rd32(sp0 - 0x1d1cu), rd32(sp0 - 0x1d18u), rd32(sp0 - 0x1d14u), rd32(sp0 - 0x1d10u), rd32(sp0 - 0x1d0cu), rd32(sp0 - 0x1d08u), rd32(sp0 - 0x1d04u), rd32(sp0 - 0x1d00u), rd32(sp0 - 0x1cfcu), rd32(sp0 - 0x1cf8u), rd32(sp0 - 0x1cf4u), rd32(sp0 - 0x1cf0u), rd32(sp0 - 0x1cecu), rd32(sp0 - 0x1ce8u), rd32(sp0 - 0x1ce4u), rd32(sp0 - 0x1ce0u), rd32(sp0 - 0x1cdcu), rd32(sp0 - 0x1cd8u), rd32(sp0 - 0x1cd4u), rd32(sp0 - 0x1cd0u), rd32(sp0 - 0x1cccu), rd32(sp0 - 0x1cc8u), rd32(sp0 - 0x1cc4u), rd32(sp0 - 0x1cc0u), rd32(sp0 - 0x1cbcu), rd32(sp0 - 0x1cb8u), rd32(sp0 - 0x1cb4u), rd32(sp0 - 0x1cb0u), rd32(sp0 - 0x1cacu), rd32(sp0 - 0x1ca8u), rd32(sp0 - 0x1ca4u), rd32(sp0 - 0x1ca0u), rd32(sp0 - 0x1c9cu), rd32(sp0 - 0x1c98u), rd32(sp0 - 0x1c94u), rd32(sp0 - 0x1c90u), rd32(sp0 - 0x1c8cu), rd32(sp0 - 0x1c88u), rd32(sp0 - 0x1c84u), rd32(sp0 - 0x1c80u), rd32(sp0 - 0x1c7cu), rd32(sp0 - 0x1c78u), rd32(sp0 - 0x1c74u), rd32(sp0 - 0x1c70u), rd32(sp0 - 0x1c6cu), rd32(sp0 - 0x1c68u), rd32(sp0 - 0x1c64u), rd32(sp0 - 0x1c60u), rd32(sp0 - 0x1c5cu), rd32(sp0 - 0x1c58u), rd32(sp0 - 0x1c54u), rd32(sp0 - 0x1c50u), rd32(sp0 - 0x1c4cu), rd32(sp0 - 0x1c48u), rd32(sp0 - 0x1c44u), rd32(sp0 - 0x1c40u), rd32(sp0 - 0x1c3cu), rd32(sp0 - 0x1c38u), rd32(sp0 - 0x1c34u), rd32(sp0 - 0x1c30u), rd32(sp0 - 0x1c2cu), rd32(sp0 - 0x1c28u), rd32(sp0 - 0x1c24u), rd32(sp0 - 0x1c20u), rd32(sp0 - 0x1c1cu), rd32(sp0 - 0x1c18u), rd32(sp0 - 0x1c14u), rd32(sp0 - 0x1c10u), rd32(sp0 - 0x1c0cu), rd32(sp0 - 0x1c08u), rd32(sp0 - 0x1c04u), rd32(sp0 - 0x1c00u), rd32(sp0 - 0x1bfcu), rd32(sp0 - 0x1bf8u), rd32(sp0 - 0x1bf4u), rd32(sp0 - 0x1bf0u), rd32(sp0 - 0x1becu), rd32(sp0 - 0x1be8u), rd32(sp0 - 0x1be4u), rd32(sp0 - 0x1be0u), rd32(sp0 - 0x1bdcu), rd32(sp0 - 0x1bd8u), rd32(sp0 - 0x1bd4u), rd32(sp0 - 0x1bd0u), rd32(sp0 - 0x1bccu), rd32(sp0 - 0x1bc8u), rd32(sp0 - 0x1bc4u), rd32(sp0 - 0x1bc0u)}, g->ecx, g->edx, g->eax, 2952u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = t9;
        sf = (int32_t)t9 < 0;
        goto L_100fa660;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    ebx = t9;
    COW_AT(100fa653)
    wr32(sp0 - 0x2730u, 2u);
    g->esp = sp0 - 0x272cu;
    t12 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 2u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x2734u, ebx);
    eax = t12;
    ecx = t13;
    edx = t14;
    loc_2734 = ebx;
L_100fa716: ;
    COW_AT(100fa716)
    wr32(sp0 - 0x2738u, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2730u;
    cow_cdecl(g, COW_IMG(0x100fa9c0u), 2, arg1, loc_2734);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x2730u, rd32(arg1));
    t37 = rd32(arg1);
    t38 = cow_call_regs(g, COW_IMG(0x100dc6c0u), t37, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x2720u);
    g->esi = rd32(sp0 - 0x2728u);
    g->edi = rd32(sp0 - 0x272cu);
    g->ebp = rd32(sp0 - 0x2724u);
    return t38 & 0xffffff00u;
L_100fa660: ;
    COW_AT(100fa660)
    if (!sf) goto L_100fa670;
    COW_AT(100fa662)
    wr32(sp0 - 0x2730u, 3u);
    g->esp = sp0 - 0x272cu;
    t15 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 3u);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x2734u, 1u);
    eax = t15;
    ecx = t16;
    edx = t17;
    loc_2734 = 1u;
    goto L_100fa716;
L_100fa670: ;
    COW_AT(100fa670)
    wr32(sp0 - 0x2730u, rd32(edi));
    wr32(sp0 - 0x2734u, arg1 + 0x4638u);
    g->edx = rd32(edi);
    t18 = rd32(edi);
    g->esp = sp0 - 0x272cu;
    cow_cdecl(g, COW_IMG(0x100fcad0u), 2, arg1 + 0x4638u, t18);
    t19 = g->edx;
    t20 = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x98u) + 1u;
    wr32(rd32(COW_IMG(0x104e0af0u)) + 0x98u, t20);
    t21 = rd32(COW_IMG(0x104e0af0u));
    t22 = rd32(edi);
    wr32(t21 + 0x198u, t22 + rd32(t21 + 0x198u));
    g->eax = t21;
    t23 = cow_fastcall(g, COW_IMG(0x100dd920u), t22, t19, 0);
    t24 = cow_divu(g, t23, 0x64u);
    t25 = cow_modu(g, t23, 0x64u);
    if (rd32(rd32(COW_IMG(0x104e0af0u)) + 0x184u) < t25 + 1u)
    {
        edx = t25 + 1u;
        goto L_100fa6e1;
    }
    eax = rd32(COW_IMG(0x104e0af0u));
    ecx = rd32(rd32(COW_IMG(0x104e0af0u)) + 0x184u);
    edx = t25 + 1u;
    COW_AT(100fa6bf)
    wr32(sp0 - 0x2730u, 5u);
    g->esp = sp0 - 0x272cu;
    cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 5u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x2730u, rd32(arg1));
    t28 = rd32(arg1);
    g->esp = sp0 - 0x2730u;
    t29 = cow_call_regs(g, COW_IMG(0x100dc6c0u), t28, g->ecx, g->edx, 1, 0);
    g->ebx = rd32(sp0 - 0x2720u);
    g->esi = rd32(sp0 - 0x2728u);
    g->edi = rd32(sp0 - 0x272cu);
    g->ebp = rd32(sp0 - 0x2724u);
    return t29 & 0xffffff00u;
L_100fa6e1: ;
    COW_AT(100fa6e1)
    t30 = rd32(sp0 - 0x270eu);
    wr32(sp0 - 0x2718u, t30);
    t31 = rd32(sp0 - 0x2710u);
    wr32(sp0 - 0x271cu, t31);
    if (rd8(arg1 + 0xcu) != 3u)
    {
        eax = t31;
        loc_2718 = t30;
        loc_271c = t31;
        goto L_100fa737;
    }
    eax = t31;
    ecx = (t30 & 0xffffff00u) | rd8(arg1 + 0xcu);
    loc_2718 = t30;
    loc_271c = t31;
    COW_AT(100fa6f9)
    if ((int32_t)(uint16_t)(((edx & 0xffff0000u) | rd16(arg1 + 8u)) - eax) > 32767)
    {
        edx = (uint16_t)(((edx & 0xffff0000u) | rd16(arg1 + 8u)) - eax);
        goto L_100fa737;
    }
    edx = (uint16_t)(((edx & 0xffff0000u) | rd16(arg1 + 8u)) - eax);
    COW_AT(100fa70d)
    wr32(sp0 - 0x2730u, 6u);
    g->esp = sp0 - 0x272cu;
    t32 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 6u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x2734u, 2u);
    eax = t32;
    ecx = t33;
    edx = t34;
    loc_2734 = 2u;
    goto L_100fa716;
L_100fa737: ;
    COW_AT(100fa737)
    t39 = ebx + sp0 - 0x2710u;
    wr32(sp0 - 0x2714u, t39);
    if (sp0 - 0x26f4u >= ebx + sp0 - 0x2710u)
    {
        ecx = sp0 - 0x26f4u;
        goto L_100fa861;
    }
    ecx = sp0 - 0x26f4u;
    ebx = t39;
    edi = sp0 - 0x26f4u;
    loc_2714 = t39;
L_100fa74f: ;
    COW_AT(100fa74f)
    t40 = (eax & 0xffff0000u) | rd16(edi);
    if ((t40 & 0xfe00u) == 0u)
    {
        eax = t40;
        goto L_100fa84f;
    }
    eax = t40;
    ebp = (uint16_t)t40 >> 9u << 2u;
    COW_AT(100fa76b)
    if ((int32_t)(uint16_t)(((eax & 0xffff0000u) | rd16(arg1 + 8u)) - ((edx & 0xffff0000u) | rd16(edi + 2u))) > 32767)
    {
        eax = (uint16_t)(((eax & 0xffff0000u) | rd16(arg1 + 8u)) - ((edx & 0xffff0000u) | rd16(edi + 2u)));
        edx = (edx & 0xffff0000u) | rd16(edi + 2u);
        goto L_100fa78f;
    }
    eax = (uint16_t)(((eax & 0xffff0000u) | rd16(arg1 + 8u)) - ((edx & 0xffff0000u) | rd16(edi + 2u)));
    edx = (edx & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(100fa781)
    wr32(sp0 - 0x2730u, 8u);
    g->esp = sp0 - 0x272cu;
    t41 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 8u);
    t42 = g->ecx;
    t43 = g->edx;
    wr32(sp0 - 0x2734u, 4u);
    eax = t41;
    ecx = t42;
    edx = t43;
    loc_2734 = 4u;
L_100fa836: ;
    COW_AT(100fa836)
    wr32(sp0 - 0x2738u, arg1);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x2730u;
    cow_cdecl(g, COW_IMG(0x100fa9c0u), 2, arg1, loc_2734);
    t69 = g->ecx;
    t70 = g->edx;
    ecx = t69;
    edx = t70;
L_100fa83c: ;
    COW_AT(100fa83c)
L_100fa83f: ;
    COW_AT(100fa83f)
    if (ebp + edi < rd32(sp0 - 0x2714u))
    {
        eax = rd32(sp0 - 0x2714u);
        edi = ebp + edi;
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2714 = rd32(sp0 - 0x2714u);
        goto L_100fa74f;
    }
    eax = rd32(sp0 - 0x2714u);
    COW_AT(100fa84d)
    loc_2718 = rd32(sp0 - 0x2718u);
    loc_271c = rd32(sp0 - 0x271cu);
L_100fa861: ;
    COW_AT(100fa861)
    wr16(arg1 + 8u, (uint16_t)loc_271c);
    wr32(sp0 - 0x2730u, arg1 + 0x30c0u);
    wr16(arg1 + 0xau, (uint16_t)loc_2718);
    g->edx = arg1 + 0x30c0u;
    g->esp = sp0 - 0x272cu;
    cow_cdecl(g, COW_IMG(0x100dd570u), 1, arg1 + 0x30c0u);
    t76 = g->edx;
    t77 = rd32(sp0 - 0x2710u);
    wr8(arg1 + 0x4161u, (uint8_t)(rd8(arg1 + 0x4161u) + 1u));
    t78 = cow_divs(g, (uint16_t)t77, 0x1eu);
    t79 = cow_mods(g, (uint16_t)t77, 0x1eu);
    if (t79 != 0u)
    {
        eax = t78;
        edx = t79;
    }
    else
    {
    COW_AT(100fa8a5)
        t80 = rd32(sp0 - 0x2708u);
        wr32(sp0 - 0x2730u, t80);
        t81 = rd32(sp0 - 0x270cu);
        wr32(sp0 - 0x2734u, t81);
        wr32(sp0 - 0x2738u, arg1);
        g->eax = t81;
        g->edx = t80;
        g->esp = sp0 - 0x272cu;
        t82 = cow_cdecl(g, COW_IMG(0x100fbd10u), 3, arg1, t81, t80);
        t83 = g->edx;
        eax = t82;
        edx = t83;
    }
    goto L_100fa8b8;
L_100fa78f: ;
    COW_AT(100fa78f)
    wr32(sp0 - 0x2730u, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x2730u;
    cow_stdcall(g, COW_IMG(0x100fc670u), 0);
    t44 = g->ecx;
    if (rd32(rd32(COW_IMG(0x104dfd94u)) + (rd16(edi) & 0x1ffu) * 4u + 0x44730u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd94u)) + (rd16(edi) & 0x1ffu) * 4u + 0x44730u);
        ecx = rd16(edi) & 0x1ffu;
        edx = rd32(COW_IMG(0x104dfd94u));
        ebx = ebx & 0xffffff00u;
    COW_AT(100fa7c4)
        wr32(sp0 - 0x2730u, 0xau);
        g->esp = sp0 - 0x272cu;
        t48 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 0xau);
        t49 = g->ecx;
        t50 = g->edx;
        eax = t48;
        ecx = t49;
        edx = t50;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd94u)) + (rd16(edi) & 0x1ffu) * 4u + 0x44730u);
        edx = rd32(COW_IMG(0x104dfd94u));
        ebx = ebx & 0xffffff00u;
    COW_AT(100fa7b4)
        wr32(sp0 - 0x2730u, edi);
        wr32(sp0 - 0x2734u, sp0 - 0x2710u);
        wr32(sp0 - 0x2738u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x272cu;
        t45 = cow_thiscall_cdecl(g, eax, sp0 - 0x2710u, 3, arg1, sp0 - 0x2710u, edi);
        t46 = g->ecx;
        t47 = g->edx;
        eax = t45;
        ecx = t46;
        edx = t47;
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    COW_AT(100fa7ce)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x272cu;
    t51 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t52 = g->ecx;
    t53 = g->edx;
    if ((t51 >> 8u & 2u) == 0u)
    {
        eax = t51;
        ecx = t52;
        edx = t53;
        goto L_100fa7e2;
    }
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(100fa7d8)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x272cu;
    t54 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t55 = g->ecx;
    t56 = g->edx;
    if ((t54 >> 8u & 4u) == 0u)
    {
        eax = t54;
        ecx = t55;
        edx = t56;
        goto L_100fa829;
    }
    eax = t54;
    ecx = t55;
    edx = t56;
L_100fa7e2: ;
    COW_AT(100fa7e2)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x272cu;
    t57 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t58 = g->ecx;
    t59 = g->edx;
    if ((t57 >> 8u & 0x20u) == 0u)
    {
        eax = t57;
        goto L_100fa7f6;
    }
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(100fa7ec)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x272cu;
    t60 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t61 = g->ecx;
    t62 = g->edx;
    if ((t60 >> 8u & 0x40u) == 0u)
    {
        eax = t60;
        ecx = t61;
        edx = t62;
        goto L_100fa829;
    }
    eax = t60;
L_100fa7f6: ;
    COW_AT(100fa7f6)
    t63 = (eax & 0xffff0000u) | rd16(edi);
    if (rd32((t63 & 0x1ffu) * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x442b4u) == 0u)
    {
        eax = t63;
        ecx = rd32((t63 & 0x1ffu) * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x442b4u);
        edx = t63 & 0x1ffu;
        goto L_100fa829;
    }
    eax = t63;
    ecx = rd32((t63 & 0x1ffu) * 4u + rd32(COW_IMG(0x104dfd94u)) + 0x442b4u);
    edx = t63 & 0x1ffu;
    COW_AT(100fa812)
    if ((eax & 0x1ffu) >= 0x11fu)
    {
        eax = eax & 0x1ffu;
        goto L_100fa829;
    }
    eax = eax & 0x1ffu;
    COW_AT(100fa81e)
    wr32(sp0 - 0x2730u, edi);
    wr32(sp0 - 0x2734u, sp0 - 0x2710u);
    wr32(sp0 - 0x2738u, arg1);
    g->edx = sp0 - 0x2710u;
    g->esp = sp0 - 0x272cu;
    cow_thiscall_cdecl(g, ecx, ecx, 3, arg1, sp0 - 0x2710u, edi);
    t64 = g->ecx;
    t65 = g->edx;
    ecx = t64;
    edx = t65;
    goto L_100fa83c;
L_100fa829: ;
    COW_AT(100fa829)
    if ((uint8_t)ebx != 0u) goto L_100fa83f;
    COW_AT(100fa82d)
    wr32(sp0 - 0x2730u, 0xbu);
    g->esp = sp0 - 0x272cu;
    t66 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 0xbu);
    t67 = g->ecx;
    t68 = g->edx;
    wr32(sp0 - 0x2734u, 5u);
    eax = t66;
    ecx = t67;
    edx = t68;
    loc_2734 = 5u;
    goto L_100fa836;
L_100fa84f: ;
    COW_AT(100fa84f)
    wr32(sp0 - 0x2730u, 7u);
    g->esp = sp0 - 0x272cu;
    t71 = cow_call_regs(g, COW_IMG(0x100fa950u), eax, ecx, edx, 1, 1, 7u);
    t72 = g->ecx;
    t73 = g->edx;
    wr32(sp0 - 0x2734u, 3u);
    wr32(sp0 - 0x2738u, arg1);
    g->ecx = t72;
    g->esp = sp0 - 0x2730u;
    t74 = cow_cdecl(g, COW_IMG(0x100fa9c0u), 2, arg1, 3u);
    t75 = g->ecx;
    eax = t74;
    ecx = t75;
    loc_2718 = rd32(sp0 - 0x2718u);
    loc_271c = rd32(sp0 - 0x271cu);
    goto L_100fa861;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100fa5c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100fa5e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x272cu);
        in_esi = rd32(sp0 - 0x2728u);
        in_ebp = rd32(sp0 - 0x2724u);
        in_ebx = rd32(sp0 - 0x2720u);
        g->esp = sp0 - 0x272cu;
        (void)sp0;
        return 1;
    }
    case 0x100fa5f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        in_edi = rd32(sp0 - 0x272cu);
        in_esi = rd32(sp0 - 0x2728u);
        in_ebp = rd32(sp0 - 0x2724u);
        in_ebx = rd32(sp0 - 0x2720u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa611u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa620u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa653u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa660u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa662u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa670u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa6bfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa6e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa6f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa70du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa716u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x2734u;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa737u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa74fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa76bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa781u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa78fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7c4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7ecu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa7f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa812u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa81eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa829u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa82du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa836u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x2734u;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa83cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x2738u;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa83fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa84du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa84fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa861u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_2714;
        uint32_t loc_2718;
        uint32_t loc_271c;
        uint32_t loc_2734;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        loc_2734 = rd32(sp0 - 0x2734u);
        loc_271c = rd32(sp0 - 0x271cu);
        loc_2718 = rd32(sp0 - 0x2718u);
        loc_2714 = rd32(sp0 - 0x2714u);
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa8a5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->ecx = 0x1eu;
        g->esi = arg1;
        wr32(sp0 - 0x2744u, sp0 - 0x2710u);
        (void)sp0;
        return 1;
    }
    case 0x100fa8b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa8d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa8e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa8f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa8fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa904u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa917u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100fa91eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0x272cu;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa5c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100fa5c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
