/* f_0x10085020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10085020(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(self) + 0x1e0u), self, 1, sp0 - 4u);
    t1 = g->edx;
    if (self == 0u)
    {
        eax = self;
        edx = t1;
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        edx = t1;
        if (rd32(self) == 0u)
        {
            eax = self;
            loc_4 = self;
            loc_8 = in_esi;
        }
        else
        {
            g->eax = self;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 4u, 0);
            t3 = g->edx;
            if ((uint8_t)t2 == 0u)
            {
                eax = t2;
                edx = t3;
                loc_4 = self;
                loc_8 = in_esi;
            }
            else
            {
                eax = t2;
                t4 = rd32(sp0 - 4u);
                wr32(sp0 - 0xcu, t4);
                g->eax = eax;
                g->esp = sp0 - 8u;
                t5 = cow_fastcall(g, COW_IMG(0x10085060u), self, t4, 1, t4);
                t6 = g->edx;
                eax = t5;
                edx = t6;
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
        }
    }
    g->esi = loc_8;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
