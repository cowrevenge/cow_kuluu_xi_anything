/* f_0x100ad5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
uint32_t cow_fn_100ad5e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_call_regs(g, COW_IMG(0x100c3190u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100c3210u), t1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
    }
    else
    {
        ecx = t4;
        edx = t5;
        g->esp = sp0;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x1304u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t6;
            edx = t7;
            t8 = (edx & 0xffff0000u) | rd16(COW_IMG(0x104855aau));
            t9 = (arg8 & 0xffff0000u) | rd16(COW_IMG(0x10482f40u));
            g->esp = sp0;
            t10 = cow_call_regs(g, COW_IMG(0x100c2e20u), eax, eax, arg3, 0, 7, arg2, arg3, t9, t8, arg8, 0u, 0u);
            eax = t10;
        }
        g->esp = sp0 - 0x18u;
        t11 = cow_call_regs(g, COW_IMG(0x100c3190u), arg1, arg5, arg4, 1, 0);
        t12 = g->edx;
        g->esp = sp0;
        t13 = cow_call_regs(g, COW_IMG(0x100c3300u), t11, t11, g->edx, 0, 6, arg1, eax, arg4, 0u, arg5, arg7);
        eax = t13;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ad5e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
