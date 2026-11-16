/* f_0x100858f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100858f0(Guest* g)
{
    uint32_t eax;
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

    if (rd32(self + 0x68u) == 0u)
    {
        eax = in_eax;
        goto L_10085939;
    }
    edx = in_edx;
    esi = rd32(self + 0x68u);
L_100858fb: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
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
        g->esp = sp0 - 0xcu;
        t5 = cow_thiscall(g, rd32(t4 + 0x18u), esi, 0);
        t6 = g->edx;
        g->esp = sp0 - 8u;
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
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi, 0);
            t11 = g->edx;
            if (rd16(t10 + 0x22u) == 0u)
            {
                eax = t10;
                edx = t11;
            }
            else
            {
                eax = t10;
                edx = t11;
                g->esp = sp0 - 8u;
                t12 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, eax, edx, 1, 0);
                t13 = g->edx;
                eax = t12;
                edx = t13;
            }
        }
    }
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_100858fb;
    }
L_10085939: ;
    if (rd32(self + 0x6cu) == 0u) goto L_1008597e;
    esi = rd32(self + 0x6cu);
L_10085940: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t14 = rd32(esi);
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, rd32(t14 + 0x18u), esi, 0);
    t16 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
    }
    else
    {
        edx = t16;
        g->eax = rd32(esi);
        g->edx = edx;
        t17 = rd32(esi);
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall(g, rd32(t17 + 0x18u), esi, 0);
        t19 = g->edx;
        g->esp = sp0 - 8u;
        t20 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t18, t19, 1, COW_IMG(0x1032b7f8u));
        if ((uint8_t)t20 == 0u)
        {
            eax = t20;
        }
        else
        {
            eax = t20;
            g->eax = eax;
            g->edx = rd32(esi);
            t21 = rd32(esi);
            g->esp = sp0 - 8u;
            t22 = cow_thiscall(g, rd32(t21 + 0x18u), esi, 0);
            t23 = g->edx;
            if (rd16(t22 + 0x22u) == 0u)
            {
                eax = t22;
            }
            else
            {
                eax = t22;
                edx = t23;
                g->esp = sp0 - 8u;
                t24 = cow_call_regs(g, COW_IMG(0x10074a50u), eax, eax, edx, 1, 0);
                eax = t24;
            }
        }
    }
    if (rd32(esi + 0x30u) != 0u)
    {
        esi = rd32(esi + 0x30u);
        goto L_10085940;
    }
L_1008597e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100858f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100858f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
