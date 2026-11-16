/* f_0x100ad6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
void cow_fn_100ad6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg9 = rd32(g->esp + 0x24u);
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
        edx = t5;
    }
    else
    {
        ecx = t4;
        edx = t5;
        g->esp = sp0;
        t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x1304u);
        if (t6 == 0u)
        {
            eax = 0u;
        }
        else
        {
            eax = t6;
            t7 = (arg8 & 0xffff0000u) | rd16(COW_IMG(0x104855aau));
            t8 = (arg7 & 0xffff0000u) | rd16(COW_IMG(0x10482f40u));
            g->esp = sp0;
            t9 = cow_call_regs(g, COW_IMG(0x100c2e20u), eax, eax, arg3, 0, 7, arg2, arg3, t8, t7, arg7, arg8, arg9);
            eax = t9;
        }
        g->esp = sp0 - 0x18u;
        t10 = cow_call_regs(g, COW_IMG(0x100c3190u), eax, arg4, arg1, 1, 0);
        t11 = g->edx;
        g->edx = t11;
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x100c3300u), t10, t10, g->edx, 0, 6, arg1, eax, arg4, 0u, arg5, 0u);
        t12 = g->edx;
        edx = t12;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ad6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ad6d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
