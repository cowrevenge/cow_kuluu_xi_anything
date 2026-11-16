/* f_0x102c845a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102c845a(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg2 != 0u)
        {
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x102c379bu), g->eax, self, in_edx, 1, 4, arg1, arg2, 0x1000u, 0u);
            t1 = g->ecx;
            t2 = g->edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_call_regs(g, COW_IMG(0x102c35cdu), g->eax, t1, t2, 1, 5, arg1, 0x100u, 3u, arg1, arg2);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(arg1 + 0x114u, t3);
            if (t3 != 0u)
            {
                ecx = t4;
                edx = t5;
            }
            else
            {
                eax = t3;
                ecx = t4;
                edx = t5;
                g->esp = sp0;
                cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c996cu), in_edi, in_esi);
                t6 = g->edx;
                ecx = COW_IMG(0x103c996cu);
                edx = t6;
            }
            t7 = rd32(arg1 + 0x114u);
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x103169e0u), 5, t7, arg3, arg4 * 3u, in_ebx, in_edi);
            t8 = rd32(arg1 + 0x114u);
            wr32(arg2 + 0x10u, t8);
            wr16(arg1 + 0x118u, (uint16_t)arg4);
            wr8(arg2 + 0xb9u, rd8(arg2 + 0xb9u) | 0x10u);
            wr32(arg2 + 8u, rd32(arg2 + 8u) | 8u);
            wr16(arg2 + 0x14u, (uint16_t)arg4);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c845a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c845a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
