/* f_0x10124b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10124b70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(self + 0x48u, 0x41900000u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        edx = t2;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t3 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
        t4 = g->edx;
        wr32(sp0 - 0x10u, sp0 - 8u);
        t5 = cow_thiscall(g, COW_IMG(0x1011abf0u), t3, 1, sp0 - 8u);
        if ((uint8_t)t5 == 0u)
        {
            eax = t5;
        }
        else
        {
            eax = t5;
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, sp0 - 8u);
            g->esp = sp0 - 0xcu;
            t6 = cow_call_regs(g, COW_IMG(0x10124700u), eax, self, g->edx, 0, 2, sp0 - 8u, 0u);
            eax = t6;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10124b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10124b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
