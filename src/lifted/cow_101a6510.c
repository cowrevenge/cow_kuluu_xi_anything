/* f_0x101a6510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101a6510(Guest* g)
{
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = arg1 + rd8(self + 0x6cu) * 0x14u;
    g->eax = rd8(self + 0x6cu) * 5u;
    g->edx = in_edx;
    t2 = rd8(self + 0x6cu);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101a29f0u), rd32(self + 0x14u), 1, t1);
    t4 = g->edx;
    g->edi = t1;
    g->edx = t4;
    t5 = rd32(self + 8u);
    t6 = cow_thiscall(g, COW_IMG(0x1011ae30u), t5, 1, t3);
    t7 = g->ecx;
    t8 = g->edx;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6du);
    t10 = g->ecx;
    t11 = g->edx;
    g->ebx = self + 0x28u;
    g->edx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x28u, t9, t1 + 1u, in_edi, in_esi);
    t13 = g->edx;
    g->edi = t1 + 1u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1011ae10u), rd32(self + 8u), 1, self + 0x28u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a6510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
