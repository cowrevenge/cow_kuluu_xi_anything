/* f_0x1019d920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019d920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xa8u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(self + 0x28u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10193850u), t1, g->ecx, g->edx, 1, 1, 0xacu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x34u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x10u;
    t7 = cow_call_regs(g, COW_IMG(0x10193850u), t4, g->ecx, g->edx, 1, 1, 0xadu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(self + 0x38u, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x10193850u), t7, g->ecx, g->edx, 1, 1, 0xafu);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(self + 0x3cu, t10);
    eax = t10;
    ecx = t11;
    edx = t12;
    edi = 5u;
L_1019d960: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x102455a0u), eax, ecx, g->edx, 1, 1, edi);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int8_t)t13 >= 0)
    {
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    else
    {
        edx = t15;
        g->eax = edi + 7u;
        g->edx = edx;
        t16 = rd32(self + 8u);
        g->esp = sp0 - 8u;
        t17 = cow_thiscall(g, COW_IMG(0x10118b60u), t16, 2, 5u, edi + 7u);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    if ((int32_t)(edi - 1u) >= 0)
    {
        edi = edi - 1u;
        goto L_1019d960;
    }
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, rd32(self + 8u), g->edx, 0, 2, 5u, 0u);
    wr8(rd32(self + 8u) + 0x5du, 0u);
    t20 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    g->eax = t20;
    g->edx = rd32(self + 8u);
    t21 = rd32(self + 8u);
    t22 = cow_stdcall(g, COW_IMG(0x1019d7c0u), 1, t20);
    t23 = g->edx;
    g->edx = t23;
    cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xdu);
    t24 = g->edx;
    if (rd32(COW_IMG(0x10456a7cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        edx = t24;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        edx = t24;
        if (rd32(self + 8u) != 0u)
        {
            ecx = rd32(self + 8u);
            g->edx = edx;
            g->esp = sp0 - 8u;
            t25 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 0xdu);
            t26 = g->edx;
            if (t25 == 5u)
            {
                eax = t25;
                edx = t26;
            }
            else
            {
                eax = t25;
                edx = t26;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t27 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xdu);
                t28 = g->edx;
                eax = t27;
                edx = t28;
            }
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
