/* f_0x101fa9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fa9c0(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x20u, in_esi);
    if (rd16(self + 0x104u) != 6u)
    {
        if ((int32_t)rd32(self + 0xfcu) >= 0)
        {
            eax = rd32(self + 0xfcu);
            if (rd32(COW_IMG(0x1057847cu)) != 0u)
            {
                esi = rd32(COW_IMG(0x1057847cu));
                wr32(sp0 - 0x24u, in_edi);
                if (rd32(esi + 8u) != 0u)
                {
                    if (rd32(self + 0x98u) != 0u)
                    {
                        wr16(sp0 - 0x1cu, 0u);
                        wr16(sp0 - 0x1au, 0u);
                        t1 = rd16(self + 0x67cu);
                        wr16(sp0 - 0x18u, 0u);
                        wr16(sp0 - 0x16u, 0u);
                        t2 = (uint32_t)((int32_t)((uint32_t)(int16_t)t1 + ((uint32_t)((int32_t)((uint32_t)(int16_t)t1 - (uint32_t)(int16_t)rd16(COW_IMG(0x103821fcu) + eax * 0xeu) - 0x10u) >> 0x1fu) & 0x1fu) - (uint32_t)(int16_t)rd16(COW_IMG(0x103821fcu) + eax * 0xeu) - 0x10u) >> 5u) + 1u;
                        wr32(sp0 - 0x24u, t2);
                        t3 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x67au) + ((uint32_t)((int32_t)((uint32_t)(int16_t)rd16(self + 0x67au) - (uint32_t)(int16_t)rd16(COW_IMG(0x103821fau) + eax * 0xeu) - 0x10u) >> 0x1fu) & 0x1fu) - (uint32_t)(int16_t)rd16(COW_IMG(0x103821fau) + eax * 0xeu) - 0x10u) >> 5u) + 0x41u;
                        wr32(sp0 - 0x28u, t3);
                        wr32(sp0 - 0x2cu, COW_IMG(0x10384fecu));
                        wr32(sp0 - 0x30u, sp0 - 0x10u);
                        g->eax = sp0 - 0x10u;
                        g->esp = sp0 - 0x1cu;
                        t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10384fecu), t3, t2, in_esi);
                        wr32(sp0 - 0x24u, sp0 - 0x1cu);
                        g->esp = sp0 - 0x20u;
                        cow_call_regs(g, COW_IMG(0x10118f70u), t4, rd32(rd32(COW_IMG(0x1057847cu)) + 8u), g->edx, 0, 1, sp0 - 0x1cu);
                        wr32(sp0 - 0x24u, 0x80808080u);
                        wr32(sp0 - 0x28u, sp0 - 0x10u);
                        t5 = rd32(sp0 - 0x16u) + 3u;
                        wr32(sp0 - 0x2cu, t5);
                        t6 = rd32(sp0 - 0x1cu);
                        wr32(sp0 - 0x30u, t6);
                        g->esp = sp0 - 0xcu;
                        cow_cdecl(g, COW_IMG(0x101c9780u), 9, t6, t5, sp0 - 0x10u, 0x80808080u, in_esi, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
                    }
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fa9c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
