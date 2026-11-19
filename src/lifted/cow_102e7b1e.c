/* f_0x102e7b1e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102e7b1e(Guest* g)
{
    double d93;
    double d95;
    double d96;
    double d97;
    double d98;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_7c;
    uint32_t loc_80;
    uint32_t loc_88;
    uint32_t loc_98;
    uint32_t loc_9c;
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
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t94;
    uint32_t t99;
    double x0;
    double x1;
    double x2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 268u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e7b30u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b30;
    case 0x102e7b3au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b3a;
    case 0x102e7b47u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_ebx = rd32(sp0 - 0x68u); in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b47;
    case 0x102e7b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7b4a;
    case 0x102e7b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7b7b;
    case 0x102e7bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7bf4;
    case 0x102e7c09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_102e7c09;
    case 0x102e7ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7ca8;
    case 0x102e7cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_98 = rd32(sp0 - 0x98u); loc_88 = rd32(sp0 - 0x88u); loc_80 = rd32(sp0 - 0x80u); loc_7c = rd32(sp0 - 0x7cu); loc_70 = rd32(sp0 - 0x70u); goto E_102e7cf9;
    case 0x102e7dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7dfa;
    case 0x102e7e2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e2b;
    case 0x102e7e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_102e7e48;
    case 0x102e7e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e5d;
    case 0x102e7e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e7d;
    case 0x102e7e97u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7e97;
    case 0x102e7ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e7ebe;
    case 0x102e7ee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_102e7ee1;
    case 0x102e7ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); goto E_102e7ee7;
    case 0x102e7ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_102e7ef3;
    case 0x102e7ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); goto E_102e7ef9;
    case 0x102e7f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_102e7f46;
    case 0x102e7f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7f4c;
    case 0x102e7f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7f52;
    default: break;
    }
#endif

    COW_AT(102e7b1e)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0xcu) == 0u)
    {
        esi = rd32(sp0 + 4u);
    COW_AT(102e7b3a)
        wr32(sp0 - 0x68u, in_ebx);
        if (rd32(esi + 0x10u) != 0u)
        {
            edx = in_edx;
            loc_4 = in_ebp;
            loc_60 = in_esi;
            loc_64 = in_edi;
            loc_68 = in_ebx;
        }
        else
        {
    COW_AT(102e7b47)
            wr32(sp0 + 4u, 0u);
            edx = in_edx;
            loc_4 = in_ebp;
            loc_60 = in_esi;
            loc_64 = in_edi;
            loc_68 = in_ebx;
L_102e7b4a: ;
    COW_AT(102e7b4a)
            t1 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t1);
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd0u), rd32(rd32(esi + 8u)), 1, t1);
            t2 = (rd32(esi + 0x1cu) != 0u) * 2u + 0x142u;
            wr32(sp0 - 0x6cu, t2);
            t3 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t3);
            g->edx = t2;
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x130u), rd32(rd32(esi + 8u)), 0);
            t4 = g->edx;
            if (rd32(esi + 0x1cu) != 0u)
            {
                edx = t4;
                loc_6c = rd32(sp0 - 0x6cu);
                loc_70 = rd32(sp0 - 0x70u);
            }
            else
            {
    COW_AT(102e7b7b)
                wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
                wr32(sp0 - 0x74u, sp0 - 0x5cu);
                wrf32(sp0 - 0x28u, (float)(double)(float)0.0);
                wr32(sp0 - 0x78u, 2u);
                t5 = rd32(esi + 8u);
                wr32(sp0 - 0x7cu, t5);
                wrf32(sp0 - 0x2cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x30u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x38u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x3cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x40u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x44u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x4cu, (float)(double)(float)0.0);
                wrf32(sp0 - 0x50u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x54u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x58u, (float)(double)(float)0.0);
                wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x34u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x48u, (float)(double)(float)1.0);
                wrf32(sp0 - 0x5cu, (float)(double)(float)1.0);
                g->esp = sp0 - 0x68u;
                cow_thiscall(g, rd32(rd32(t5) + 0x94u), rd32(t5), 5, t5, 2u, sp0 - 0x5cu, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
                wr32(sp0 - 0x6cu, sp0 - 0x5cu);
                wr32(sp0 - 0x70u, 3u);
                t6 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t6);
                g->edx = sp0 - 0x5cu;
                g->esp = sp0 - 0x70u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 1, t6);
                t7 = g->edx;
                if (rd32(sp0 + 4u) != 0u)
                {
                    edx = t7;
                    loc_6c = sp0 - 0x5cu;
                    loc_70 = 3u;
                }
                else
                {
    COW_AT(102e7bf4)
                    wr32(sp0 - 0x74u, sp0 - 0x5cu);
                    wr32(sp0 - 0x78u, 0x100u);
                    t8 = rd32(esi + 8u);
                    wr32(sp0 - 0x7cu, t8);
                    g->edx = sp0 - 0x5cu;
                    g->esp = sp0 - 0x70u;
                    cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 3, t8, 0x100u, sp0 - 0x5cu);
                    t9 = g->edx;
                    edx = t9;
                    loc_6c = sp0 - 0x5cu;
                    loc_70 = 3u;
                }
            }
    COW_AT(102e7c09)
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x78u, 7u);
            t10 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t10);
            g->edx = edx;
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t10, 7u, 0u);
            t11 = g->edx;
            wr32(sp0 - 0x74u, 3u);
            wr32(sp0 - 0x78u, 8u);
            t12 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t12);
            g->edx = t11;
            g->esp = sp0 - 0x78u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 1, t12);
            t13 = g->edx;
            wr32(sp0 - 0x7cu, 1u);
            wr32(sp0 - 0x80u, 0x16u);
            t14 = rd32(esi + 8u);
            wr32(sp0 - 0x84u, t14);
            g->edx = t13;
            g->esp = sp0 - 0x70u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 5, t14, 0x16u, 1u, 8u, 3u);
            t15 = g->edx;
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x78u, 0x80u);
            t16 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t16);
            g->edx = t15;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t16, 0x80u, 0u);
            t17 = g->edx;
            wr32(sp0 - 0x74u, 1u);
            wr32(sp0 - 0x78u, 0x88u);
            t18 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t18);
            g->edx = t17;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t18, 0x88u, 1u);
            t19 = g->edx;
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x78u, 0x97u);
            t20 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t20);
            g->edx = t19;
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 2, t20, 0x97u);
            t21 = g->edx;
            wr32(sp0 - 0x78u, 0u);
            wr32(sp0 - 0x7cu, 0x98u);
            t22 = rd32(esi + 8u);
            wr32(sp0 - 0x80u, t22);
            g->edx = t21;
            g->esp = sp0 - 0x78u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 2, t22, 0x98u);
            t23 = g->edx;
            wr32(sp0 - 0x7cu, 1u);
            wr32(sp0 - 0x80u, 0xa4u);
            t24 = rd32(esi + 8u);
            wr32(sp0 - 0x84u, t24);
            g->edx = t23;
            g->esp = sp0 - 0x80u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 1, t24);
            t25 = g->edx;
            wr32(sp0 - 0x84u, 0u);
            wr32(sp0 - 0x88u, 0xa7u);
            t26 = rd32(esi + 8u);
            wr32(sp0 - 0x8cu, t26);
            g->edx = t25;
            g->esp = sp0 - 0x8cu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 0);
            t27 = g->edx;
            if (rd32(esi + 0x1cu) != 0u)
            {
                edx = t27;
                loc_80 = 0xa4u;
                loc_88 = 0xa7u;
                loc_70 = rd32(sp0 - 0x70u);
                loc_7c = 1u;
            }
            else
            {
                edx = t27;
    COW_AT(102e7ca8)
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, 0x1cu);
                t28 = rd32(esi + 8u);
                wr32(sp0 - 0x98u, t28);
                g->edx = edx;
                g->esp = sp0 - 0x90u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 2, t28, 0x1cu);
                t29 = g->edx;
                wr32(sp0 - 0x94u, 0u);
                wr32(sp0 - 0x98u, 0x1du);
                t30 = rd32(esi + 8u);
                wr32(sp0 - 0x9cu, t30);
                g->edx = t29;
                g->esp = sp0 - 0x68u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 13, t30, 0x1du, 0u, 0u, rd32(sp0 - 0x8cu), 0xa7u, rd32(sp0 - 0x84u), 0xa4u, rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
                t31 = g->edx;
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0x34u);
                t32 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t32);
                g->edx = t31;
                g->esp = sp0 - 0x74u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 0);
                t33 = g->edx;
                wr32(sp0 - 0x78u, 0u);
                wr32(sp0 - 0x7cu, 0x89u);
                t34 = rd32(esi + 8u);
                wr32(sp0 - 0x80u, t34);
                g->edx = t33;
                g->esp = sp0 - 0x80u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 0);
                t35 = g->edx;
                wr32(sp0 - 0x84u, 1u);
                wr32(sp0 - 0x88u, 0x91u);
                t36 = rd32(esi + 8u);
                wr32(sp0 - 0x8cu, t36);
                g->edx = t35;
                g->esp = sp0 - 0x8cu;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 0);
                t37 = g->edx;
                edx = t37;
                loc_80 = rd32(sp0 - 0x80u);
                loc_88 = 0x91u;
                loc_70 = 0x34u;
                loc_7c = 0x89u;
            }
    COW_AT(102e7cf9)
            wr32(sp0 - 0x90u, 4u);
            wr32(sp0 - 0x94u, 1u);
            wr32(sp0 - 0x98u, 0u);
            t38 = rd32(esi + 8u);
            wr32(sp0 - 0x9cu, t38);
            g->edx = edx;
            g->esp = sp0 - 0x88u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 5, t38, 0u, 1u, 4u, rd32(sp0 - 0x8cu));
            t39 = g->edx;
            wr32(sp0 - 0x8cu, 2u);
            wr32(sp0 - 0x90u, 2u);
            wr32(sp0 - 0x94u, 0u);
            t40 = rd32(esi + 8u);
            wr32(sp0 - 0x98u, t40);
            g->edx = t39;
            g->esp = sp0 - 0x98u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 0);
            t41 = g->edx;
            wr32(sp0 - 0x9cu, 0u);
            wr32(sp0 - 0xa0u, 3u);
            wr32(sp0 - 0xa4u, 0u);
            t42 = rd32(esi + 8u);
            wr32(sp0 - 0xa8u, t42);
            g->edx = t41;
            g->esp = sp0 - 0xa0u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 2, t42, 0u);
            t43 = g->edx;
            wr32(sp0 - 0xa4u, 4u);
            wr32(sp0 - 0xa8u, 4u);
            wr32(sp0 - 0xacu, 0u);
            t44 = rd32(esi + 8u);
            wr32(sp0 - 0xb0u, t44);
            g->edx = t43;
            g->esp = sp0 - 0x9cu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 5, t44, 0u, 4u, 4u, 3u);
            t45 = g->edx;
            wr32(sp0 - 0xa0u, 2u);
            wr32(sp0 - 0xa4u, 5u);
            wr32(sp0 - 0xa8u, 0u);
            t46 = rd32(esi + 8u);
            wr32(sp0 - 0xacu, t46);
            g->edx = t45;
            g->esp = sp0 - 0xa8u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 1, t46);
            t47 = g->edx;
            wr32(sp0 - 0xacu, 0u);
            wr32(sp0 - 0xb0u, 6u);
            wr32(sp0 - 0xb4u, 0u);
            t48 = rd32(esi + 8u);
            wr32(sp0 - 0xb8u, t48);
            g->edx = t47;
            g->esp = sp0 - 0xb0u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 2, t48, 0u);
            t49 = g->edx;
            wr32(sp0 - 0xb4u, 1u);
            wr32(sp0 - 0xb8u, 1u);
            wr32(sp0 - 0xbcu, 1u);
            t50 = rd32(esi + 8u);
            wr32(sp0 - 0xc0u, t50);
            g->edx = t49;
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 3, t50, 1u, 1u);
            t51 = g->edx;
            wr32(sp0 - 0xb8u, 1u);
            wr32(sp0 - 0xbcu, 4u);
            wr32(sp0 - 0xc0u, 1u);
            t52 = rd32(esi + 8u);
            wr32(sp0 - 0xc4u, t52);
            g->edx = t51;
            g->esp = sp0 - 0xc4u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 0);
            t53 = g->edx;
            wr32(sp0 - 0xc8u, 2u);
            wr32(sp0 - 0xccu, 0x10u);
            wr32(sp0 - 0xd0u, 0u);
            t54 = rd32(esi + 8u);
            wr32(sp0 - 0xd4u, t54);
            g->edx = t53;
            g->esp = sp0 - 0xacu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 10, t54, 0u, 0x10u, 2u, rd32(sp0 - 0xc4u), 1u, 4u, 1u, 1u, 6u);
            t55 = g->edx;
            wr32(sp0 - 0xb0u, 2u);
            wr32(sp0 - 0xb4u, 0x11u);
            wr32(sp0 - 0xb8u, 0u);
            t56 = rd32(esi + 8u);
            wr32(sp0 - 0xbcu, t56);
            g->edx = t55;
            g->esp = sp0 - 0xb4u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 2, t56, 0u);
            t57 = g->edx;
            wr32(sp0 - 0xb8u, 0u);
            wr32(sp0 - 0xbcu, 0x12u);
            wr32(sp0 - 0xc0u, 0u);
            t58 = rd32(esi + 8u);
            wr32(sp0 - 0xc4u, t58);
            g->edx = t57;
            g->esp = sp0 - 0xc4u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 0);
            t59 = g->edx;
            wr32(sp0 - 0xc8u, 0u);
            wr32(sp0 - 0xccu, 0xbu);
            wr32(sp0 - 0xd0u, 0u);
            t60 = rd32(esi + 8u);
            wr32(sp0 - 0xd4u, t60);
            g->edx = t59;
            g->esp = sp0 - 0xd0u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 1, t60);
            t61 = g->edx;
            wr32(sp0 - 0xd4u, 3u);
            wr32(sp0 - 0xd8u, 0xdu);
            wr32(sp0 - 0xdcu, 0u);
            t62 = rd32(esi + 8u);
            wr32(sp0 - 0xe0u, t62);
            g->edx = t61;
            g->esp = sp0 - 0xdcu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 1, t62);
            t63 = g->edx;
            wr32(sp0 - 0xe0u, 3u);
            wr32(sp0 - 0xe4u, 0xeu);
            wr32(sp0 - 0xe8u, 0u);
            t64 = rd32(esi + 8u);
            wr32(sp0 - 0xecu, t64);
            g->edx = t63;
            g->esp = sp0 - 0xecu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 0);
            t65 = g->edx;
            wr32(sp0 - 0xf0u, 0u);
            wr32(sp0 - 0xf4u, 0x18u);
            wr32(sp0 - 0xf8u, 0u);
            t66 = rd32(esi + 8u);
            wr32(sp0 - 0xfcu, t66);
            g->edx = t65;
            g->esp = sp0 - 0xfcu;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 0);
            t67 = g->edx;
            wr32(sp0 - 0x100u, 1u);
            if (rd32(esi + 0x18u) == 0u)
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
                edx = t67;
    COW_AT(102e7e2b)
                wr32(sp0 - 0x104u, 0xfu);
                wr32(sp0 - 0x108u, eax);
                g->edx = edx;
                g->esp = sp0 - 0xc8u;
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 16, eax, 0xfu, 1u, rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), 0x18u, rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), 0xeu, 3u, rd32(sp0 - 0xdcu), 0xdu, 3u, rd32(sp0 - 0xd0u), 0xbu);
                t73 = g->edx;
                wr32(sp0 - 0xccu, 7u);
                wr32(sp0 - 0xd0u, 0x19u);
                t74 = rd32(esi + 8u);
                wr32(sp0 - 0xd4u, t74);
                g->edx = t73;
                g->esp = sp0 - 0x94u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 16, t74, 0x19u, 7u, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), 0x12u, rd32(sp0 - 0xb8u), 0x11u, 2u, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), 5u, 2u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
                t75 = g->edx;
                wr32(sp0 - 0x98u, 0x7fu);
                wr32(sp0 - 0x9cu, 0x18u);
                edx = t75;
                loc_98 = 0x7fu;
                loc_9c = 0x18u;
            }
            else
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
                edx = t67;
    COW_AT(102e7dfa)
                wr32(sp0 - 0x104u, 0x1bu);
                wr32(sp0 - 0x108u, eax);
                g->edx = edx;
                g->esp = sp0 - 0xf8u;
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 4, eax, 0x1bu, 1u, rd32(sp0 - 0xfcu));
                t68 = g->edx;
                wr32(sp0 - 0xfcu, 5u);
                wr32(sp0 - 0x100u, 0x13u);
                t69 = rd32(esi + 8u);
                wr32(sp0 - 0x104u, t69);
                g->edx = t68;
                g->esp = sp0 - 0xc8u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 15, t69, 0x13u, 5u, rd32(sp0 - 0xf8u), 0x18u, rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), 0xeu, 3u, rd32(sp0 - 0xdcu), 0xdu, 3u, rd32(sp0 - 0xd0u), 0xbu);
                t70 = g->edx;
                wr32(sp0 - 0xccu, 6u);
                wr32(sp0 - 0xd0u, 0x14u);
                t71 = rd32(esi + 8u);
                wr32(sp0 - 0xd4u, t71);
                g->edx = t70;
                g->esp = sp0 - 0x94u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 16, t71, 0x14u, 6u, rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), 0x12u, rd32(sp0 - 0xb8u), 0x11u, 2u, rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), 5u, 2u, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u));
                t72 = g->edx;
                wr32(sp0 - 0x98u, 1u);
                wr32(sp0 - 0x9cu, 0xabu);
                edx = t72;
                loc_98 = 1u;
                loc_9c = 0xabu;
            }
    COW_AT(102e7e48)
            t76 = rd32(esi + 8u);
            wr32(sp0 - 0xa0u, t76);
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 16, t76, loc_9c, loc_98, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
            t77 = g->edx;
            if (rd32(sp0 + 4u) != 0u)
            {
    COW_AT(102e7f52)
                ecx = esi + 0x14u;
            }
            else
            {
                edx = t77;
    COW_AT(102e7e5d)
                wr32(sp0 - 0x64u, 0u);
                wr32(sp0 - 0x68u, 0u);
                t78 = rd32(esi + 8u);
                wr32(sp0 - 0x6cu, t78);
                g->edx = edx;
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xf4u), rd32(rd32(esi + 8u)), 3, t78, 0u, 0u);
                t79 = g->edx;
                wr32(sp0 - 0x64u, 0u);
                wr32(sp0 - 0x68u, 0u);
                wr32(sp0 - 0x6cu, 0u);
                t80 = rd32(esi + 8u);
                wr32(sp0 - 0x70u, t80);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x14cu), rd32(rd32(esi + 8u)), 4, t80, 0u, 0u, 0u);
                ecx = esi + 0x10u;
            }
    COW_AT(102e7e7d)
            wr32(sp0 - 0x64u, ecx);
            t81 = rd32(esi + 8u);
            wr32(sp0 - 0x68u, t81);
            g->edx = rd32(rd32(esi + 8u));
            t82 = rd32(rd32(esi + 8u));
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(t82 + 0xd4u), ecx, 0);
            t83 = g->edx;
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            if (rd32(sp0 + 4u) < 2u)
            {
                edx = t83;
                loc_4 = rd32(sp0 - 4u);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                goto L_102e7b4a;
            }
            edx = t83;
            loc_4 = rd32(sp0 - 4u);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_68 = rd32(sp0 - 0x68u);
        }
    COW_AT(102e7e97)
        t84 = rd32(esi + 0x10u);
        wr32(sp0 - 0x6cu, t84);
        t85 = rd32(esi + 8u);
        wr32(sp0 - 0x70u, t85);
        g->edx = edx;
        g->esp = sp0 - 0x70u;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xdcu), rd32(rd32(esi + 8u)), 0);
        t86 = g->edx;
        t87 = rd32(esi + 0x14u);
        wr32(sp0 - 0x74u, t87);
        t88 = rd32(esi + 8u);
        wr32(sp0 - 0x78u, t88);
        g->edx = t86;
        g->esp = sp0 - 0x68u;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd8u), rd32(rd32(esi + 8u)), 4, t88, t87, rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
        t89 = g->edx;
        if (rd32(esi + 0x1cu) != 0u)
        {
            edx = t89;
            loc_68 = rd32(sp0 - 0x68u);
        }
        else
        {
    COW_AT(102e7ebe)
            wr32(sp0 - 0x6cu, sp0 - 0x1cu);
            t90 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t90);
            g->esp = sp0 - 0x64u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xa4u), rd32(rd32(esi + 8u)), 3, t90, sp0 - 0x1cu, rd32(sp0 - 0x68u));
            t91 = rd32(sp0 - 0x14u);
            t92 = rd32(sp0 - 0x14u);
            d93 = (double)rdf32(COW_IMG(0x1032961cu));
            wr32(sp0 + 4u, t91);
            if ((int32_t)t92 >= 0)
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d93;
            }
            else
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d93;
    COW_AT(102e7ee1)
                x1 = fr(g, x1 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
    COW_AT(102e7ee7)
            if ((int32_t)rd32(sp0 - 0x10u) >= 0)
            {
                x2 = (double)(int32_t)rd32(sp0 - 0x10u);
                x1 = fr(g, x0 / x1);
            }
            else
            {
                x2 = (double)(int32_t)rd32(sp0 - 0x10u);
                x1 = fr(g, x0 / x1);
    COW_AT(102e7ef3)
                x2 = fr(g, x2 + (double)rdf32(COW_IMG(0x10345da4u)));
            }
    COW_AT(102e7ef9)
            wr32(sp0 - 0x68u, 0x10u);
            edi = sp0 - 0x5cu;
            eax = 0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x68u, sp0 - 0x5cu);
            wr32(sp0 - 0x6cu, 0x100u);
            t94 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t94);
            wrf32(sp0 + 4u, (float)fr(g, x0 / x2));
            d95 = (double)(float)fr(g, x1 + x1);
            wrf32(sp0 - 0x5cu, (float)d95);
            d96 = (double)(float)fr(g, -x1 - x0);
            wrf32(sp0 - 0x2cu, (float)d96);
            d97 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032c084u)));
            wrf32(sp0 - 0x48u, (float)(double)(float)d97);
            d98 = fr(g, (double)rdf32(sp0 + 4u) + x0);
            wrf32(sp0 - 0x28u, (float)(double)(float)d98);
            wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
            g->edx = sp0 - 0x5cu;
            g->esp = sp0 - 0x68u;
            cow_thiscall(g, rd32(rd32(t94) + 0x94u), rd32(t94), 2, t94, 0x100u);
            t99 = g->edx;
            edx = t99;
            loc_68 = sp0 - 0x5cu;
        }
    COW_AT(102e7f46)
        wr32(esi + 0xcu, 1u);
        eax = 0u;
        ebx = loc_68;
        loc_4 = rd32(sp0 - 4u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_64 = rd32(sp0 - 0x64u);
    }
    else
    {
    COW_AT(102e7b30)
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
        loc_4 = in_ebp;
        loc_60 = in_esi;
        loc_64 = in_edi;
    }
    COW_AT(102e7f4c)
    g->ebx = ebx;
    g->esi = loc_60;
    g->edi = loc_64;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e7b1e(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e7b30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x64u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7b3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x64u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7b47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_ebx = rd32(sp0 - 0x68u);
        in_edi = rd32(sp0 - 0x64u);
        in_esi = rd32(sp0 - 0x60u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7b4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7b7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x70u, 3u);
        wr32(sp0 - 0x6cu, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7c09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ca8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x8cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x88u, 0xa7u);
        wr32(sp0 - 0x80u, 0xa4u);
        (void)sp0;
        return 1;
    }
    case 0x102e7cf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_7c;
        uint32_t loc_80;
        uint32_t loc_88;
        uint32_t loc_98;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_98 = rd32(sp0 - 0x98u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_80 = rd32(sp0 - 0x80u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x8cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7dfau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x100u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0xf4u, 0x18u);
        wr32(sp0 - 0xe4u, 0xeu);
        wr32(sp0 - 0xe0u, 3u);
        wr32(sp0 - 0xd8u, 0xdu);
        wr32(sp0 - 0xd4u, 3u);
        wr32(sp0 - 0xccu, 0xbu);
        wr32(sp0 - 0xbcu, 0x12u);
        wr32(sp0 - 0xb4u, 0x11u);
        wr32(sp0 - 0xb0u, 2u);
        wr32(sp0 - 0xa4u, 5u);
        wr32(sp0 - 0xa0u, 2u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x8cu, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102e7e2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x100u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x100u, 1u);
        wr32(sp0 - 0xf4u, 0x18u);
        wr32(sp0 - 0xe4u, 0xeu);
        wr32(sp0 - 0xe0u, 3u);
        wr32(sp0 - 0xd8u, 0xdu);
        wr32(sp0 - 0xd4u, 3u);
        wr32(sp0 - 0xccu, 0xbu);
        wr32(sp0 - 0xbcu, 0x12u);
        wr32(sp0 - 0xb4u, 0x11u);
        wr32(sp0 - 0xb0u, 2u);
        wr32(sp0 - 0xa4u, 5u);
        wr32(sp0 - 0xa0u, 2u);
        wr32(sp0 - 0x90u, 2u);
        wr32(sp0 - 0x8cu, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102e7e48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0x9cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e5du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x60u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e7du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x60u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ebeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ee1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x64u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7ee7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x64u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7ef3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x64u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7ef9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->esp = sp0 - 0x64u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x6cu, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7f46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7f4cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_60;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x64u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e7f52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x60u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7b1e(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e7b1e(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
