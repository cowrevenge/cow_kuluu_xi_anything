/* f_0x10189490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10189490(Guest* g)
{
    double d19;
    double d23;
    double d27;
    double d40;
    double d44;
    double d48;
    uint32_t eax;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x78u, in_ebx);
    wr32(sp0 - 0x7cu, in_ebp);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, in_edi);
    wr32(sp0 - 0x88u, arg3);
    wr32(sp0 - 0x8cu, arg2 + 0xcu);
    t1 = (((rd32(arg1) | rd32(arg2)) ^ rd32(self)) & 1u) ^ rd32(self);
    wr32(self, t1);
    wr32(sp0 - 0x90u, arg1 + 0xcu);
    g->eax = arg1 + 0xcu;
    g->esp = sp0 - 0x84u;
    t2 = cow_thiscall(g, COW_IMG(0x101898e0u), self + 0xcu, 3, arg1 + 0xcu, arg2 + 0xcu, arg3);
    wr32(sp0 - 0x88u, arg3);
    wr32(sp0 - 0x8cu, arg2 + 0x2cu);
    wr32(sp0 - 0x90u, arg1 + 0x2cu);
    g->edx = arg1 + 0x2cu;
    t3 = cow_thiscall(g, COW_IMG(0x101898e0u), self + 0x2cu, 3, arg1 + 0x2cu, arg2 + 0x2cu, arg3);
    t4 = g->edx;
    if (!(rd8(self) & 1u))
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        t5 = (uint32_t)(int8_t)rd8(arg2 + 0x30u);
        wr32(sp0 - 0x74u, t5);
        wrf32(sp0 - 0x70u, (float)(double)(float)(double)(int32_t)t5);
        t6 = (uint32_t)(int8_t)rd8(arg2 + 0x31u);
        wr32(sp0 - 0x74u, t6);
        wr32(sp0 - 0x88u, sp0 - 0x70u);
        t7 = (uint32_t)(int8_t)rd8(arg2 + 0x32u);
        wr32(sp0 - 0x74u, t7);
        wrf32(sp0 - 0x6cu, (float)(double)(float)(double)(int32_t)t6);
        wrf32(sp0 - 0x68u, (float)(double)(float)(double)(int32_t)t7);
        g->esp = sp0 - 0x84u;
        cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x70u, g->ecx, g->edx, 1, 1, sp0 - 0x70u);
        t8 = (uint32_t)(int8_t)rd8(arg1 + 0x30u);
        wr32(sp0 - 0x74u, t8);
        wrf32(sp0 - 0x60u, (float)(double)(float)(double)(int32_t)t8);
        t9 = (uint32_t)(int8_t)rd8(arg1 + 0x31u);
        wr32(sp0 - 0x74u, t9);
        wr32(sp0 - 0x8cu, sp0 - 0x60u);
        t10 = (uint32_t)(int8_t)rd8(arg1 + 0x32u);
        wr32(sp0 - 0x74u, t10);
        wrf32(sp0 - 0x5cu, (float)(double)(float)(double)(int32_t)t9);
        wrf32(sp0 - 0x58u, (float)(double)(float)(double)(int32_t)t10);
        g->edx = t9;
        g->esp = sp0 - 0x88u;
        cow_call_regs(g, COW_IMG(0x100274b0u), t10, g->ecx, g->edx, 1, 1, sp0 - 0x60u);
        t11 = g->edx;
        g->esp = sp0 - 0x84u;
        cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x50u, 0);
        wr32(sp0 - 0x88u, arg3);
        wr32(sp0 - 0x8cu, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x70u);
        g->edx = sp0 - 0x60u;
        cow_thiscall(g, COW_IMG(0x10033360u), sp0 - 0x50u, 3, sp0 - 0x70u, sp0 - 0x60u, arg3);
        t12 = g->edx;
        g->edx = t12;
        t13 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
        t14 = g->edx;
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        t15 = cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0x50u, 1, sp0 - 0x40u);
        wr32(sp0 - 0x88u, sp0 - 0x70u);
        g->edx = sp0 - 0x70u;
        t16 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x70u);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        g->edx = t18;
        d19 = fr(g, (double)rdf32(sp0 - 0x70u) * (double)rdf32(COW_IMG(0x1032a34cu)));
        fpush(g, d19);
        t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        d23 = fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(COW_IMG(0x1032a34cu)));
        wr8(self + 0x30u, (uint8_t)t20);
        g->ecx = t21;
        g->edx = t22;
        fpush(g, d23);
        t24 = cow_call_regs(g, COW_IMG(0x10311c6cu), t20, g->ecx, g->edx, 1, 0);
        t25 = g->ecx;
        t26 = g->edx;
        d27 = fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(COW_IMG(0x1032a34cu)));
        wr8(self + 0x31u, (uint8_t)t24);
        fpush(g, d27);
        t28 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
        wr8(self + 0x32u, (uint8_t)t28);
        t29 = (uint32_t)(int8_t)rd8(arg2 + 0x10u);
        wr32(sp0 - 0x74u, t29);
        wrf32(sp0 - 0x70u, (float)(double)(float)(double)(int32_t)t29);
        t30 = (uint32_t)(int8_t)rd8(arg2 + 0x11u);
        wr32(sp0 - 0x74u, t30);
        wr32(sp0 - 0x88u, sp0 - 0x70u);
        t31 = (uint32_t)(int8_t)rd8(arg2 + 0x12u);
        wr32(sp0 - 0x74u, t31);
        wrf32(sp0 - 0x6cu, (float)(double)(float)(double)(int32_t)t30);
        wrf32(sp0 - 0x68u, (float)(double)(float)(double)(int32_t)t31);
        cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x70u, g->ecx, g->edx, 1, 1, sp0 - 0x70u);
        t32 = (uint32_t)(int8_t)rd8(arg1 + 0x10u);
        wr32(sp0 - 0x74u, t32);
        wrf32(sp0 - 0x60u, (float)(double)(float)(double)(int32_t)t32);
        t33 = (uint32_t)(int8_t)rd8(arg1 + 0x11u);
        wr32(sp0 - 0x74u, t33);
        t34 = (uint32_t)(int8_t)rd8(arg1 + 0x12u);
        wr32(sp0 - 0x74u, t34);
        wr32(sp0 - 0x8cu, sp0 - 0x60u);
        wrf32(sp0 - 0x5cu, (float)(double)(float)(double)(int32_t)t33);
        wrf32(sp0 - 0x58u, (float)(double)(float)(double)(int32_t)t34);
        g->esp = sp0 - 0x88u;
        cow_call_regs(g, COW_IMG(0x100274b0u), t34, g->ecx, g->edx, 1, 1, sp0 - 0x60u);
        wr32(sp0 - 0x88u, arg3);
        wr32(sp0 - 0x8cu, sp0 - 0x60u);
        wr32(sp0 - 0x90u, sp0 - 0x70u);
        g->eax = sp0 - 0x60u;
        g->esp = sp0 - 0x84u;
        t35 = cow_thiscall(g, COW_IMG(0x10033360u), sp0 - 0x50u, 3, sp0 - 0x70u, sp0 - 0x60u, arg3);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        g->edx = sp0 - 0x40u;
        cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0x50u, 1, sp0 - 0x40u);
        t36 = g->edx;
        wr32(sp0 - 0x88u, sp0 - 0x70u);
        g->eax = sp0 - 0x70u;
        g->edx = t36;
        t37 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x70u);
        t38 = g->ecx;
        t39 = g->edx;
        g->ecx = t38;
        g->edx = t39;
        d40 = fr(g, (double)rdf32(sp0 - 0x70u) * (double)rdf32(COW_IMG(0x1032a34cu)));
        fpush(g, d40);
        t41 = cow_call_regs(g, COW_IMG(0x10311c6cu), t37, g->ecx, g->edx, 1, 0);
        t42 = g->ecx;
        t43 = g->edx;
        d44 = fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(COW_IMG(0x1032a34cu)));
        wr8(self + 0x10u, (uint8_t)t41);
        g->ecx = t42;
        g->edx = t43;
        fpush(g, d44);
        t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), t41, g->ecx, g->edx, 1, 0);
        t46 = g->ecx;
        t47 = g->edx;
        d48 = fr(g, (double)rdf32(sp0 - 0x68u) * (double)rdf32(COW_IMG(0x1032a34cu)));
        wr8(self + 0x11u, (uint8_t)t45);
        g->edx = t47;
        fpush(g, d48);
        t49 = cow_call_regs(g, COW_IMG(0x10311c6cu), t45, g->ecx, g->edx, 1, 0);
        t50 = g->edx;
        wr8(self + 0x12u, (uint8_t)t49);
        g->edx = t50;
        t51 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
        t52 = g->edx;
        g->edx = t52;
        t53 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t54 = g->edx;
        eax = t53;
        edx = t54;
    }
    if (self + 0x4cu != 0u)
    {
        if (arg1 + 0x4cu != 0u)
        {
            if (arg2 + 0x4cu != 0u)
            {
                wr32(sp0 - 0x88u, arg3);
                wr32(sp0 - 0x8cu, arg2 + 0x4cu);
                wr32(sp0 - 0x90u, arg1 + 0x4cu);
                g->esp = sp0 - 0x84u;
                cow_call_regs(g, COW_IMG(0x10189980u), eax, self + 0x4cu, g->edx, 0, 3, arg1 + 0x4cu, arg2 + 0x4cu, arg3);
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
