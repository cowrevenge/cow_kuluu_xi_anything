/* f_0x102c5254 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5254(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c5266u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c5266;
    case 0x102c5271u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c5271;
    case 0x102c5273u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c5273;
    case 0x102c5279u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c5279;
    case 0x102c527eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c527e;
    case 0x102c5295u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c5295;
    case 0x102c5299u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c5299;
    case 0x102c52a0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c52a0;
    case 0x102c52a4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c52a4;
    case 0x102c52b1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c52b1;
    case 0x102c52b5u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c52b5;
    case 0x102c52bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); goto E_102c52bb;
    case 0x102c52c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102c52c2;
    case 0x102c52e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c52e1;
    case 0x102c52edu: ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c52ed;
    case 0x102c52ffu: ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c52ff;
    case 0x102c5305u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c5305;
    case 0x102c5312u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c5312;
    case 0x102c5319u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c5319;
    case 0x102c533cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c533c;
    case 0x102c5347u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x10u); goto E_102c5347;
    case 0x102c5366u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5366;
    case 0x102c5380u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5380;
    case 0x102c5396u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c5396;
    case 0x102c53acu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c53ac;
    case 0x102c53c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c53c2;
    case 0x102c53d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c53d8;
    case 0x102c53eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102c53ee;
    case 0x102c5404u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102c5404;
    case 0x102c5411u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c5411;
    case 0x102c541fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); goto E_102c541f;
    default: break;
    }
#endif

    COW_AT(102c5254)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5295;
    }
    eax = rd32(arg1 + 0x68u);
    COW_AT(102c5266)
    wr32(sp0 - 0x10u, COW_IMG(0x103c8c9cu));
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c8c9cu), in_edi, in_ebx);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    loc_10 = COW_IMG(0x103c8c9cu);
L_102c5271: ;
    COW_AT(102c5271)
    ecx = loc_10;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
L_102c5273: ;
    COW_AT(102c5273)
    if (rd32(sp0 + 0xcu) == 1u) goto L_102c52c2;
    COW_AT(102c5279)
    wr32(sp0 - 0x10u, COW_IMG(0x103c8c80u));
    loc_10 = COW_IMG(0x103c8c80u);
L_102c527e: ;
    COW_AT(102c527e)
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_10);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x18u, t8);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t7, 1, 5, arg1, t8, arg1, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    esi = in_esi;
L_102c541f: ;
    COW_AT(102c541f)
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5295: ;
    COW_AT(102c5295)
    if ((eax & 4u) == 0u) goto L_102c52a0;
    COW_AT(102c5299)
    wr32(sp0 - 0x10u, COW_IMG(0x103c8c68u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_edi;
    loc_10 = COW_IMG(0x103c8c68u);
    goto L_102c527e;
L_102c52a0: ;
    COW_AT(102c52a0)
    if ((eax & 2u) == 0u) goto L_102c52b1;
    COW_AT(102c52a4)
    wr32(sp0 - 0x10u, COW_IMG(0x103c8c50u));
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8c50u));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    loc_10 = COW_IMG(0x103c8c50u);
    goto L_102c5271;
L_102c52b1: ;
    COW_AT(102c52b1)
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_edi;
        goto L_102c5273;
    }
    COW_AT(102c52b5)
    if ((rd8(arg2 + 9u) & 8u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_ebx;
        loc_c = in_edi;
        goto L_102c5273;
    }
    COW_AT(102c52bb)
    wr32(sp0 - 0x10u, COW_IMG(0x103c8c38u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_edi;
    loc_10 = COW_IMG(0x103c8c38u);
    goto L_102c527e;
L_102c52c2: ;
    COW_AT(102c52c2)
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, sp0 + 7u);
    wr32(sp0 - 0x18u, arg1);
    g->eax = sp0 + 7u;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 7u, 1u, loc_c, loc_8);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    g->ecx = t10;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t11, 1, 5, arg1, 0u, arg1, sp0 + 7u, 1u);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 != 0u)
    {
        esi = in_esi;
    }
    else
    {
        ecx = t13;
        edx = t14;
    COW_AT(102c52e1)
        wr32(sp0 + 0xcu, arg1 >> 0x18u);
        if ((int32_t)(arg1 >> 0x18u) < 4)
        {
    COW_AT(102c52ff)
            if (!(rd8(arg2 + 8u) & 1u))
            {
                eax = arg1 >> 0x18u;
            }
            else
            {
    COW_AT(102c5305)
                if ((int32_t)rd32(arg2 + 0xfcu) < 45000)
                {
                    eax = rd32(arg2 + 0xfcu);
                    goto L_102c5319;
                }
                eax = rd32(arg2 + 0xfcu);
    COW_AT(102c5312)
                if ((int32_t)eax <= 46000) goto L_102c533c;
L_102c5319: ;
    COW_AT(102c5319)
                wr32(sp0 - 0x10u, COW_IMG(0x103c894cu));
                wr32(sp0 - 0x14u, arg1);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                t15 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c894cu));
                t16 = g->ecx;
                t17 = g->edx;
                t18 = rd32(arg1 + 0x234u);
                wr32(sp0 - 0x18u, t18);
                wr32(sp0 - 0x1cu, COW_IMG(0x103c8c04u));
                wr32(sp0 - 0x20u, COW_IMG(0x103d03e0u));
                g->ebx = arg1;
                g->ecx = t16;
                t19 = cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t17, 1, 5, COW_IMG(0x103d03e0u), COW_IMG(0x103c8c04u), t18, arg1, COW_IMG(0x103c894cu));
                t20 = g->ecx;
                t21 = g->edx;
                eax = t19;
                ecx = t20;
                edx = t21;
            }
L_102c533c: ;
    COW_AT(102c533c)
            wr32(sp0 - 0x10u, in_esi);
            if ((rd8(arg2 + 8u) & 4u) == 0u)
            {
                loc_10 = in_esi;
            }
            else
            {
    COW_AT(102c5347)
                t22 = rd32(arg2 + 0x100u) - 0x7a26u;
                wr32(sp0 - 0x14u, t22);
                g->eax = t22;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t23 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t22);
                t24 = g->edx;
                if ((int32_t)t23 > 1000)
                {
                    eax = t23;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t24;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t24;
    COW_AT(102c5366)
                t25 = rd32(arg2 + 0x104u) - 0x8084u;
                wr32(sp0 - 0x14u, t25);
                g->eax = t25;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t26 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t25);
                t27 = g->edx;
                if ((int32_t)t26 > 1000)
                {
                    eax = t26;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t27;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t27;
    COW_AT(102c5380)
                t28 = rd32(arg2 + 0x108u) - 0xfa00u;
                wr32(sp0 - 0x14u, t28);
                g->eax = t28;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t29 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t28);
                t30 = g->edx;
                if ((int32_t)t29 > 1000)
                {
                    eax = t29;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t30;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t30;
    COW_AT(102c5396)
                t31 = rd32(arg2 + 0x10cu) - 0x80e8u;
                wr32(sp0 - 0x14u, t31);
                g->eax = t31;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t32 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t31);
                t33 = g->edx;
                if ((int32_t)t32 > 1000)
                {
                    eax = t32;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t33;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t33;
    COW_AT(102c53ac)
                t34 = rd32(arg2 + 0x110u) - 0x7530u;
                wr32(sp0 - 0x14u, t34);
                g->eax = t34;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t35 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t34);
                t36 = g->edx;
                if ((int32_t)t35 > 1000)
                {
                    eax = t35;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t36;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t36;
    COW_AT(102c53c2)
                t37 = rd32(arg2 + 0x114u) - 0xea60u;
                wr32(sp0 - 0x14u, t37);
                g->eax = t37;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t38 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t37);
                t39 = g->edx;
                if ((int32_t)t38 > 1000)
                {
                    eax = t38;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t39;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t39;
    COW_AT(102c53d8)
                t40 = rd32(arg2 + 0x118u) - 0x3a98u;
                wr32(sp0 - 0x14u, t40);
                g->eax = t40;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t41 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t40);
                t42 = g->edx;
                if ((int32_t)t41 > 1000)
                {
                    eax = t41;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t42;
                    goto L_102c5404;
                }
                ecx = rd32(sp0 - 0x14u);
                edx = t42;
    COW_AT(102c53ee)
                t43 = rd32(arg2 + 0x11cu) - 0x1770u;
                wr32(sp0 - 0x14u, t43);
                g->eax = t43;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t44 = cow_cdecl(g, COW_IMG(0x10316d15u), 1, t43);
                t45 = g->edx;
                if ((int32_t)t44 <= 1000)
                {
                    eax = t44;
                    ecx = rd32(sp0 - 0x14u);
                    edx = t45;
                    loc_10 = rd32(sp0 - 0x10u);
                    goto L_102c5411;
                }
                eax = t44;
                ecx = rd32(sp0 - 0x14u);
                edx = t45;
L_102c5404: ;
    COW_AT(102c5404)
                wr32(sp0 - 0x14u, COW_IMG(0x103c8b48u));
                wr32(sp0 - 0x18u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t46 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8b48u));
                t47 = g->edx;
                eax = t46;
                ecx = COW_IMG(0x103c8b48u);
                edx = t47;
                loc_10 = rd32(sp0 - 0x10u);
            }
L_102c5411: ;
    COW_AT(102c5411)
            t48 = rd32(sp0 + 0xcu);
            wr32(sp0 - 0x14u, t48);
            wr32(sp0 - 0x18u, arg2);
            wr32(sp0 - 0x1cu, arg1);
            g->esp = sp0 - 8u;
            cow_thiscall_cdecl(g, COW_IMG(0x102c8522u), ecx, 5, arg1, arg2, t48, loc_10, rd32(sp0 - 0xcu));
            esi = rd32(sp0 - 0x10u);
        }
        else
        {
    COW_AT(102c52ed)
            wr32(sp0 - 0x10u, COW_IMG(0x103c8c24u));
            wr32(sp0 - 0x14u, arg1);
            g->esp = sp0 - 0xcu;
            cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c8c24u));
            esi = in_esi;
        }
    }
    goto L_102c541f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c5254(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c5266u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5271u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5273u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5279u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c527eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c5295u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5299u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c52a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c52a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c52b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c52b5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c52bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c52c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c52e1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c52edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 >> 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c52ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->eax = arg1 >> 0x18u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c5305u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c5312u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c5319u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        wr32(sp0 - 0x14u, sp0 + 7u);
        (void)sp0;
        return 1;
    }
    case 0x102c533cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5347u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5366u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5380u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5396u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c53acu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c53c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c53d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c53eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->esi = 0x3e8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5404u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c5411u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1;
        g->ebp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102c541fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5254(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c5254(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
