/* f_0x102c88a1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c88a1(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            if (arg3 == 0u)
            {
                eax = in_eax;
                ecx = self;
                edx = in_edx;
            }
            else
            {
                g->eax = in_eax;
                g->esp = sp0 - 0x10u;
                t1 = cow_call_regs(g, COW_IMG(0x102c379bu), g->eax, self, in_edx, 1, 4, arg1, arg2, 0x2000u, 0u);
                t2 = g->ecx;
                t3 = g->edx;
                g->esp = sp0 - 0x1cu;
                t4 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t2, t3, 1, 3, arg1, 0x100u, arg1);
                t5 = g->ecx;
                t6 = g->edx;
                t7 = rd32(sp0 + 0x10u);
                wr32(arg2 + 0x4cu, t4);
                wr32(arg1 + 0x188u, t4);
                t8 = rd32(arg2 + 0x4cu);
                g->ecx = t5;
                g->edx = t6;
                g->esp = sp0 - 0x20u;
                t9 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, t8, arg3, t7, arg1, 0x100u);
                t10 = g->ecx;
                t11 = g->edx;
                wr32(arg2 + 0xb8u, rd32(arg2 + 0xb8u) | 0x2000u);
                eax = t9;
                ecx = t10;
                edx = t11;
            }
            if (arg5 != 0u)
            {
                g->eax = arg2 + 0x50u;
                g->esp = sp0 - 4u;
                t12 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, arg2 + 0x50u, arg5, 0xau, in_esi, in_ebx);
                if (rd32(sp0 + 0x10u) != 0u)
                {
                    eax = t12;
                }
                else
                {
                    eax = t12;
                    wr32(sp0 + 0x10u, 1u);
                }
            }
            t13 = rd16(sp0 + 0x10u);
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 0x10u);
            wr16(arg2 + 0x16u, (uint16_t)t13);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c88a1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c88a1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
