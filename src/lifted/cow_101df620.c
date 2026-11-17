/* f_0x101df620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101df620(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    ecx = self;
    edx = in_edx;
    edi = 0u;
L_101df626: ;
    t1 = rd8(COW_IMG(0x1037f1dcu) + edi);
    g->eax = t1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x101df130u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    wr8(edi + self + 0x60u, (uint8_t)t2);
    if ((int32_t)(edi + 1u) < 9)
    {
        ecx = t3;
        edx = t4;
        edi = edi + 1u;
        goto L_101df626;
    }
    ecx = t3;
    edx = t4;
    if (rd32(self + 0x98u) != 0u)
    {
        eax = rd32(self + 0x98u);
    }
    else
    {
        eax = rd32(self + 0x98u);
        g->eax = eax;
        g->esp = sp0;
        t5 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, in_edi, in_esi);
        t6 = g->edx;
        if (t5 == 0u)
        {
            edx = t6;
            eax = 0u;
        }
        else
        {
            eax = t5;
            edx = t6;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t7 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
        wr32(self + 0x98u, eax);
    }
    g->eax = eax;
    g->edx = edx;
    t9 = rd32(self + 0x98u);
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101c8290u), t9, 1, 0xau);
    t11 = g->ecx;
    t12 = g->edx;
    t13 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t12, 1, 1, 0x1au);
    t14 = g->edx;
    g->edx = t14;
    t15 = rd32(self + 0x98u);
    t16 = cow_thiscall(g, COW_IMG(0x101c8380u), t15, 1, t13);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t20 = rd32(rd32(t19) + 0x6b0u);
    wr8(self + 0x49u, 0u);
    wr32(self + 0x34u, t20);
    wr8(self + 0x2eu, 0u);
    wr8(self + 0x2fu, 6u);
    wr32(self + 0x50u, 0xffffffffu);
    g->edx = t20;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101df620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101df620(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
