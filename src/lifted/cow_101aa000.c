/* f_0x101aa000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101aa000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101aa00du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa00d;
    case 0x101aa019u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa019;
    case 0x101aa023u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa023;
    case 0x101aa02fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa02f;
    case 0x101aa039u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa039;
    case 0x101aa045u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa045;
    case 0x101aa04fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa04f;
    case 0x101aa05bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa05b;
    case 0x101aa065u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa065;
    case 0x101aa071u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa071;
    case 0x101aa07bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa07b;
    case 0x101aa087u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa087;
    case 0x101aa091u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa091;
    case 0x101aa09du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa09d;
    case 0x101aa0a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0a7;
    case 0x101aa0b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0b3;
    case 0x101aa0bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0bd;
    case 0x101aa0c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0c9;
    case 0x101aa0d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0d3;
    case 0x101aa0dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0df;
    case 0x101aa0e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0e9;
    case 0x101aa0f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0f5;
    case 0x101aa0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa0ff;
    case 0x101aa10bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa10b;
    case 0x101aa115u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa115;
    case 0x101aa121u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa121;
    case 0x101aa12bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa12b;
    case 0x101aa137u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa137;
    case 0x101aa141u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa141;
    case 0x101aa14du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa14d;
    case 0x101aa157u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa157;
    case 0x101aa163u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa163;
    case 0x101aa16du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa16d;
    case 0x101aa179u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa179;
    case 0x101aa183u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa183;
    case 0x101aa18fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa18f;
    case 0x101aa199u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa199;
    case 0x101aa1a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1a5;
    case 0x101aa1afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1af;
    case 0x101aa1bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1bb;
    case 0x101aa1c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1c5;
    case 0x101aa1d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1d1;
    case 0x101aa1dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1db;
    case 0x101aa1ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1eb;
    case 0x101aa1f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa1f5;
    case 0x101aa209u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa209;
    case 0x101aa212u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa212;
    case 0x101aa22cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa22c;
    case 0x101aa235u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa235;
    case 0x101aa24fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa24f;
    case 0x101aa258u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa258;
    case 0x101aa272u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa272;
    case 0x101aa27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa27b;
    case 0x101aa295u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa295;
    case 0x101aa29eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa29e;
    case 0x101aa2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2b8;
    case 0x101aa2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2bc;
    case 0x101aa2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2d0;
    case 0x101aa2d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2d4;
    case 0x101aa2e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2e0;
    case 0x101aa2eau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2ea;
    case 0x101aa2f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101aa2f6;
    default: break;
    }
#endif

    COW_AT(101aa000)
    if (rd32(COW_IMG(0x106626ccu)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106626ccu));
    COW_AT(101aa00d)
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x106626ccu), 0u);
        eax = t2;
        edx = t3;
    }
    COW_AT(101aa019)
    if (rd32(COW_IMG(0x10662718u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662718u));
    COW_AT(101aa023)
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x10662718u), 0u);
        eax = t5;
        edx = t6;
    }
    COW_AT(101aa02f)
    if (rd32(COW_IMG(0x1066271cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066271cu));
    COW_AT(101aa039)
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x1066271cu), 0u);
        eax = t8;
        edx = t9;
    }
    COW_AT(101aa045)
    if (rd32(COW_IMG(0x10662720u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662720u));
    COW_AT(101aa04f)
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x10662720u), 0u);
        eax = t11;
        edx = t12;
    }
    COW_AT(101aa05b)
    if (rd32(COW_IMG(0x10662724u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662724u));
    COW_AT(101aa065)
        g->eax = rd32(ecx);
        g->edx = edx;
        t13 = rd32(ecx);
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        wr32(COW_IMG(0x10662724u), 0u);
        eax = t14;
        edx = t15;
    }
    COW_AT(101aa071)
    if (rd32(COW_IMG(0x10662728u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662728u));
    COW_AT(101aa07b)
        g->eax = eax;
        g->edx = rd32(ecx);
        t16 = rd32(ecx);
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, rd32(t16), ecx, 1, 1u);
        t18 = g->edx;
        wr32(COW_IMG(0x10662728u), 0u);
        eax = t17;
        edx = t18;
    }
    COW_AT(101aa087)
    if (rd32(COW_IMG(0x1066272cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066272cu));
    COW_AT(101aa091)
        g->eax = rd32(ecx);
        g->edx = edx;
        t19 = rd32(ecx);
        g->esp = sp0 - 4u;
        t20 = cow_thiscall(g, rd32(t19), ecx, 1, 1u);
        t21 = g->edx;
        wr32(COW_IMG(0x1066272cu), 0u);
        eax = t20;
        edx = t21;
    }
    COW_AT(101aa09d)
    if (rd32(COW_IMG(0x10662730u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662730u));
    COW_AT(101aa0a7)
        g->eax = eax;
        g->edx = rd32(ecx);
        t22 = rd32(ecx);
        g->esp = sp0 - 4u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        wr32(COW_IMG(0x10662730u), 0u);
        eax = t23;
        edx = t24;
    }
    COW_AT(101aa0b3)
    if (rd32(COW_IMG(0x10662734u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662734u));
    COW_AT(101aa0bd)
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 4u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        wr32(COW_IMG(0x10662734u), 0u);
        eax = t26;
        edx = t27;
    }
    COW_AT(101aa0c9)
    if (rd32(COW_IMG(0x10662738u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662738u));
    COW_AT(101aa0d3)
        g->eax = eax;
        g->edx = rd32(ecx);
        t28 = rd32(ecx);
        g->esp = sp0 - 4u;
        t29 = cow_thiscall(g, rd32(t28), ecx, 1, 1u);
        t30 = g->edx;
        wr32(COW_IMG(0x10662738u), 0u);
        eax = t29;
        edx = t30;
    }
    COW_AT(101aa0df)
    if (rd32(COW_IMG(0x1066273cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066273cu));
    COW_AT(101aa0e9)
        g->eax = rd32(ecx);
        g->edx = edx;
        t31 = rd32(ecx);
        g->esp = sp0 - 4u;
        t32 = cow_thiscall(g, rd32(t31), ecx, 1, 1u);
        t33 = g->edx;
        wr32(COW_IMG(0x1066273cu), 0u);
        eax = t32;
        edx = t33;
    }
    COW_AT(101aa0f5)
    if (rd32(COW_IMG(0x10662740u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662740u));
    COW_AT(101aa0ff)
        g->eax = eax;
        g->edx = rd32(ecx);
        t34 = rd32(ecx);
        g->esp = sp0 - 4u;
        t35 = cow_thiscall(g, rd32(t34), ecx, 1, 1u);
        t36 = g->edx;
        wr32(COW_IMG(0x10662740u), 0u);
        eax = t35;
        edx = t36;
    }
    COW_AT(101aa10b)
    if (rd32(COW_IMG(0x10662744u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662744u));
    COW_AT(101aa115)
        g->eax = rd32(ecx);
        g->edx = edx;
        t37 = rd32(ecx);
        g->esp = sp0 - 4u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        t39 = g->edx;
        wr32(COW_IMG(0x10662744u), 0u);
        eax = t38;
        edx = t39;
    }
    COW_AT(101aa121)
    if (rd32(COW_IMG(0x10662748u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662748u));
    COW_AT(101aa12b)
        g->eax = eax;
        g->edx = rd32(ecx);
        t40 = rd32(ecx);
        g->esp = sp0 - 4u;
        t41 = cow_thiscall(g, rd32(t40), ecx, 1, 1u);
        t42 = g->edx;
        wr32(COW_IMG(0x10662748u), 0u);
        eax = t41;
        edx = t42;
    }
    COW_AT(101aa137)
    if (rd32(COW_IMG(0x1066274cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066274cu));
    COW_AT(101aa141)
        g->eax = rd32(ecx);
        g->edx = edx;
        t43 = rd32(ecx);
        g->esp = sp0 - 4u;
        t44 = cow_thiscall(g, rd32(t43), ecx, 1, 1u);
        t45 = g->edx;
        wr32(COW_IMG(0x1066274cu), 0u);
        eax = t44;
        edx = t45;
    }
    COW_AT(101aa14d)
    if (rd32(COW_IMG(0x10662750u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662750u));
    COW_AT(101aa157)
        g->eax = eax;
        g->edx = rd32(ecx);
        t46 = rd32(ecx);
        g->esp = sp0 - 4u;
        t47 = cow_thiscall(g, rd32(t46), ecx, 1, 1u);
        t48 = g->edx;
        wr32(COW_IMG(0x10662750u), 0u);
        eax = t47;
        edx = t48;
    }
    COW_AT(101aa163)
    if (rd32(COW_IMG(0x10662754u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662754u));
    COW_AT(101aa16d)
        g->eax = rd32(ecx);
        g->edx = edx;
        t49 = rd32(ecx);
        g->esp = sp0 - 4u;
        t50 = cow_thiscall(g, rd32(t49), ecx, 1, 1u);
        t51 = g->edx;
        wr32(COW_IMG(0x10662754u), 0u);
        eax = t50;
        edx = t51;
    }
    COW_AT(101aa179)
    if (rd32(COW_IMG(0x10662758u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662758u));
    COW_AT(101aa183)
        g->eax = eax;
        g->edx = rd32(ecx);
        t52 = rd32(ecx);
        g->esp = sp0 - 4u;
        t53 = cow_thiscall(g, rd32(t52), ecx, 1, 1u);
        t54 = g->edx;
        wr32(COW_IMG(0x10662758u), 0u);
        eax = t53;
        edx = t54;
    }
    COW_AT(101aa18f)
    if (rd32(COW_IMG(0x1066276cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066276cu));
    COW_AT(101aa199)
        g->eax = rd32(ecx);
        g->edx = edx;
        t55 = rd32(ecx);
        g->esp = sp0 - 4u;
        t56 = cow_thiscall(g, rd32(t55), ecx, 1, 1u);
        t57 = g->edx;
        wr32(COW_IMG(0x1066276cu), 0u);
        eax = t56;
        edx = t57;
    }
    COW_AT(101aa1a5)
    if (rd32(COW_IMG(0x1066277cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1066277cu));
    COW_AT(101aa1af)
        g->eax = eax;
        g->edx = rd32(ecx);
        t58 = rd32(ecx);
        g->esp = sp0 - 4u;
        t59 = cow_thiscall(g, rd32(t58), ecx, 1, 1u);
        t60 = g->edx;
        wr32(COW_IMG(0x1066277cu), 0u);
        eax = t59;
        edx = t60;
    }
    COW_AT(101aa1bb)
    if (rd32(COW_IMG(0x10662780u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662780u));
    COW_AT(101aa1c5)
        g->eax = rd32(ecx);
        t61 = rd32(ecx);
        g->esp = sp0 - 4u;
        t62 = cow_thiscall(g, rd32(t61), ecx, 1, 1u);
        wr32(COW_IMG(0x10662780u), 0u);
        eax = t62;
    }
    COW_AT(101aa1d1)
    if (rd32(COW_IMG(0x10662770u)) == 0u)
    {
        edx = rd32(COW_IMG(0x10662770u));
    }
    else
    {
        edx = rd32(COW_IMG(0x10662770u));
    COW_AT(101aa1db)
        g->eax = rd32(edx);
        t63 = rd32(edx);
        g->esp = sp0 - 4u;
        t64 = cow_thiscall(g, rd32(t63), edx, 1, 1u);
        wr32(COW_IMG(0x10662770u), 0u);
        eax = t64;
        edx = 0u;
    }
    COW_AT(101aa1eb)
    if (rd32(COW_IMG(0x10662774u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10662774u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662774u));
    COW_AT(101aa1f5)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        t65 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662774u), 0u);
        ecx = 0u;
        edx = t65;
    }
    COW_AT(101aa209)
    if (rd32(COW_IMG(0x10662778u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662778u));
    COW_AT(101aa212)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t66 = rd32(COW_IMG(0x10662774u));
        t67 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662778u), 0u);
        ecx = t66;
        edx = t67;
    }
    COW_AT(101aa22c)
    if (rd32(COW_IMG(0x1066275cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1066275cu));
    COW_AT(101aa235)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t68 = rd32(COW_IMG(0x10662774u));
        t69 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x1066275cu), 0u);
        ecx = t68;
        edx = t69;
    }
    COW_AT(101aa24f)
    if (rd32(COW_IMG(0x10662760u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662760u));
    COW_AT(101aa258)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t70 = rd32(COW_IMG(0x10662774u));
        t71 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662760u), 0u);
        ecx = t70;
        edx = t71;
    }
    COW_AT(101aa272)
    if (rd32(COW_IMG(0x10662764u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662764u));
    COW_AT(101aa27b)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t72 = rd32(COW_IMG(0x10662774u));
        t73 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662764u), 0u);
        ecx = t72;
        edx = t73;
    }
    COW_AT(101aa295)
    if (rd32(COW_IMG(0x10662768u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10662768u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10662768u));
    COW_AT(101aa29e)
        g->eax = eax;
        g->esp = sp0 - 4u;
        t74 = cow_thiscall(g, rd32(rd32(eax)), eax, 1, 1u);
        t75 = rd32(COW_IMG(0x10662774u));
        t76 = rd32(COW_IMG(0x10662770u));
        wr32(COW_IMG(0x10662768u), 0u);
        eax = t74;
        ecx = t75;
        edx = t76;
    }
    COW_AT(101aa2b8)
    if (edx != 0u)
    {
    COW_AT(101aa2bc)
        g->eax = rd32(edx);
        g->edx = edx;
        t77 = rd32(edx);
        g->esp = sp0 - 4u;
        t78 = cow_thiscall(g, rd32(t77), edx, 1, 1u);
        t79 = g->edx;
        t80 = rd32(COW_IMG(0x10662774u));
        wr32(COW_IMG(0x10662770u), 0u);
        eax = t78;
        ecx = t80;
        edx = t79;
    }
    COW_AT(101aa2d0)
    if (ecx != 0u)
    {
    COW_AT(101aa2d4)
        g->edx = rd32(ecx);
        t81 = rd32(ecx);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(t81), ecx, 1, 1u);
        t82 = g->edx;
        wr32(COW_IMG(0x10662774u), 0u);
        edx = t82;
    }
    COW_AT(101aa2e0)
    if (rd32(COW_IMG(0x10662784u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662784u));
    COW_AT(101aa2ea)
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x10662784u), 0u);
    }
    COW_AT(101aa2f6)
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101aa000(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101aa00du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa019u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa023u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa02fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa039u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa045u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa04fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa05bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa065u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa07bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa087u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa091u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa09du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0c9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa0ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa10bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa115u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa121u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa12bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa137u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa141u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa14du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa157u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa163u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa16du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa179u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa183u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa18fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa199u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa1f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa209u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa212u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa22cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa235u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa24fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa258u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa272u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa27bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa295u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa29eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101aa2f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa000(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101aa000(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
