/* f_0x100c42f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c42f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x10082b10u), self, in_edx, 0);
    t1 = g->edx;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = rd32(self);
    t2 = rd32(self);
    t3 = cow_thiscall(g, rd32(t2 + 0x1dcu), self, 1, sp0 - 4u);
    if (rd32(t3) == 0u)
    {
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        eax = rd32(t3);
        if (rd32(eax) == 0u)
        {
            loc_4 = self;
            loc_8 = in_esi;
        }
        else
        {
            wr32(sp0 - 0xcu, sp0 - 4u);
            g->eax = sp0 - 4u;
            g->edx = rd32(self);
            t4 = rd32(self);
            g->esp = sp0 - 8u;
            t5 = cow_thiscall(g, rd32(t4 + 0x1dcu), self, 1, sp0 - 4u);
            t6 = g->edx;
            cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(rd32(t5)), 0);
            wr32(sp0 - 0xcu, sp0 - 4u);
            g->eax = sp0 - 4u;
            g->edx = rd32(self);
            t7 = rd32(self);
            t8 = cow_thiscall(g, rd32(t7 + 0x1dcu), self, 1, sp0 - 4u);
            t9 = g->edx;
            if (rd32(t8) == 0u)
            {
                edx = t9;
                eax = 0u;
                pf = PARITY(0u);
                zf = 1u;
                sf = 0u;
            }
            else
            {
                eax = rd32(t8);
                edx = t9;
                pf = PARITY((uint8_t)rd32(t8));
                zf = rd32(t8) == 0u;
                sf = (int32_t)rd32(t8) < 0;
                eax = rd32(eax);
            }
            t10 = rd32(eax + 0x14u);
            wr32(sp0 - 0xcu, t10);
            g->cf = 0u;
            g->pf = pf;
            g->af = 0u;
            g->zf = zf;
            g->sf = sf;
            g->of = 0u;
            g->ecx = rd32(COW_IMG(0x1047d128u));
            t11 = rd32(COW_IMG(0x1047d128u));
            g->esp = sp0 - 8u;
            cow_stdcall(g, COW_IMG(0x10073b20u), 1, t10);
            t12 = g->ecx;
            wr32(sp0 - 0xcu, t12);
            wr32(sp0 - 0xcu, 0u);
            cow_thiscall(g, rd32(rd32(self) + 0x290u), self, 1, 0u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    wr32(self + 0x5c4u, 0u);
    g->esi = loc_8;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c42f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c42f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
