/* f_0x10196a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10196a90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 8u) != 0u)
    {
        ecx = rd32(self + 8u);
        if (arg1 != 0u)
        {
            if (arg1 == 1u)
            {
                eax = arg3;
            }
            else
            {
                eax = arg4;
            }
        }
        else
        {
            eax = arg2;
        }
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, 1u);
        wr32(sp0 - 0x1cu, eax);
        wr32(sp0 - 0x20u, sp0 - 8u);
        g->edi = 0u;
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10118900u), ecx, 4, sp0 - 8u, eax, 1u, 1u);
        t1 = g->edx;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0x80808080u);
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x24u, 0x25u);
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x18u), 5, 0x25u, 4u, 0x80808080u, 0u, 0u);
    }
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10196a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10196a90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
