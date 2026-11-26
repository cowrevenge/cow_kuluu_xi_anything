/* f_0x102e7b1e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
/* COW_FRAME_ANSWER 0 of 16 */
uint32_t cow_fn_102e7b1e(Guest* g)
{
    double d104;
    double d106;
    double d107;
    double d108;
    double d109;
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
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t105;
    uint32_t t11;
    uint32_t t110;
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
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
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
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e7b30u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b30;
    case 0x102e7b3au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b3a;
    case 0x102e7b47u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_ebx = rd32(sp0 - 0x68u); in_edi = rd32(sp0 - 0x64u); in_esi = rd32(sp0 - 0x60u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x64u); g->esi = rd32(sp0 - 0x60u); goto E_102e7b47;
    case 0x102e7b4au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7b4a;
    case 0x102e7b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7b56;
    case 0x102e7b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7b72;
    case 0x102e7b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7b7b;
    case 0x102e7bddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7bdd;
    case 0x102e7befu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7bef;
    case 0x102e7bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7bf4;
    case 0x102e7c09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c09;
    case 0x102e7c18u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c18;
    case 0x102e7c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c28;
    case 0x102e7c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c37;
    case 0x102e7c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c49;
    case 0x102e7c5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c5b;
    case 0x102e7c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c6d;
    case 0x102e7c7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c7f;
    case 0x102e7c91u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7c91;
    case 0x102e7ca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7ca3;
    case 0x102e7ca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7ca8;
    case 0x102e7cb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7cb7;
    case 0x102e7cc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7cc6;
    case 0x102e7cd5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7cd5;
    case 0x102e7ce7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7ce7;
    case 0x102e7cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7cf9;
    case 0x102e7d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7d09;
    case 0x102e7d1au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d1a;
    case 0x102e7d2au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d2a;
    case 0x102e7d3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d3b;
    case 0x102e7d4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d4c;
    case 0x102e7d5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d5c;
    case 0x102e7d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7d6b;
    case 0x102e7d7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d7b;
    case 0x102e7d8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d8c;
    case 0x102e7d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7d9d;
    case 0x102e7dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7dad;
    case 0x102e7dbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7dbd;
    case 0x102e7dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7dce;
    case 0x102e7ddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7ddf;
    case 0x102e7defu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7def;
    case 0x102e7dfau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7dfa;
    case 0x102e7e03u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7e03;
    case 0x102e7e13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_102e7e13;
    case 0x102e7e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_102e7e23;
    case 0x102e7e2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7e2b;
    case 0x102e7e34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7e34;
    case 0x102e7e44u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_102e7e44;
    case 0x102e7e48u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); goto E_102e7e48;
    case 0x102e7e54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e54;
    case 0x102e7e5du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e5d;
    case 0x102e7e6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e6b;
    case 0x102e7e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e7a;
    case 0x102e7e7du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e7d;
    case 0x102e7e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7e8a;
    case 0x102e7e97u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7e97;
    case 0x102e7ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7ea6;
    case 0x102e7eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7eb5;
    case 0x102e7ebeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e7ebe;
    case 0x102e7eceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102e7ece;
    case 0x102e7ee1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102e7ee1;
    case 0x102e7ee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_102e7ee7;
    case 0x102e7ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102e7ef3;
    case 0x102e7ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; goto E_102e7ef9;
    case 0x102e7f46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); goto E_102e7f46;
    case 0x102e7f4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_4 = rd32(sp0 - 4u); goto E_102e7f4c;
    case 0x102e7f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102e7f52;
    default: break;
    }
#endif

    COW_AT(102e7b1e)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0xcu);
    if (t1 == 0u)
    {
        esi = rd32(sp0 + 4u);
    COW_AT(102e7b3a)
        wr32(sp0 - 0x68u, in_ebx);
        t2 = rd32(esi + 0x10u);
        if (t2 != 0u)
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
            t3 = rd32(esi + 8u);
            wr32(sp0 - 0x6cu, t3);
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7b56u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd0u), rd32(rd32(esi + 8u)), 1, t3);
    COW_AT(102e7b56)
            t4 = rd32(esi + 0x1cu);
            t5 = (t4 != 0u) * 2u + 0x142u;
            wr32(sp0 - 0x6cu, t5);
            t6 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t6);
            g->edx = t5;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7b72u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x130u), rd32(rd32(esi + 8u)), 2, t6, t5);
            t7 = g->edx;
            edx = t7;
    COW_AT(102e7b72)
            t8 = rd32(esi + 0x1cu);
            if (t8 == 0u)
            {
    COW_AT(102e7b7b)
                wrf32(sp0 - 0x24u, (float)(double)(float)0.0);
                wr32(sp0 - 0x6cu, sp0 - 0x5cu);
                wrf32(sp0 - 0x28u, (float)(double)(float)0.0);
                wr32(sp0 - 0x70u, 2u);
                t9 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t9);
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
                COW_RET(0x102e7bddu);
                cow_thiscall(g, rd32(rd32(t9) + 0x94u), rd32(t9), 3, t9, 2u, sp0 - 0x5cu);
    COW_AT(102e7bdd)
                wr32(sp0 - 0x6cu, sp0 - 0x5cu);
                wr32(sp0 - 0x70u, 3u);
                t10 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t10);
                g->edx = sp0 - 0x5cu;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7befu);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 3, t10, 3u, sp0 - 0x5cu);
                t11 = g->edx;
                edx = t11;
    COW_AT(102e7bef)
                t12 = rd32(sp0 + 4u);
                if (t12 == 0u)
                {
    COW_AT(102e7bf4)
                    wr32(sp0 - 0x6cu, sp0 - 0x5cu);
                    wr32(sp0 - 0x70u, 0x100u);
                    t13 = rd32(esi + 8u);
                    wr32(sp0 - 0x74u, t13);
                    g->edx = sp0 - 0x5cu;
                    g->esp = sp0 - 0x68u;
                    COW_RET(0x102e7c09u);
                    cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x94u), rd32(rd32(esi + 8u)), 3, t13, 0x100u, sp0 - 0x5cu);
                    t14 = g->edx;
                    edx = t14;
                }
            }
    COW_AT(102e7c09)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 7u);
            t15 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t15);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c18u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t15, 7u, 0u);
            t16 = g->edx;
            edx = t16;
    COW_AT(102e7c18)
            wr32(sp0 - 0x6cu, 3u);
            wr32(sp0 - 0x70u, 8u);
            t17 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t17);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c28u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t17, 8u, 3u);
            t18 = g->edx;
            edx = t18;
    COW_AT(102e7c28)
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 0x16u);
            t19 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t19);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c37u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t19, 0x16u, 1u);
            t20 = g->edx;
            edx = t20;
    COW_AT(102e7c37)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0x80u);
            t21 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t21);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c49u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t21, 0x80u, 0u);
            t22 = g->edx;
            edx = t22;
    COW_AT(102e7c49)
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 0x88u);
            t23 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t23);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c5bu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t23, 0x88u, 1u);
            t24 = g->edx;
            edx = t24;
    COW_AT(102e7c5b)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0x97u);
            t25 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t25);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c6du);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t25, 0x97u, 0u);
            t26 = g->edx;
            edx = t26;
    COW_AT(102e7c6d)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0x98u);
            t27 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t27);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c7fu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t27, 0x98u, 0u);
            t28 = g->edx;
            edx = t28;
    COW_AT(102e7c7f)
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 0xa4u);
            t29 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t29);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7c91u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t29, 0xa4u, 1u);
            t30 = g->edx;
            edx = t30;
    COW_AT(102e7c91)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0xa7u);
            t31 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t31);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7ca3u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t31, 0xa7u, 0u);
            t32 = g->edx;
            edx = t32;
    COW_AT(102e7ca3)
            t33 = rd32(esi + 0x1cu);
            if (t33 == 0u)
            {
    COW_AT(102e7ca8)
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0x1cu);
                t34 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t34);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7cb7u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t34, 0x1cu, 0u);
                t35 = g->edx;
                edx = t35;
    COW_AT(102e7cb7)
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0x1du);
                t36 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t36);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7cc6u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t36, 0x1du, 0u);
                t37 = g->edx;
                edx = t37;
    COW_AT(102e7cc6)
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0x34u);
                t38 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t38);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7cd5u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t38, 0x34u, 0u);
                t39 = g->edx;
                edx = t39;
    COW_AT(102e7cd5)
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x70u, 0x89u);
                t40 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t40);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7ce7u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t40, 0x89u, 0u);
                t41 = g->edx;
                edx = t41;
    COW_AT(102e7ce7)
                wr32(sp0 - 0x6cu, 1u);
                wr32(sp0 - 0x70u, 0x91u);
                t42 = rd32(esi + 8u);
                wr32(sp0 - 0x74u, t42);
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                COW_RET(0x102e7cf9u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t42, 0x91u, 1u);
                t43 = g->edx;
                edx = t43;
            }
    COW_AT(102e7cf9)
            wr32(sp0 - 0x6cu, 4u);
            wr32(sp0 - 0x70u, 1u);
            wr32(sp0 - 0x74u, 0u);
            t44 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t44);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d09u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t44, 0u, 1u, 4u);
            t45 = g->edx;
            edx = t45;
    COW_AT(102e7d09)
            wr32(sp0 - 0x6cu, 2u);
            wr32(sp0 - 0x70u, 2u);
            wr32(sp0 - 0x74u, 0u);
            t46 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t46);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d1au);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t46, 0u, 2u, 2u);
            t47 = g->edx;
            edx = t47;
    COW_AT(102e7d1a)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 3u);
            wr32(sp0 - 0x74u, 0u);
            t48 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t48);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d2au);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t48, 0u, 3u, 0u);
            t49 = g->edx;
            edx = t49;
    COW_AT(102e7d2a)
            wr32(sp0 - 0x6cu, 4u);
            wr32(sp0 - 0x70u, 4u);
            wr32(sp0 - 0x74u, 0u);
            t50 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t50);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d3bu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t50, 0u, 4u, 4u);
            t51 = g->edx;
            edx = t51;
    COW_AT(102e7d3b)
            wr32(sp0 - 0x6cu, 2u);
            wr32(sp0 - 0x70u, 5u);
            wr32(sp0 - 0x74u, 0u);
            t52 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t52);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d4cu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t52, 0u, 5u, 2u);
            t53 = g->edx;
            edx = t53;
    COW_AT(102e7d4c)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 6u);
            wr32(sp0 - 0x74u, 0u);
            t54 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t54);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d5cu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t54, 0u, 6u, 0u);
            t55 = g->edx;
            edx = t55;
    COW_AT(102e7d5c)
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 1u);
            wr32(sp0 - 0x74u, 1u);
            t56 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t56);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d6bu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t56, 1u, 1u, 1u);
            t57 = g->edx;
            edx = t57;
    COW_AT(102e7d6b)
            wr32(sp0 - 0x6cu, 1u);
            wr32(sp0 - 0x70u, 4u);
            wr32(sp0 - 0x74u, 1u);
            t58 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t58);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d7bu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t58, 1u, 4u, 1u);
            t59 = g->edx;
            edx = t59;
    COW_AT(102e7d7b)
            wr32(sp0 - 0x6cu, 2u);
            wr32(sp0 - 0x70u, 0x10u);
            wr32(sp0 - 0x74u, 0u);
            t60 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t60);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d8cu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t60, 0u, 0x10u, 2u);
            t61 = g->edx;
            edx = t61;
    COW_AT(102e7d8c)
            wr32(sp0 - 0x6cu, 2u);
            wr32(sp0 - 0x70u, 0x11u);
            wr32(sp0 - 0x74u, 0u);
            t62 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t62);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7d9du);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t62, 0u, 0x11u, 2u);
            t63 = g->edx;
            edx = t63;
    COW_AT(102e7d9d)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0x12u);
            wr32(sp0 - 0x74u, 0u);
            t64 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t64);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7dadu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t64, 0u, 0x12u, 0u);
            t65 = g->edx;
            edx = t65;
    COW_AT(102e7dad)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0xbu);
            wr32(sp0 - 0x74u, 0u);
            t66 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t66);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7dbdu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t66, 0u, 0xbu, 0u);
            t67 = g->edx;
            edx = t67;
    COW_AT(102e7dbd)
            wr32(sp0 - 0x6cu, 3u);
            wr32(sp0 - 0x70u, 0xdu);
            wr32(sp0 - 0x74u, 0u);
            t68 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t68);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7dceu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t68, 0u, 0xdu, 3u);
            t69 = g->edx;
            edx = t69;
    COW_AT(102e7dce)
            wr32(sp0 - 0x6cu, 3u);
            wr32(sp0 - 0x70u, 0xeu);
            wr32(sp0 - 0x74u, 0u);
            t70 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t70);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7ddfu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t70, 0u, 0xeu, 3u);
            t71 = g->edx;
            edx = t71;
    COW_AT(102e7ddf)
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0x18u);
            wr32(sp0 - 0x74u, 0u);
            t72 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t72);
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7defu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xfcu), rd32(rd32(esi + 8u)), 4, t72, 0u, 0x18u, 0u);
            t73 = g->edx;
            edx = t73;
    COW_AT(102e7def)
            t74 = rd32(esi + 0x18u);
            wr32(sp0 - 0x6cu, 1u);
            if (t74 == 0u)
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
    COW_AT(102e7e2b)
                wr32(sp0 - 0x70u, 0xfu);
                wr32(sp0 - 0x74u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x6cu;
                COW_RET(0x102e7e34u);
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 2, eax, 0xfu);
                t80 = g->edx;
                edx = t80;
    COW_AT(102e7e34)
                wr32(sp0 - 0x70u, 7u);
                wr32(sp0 - 0x74u, 0x19u);
                t81 = rd32(esi + 8u);
                wr32(sp0 - 0x78u, t81);
                g->edx = edx;
                g->esp = sp0 - 0x6cu;
                COW_RET(0x102e7e44u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t81, 0x19u, 7u);
                t82 = g->edx;
                edx = t82;
    COW_AT(102e7e44)
                wr32(sp0 - 0x70u, 0x7fu);
                wr32(sp0 - 0x74u, 0x18u);
                loc_70 = 0x7fu;
                loc_74 = 0x18u;
            }
            else
            {
                eax = rd32(esi + 8u);
                ecx = rd32(rd32(esi + 8u));
    COW_AT(102e7dfa)
                wr32(sp0 - 0x70u, 0x1bu);
                wr32(sp0 - 0x74u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x6cu;
                COW_RET(0x102e7e03u);
                cow_thiscall(g, rd32(ecx + 0xc8u), ecx, 2, eax, 0x1bu);
                t75 = g->edx;
                edx = t75;
    COW_AT(102e7e03)
                wr32(sp0 - 0x70u, 5u);
                wr32(sp0 - 0x74u, 0x13u);
                t76 = rd32(esi + 8u);
                wr32(sp0 - 0x78u, t76);
                g->edx = edx;
                g->esp = sp0 - 0x6cu;
                COW_RET(0x102e7e13u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t76, 0x13u, 5u);
                t77 = g->edx;
                edx = t77;
    COW_AT(102e7e13)
                wr32(sp0 - 0x70u, 6u);
                wr32(sp0 - 0x74u, 0x14u);
                t78 = rd32(esi + 8u);
                wr32(sp0 - 0x78u, t78);
                g->edx = edx;
                g->esp = sp0 - 0x6cu;
                COW_RET(0x102e7e23u);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 3, t78, 0x14u, 6u);
                t79 = g->edx;
                edx = t79;
    COW_AT(102e7e23)
                wr32(sp0 - 0x70u, 1u);
                wr32(sp0 - 0x74u, 0xabu);
                loc_70 = 1u;
                loc_74 = 0xabu;
            }
    COW_AT(102e7e48)
            t83 = rd32(esi + 8u);
            wr32(sp0 - 0x78u, t83);
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            COW_RET(0x102e7e54u);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xc8u), rd32(rd32(esi + 8u)), 1, t83);
            t84 = g->edx;
            edx = t84;
    COW_AT(102e7e54)
            t85 = rd32(sp0 + 4u);
            if (t85 != 0u)
            {
    COW_AT(102e7f52)
                ecx = esi + 0x14u;
            }
            else
            {
    COW_AT(102e7e5d)
                wr32(sp0 - 0x78u, 0u);
                wr32(sp0 - 0x7cu, 0u);
                t86 = rd32(esi + 8u);
                wr32(sp0 - 0x80u, t86);
                g->edx = edx;
                g->esp = sp0 - 0x74u;
                COW_RET(0x102e7e6bu);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xf4u), rd32(rd32(esi + 8u)), 3, t86, 0u, 0u);
                t87 = g->edx;
                edx = t87;
    COW_AT(102e7e6b)
                wr32(sp0 - 0x78u, 0u);
                wr32(sp0 - 0x7cu, 0u);
                wr32(sp0 - 0x80u, 0u);
                t88 = rd32(esi + 8u);
                wr32(sp0 - 0x84u, t88);
                g->esp = sp0 - 0x74u;
                COW_RET(0x102e7e7au);
                cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x14cu), rd32(rd32(esi + 8u)), 4, t88, 0u, 0u, 0u);
    COW_AT(102e7e7a)
                ecx = esi + 0x10u;
            }
    COW_AT(102e7e7d)
            wr32(sp0 - 0x78u, ecx);
            t89 = rd32(esi + 8u);
            wr32(sp0 - 0x7cu, t89);
            g->edx = rd32(rd32(esi + 8u));
            t90 = rd32(rd32(esi + 8u));
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7e8au);
            cow_thiscall(g, rd32(t90 + 0xd4u), ecx, 5, t89, ecx, rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu));
            t91 = g->edx;
            edx = t91;
    COW_AT(102e7e8a)
            t92 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t92 + 1u);
            t93 = rd32(sp0 + 4u);
            if (t93 < 2u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_60 = rd32(sp0 - 0x60u);
                loc_64 = rd32(sp0 - 0x64u);
                loc_68 = rd32(sp0 - 0x68u);
                goto L_102e7b4a;
            }
            loc_4 = rd32(sp0 - 4u);
            loc_60 = rd32(sp0 - 0x60u);
            loc_64 = rd32(sp0 - 0x64u);
            loc_68 = rd32(sp0 - 0x68u);
        }
    COW_AT(102e7e97)
        t94 = rd32(esi + 0x10u);
        wr32(sp0 - 0x6cu, t94);
        t95 = rd32(esi + 8u);
        wr32(sp0 - 0x70u, t95);
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        COW_RET(0x102e7ea6u);
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xdcu), rd32(rd32(esi + 8u)), 2, t95, t94);
        t96 = g->edx;
        edx = t96;
    COW_AT(102e7ea6)
        t97 = rd32(esi + 0x14u);
        wr32(sp0 - 0x6cu, t97);
        t98 = rd32(esi + 8u);
        wr32(sp0 - 0x70u, t98);
        g->edx = edx;
        g->esp = sp0 - 0x68u;
        COW_RET(0x102e7eb5u);
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd8u), rd32(rd32(esi + 8u)), 2, t98, t97);
        t99 = g->edx;
        edx = t99;
    COW_AT(102e7eb5)
        t100 = rd32(esi + 0x1cu);
        if (t100 == 0u)
        {
    COW_AT(102e7ebe)
            wr32(sp0 - 0x6cu, sp0 - 0x1cu);
            t101 = rd32(esi + 8u);
            wr32(sp0 - 0x70u, t101);
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7eceu);
            cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xa4u), rd32(rd32(esi + 8u)), 2, t101, sp0 - 0x1cu);
    COW_AT(102e7ece)
            t102 = rd32(sp0 - 0x14u);
            t103 = rd32(sp0 - 0x14u);
            d104 = (double)rdf32(COW_IMG(0x1032961cu));
            wr32(sp0 + 4u, t102);
            if ((int32_t)t103 >= 0)
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d104;
            }
            else
            {
                x1 = (double)(int32_t)rd32(sp0 + 4u);
                x0 = d104;
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
            wr32(sp0 - 0x6cu, 0x10u);
            edi = sp0 - 0x5cu;
            eax = 0u;
            ecx = 0x10u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x6cu, sp0 - 0x5cu);
            wr32(sp0 - 0x70u, 0x100u);
            t105 = rd32(esi + 8u);
            wr32(sp0 - 0x74u, t105);
            wrf32(sp0 + 4u, (float)fr(g, x0 / x2));
            d106 = (double)(float)fr(g, x1 + x1);
            wrf32(sp0 - 0x5cu, (float)d106);
            d107 = (double)(float)fr(g, -x1 - x0);
            wrf32(sp0 - 0x2cu, (float)d107);
            d108 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032c084u)));
            wrf32(sp0 - 0x48u, (float)(double)(float)d108);
            d109 = fr(g, (double)rdf32(sp0 + 4u) + x0);
            wrf32(sp0 - 0x28u, (float)(double)(float)d109);
            wrf32(sp0 - 0x20u, (float)(double)(float)1.0);
            g->edx = sp0 - 0x5cu;
            g->esp = sp0 - 0x68u;
            COW_RET(0x102e7f46u);
            cow_thiscall(g, rd32(rd32(t105) + 0x94u), rd32(t105), 3, t105, 0x100u, sp0 - 0x5cu);
            t110 = g->edx;
            edx = t110;
        }
    COW_AT(102e7f46)
        wr32(esi + 0xcu, 1u);
        eax = 0u;
        ebx = rd32(sp0 - 0x68u);
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
    case 0x102e7b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7b72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7bddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x6cu, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7befu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x6cu, sp0 - 0x5cu);
        (void)sp0;
        return 1;
    }
    case 0x102e7bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
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
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c7fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7c91u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ca3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
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
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7cb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7cc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7cd5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ce7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d8cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7d9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7dadu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7dbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7dceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7ddfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7defu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x68u;
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
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x6cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e7e03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e13u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        wr32(sp0 - 0x6cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e7e34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e44u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x6cu;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e48u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_70;
        uint32_t loc_74;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        g->esp = sp0 - 0x74u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x74u;
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
        g->esp = sp0 - 0x74u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e6bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x74u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e7au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x74u;
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
        g->esp = sp0 - 0x74u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7e8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
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
    case 0x102e7ea6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x68u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102e7eb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
    case 0x102e7eceu:
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
        wr32(sp0 - 0x6cu, sp0 - 0x1cu);
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
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x68u;
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
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x68u;
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
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x68u;
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
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x68u;
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
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
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
        g->esp = sp0 - 0x74u;
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
