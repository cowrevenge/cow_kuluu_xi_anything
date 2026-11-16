/* f_0x100c33d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c33d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self) != 0u)
    {
        esi = rd32(self);
        edx = in_edx;
L_100c33df: ;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x100c30e0u), esi, 0);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_thiscall(g, COW_IMG(0x100c2fb0u), t1, 0);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 != 0u)
        {
            edx = t5;
            edi = t1;
        }
        else
        {
            eax = t3;
            ecx = t4;
            edx = t5;
            edi = t1;
            g->esp = sp0 - 0xcu;
            t6 = cow_call_regs(g, COW_IMG(0x100bd760u), eax, ecx, edx, 1, 0);
            t7 = g->edx;
            g->edx = t7;
            t8 = cow_thiscall(g, COW_IMG(0x100c1610u), t6, 0);
            t9 = g->ecx;
            t10 = g->edx;
            if (t8 != 0u)
            {
                edx = t10;
            }
            else
            {
                eax = t8;
                ecx = t9;
                edx = t10;
                g->esp = sp0 - 0x10u;
                t11 = cow_call_regs(g, COW_IMG(0x100bd760u), eax, ecx, edx, 1, 0);
                t12 = g->edx;
                g->esp = sp0 - 0xcu;
                t13 = cow_fastcall(g, COW_IMG(0x100c1190u), t11, t12, 1, edi);
                t14 = g->edx;
                g->edx = t14;
                cow_thiscall(g, COW_IMG(0x100c2fc0u), edi, 1, 1u);
                t15 = g->edx;
                edx = t15;
            }
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x100c2fb0u), edi, 0);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 != 1u)
        {
            edx = t18;
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            g->esp = sp0 - 0xcu;
            t19 = cow_call_regs(g, COW_IMG(0x100bd760u), eax, ecx, edx, 1, 0);
            t20 = g->edx;
            g->edx = t20;
            t21 = cow_thiscall(g, COW_IMG(0x100c1650u), t19, 0);
            t22 = g->edx;
            if (t21 == 0u)
            {
                edx = t22;
            }
            else
            {
                eax = t21;
                edx = t22;
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, COW_IMG(0x100c2fc0u), edi, 1, 2u);
                t23 = g->ecx;
                t24 = g->edx;
                g->edx = t24;
                t25 = cow_thiscall(g, COW_IMG(0x100c2fd0u), t23, 0);
                t26 = g->edx;
                t27 = (t25 & 0xffffff00u) | rd8(t25);
                g->edx = t26;
                cow_call_regs(g, COW_IMG(0x100c3110u), t27, esi, g->edx, 0, 1, t27);
                t28 = g->edx;
                edx = t28;
            }
        }
        g->edx = edx;
        t29 = rd32(esi + 0x5cu);
        g->esp = sp0 - 0xcu;
        t30 = cow_thiscall(g, COW_IMG(0x100c3480u), esi, 0);
        t31 = g->edx;
        if (t30 != 1u)
        {
            edx = t31;
            edi = t29;
        }
        else
        {
            eax = t30;
            edx = t31;
            edi = t29;
            g->esp = sp0 - 0xcu;
            cow_fastcall(g, COW_IMG(0x100c3290u), self, edx, 1, esi);
            t32 = g->edx;
            edx = t32;
        }
        if (edi != 0u)
        {
            esi = edi;
            goto L_100c33df;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c33d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c33d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
