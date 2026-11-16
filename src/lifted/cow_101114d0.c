/* f_0x101114d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101114d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u) goto L_10111563;
    g->eax = in_eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, in_edx, 1, 1, 0x5cu);
    t2 = g->edx;
    if (t1 == 0u) goto L_10111522;
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10110680u), eax, 2, arg1, arg2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        edi = t3;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        edi = t3;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t6 = cow_call_regs(g, COW_IMG(0x101085e0u), g->eax, g->ecx, edx, 1, 1, 0xcu);
        if (t6 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t6;
            wr32(eax, edi);
            wr32(eax + 8u, 0u);
            wr32(eax + 4u, 0u);
        }
        t7 = rd32(self + 0x3cu);
        wr32(eax + 8u, self + 0x38u);
        wr32(eax + 4u, t7);
        if (t7 != 0u)
        {
            ecx = t7;
            wr32(ecx + 8u, eax);
        }
        if (rd32(eax + 8u) != 0u)
        {
            ecx = rd32(eax + 8u);
            wr32(ecx + 4u, eax);
        }
        wr16(self + 0x2au, (uint16_t)(rd16(self + 0x2au) + 1u));
        if (arg1 > rd32(self + 0x20u))
        {
            wr32(self + 0x20u, arg1);
        }
    }
    return edi;
L_10111522: ;
    return 0u;
L_10111563: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101114d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101114d0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
