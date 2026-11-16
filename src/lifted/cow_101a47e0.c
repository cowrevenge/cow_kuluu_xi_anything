/* f_0x101a47e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a47e0(Guest* g)
{
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x20u) != 0u)
    {
        ecx = rd32(self + 0x20u);
        t1 = rd32(ecx + 0x1db8u);
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall(g, COW_IMG(0x101a29f0u), ecx, 1, 0xffffffffu);
        t3 = g->ecx;
        t4 = (uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u);
        g->ebx = t1;
        g->eax = t4;
        g->edx = (uint32_t)((int32_t)t1 >> 0x1fu);
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x101a3d60u), 5, self + 0x28u, t4, t2, in_esi, in_ebx);
        t6 = g->edx;
        g->edi = self;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x1011ae10u), rd32(self + 8u), 1, self + 0x28u);
    }
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a47e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a47e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
