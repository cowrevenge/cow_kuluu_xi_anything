/* f_0x10030da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10030da0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10030ef0u), self, 0);
    t1 = g->edx;
    t2 = rd32(self + 8u);
    t3 = rd32(self + 0x10u);
    g->edx = t1;
    cow_thiscall(g, rd32(COW_IMG(0x103291c0u)), t3, 4, t3, t2, 1u, 0xffffffffu);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        ecx = t4;
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        if ((int32_t)rd32(self + 0x10u) > 0)
        {
            ebx = rd32(COW_IMG(0x103291bcu));
            edi = 0u;
L_10030dd2: ;
            if (rd32(edi * 4u + rd32(self + 8u)) == 0u)
            {
                edx = rd32(self + 8u);
            }
            else
            {
                eax = rd32(edi * 4u + rd32(self + 8u));
                edx = rd32(self + 8u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, ebx, ecx, 2, eax, 0u);
                t6 = g->edx;
                t7 = rd32(edi * 4u + rd32(self + 8u));
                cow_thiscall(g, rd32(COW_IMG(0x10329104u)), t7, 1, t7);
                t8 = g->ecx;
                t9 = rd32(self + 8u);
                wr32(edi * 4u + t9, 0u);
                ecx = t8;
                edx = t9;
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x10u))
            {
                edi = edi + 1u;
                goto L_10030dd2;
            }
        }
        t10 = rd32(self + 8u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t10);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t11;
        edx = t12;
    }
    if (rd32(self + 4u) != 0u)
    {
        if ((int32_t)rd32(self + 0x10u) <= 0)
        {
            eax = rd32(self + 0x10u);
        }
        else
        {
            ebx = 0u;
            edi = 0u;
L_10030e25: ;
            if (rd32(edi + rd32(self + 4u) + 8u) == 0u)
            {
                ecx = rd32(self + 4u);
            }
            else
            {
                eax = rd32(edi + rd32(self + 4u) + 8u);
                ecx = rd32(self + 4u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, eax);
                t13 = g->ecx;
                t14 = g->edx;
                ecx = t13;
                edx = t14;
            }
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(self + 0x10u))
            {
                ebx = ebx + 1u;
                edi = edi + 0x20u;
                goto L_10030e25;
            }
            eax = rd32(self + 0x10u);
        }
        t15 = rd32(self + 4u);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, t15, 1, 1, t15);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(self + 4u, 0u);
        ecx = t16;
        edx = t17;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        if ((int32_t)rd32(self + 0x10u) <= 0)
        {
            eax = rd32(self + 0x10u);
            goto L_10030e7e;
        }
        edi = 0u;
L_10030e65: ;
        if (rd32(edi * 4u + rd32(self + 0xcu)) != 0u)
        {
            eax = rd32(edi * 4u + rd32(self + 0xcu));
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, eax);
            t18 = g->ecx;
            t19 = g->edx;
            ecx = t18;
            edx = t19;
        }
        if ((int32_t)(edi + 1u) < (int32_t)rd32(self + 0x10u))
        {
            edi = edi + 1u;
            goto L_10030e65;
        }
        eax = rd32(self + 0x10u);
L_10030e7e: ;
        t20 = rd32(self + 0xcu);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t20, edx, 1, 1, t20);
        wr32(self + 0xcu, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10030da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10030da0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
