/* f_0x102af300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_102af300(Guest* g)
{
    double d35;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102af310u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102af310;
    case 0x102af31fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; goto E_102af31f;
    case 0x102af32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_102af32f;
    case 0x102af336u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_102af336;
    case 0x102af344u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_102af344;
    case 0x102af34eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_102af34e;
    case 0x102af353u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af353;
    case 0x102af35du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af35d;
    case 0x102af363u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af363;
    case 0x102af375u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af375;
    case 0x102af380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af380;
    case 0x102af381u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af381;
    case 0x102af387u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af387;
    case 0x102af395u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af395;
    case 0x102af39fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af39f;
    case 0x102af3a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3a4;
    case 0x102af3aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3ae;
    case 0x102af3b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3b4;
    case 0x102af3c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3c6;
    case 0x102af3d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3d1;
    case 0x102af3d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3d2;
    case 0x102af3d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3d8;
    case 0x102af3e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3e6;
    case 0x102af3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3f0;
    case 0x102af3f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3f5;
    case 0x102af3ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af3ff;
    case 0x102af405u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af405;
    case 0x102af41au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af41a;
    case 0x102af425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af425;
    case 0x102af426u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af426;
    case 0x102af42cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af42c;
    case 0x102af43au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af43a;
    case 0x102af444u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af444;
    case 0x102af449u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af449;
    case 0x102af453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_102af453;
    case 0x102af455u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af455;
    case 0x102af45bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af45b;
    case 0x102af466u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af466;
    case 0x102af478u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af478;
    case 0x102af486u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af486;
    case 0x102af48au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af48a;
    case 0x102af48bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af48b;
    case 0x102af491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af491;
    case 0x102af49fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af49f;
    case 0x102af4a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af4a9;
    case 0x102af4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af4ae;
    case 0x102af4b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; goto E_102af4b8;
    case 0x102af4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af4ba;
    case 0x102af4c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af4c0;
    case 0x102af4cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af4cb;
    case 0x102af4ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af4dd;
    case 0x102af4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_102af4eb;
    case 0x102af4efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af4ef;
    case 0x102af4f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af4f0;
    case 0x102af4f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af4f6;
    case 0x102af500u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af500;
    case 0x102af50cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af50c;
    case 0x102af512u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af512;
    case 0x102af520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af520;
    case 0x102af526u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af526;
    case 0x102af534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_102af534;
    case 0x102af53fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102af53f;
    case 0x102af544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102af544;
    case 0x102af54du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102af54d;
    case 0x102af550u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102af550;
    default: break;
    }
#endif

    COW_AT(102af300)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg3);
    g->eax = arg3;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102af310)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, COW_IMG(0x103bf530u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf530u), arg1);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102af31f)
    if ((int32_t)arg2 < 1)
    {
        ebx = in_ebx;
    }
    else
    {
    COW_AT(102af32f)
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, in_ebx, rd32(sp0 - 0xcu));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    COW_AT(102af336)
        t9 = rd32(arg1 + 0x14u);
        wr32(sp0 - 0x18u, t9);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf520u));
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf520u), t9);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    COW_AT(102af344)
        if (rd32(arg1 + 0x14u) == 0u)
        {
            eax = rd32(arg1 + 0x14u);
            ebx = in_ebx;
        }
        else
        {
            eax = rd32(arg1 + 0x14u);
    COW_AT(102af34e)
            if ((int32_t)arg2 < 2)
            {
                ebx = in_ebx;
            }
            else
            {
    COW_AT(102af353)
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                    goto L_102af380;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af35d: ;
    COW_AT(102af35d)
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t12 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                eax = t12;
    COW_AT(102af363)
                t13 = rd32(ebx * 4u + rd32(arg1 + 0x14u));
                wr32(sp0 - 0x18u, t13);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf50cu));
                g->ebx = ebx;
                g->ecx = rd32(arg1 + 0x14u);
                g->edx = t13;
                t14 = rd32(arg1 + 0x14u);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf50cu), ebx);
                t15 = g->ecx;
                t16 = g->edx;
                ecx = t15;
                edx = t16;
    COW_AT(102af375)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = ebx + 1u;
                    goto L_102af35d;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = ebx + 1u;
L_102af380: ;
    COW_AT(102af380)
            }
        }
    COW_AT(102af381)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    COW_AT(102af387)
        t19 = rd32(arg1 + 0x18u);
        wr32(sp0 - 0x18u, t19);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4fcu));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4fcu), t19);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    COW_AT(102af395)
        if (rd32(arg1 + 0x18u) == 0u)
        {
            eax = rd32(arg1 + 0x18u);
        }
        else
        {
            eax = rd32(arg1 + 0x18u);
    COW_AT(102af39f)
            if ((int32_t)arg2 >= 2)
            {
    COW_AT(102af3a4)
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                    goto L_102af3d1;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af3ae: ;
    COW_AT(102af3ae)
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t22 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                eax = t22;
    COW_AT(102af3b4)
                t23 = rd32(ebx * 4u + rd32(arg1 + 0x18u));
                wr32(sp0 - 0x18u, t23);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf4e8u));
                g->ebx = ebx;
                g->ecx = rd32(arg1 + 0x18u);
                g->edx = t23;
                t24 = rd32(arg1 + 0x18u);
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4e8u), ebx);
                t25 = g->ecx;
                t26 = g->edx;
                ecx = t25;
                edx = t26;
    COW_AT(102af3c6)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = ebx + 1u;
                    goto L_102af3ae;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = ebx + 1u;
L_102af3d1: ;
    COW_AT(102af3d1)
            }
        }
    COW_AT(102af3d2)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t27 = g->ecx;
        t28 = g->edx;
        ecx = t27;
        edx = t28;
    COW_AT(102af3d8)
        t29 = rd32(arg1 + 0x1cu);
        wr32(sp0 - 0x18u, t29);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4d4u));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4d4u), t29);
        t30 = g->ecx;
        t31 = g->edx;
        ecx = t30;
        edx = t31;
    COW_AT(102af3e6)
        if (rd32(arg1 + 0x1cu) == 0u)
        {
            eax = rd32(arg1 + 0x1cu);
        }
        else
        {
            eax = rd32(arg1 + 0x1cu);
    COW_AT(102af3f0)
            if ((int32_t)arg2 >= 2)
            {
    COW_AT(102af3f5)
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                    goto L_102af425;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = 0u;
L_102af3ff: ;
    COW_AT(102af3ff)
                wr32(sp0 - 0x14u, arg3 + 2u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t32 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t33 = g->edx;
                eax = t32;
                edx = t33;
    COW_AT(102af405)
                t34 = rd32(arg1 + 0x1cu);
                wr32(sp0 - 0x18u, t34);
                d35 = (double)rdf32(ebx * 4u + t34);
                wrf64(sp0 - 0x18u, d35);
                wr32(sp0 - 0x1cu, ebx);
                wr32(sp0 - 0x20u, COW_IMG(0x103bf4b8u));
                g->ebx = ebx;
                g->ecx = t34;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4b8u), ebx);
                t36 = g->ecx;
                t37 = g->edx;
                ecx = t36;
                edx = t37;
    COW_AT(102af41a)
                if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = ebx + 1u;
                    goto L_102af3ff;
                }
                eax = rd32(arg1 + 0x34u);
                ebx = ebx + 1u;
L_102af425: ;
    COW_AT(102af425)
            }
        }
    COW_AT(102af426)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t38 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t39 = g->ecx;
        eax = t38;
        ecx = t39;
    COW_AT(102af42c)
        t40 = rd32(arg1 + 0x20u);
        wr32(sp0 - 0x18u, t40);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4a4u));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = t40;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4a4u), t40);
        t41 = g->ecx;
        t42 = g->edx;
        ecx = t41;
        edx = t42;
    COW_AT(102af43a)
        if (rd32(arg1 + 0x20u) == 0u)
        {
            eax = rd32(arg1 + 0x20u);
        }
        else
        {
            eax = rd32(arg1 + 0x20u);
    COW_AT(102af444)
            if ((int32_t)arg2 >= 2)
            {
    COW_AT(102af449)
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x34u);
    COW_AT(102af453)
                    ebx = 0u;
                    ebp = 0u;
L_102af455: ;
    COW_AT(102af455)
                    wr32(sp0 - 0x14u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t43 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                    t44 = g->ecx;
                    t45 = g->edx;
                    eax = t43;
                    ecx = t44;
                    edx = t45;
    COW_AT(102af45b)
                    wr32(sp0 - 0x18u, ebx);
                    wr32(sp0 - 0x1cu, COW_IMG(0x103bf490u));
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf490u), ebx);
                    t46 = g->edx;
                    edx = t46;
    COW_AT(102af466)
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, arg2);
                    t47 = ebp + rd32(arg1 + 0x20u);
                    wr32(sp0 - 0x28u, t47);
                    g->ecx = t47;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t47, arg2, 0u);
                    t48 = g->ecx;
                    t49 = g->edx;
                    ecx = t48;
                    edx = t49;
    COW_AT(102af478)
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                    {
                        eax = rd32(arg1 + 0x34u);
                        ebx = ebx + 1u;
                        ebp = ebp + 0xcu;
                        goto L_102af455;
                    }
                    eax = rd32(arg1 + 0x34u);
                    ebx = ebx + 1u;
    COW_AT(102af486)
                }
    COW_AT(102af48a)
            }
        }
    COW_AT(102af48b)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 8u;
        t50 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t51 = g->ecx;
        eax = t50;
        ecx = t51;
    COW_AT(102af491)
        t52 = rd32(arg1 + 0x20u);
        wr32(sp0 - 0x18u, t52);
        wr32(sp0 - 0x1cu, COW_IMG(0x103bf4a4u));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = t52;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf4a4u), t52);
        t53 = g->ecx;
        t54 = g->edx;
        ecx = t53;
        edx = t54;
    COW_AT(102af49f)
        if (rd32(arg1 + 0x24u) == 0u)
        {
            eax = rd32(arg1 + 0x24u);
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
    COW_AT(102af4a9)
            if ((int32_t)arg2 >= 2)
            {
    COW_AT(102af4ae)
                if ((int32_t)rd32(arg1 + 0x34u) <= 0)
                {
                    eax = rd32(arg1 + 0x34u);
                    ebx = 0u;
                }
                else
                {
                    eax = rd32(arg1 + 0x34u);
    COW_AT(102af4b8)
                    ebx = 0u;
                    ebp = 0u;
L_102af4ba: ;
    COW_AT(102af4ba)
                    wr32(sp0 - 0x14u, arg3 + 2u);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t55 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 2u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                    t56 = g->ecx;
                    t57 = g->edx;
                    eax = t55;
                    ecx = t56;
                    edx = t57;
    COW_AT(102af4c0)
                    wr32(sp0 - 0x18u, ebx);
                    wr32(sp0 - 0x1cu, COW_IMG(0x103bf47cu));
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf47cu), ebx);
                    t58 = g->edx;
                    edx = t58;
    COW_AT(102af4cb)
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, arg2);
                    t59 = ebp + rd32(arg1 + 0x24u);
                    wr32(sp0 - 0x28u, t59);
                    g->ecx = t59;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x10274ad0u), 3, t59, arg2, 0u);
                    t60 = g->ecx;
                    t61 = g->edx;
                    ecx = t60;
                    edx = t61;
    COW_AT(102af4dd)
                    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x34u))
                    {
                        eax = rd32(arg1 + 0x34u);
                        ebx = ebx + 1u;
                        ebp = ebp + 0xcu;
                        goto L_102af4ba;
                    }
                    eax = rd32(arg1 + 0x34u);
                    ebx = ebx + 1u;
    COW_AT(102af4eb)
                }
    COW_AT(102af4ef)
            }
        }
    COW_AT(102af4f0)
        wr32(sp0 - 0x14u, arg3 + 1u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t62 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t63 = g->ecx;
        t64 = g->edx;
        eax = t62;
        ecx = t63;
        edx = t64;
    COW_AT(102af4f6)
        wr32(sp0 - 0x18u, COW_IMG(0x103bf46cu));
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t65 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf46cu), rd32(sp0 - 0x14u));
        t66 = g->ecx;
        eax = t65;
        ecx = t66;
    COW_AT(102af500)
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg2);
        wr32(sp0 - 0x24u, arg1 + 0x28u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = arg1 + 0x28u;
        g->esp = sp0 - 0x18u;
        t67 = cow_cdecl(g, COW_IMG(0x10274ad0u), 3, arg1 + 0x28u, arg2, 0u);
        t68 = g->ecx;
        t69 = g->edx;
        eax = t67;
        ecx = t68;
        edx = t69;
    COW_AT(102af50c)
        wr32(sp0 - 0x28u, arg3 + 1u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t70 = g->ecx;
        t71 = g->edx;
        ecx = t70;
        edx = t71;
    COW_AT(102af512)
        t72 = rd32(arg1 + 0x34u);
        wr32(sp0 - 0x2cu, t72);
        wr32(sp0 - 0x30u, COW_IMG(0x103bf45cu));
        g->ebx = ebx;
        g->eax = t72;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t73 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf45cu), t72);
        t74 = g->ecx;
        t75 = g->edx;
        eax = t73;
        ecx = t74;
        edx = t75;
    COW_AT(102af520)
        wr32(sp0 - 0x34u, arg3 + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t76 = cow_cdecl(g, COW_IMG(0x1028a0d0u), 3, arg3 + 1u, COW_IMG(0x103bf45cu), rd32(sp0 - 0x2cu));
        t77 = g->edx;
        eax = t76;
        edx = t77;
    COW_AT(102af526)
        t78 = rd32(arg1 + 0x38u);
        wr32(sp0 - 0x38u, t78);
        wr32(sp0 - 0x3cu, COW_IMG(0x103bf304u));
        g->ebx = ebx;
        g->eax = eax;
        g->ecx = t78;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t79 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf304u), t78);
        t80 = g->ecx;
        t81 = g->edx;
        eax = t79;
        ecx = t80;
        edx = t81;
    COW_AT(102af534)
        if (rd32(arg1 + 0x38u) == 0u)
        {
            ebx = rd32(sp0 - 0x10u);
        }
        else
        {
            ebx = rd32(sp0 - 0x10u);
            esi = rd32(arg1 + 0x38u);
    COW_AT(102af53f)
            if ((int32_t)arg2 >= 2)
            {
    COW_AT(102af544)
                wr32(sp0 - 0x10u, arg3 + 2u);
                wr32(sp0 - 0x14u, arg2);
                wr32(sp0 - 0x18u, esi);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 4u;
                t82 = cow_cdecl(g, COW_IMG(0x102af040u), 5, esi, arg2, arg3 + 2u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
                t83 = g->edx;
                eax = t82;
                edx = t83;
    COW_AT(102af54d)
            }
        }
    }
    COW_AT(102af550)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102af300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102af310u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af31fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af32fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af336u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af344u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af34eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af353u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af35du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af363u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af375u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x20u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af380u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af381u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af387u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af395u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af39fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af3b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af3c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x20u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af3d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af3d2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af3ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af405u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af41au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x20u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af425u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af426u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af42cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af43au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af444u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af449u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af453u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af455u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af45bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af466u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af478u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af486u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af48au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af48bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af491u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af49fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af4a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af4aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af4b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x14u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x1cu;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x28u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 2u;
        (void)sp0;
        return 1;
    }
    case 0x102af4f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af4f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x14u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af500u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x18u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af50cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x24u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af512u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x28u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af520u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x30u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        wr32(sp0 - 0x30u, COW_IMG(0x103bf45cu));
        (void)sp0;
        return 1;
    }
    case 0x102af526u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x34u;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af534u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x3cu;
        g->ebp = arg2;
        g->esi = arg1;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af53fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af544u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = arg2;
        g->edi = arg3 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102af54du:
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
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102af550u:
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
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102af300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102af300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
