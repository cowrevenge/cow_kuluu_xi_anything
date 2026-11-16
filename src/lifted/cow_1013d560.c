/* f_0x1013d560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013d560(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x278u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x278u);
        if ((uint8_t)arg2 == 0u)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x34eu) + 0x168u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x34eu) + 0x168u);
            eax = eax - 0x14u;
        }
        t1 = ((self + 0x278u & 0xffff0000u) | (uint16_t)((uint8_t)arg1 * 0x10u + rd16(self + 0x350u))) + 4u;
        g->ecx = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x101ca3c0u), eax, g->ecx, g->edx, 1, 5, eax, t1, self + 0x278u, 0x80808080u, in_ebx);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)arg2 != 0u)
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            t5 = ((edx & 0xffff0000u) | (uint16_t)((uint8_t)arg1 * 0x10u + rd16(self + 0x350u))) + 4u;
            t6 = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x34eu) + 0x168u);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x101ca3c0u), t6, g->ecx, g->edx, 1, 5, t6, t5, COW_IMG(0x1036fd94u), 0x80808080u, in_edi);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d560(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
