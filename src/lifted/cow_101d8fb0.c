/* f_0x101d8fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101d8fb0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(rd32(COW_IMG(0x10578204u)) + 8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        ecx = rd32(COW_IMG(0x10578204u));
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, in_edx, 0, 4, 0u, 1u, 0u, 0u);
        t2 = g->edx;
        eax = t1;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = t2;
    }
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        t3 = (eax & 0xffff0000u) | rd16(self + 0x898u);
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x1013e260u), t3, ecx, g->edx, 0, 4, t3, 0u, 0u, 0u);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d8fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d8fb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
