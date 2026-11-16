/* f_0x101ed610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ed610(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    wr32(self, COW_IMG(0x10339fa0u));
    if (rd32(COW_IMG(0x106636b0u)) == 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x106636b0u));
        t1 = rd32(esi + 8u);
        wr32(esi, COW_IMG(0x10339f70u));
        if (t1 == 0u)
        {
            eax = t1;
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = t1;
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t2 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, self, in_edx, 1, 1, eax);
            t3 = g->ecx;
            t4 = g->edx;
            wr32(esi + 8u, 0u);
            eax = t2;
            ecx = t3;
            edx = t4;
        }
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t5 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(COW_IMG(0x106636b0u), 0u);
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    if (rd32(COW_IMG(0x106636b4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106636b4u));
        t8 = rd32(esi + 8u);
        wr32(esi, COW_IMG(0x10339f44u));
        if (t8 == 0u)
        {
            eax = t8;
        }
        else
        {
            eax = t8;
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t9 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(esi + 8u, 0u);
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t12 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t13 = g->ecx;
        t14 = g->edx;
        wr32(COW_IMG(0x106636b4u), 0u);
        eax = t12;
        ecx = t13;
        edx = t14;
    }
    if (rd32(COW_IMG(0x106636b8u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106636b8u));
        t15 = rd32(esi + 8u);
        wr32(esi, COW_IMG(0x10339f18u));
        if (t15 == 0u)
        {
            eax = t15;
        }
        else
        {
            eax = t15;
            g->eax = eax;
            g->esp = sp0 - 0xcu;
            t16 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(esi + 8u, 0u);
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t19 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
        t20 = g->edx;
        wr32(COW_IMG(0x106636b8u), 0u);
        eax = t19;
        edx = t20;
    }
    wr32(self, COW_IMG(0x10333360u));
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self + 4u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ed610(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
