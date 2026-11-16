/* f_0x1012e5f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e5f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b8u, 0x18u);
    wr16(self + 0x1b4u, 1u);
    wr32(self + 0x1bcu, 0xffffffffu);
    wr16(self + 0x1f0u, 1u);
    wr32(self + 0x1c0u, 0xffffffffu);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        wr8(ecx + 0x86u, 0u);
    }
    if (rd32(COW_IMG(0x10578470u)) == 0u)
    {
        eax = 0xffffffffu;
        edx = 1u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578470u));
        g->eax = 0xffffffffu;
        g->edx = 1u;
        g->esp = sp0;
        t1 = cow_thiscall(g, COW_IMG(0x1014f250u), ecx, 1, 1u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e5f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e5f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
