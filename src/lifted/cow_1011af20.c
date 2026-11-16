/* f_0x1011af20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1011af20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
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

    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        esi = rd32(self + 8u);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x1011b390u), esi, 0);
        t2 = g->ecx;
        t3 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t2, t3, 1, 1, esi);
        t4 = g->edx;
        wr32(self + 8u, 0u);
        edx = t4;
    }
    if (rd32(self + 4u) == 0u)
    {
        ecx = rd32(self + 4u);
    }
    else
    {
        ecx = rd32(self + 4u);
        if ((int32_t)(rd32(ecx - 4u) - 1u) < 0)
        {
            eax = rd32(ecx - 4u) - 1u;
            edx = rd32(ecx - 4u) * 5u;
            ebp = ecx - 4u;
        }
        else
        {
            eax = rd32(ecx - 4u) - 1u;
            edx = rd32(ecx - 4u) * 5u;
            ebp = ecx - 4u;
            esi = ecx + rd32(ecx - 4u) * 0x14u;
            ebx = eax + 1u;
L_1011af5b: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t5 = cow_thiscall(g, COW_IMG(0x1011b690u), esi - 0x14u, 0);
            t6 = g->ecx;
            t7 = g->edx;
            if (ebx != 1u)
            {
                eax = t5;
                edx = t7;
                ebx = ebx - 1u;
                esi = esi - 0x14u;
                goto L_1011af5b;
            }
            eax = t5;
            ecx = t6;
            edx = t7;
        }
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, ebp);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(self + 4u, 0u);
        ecx = t8;
        edx = t9;
    }
    if (rd32(self + 0xcu) == 0u)
    {
        eax = rd32(self + 0xcu);
    }
    else
    {
        eax = rd32(self + 0xcu);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t10 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t11 = g->edx;
        wr32(self + 0xcu, 0u);
        eax = t10;
        edx = t11;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10126330u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011af20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1011af20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
