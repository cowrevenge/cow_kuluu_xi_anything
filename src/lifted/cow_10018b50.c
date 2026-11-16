/* f_0x10018b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10018b50(Guest* g)
{
    double d1;
    double d10;
    double d14;
    double d15;
    double d16;
    double d17;
    double d2;
    double d3;
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_4;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        eax = rd32(self + 4u);
        if ((int32_t)rd32(self + 0xcu) >= 24)
        {
            loc_4 = self;
        }
        else
        {
            ecx = rd32(self + 0xcu);
            d1 = (double)(int32_t)rd32(COW_IMG(0x10350e60u) + ecx * 8u);
            d2 = (double)rdf32(self + 0x10u);
            if (!(d1 <= d2))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
                loc_4 = self;
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, d2, 0u);
                d3 = (double)(int32_t)rd32(COW_IMG(0x10350e64u) + ecx * 8u);
                d4 = (double)rdf32(self + 0x10u);
                if ((cow_fsw(g, d3, d4, 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d3, d4, 0u) & 0x4100u;
                    loc_4 = self;
                }
                else
                {
                    t5 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) * 0x190u + ((uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) * 0x190u) >> 0x1fu) & 0x1ffu)) >> 9u);
                    t6 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
                    t7 = (uint32_t)(int16_t)rd16(rd32(ecx * 4u + rd32(rd32(self + 8u))) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(ecx * 4u + rd32(rd32(self + 8u))) + 0x20u);
                    g->edx = t7;
                    t8 = rd16(rd32(ecx * 4u + rd32(rd32(self + 8u))) + 0x20u);
                    t9 = rd32(ecx * 4u + rd32(rd32(self + 8u)));
                    d10 = fr(g, (double)(int32_t)t6 - fr(g, (double)(int32_t)t7 * (double)rdf32(COW_IMG(0x10329a08u))));
                    fpush(g, d10);
                    g->esp = sp0 - 0x1cu;
                    t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), (uint32_t)(int16_t)t8, g->ecx, g->edx, 1, 0);
                    t12 = g->edx;
                    g->esp = sp0 - 0xcu;
                    t13 = cow_thiscall(g, COW_IMG(0x1011fb60u), t9, 5, t11, t5, 0x80808080u, 0u, 0u);
                    eax = t13;
                    loc_4 = t7;
                }
            }
            d14 = (double)(int32_t)rd32(COW_IMG(0x10350e64u) + rd32(self + 0xcu) * 8u);
            d15 = (double)rdf32(self + 0x10u);
            if (d14 <= d15)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d14, d15, 0u);
                ecx = rd32(self + 0xcu);
                wr32(self + 0xcu, ecx + 1u);
                d16 = (double)(int32_t)rd32(COW_IMG(0x10350e64u) + ecx * 8u + 8u);
                d17 = (double)rdf32(self + 0x10u);
                if (d16 <= d17)
                {
                    ecx = ecx + 1u;
                    wr32(self + 0xcu, ecx + 1u);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10018b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10018b50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
