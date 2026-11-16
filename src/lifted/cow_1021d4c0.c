/* f_0x1021d4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1021d4c0(Guest* g)
{
    double d17;
    double d22;
    double d27;
    double d32;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    cow_frame(g, sp0, 172u);

    wr32(sp0 - 0x98u, in_esi);
    if (rd32(COW_IMG(0x10666e7cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e7cu));
        g->edx = in_edx;
        g->esp = sp0 - 0x98u;
        cow_thiscall(g, COW_IMG(0x1021d980u), ecx, 0);
        t1 = g->edx;
        g->edx = t1;
        t2 = cow_thiscall(g, COW_IMG(0x1021ddf0u), rd32(COW_IMG(0x10666e7cu)), 0);
        t3 = g->edx;
        if (t2 != 0u)
        {
            edx = t3;
            wr32(sp0 - 0x9cu, in_edi);
            g->edx = edx;
            t4 = rd32(COW_IMG(0x1045666cu));
            t5 = rd32(COW_IMG(0x10666e7cu));
            t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            t7 = rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu));
            g->esp = sp0 - 0x9cu;
            t8 = cow_thiscall(g, COW_IMG(0x1021ddf0u), t5, 0);
            t9 = g->ecx;
            t10 = g->edx;
            wr32(sp0 - 0xa0u, t8);
            wr32(sp0 - 0xa4u, 0u);
            wr32(sp0 - 0xa8u, t6);
            g->edx = t10;
            cow_thiscall(g, rd32(t7 + 0xf4u), t9, 3, t6, 0u, t8);
            t11 = g->edx;
            t12 = cow_thiscall(g, COW_IMG(0x1021ddf0u), rd32(COW_IMG(0x10666e7cu)), 0);
            wr32(sp0 - 0xa0u, sp0 - 0x20u);
            wr32(sp0 - 0xa4u, 0u);
            wr32(sp0 - 0xa8u, t12);
            g->edx = sp0 - 0x20u;
            t13 = rd32(t12);
            t14 = cow_thiscall(g, rd32(t13 + 0x38u), t13, 3, t12, 0u, sp0 - 0x20u);
            t15 = g->ecx;
            t16 = g->edx;
            if ((int32_t)t14 >= 0)
            {
                eax = t14;
                ecx = t15;
                edx = t16;
                g->ecx = ecx;
                g->edx = edx;
                d17 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) + (double)rdf32(arg5)) * (double)rdf32(arg5 + 4u));
                fpush(g, d17);
                g->esp = sp0 - 0x98u;
                t18 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t19 = g->ecx;
                t20 = g->edx;
                t21 = rd32(sp0 + 0xcu);
                wr32(sp0 + 4u, t18);
                g->ecx = t19;
                g->edx = t20;
                d22 = fr(g, fr(g, (double)(int32_t)t21 + (double)rdf32(arg5)) * (double)rdf32(arg5 + 4u));
                fpush(g, d22);
                t23 = cow_call_regs(g, COW_IMG(0x10311c6cu), t18, g->ecx, g->edx, 1, 0);
                t24 = g->ecx;
                t25 = g->edx;
                t26 = rd32(sp0 + 0x10u);
                wr32(sp0 + 0xcu, t23);
                g->ecx = t24;
                g->edx = t25;
                d27 = fr(g, fr(g, (double)(int32_t)t26 + (double)rdf32(arg5 + 8u)) * (double)rdf32(arg5 + 0xcu));
                fpush(g, d27);
                t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
                t29 = g->ecx;
                t30 = g->edx;
                t31 = rd32(sp0 + 8u);
                wr32(sp0 + 0x10u, t28);
                g->edx = t30;
                d32 = fr(g, fr(g, (double)(int32_t)t31 + (double)rdf32(arg5 + 8u)) * (double)rdf32(arg5 + 0xcu));
                fpush(g, d32);
                t33 = cow_call_regs(g, COW_IMG(0x10311c6cu), t28, g->ecx, g->edx, 1, 0);
                t34 = g->edx;
                t35 = rd32(sp0 + 4u);
                wr32(sp0 + 8u, t33);
                wr32(sp0 - 0x88u, 0u);
                wr32(sp0 - 0x84u, 0x3f800000u);
                wrf32(sp0 - 0x90u, (float)(double)(float)(double)(int32_t)t35);
                wr32(sp0 - 0x80u, 0x80808080u);
                wr32(sp0 - 0x7cu, 0u);
                wr32(sp0 - 0x78u, 0x3f800000u);
                wr32(sp0 - 0x6cu, 0u);
                d36 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
                wrf32(sp0 - 0x8cu, (float)d36);
                wr32(sp0 - 0x68u, 0x3f800000u);
                wr32(sp0 - 0x64u, 0x80808080u);
                wr32(sp0 - 0x60u, 0x3f800000u);
                wr32(sp0 - 0x5cu, 0x3f800000u);
                d37 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
                wrf32(sp0 - 0x94u, (float)d37);
                d38 = (double)(float)(double)(int32_t)rd32(sp0 + 0xcu);
                wrf32(sp0 - 0x74u, (float)d38);
                wr32(sp0 - 0x50u, 0u);
                d39 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
                wrf32(sp0 - 0x70u, (float)d39);
                wr32(sp0 - 0x3cu, cow_f2bits(d37));
                wrf32(sp0 - 0x58u, (float)(double)(float)(double)(int32_t)t35);
                wr32(sp0 - 0x4cu, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x80808080u);
                wr32(sp0 - 0x44u, 0u);
                wr32(sp0 - 0x40u, 0u);
                d40 = (double)(float)(double)(int32_t)rd32(sp0 + 0x10u);
                wrf32(sp0 - 0x54u, (float)d40);
                d41 = (double)(float)(double)(int32_t)rd32(sp0 + 0x10u);
                wrf32(sp0 - 0x38u, (float)d41);
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x30u, 0x3f800000u);
                wr32(sp0 - 0x2cu, 0x80808080u);
                wr32(sp0 - 0x28u, 0x3f800000u);
                wr32(sp0 - 0x24u, 0u);
                cow_thiscall(g, COW_IMG(0x10009920u), rd32(COW_IMG(0x1045666cu)), 0);
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, 7u);
                t42 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa4u, t42);
                cow_thiscall(g, rd32(rd32(t42) + 0xc8u), rd32(t42), 3, t42, 7u, 0u);
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, 0x1cu);
                t43 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa4u, t43);
                cow_thiscall(g, rd32(rd32(t43) + 0xc8u), rd32(t43), 3, t43, 0x1cu, 0u);
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, 0x89u);
                t44 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa4u, t44);
                cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t44, 0x89u, 0u);
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, 0x1bu);
                t45 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa4u, t45);
                cow_thiscall(g, rd32(rd32(t45) + 0xc8u), rd32(t45), 3, t45, 0x1bu, 0u);
                wr32(sp0 - 0x9cu, 2u);
                wr32(sp0 - 0xa0u, 0x10u);
                wr32(sp0 - 0xa4u, 0u);
                t46 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t46);
                cow_thiscall(g, rd32(rd32(t46) + 0xfcu), rd32(t46), 4, t46, 0u, 0x10u, 2u);
                wr32(sp0 - 0x9cu, 2u);
                wr32(sp0 - 0xa0u, 0x11u);
                wr32(sp0 - 0xa4u, 0u);
                t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t47);
                cow_thiscall(g, rd32(rd32(t47) + 0xfcu), rd32(t47), 4, t47, 0u, 0x11u, 2u);
                wr32(sp0 - 0x9cu, 2u);
                wr32(sp0 - 0xa0u, 1u);
                wr32(sp0 - 0xa4u, 0u);
                t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t48);
                cow_thiscall(g, rd32(rd32(t48) + 0xfcu), rd32(t48), 4, t48, 0u, 1u, 2u);
                wr32(sp0 - 0x9cu, 2u);
                wr32(sp0 - 0xa0u, 2u);
                wr32(sp0 - 0xa4u, 0u);
                t49 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t49);
                cow_thiscall(g, rd32(rd32(t49) + 0xfcu), rd32(t49), 4, t49, 0u, 2u, 2u);
                wr32(sp0 - 0x9cu, 2u);
                wr32(sp0 - 0xa0u, 4u);
                wr32(sp0 - 0xa4u, 0u);
                t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t50);
                cow_thiscall(g, rd32(rd32(t50) + 0xfcu), rd32(t50), 4, t50, 0u, 4u, 2u);
                wr32(sp0 - 0x9cu, 1u);
                wr32(sp0 - 0xa0u, 5u);
                wr32(sp0 - 0xa4u, 0u);
                t51 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t51);
                cow_thiscall(g, rd32(rd32(t51) + 0xfcu), rd32(t51), 4, t51, 0u, 5u, 1u);
                wr32(sp0 - 0x9cu, 1u);
                wr32(sp0 - 0xa0u, 1u);
                wr32(sp0 - 0xa4u, 1u);
                t52 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t52);
                cow_thiscall(g, rd32(rd32(t52) + 0xfcu), rd32(t52), 4, t52, 1u, 1u, 1u);
                wr32(sp0 - 0x9cu, 1u);
                wr32(sp0 - 0xa0u, 4u);
                wr32(sp0 - 0xa4u, 1u);
                t53 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa8u, t53);
                cow_thiscall(g, rd32(rd32(t53) + 0xfcu), rd32(t53), 4, t53, 1u, 4u, 1u);
                wr32(sp0 - 0x9cu, 0x144u);
                t54 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa0u, t54);
                cow_thiscall(g, rd32(rd32(t54) + 0x130u), rd32(t54), 2, t54, 0x144u);
                wr32(sp0 - 0x9cu, 0x1cu);
                wr32(sp0 - 0xa0u, sp0 - 0x90u);
                wr32(sp0 - 0xa4u, 2u);
                wr32(sp0 - 0xa8u, 5u);
                g->edx = sp0 - 0x90u;
                t55 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x90u, 0x1cu);
                t56 = g->edx;
                g->edx = t56;
                cow_thiscall(g, COW_IMG(0x10009920u), rd32(COW_IMG(0x1045666cu)), 0);
                t57 = g->edx;
                wr32(sp0 - 0x9cu, 0u);
                wr32(sp0 - 0xa0u, 0u);
                t58 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0xa4u, t58);
                cow_thiscall(g, rd32(rd32(t58) + 0xf4u), rd32(t58), 3, t58, 0u, 0u);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021d4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021d4c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
