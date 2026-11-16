/* f_0x1018c2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1018c2b0(Guest* g)
{
    double d29;
    double d34;
    double d42;
    double d46;
    double d50;
    double d63;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
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
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(COW_IMG(0x10377c6cu)) == 0u)
    {
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) == 0u)
        {
            eax = rd32(COW_IMG(0x104568fcu));
            edx = in_edx;
            goto L_1018c421;
        }
        eax = rd32(COW_IMG(0x104568fcu));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x103601bcu));
        g->esp = sp0 - 0xcu;
        t2 = cow_call_regs(g, COW_IMG(0x100d9a70u), eax, t1, g->edx, 1, 0);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            eax = t2;
            edx = t4;
            goto L_1018c421;
        }
        ecx = t3;
        edx = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t5 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        g->edx = t7;
        t8 = cow_cdecl(g, COW_IMG(0x10103a90u), 1, t5);
        t9 = g->edx;
        g->edx = t9;
        cow_thiscall(g, COW_IMG(0x1018c020u), COW_IMG(0x1065cb1cu), 1, t8);
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        t12 = cow_cdecl(g, COW_IMG(0x10103ab0u), 1, t5);
        t13 = g->edx;
        g->edx = t13;
        cow_thiscall(g, COW_IMG(0x1018bfa0u), COW_IMG(0x1065cb1cu), 1, t12);
        t14 = g->ecx;
        t15 = g->edx;
        g->edx = t15;
        t16 = cow_cdecl(g, COW_IMG(0x10103b10u), 1, t5);
        t17 = g->edx;
        g->edx = t17;
        cow_thiscall(g, COW_IMG(0x1018bf50u), COW_IMG(0x1065cb1cu), 1, t16);
        t18 = g->ecx;
        t19 = g->edx;
        t20 = cow_stdcall(g, COW_IMG(0x100dc090u), 0);
        t21 = cow_divu(g, t5, 0x90u);
        t22 = cow_modu(g, t5, 0x90u);
        t23 = t20 + t22 * 0x3e8u;
        t24 = cow_divu(g, t23, 0x960u);
        t25 = cow_modu(g, t23, 0x960u);
        g->eax = t24;
        g->edx = t25;
        t26 = cow_thiscall(g, COW_IMG(0x1018bf00u), COW_IMG(0x1065cb1cu), 1, t24);
        t27 = g->ecx;
        t28 = g->edx;
        g->edx = t28;
        d29 = fr(g, (double)(int64_t)cow_i64(t25, 0u) * (double)rdf32(COW_IMG(0x1032b160u)));
        fpush(g, d29);
        t30 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
        t31 = g->edx;
        cow_thiscall(g, COW_IMG(0x1018beb0u), COW_IMG(0x1065cb1cu), 1, t30);
        t32 = cow_divu(g, t23, 0x28u);
        t33 = cow_modu(g, t23, 0x28u);
        g->edx = t33;
        d34 = fr(g, (double)(int64_t)cow_i64(t33, 0u) * (double)rdf32(COW_IMG(0x1032b160u)));
        fpush(g, d34);
        t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), t32, g->ecx, g->edx, 1, 0);
        t36 = g->edx;
        g->edx = t36;
        cow_thiscall(g, COW_IMG(0x1018be80u), COW_IMG(0x1065cb1cu), 1, t35);
        t37 = g->ecx;
        t38 = g->edx;
        t39 = cow_stdcall(g, COW_IMG(0x100dc090u), 0);
        t40 = cow_divs(g, t5, 0xd80u);
        t41 = cow_mods(g, t5, 0xd80u);
        d42 = fr(g, (double)(int64_t)cow_i64(t39, 0u) + fr(g, (double)(int32_t)t41 * (double)rdf32(COW_IMG(0x10329cd8u))));
        fpush(g, d42);
        t43 = cow_call_regs(g, COW_IMG(0x10311c6cu), t40, g->ecx, g->edx, 1, 0);
        t44 = cow_divs(g, t43, 0x34bc00u);
        t45 = cow_mods(g, t43, 0x34bc00u);
        d46 = fr(g, (double)(int32_t)t45 * (double)rdf32(COW_IMG(0x10336864u)));
        fpush(g, d46);
        t47 = cow_call_regs(g, COW_IMG(0x10311c6cu), t44, g->ecx, g->edx, 1, 0);
        t48 = cow_divs(g, t47, 0x15180u);
        t49 = cow_mods(g, t47, 0x15180u);
        d50 = fr(g, (double)(int32_t)t49 * (double)rdf32(COW_IMG(0x10336860u)));
        wrf32(COW_IMG(0x1065cb14u), (float)d50);
        edx = t49;
        ebx = 1u;
    }
L_1018c42b: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_thiscall(g, COW_IMG(0x1018bd00u), COW_IMG(0x1065cb1cu), 0);
    t53 = g->edx;
    g->edx = t53;
    cow_thiscall(g, COW_IMG(0x1018bf50u), COW_IMG(0x1065cb18u), 1, t52);
    t54 = g->edx;
    g->edx = t54;
    t55 = cow_thiscall(g, COW_IMG(0x1018bcd0u), COW_IMG(0x1065cb1cu), 0);
    t56 = g->edx;
    g->edx = t56;
    cow_thiscall(g, COW_IMG(0x1018bf00u), COW_IMG(0x1065cb18u), 1, t55);
    t57 = g->edx;
    g->edx = t57;
    t58 = cow_thiscall(g, COW_IMG(0x1018bca0u), COW_IMG(0x1065cb1cu), 0);
    t59 = g->edx;
    g->edx = t59;
    cow_thiscall(g, COW_IMG(0x1018beb0u), COW_IMG(0x1065cb18u), 1, t58);
    t60 = g->edx;
    g->edx = t60;
    t61 = cow_thiscall(g, COW_IMG(0x1018bc90u), COW_IMG(0x1065cb1cu), 0);
    t62 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018be80u), COW_IMG(0x1065cb18u), 1, t61);
    if ((uint8_t)ebx == 0u)
    {
        d63 = fr(g, (double)(int32_t)rd32(COW_IMG(0x1065cb18u)) * (double)rdf32(COW_IMG(0x103367d0u)));
        wrf32(COW_IMG(0x1065cb14u), (float)d63);
    }
    t64 = rd32(COW_IMG(0x1065cb1cu)) - rd32(COW_IMG(0x1065cb10u));
    t65 = rd32(COW_IMG(0x1065cb1cu));
    t66 = rd32(COW_IMG(0x1065cb10u));
    wr32(COW_IMG(0x1065cb0cu), t64);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018bc40u), COW_IMG(0x1065cb10u), 1, t65);
    return;
L_1018c421: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1018c270u), COW_IMG(0x1065cb1cu), 0);
    t51 = g->edx;
    edx = t51;
    ebx = in_ebx & 0xffffff00u;
    goto L_1018c42b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1018c2b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
