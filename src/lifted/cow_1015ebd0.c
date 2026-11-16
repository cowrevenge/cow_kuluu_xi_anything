/* f_0x1015ebd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015ebd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10160760u), arg1, self, g->edx, 0, 2, sp0 - 0x20u, arg1);
    wr32(sp0 - 0x28u, sp0 - 0x20u);
    g->edx = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x1015dc10u), self, 1, sp0 - 0x20u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t3 = cow_thiscall(g, COW_IMG(0x10118220u), eax, 0);
        t4 = g->edx;
        if (t3 == 0u)
        {
            eax = t3;
            edx = t4;
        }
        else
        {
            eax = t3;
            edx = t4;
            wr8(eax + 0x44u, 2u);
            wr32(eax + 0x48u, 0x14u);
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015ebd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015ebd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
