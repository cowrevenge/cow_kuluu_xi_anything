/* f_0x1012bfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1012bfe0(Guest* g)
{
    double d1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(self + 0x18u) * (double)rdf32(COW_IMG(0x1032b160u)));
    fpush(g, d1);
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t2, 0x80808080u, 1u);
    t6 = g->edx;
    g->esp = sp0;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), arg1 + 0x69u, 7, arg1 + 0x69u, arg2 + 9u, t5, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012bfe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
