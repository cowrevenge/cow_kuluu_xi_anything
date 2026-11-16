/* f_0x10316d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10316d20(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10320d4fu), g->eax, g->ecx, in_edx, 1, 1, 2u);
    t2 = g->edx;
    if (arg1 == 0u)
    {
        ecx = 2u;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        if (rd8(arg1) == 0u)
        {
            ecx = 2u;
        }
        else
        {
            g->ecx = 2u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, arg1);
            t4 = g->ecx;
            t5 = g->edx;
            g->ecx = t4;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10319884u), g->eax, g->ecx, t5, 1, 5, 2u, arg1, t3, arg1, in_edi);
            t6 = g->ecx;
            t7 = g->edx;
            g->ecx = t6;
            g->esp = sp0 - 0x10u;
            cow_call_regs(g, COW_IMG(0x10319884u), g->eax, g->ecx, t7, 1, 5, 2u, COW_IMG(0x1034a22cu), 2u, 2u, arg1);
            t8 = g->ecx;
            t9 = g->edx;
            ecx = t8;
            edx = t9;
        }
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)rd32(t10) < 0)
    {
        ecx = t11;
        edx = t12;
        goto L_10316d78;
    }
    ecx = t11;
    edx = t12;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)rd32(t13) >= (int32_t)rd32(COW_IMG(0x103d2fe8u)))
    {
        ecx = t14;
        edx = t15;
        goto L_10316d78;
    }
    ecx = t14;
    edx = t15;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t16 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t17 = g->ecx;
    t18 = g->edx;
    eax = rd32(t16);
    ecx = t17;
    edx = t18;
L_10316d7d: ;
    t19 = rd32(COW_IMG(0x103d2f38u) + eax * 4u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t20 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10319884u), g->eax, g->ecx, t22, 1, 5, 2u, t19, t20, t19, in_edi);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->esp = sp0 - 0x10u;
    t25 = cow_call_regs(g, COW_IMG(0x10319884u), g->eax, g->ecx, t24, 1, 5, 2u, COW_IMG(0x10350e4cu), 1u, 2u, t19);
    t26 = g->ecx;
    t27 = g->edx;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, t27, 1, 1, 2u);
    return;
L_10316d78: ;
    eax = rd32(COW_IMG(0x103d2fe8u));
    goto L_10316d7d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10316d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
