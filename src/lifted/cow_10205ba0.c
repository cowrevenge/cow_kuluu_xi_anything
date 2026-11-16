/* f_0x10205ba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10205ba0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((1u << (rd8(COW_IMG(0x10385388u) + (uint32_t)(int16_t)arg1 + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u - 1u) & 0x1fu) & rd32(self + 0x2cu)) == 0u)
    {
        eax = 1u << (rd8(COW_IMG(0x10385388u) + (uint32_t)(int16_t)arg1 + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u - 1u) & 0x1fu);
        ecx = rd32(self + 0x2cu);
        wr32(self + 0x2cu, ecx | eax);
        ecx = ecx | eax;
    }
    else
    {
        eax = 1u << (rd8(COW_IMG(0x10385388u) + (uint32_t)(int16_t)arg1 + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u - 1u) & 0x1fu);
        ecx = rd32(self + 0x2cu);
        t1 = ~eax & ecx;
        wr32(self + 0x2cu, t1);
    }
    if (rd32(self + 0x2cu) != 0u)
    {
        eax = rd32(self + 0x2cu);
        edx = (uint32_t)(int16_t)arg1 - 1u;
    }
    else
    {
        eax = rd32(self + 0x2cu);
        if ((uint32_t)(int16_t)arg1 != 1u)
        {
            cf = 0u;
            pf = PARITY((uint8_t)((uint32_t)(int16_t)arg1 - 1u));
            zf = (uint32_t)(int16_t)arg1 == 1u;
            sf = (int32_t)((uint32_t)(int16_t)arg1 - 1u) < 0;
            of = 0u;
        }
        else
        {
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            cf = g->cf;
            pf = g->pf;
            zf = g->zf;
            sf = g->sf;
            of = g->of;
        }
        t2 = rd32(self + 0x2cu) | 1u << (rd8(COW_IMG(0x10385388u) + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u) & 0x1fu);
        t3 = rd8(COW_IMG(0x10385388u) + rd32(rd32(COW_IMG(0x10456a28u)) + 8u) * 5u);
        wr32(self + 0x2cu, t2);
        eax = t2;
        edx = 1u << (t3 & 0x1fu);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205ba0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
