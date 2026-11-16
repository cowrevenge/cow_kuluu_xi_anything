/* f_0x10085620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10085620(Guest* g)
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
        goto L_10085685;
    }
    edx = in_edx;
    esi = rd32(self + 0x68u);
L_1008562c: ;
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
        t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b108u));
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
            g->edx = t11;
            t12 = cow_thiscall(g, COW_IMG(0x100539e0u), t10, 0);
            t13 = g->edx;
            if ((uint8_t)t12 == 0u)
            {
                eax = t12;
                edx = t13;
            }
            else
            {
                edx = t13;
                edi = t10;
                if (rd32(edi + 0xb0u) == 0u)
                {
                    eax = rd32(edi + 0xb0u);
                    g->esp = sp0 - 0xcu;
                    t14 = cow_call_regs(g, COW_IMG(0x10053890u), eax, edi, edx, 0, 1, 0u);
                    t15 = g->edx;
                    eax = t14;
                    edx = t15;
                }
                else
                {
                    eax = rd32(edi + 0xb0u);
                    wr8(eax + 0x17au, 1u);
                }
            }
        }
    }
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_1008562c;
    }
L_10085685: ;
    if (rd32(self + 0x6cu) == 0u) goto L_100856e5;
    esi = rd32(self + 0x6cu);
L_1008568c: ;
    g->eax = eax;
    g->edx = rd32(esi);
    t16 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, rd32(t16 + 0x18u), esi, 0);
    t18 = g->edx;
    if (t17 == 0u)
    {
        eax = t17;
    }
    else
    {
        edx = t18;
        g->eax = rd32(esi);
        g->edx = edx;
        t19 = rd32(esi);
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall(g, rd32(t19 + 0x18u), esi, 0);
        t21 = g->edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t20, t21, 1, COW_IMG(0x1032b108u));
        if ((uint8_t)t22 == 0u)
        {
            eax = t22;
        }
        else
        {
            eax = t22;
            g->eax = eax;
            g->edx = rd32(esi);
            t23 = rd32(esi);
            g->esp = sp0 - 0xcu;
            t24 = cow_thiscall(g, rd32(t23 + 0x18u), esi, 0);
            t25 = g->edx;
            g->edx = t25;
            t26 = cow_thiscall(g, COW_IMG(0x100539e0u), t24, 0);
            t27 = g->edx;
            if ((uint8_t)t26 == 0u)
            {
                eax = t26;
            }
            else
            {
                edx = t27;
                edi = t24;
                if (rd32(edi + 0xb0u) == 0u)
                {
                    eax = rd32(edi + 0xb0u);
                    g->esp = sp0 - 0xcu;
                    t28 = cow_call_regs(g, COW_IMG(0x10053890u), eax, edi, edx, 0, 1, 0u);
                    eax = t28;
                }
                else
                {
                    eax = rd32(edi + 0xb0u);
                    wr8(eax + 0x17au, 1u);
                }
            }
        }
    }
    if (rd32(esi + 0x30u) != 0u)
    {
        esi = rd32(esi + 0x30u);
        goto L_1008568c;
    }
L_100856e5: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
