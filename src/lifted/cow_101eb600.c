/* f_0x101eb600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101eb600(Guest* g)
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
    const uint32_t in_esi = g->esi;

    if (rd32(COW_IMG(0x10578480u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578480u));
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10578480u));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fecu));
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t3 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10381fd8u));
    t6 = g->edx;
    wr32(self + 0x34u, 0u);
    wr8(self + 0x49u, 1u);
    g->esi = self;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x101f7020u), self, 3, 0u, 0u, 1u);
    t8 = g->edx;
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x101ead30u), t7, self, t8);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb600(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
