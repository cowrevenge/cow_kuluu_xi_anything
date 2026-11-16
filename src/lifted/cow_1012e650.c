/* f_0x1012e650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012e650(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10578470u)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10578470u));
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1014f250u), ecx, 1, 1u);
        t1 = g->edx;
        edx = t1;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
    }
    else
    {
        eax = rd32(self + 8u);
        wr8(eax + 0x86u, 1u);
    }
    if (rd32(COW_IMG(0x1057847cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t4 = g->edx;
        edx = t4;
    }
    wr16(self + 0x1b4u, 0u);
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b8u, 0x18u);
    wr32(self + 0x1bcu, 0xffffffffu);
    wr32(self + 0x1c0u, 0xffffffffu);
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
