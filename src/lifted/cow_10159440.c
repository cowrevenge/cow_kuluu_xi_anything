/* f_0x10159440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10159440(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10159170u), arg2, self, g->edx, 0, 1, arg2);
    t2 = g->edx;
    t3 = cow_call_regs(g, COW_IMG(0x10158470u), t1, self, t2, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        edx = t4;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
        }
        else
        {
            eax = t5;
            edx = t6;
            g->edx = edx;
            g->esp = sp0 - 4u;
            cow_thiscall(g, COW_IMG(0x10159660u), self + 0x28u, 1, eax);
            t7 = g->edx;
            t8 = rd32(self + 0x5cu);
            wr8(self + 0x52u, 1u);
            t9 = ((t8 * 4u ^ t8) & 0xcu) ^ t8;
            wr32(self + 0x5cu, t9);
            eax = t8;
            edx = t7;
        }
    }
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x101591d0u), eax, self, edx, 1, 0);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        goto L_101594b6;
    }
    eax = t10;
    edx = t11;
    t12 = rd8(self + 0x52u);
    wr32(self + 0x60u, 0xffffffffu);
    wr32(self + 0x64u, 0u);
    if ((uint8_t)t12 != 1u)
    {
        eax = (eax & 0xffffff00u) | t12;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t12;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t13 = cow_thiscall(g, COW_IMG(0x10159740u), self + 0x28u, 0);
        wr8(self + 0x52u, 0u);
        eax = t13;
    }
    return eax & 0xffffff00u;
L_101594b6: ;
    wr32(self + 0xc4u, arg1);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10159440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10159440(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
