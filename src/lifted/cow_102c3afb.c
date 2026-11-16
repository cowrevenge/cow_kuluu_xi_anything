/* f_0x102c3afb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102c3afb(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, 0xffffffffu);
    wr32(sp0 - 0x10u, 0x7fffu);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x102c379bu), g->eax, self, in_edx, 1, 4, arg1, arg2, 0x7fffu, 0xffffffffu);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(arg1 + 0x220u) == 0u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0xcu, in_esi);
        t4 = rd32(arg1 + 0x224u);
        wr32(sp0 - 0x10u, t4);
        wr32(sp0 - 0x14u, arg1);
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, edx, 1, 2, arg1, t4);
        t5 = g->edx;
        wr32(arg1 + 0x224u, 0u);
        wr32(arg1 + 0x220u, 0u);
        ecx = rd32(sp0 - 0x10u);
        edx = t5;
    }
    wr32(sp0 - 0xcu, 0x120u);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102c3723u), g->eax, ecx, edx, 1, 2, sp0 + 8u, 0x120u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c3afb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c3afb(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
