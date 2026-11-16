/* f_0x10085820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10085820(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        goto L_10085884;
    }
    edx = in_edx;
    esi = rd32(self + 0x68u);
L_1008582c: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        g->eax = eax;
        g->edx = rd32(esi);
        t4 = rd32(esi);
        g->esp = sp0 - 0x10u;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), esi, 0);
        t6 = g->edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b7f8u));
        t8 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            edx = t8;
        }
        else
        {
            edx = t8;
            g->eax = rd32(esi);
            g->edx = edx;
            t9 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
            t11 = g->edx;
            g->eax = rd32(t10 + 0x80u);
            g->edx = t11;
            t12 = rd32(t10 + 0x80u);
            t13 = rd32(rd32(t10 + 0x80u));
            t14 = cow_thiscall(g, COW_IMG(0x10072240u), t13, 0);
            t15 = g->ecx;
            t16 = g->edx;
            if (rd8(t14 + 0x1au) >> 4u & 1u)
            {
                eax = t14;
                edx = t16;
            }
            else
            {
                eax = t14;
                edx = t16;
                edi = t10;
                if (rd16(edi + 0x22u) == 0u)
                {
                    g->ebx = self;
                    g->esp = sp0 - 0xcu;
                    t17 = cow_call_regs(g, COW_IMG(0x10074a30u), eax, edi, edx, 1, 0);
                    t18 = g->edx;
                    eax = t17;
                    edx = t18;
                }
            }
        }
    }
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_1008582c;
    }
L_10085884: ;
    if (rd32(self + 0x6cu) == 0u) goto L_100858e2;
    esi = rd32(self + 0x6cu);
L_1008588b: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t19 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t20 = cow_thiscall(g, rd32(t19 + 0x18u), esi, 0);
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
    }
    else
    {
        edx = t21;
        g->eax = rd32(esi);
        g->edx = edx;
        t22 = rd32(esi);
        g->esp = sp0 - 0x10u;
        t23 = cow_thiscall(g, rd32(t22 + 0x18u), esi, 0);
        t24 = g->edx;
        g->esp = sp0 - 0xcu;
        t25 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t23, t24, 1, COW_IMG(0x1032b7f8u));
        if ((uint8_t)t25 == 0u)
        {
            eax = t25;
        }
        else
        {
            eax = t25;
            g->eax = eax;
            g->edx = rd32(esi);
            t26 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t27 = cow_thiscall(g, rd32(t26 + 0x18u), esi, 0);
            t28 = g->edx;
            g->eax = rd32(t27 + 0x80u);
            g->edx = t28;
            t29 = rd32(t27 + 0x80u);
            t30 = cow_thiscall(g, COW_IMG(0x10072240u), rd32(t29), 0);
            t31 = g->edx;
            if (rd8(t30 + 0x1au) >> 4u & 1u)
            {
                eax = (t30 & 0xffffff00u) | rd8(t30 + 0x1au) >> 4u;
            }
            else
            {
                eax = (t30 & 0xffffff00u) | rd8(t30 + 0x1au) >> 4u;
                edx = t31;
                edi = t27;
                if (rd16(edi + 0x22u) == 0u)
                {
                    g->ebx = self;
                    g->esp = sp0 - 0xcu;
                    t32 = cow_call_regs(g, COW_IMG(0x10074a30u), eax, edi, edx, 1, 0);
                    eax = t32;
                }
            }
        }
    }
    if (rd32(esi + 0x30u) != 0u)
    {
        esi = rd32(esi + 0x30u);
        goto L_1008588b;
    }
L_100858e2: ;
    g->ebx = in_ebx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085820(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
