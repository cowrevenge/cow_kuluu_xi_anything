/* f_0x10010520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10010520(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    t1 = cow_stdcall(g, COW_IMG(0x10103740u), 0);
    t2 = g->edx;
    t3 = cow_call_regs(g, COW_IMG(0x1021c100u), t1, rd32(COW_IMG(0x10666e2cu)), t2, 0, 2, COW_IMG(0x103502d4u), COW_IMG(0x103502dcu));
    t4 = g->edx;
    t5 = cow_call_regs(g, COW_IMG(0x1021c100u), t3, rd32(COW_IMG(0x10666e30u)), t4, 0, 2, COW_IMG(0x103502ccu), 0u);
    t6 = g->edx;
    if (rd32(COW_IMG(0x10666e34u)) == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        eax = t5;
        ecx = rd32(COW_IMG(0x10666e34u));
        edx = t6;
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x103502c4u), 0u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (rd32(COW_IMG(0x10666e38u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e38u));
        g->esp = sp0;
        t9 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x103502bcu), 0u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    if (rd32(COW_IMG(0x10666e3cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e3cu));
        g->esp = sp0;
        t11 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x103502b4u), 0u);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    if (rd32(COW_IMG(0x10666e40u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e40u));
        g->esp = sp0;
        t13 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x103502acu), 0u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x10666e44u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e44u));
        g->esp = sp0;
        t15 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x103502a4u), 0u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    if (rd32(COW_IMG(0x10666e48u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e48u));
        g->esp = sp0;
        t17 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x1035029cu), 0u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x10666e4cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
        g->esp = sp0;
        t19 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350294u), 0u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    if (rd32(COW_IMG(0x10666e50u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e50u));
        g->esp = sp0;
        t21 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350288u), 0u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    if (rd32(COW_IMG(0x10666e54u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e54u));
        g->esp = sp0;
        t23 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x1035027cu), 0u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    if (rd32(COW_IMG(0x10666e58u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e58u));
        g->esp = sp0;
        t25 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350270u), 0u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    }
    if (rd32(COW_IMG(0x10666e5cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e5cu));
        g->esp = sp0;
        t27 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350264u), 0u);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    }
    if (rd32(COW_IMG(0x10666e60u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e60u));
        g->esp = sp0;
        t29 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350258u), 0u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    }
    if (rd32(COW_IMG(0x10666e64u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e64u));
        g->esp = sp0;
        t31 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x1035024cu), 0u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    if (rd32(COW_IMG(0x10666e68u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e68u));
        g->esp = sp0;
        t33 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350240u), 0u);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    if (rd32(COW_IMG(0x10666e6cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e6cu));
        g->esp = sp0;
        t35 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, COW_IMG(0x10350238u), 0u);
        t36 = g->edx;
        eax = t35;
        edx = t36;
    }
    if (rd32(COW_IMG(0x10666e70u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10666e70u));
        g->esp = sp0;
        t37 = cow_call_regs(g, COW_IMG(0x1021c100u), eax, ecx, edx, 0, 2, 0u, 0u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t40 = cow_stdcall(g, COW_IMG(0x10093da0u), 0);
    t41 = g->ecx;
    t42 = g->edx;
    g->edx = t42;
    cow_tailcall(g, COW_IMG(0x10240880u), t40, t41, t42);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10010520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10010520(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
