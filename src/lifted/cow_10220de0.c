/* f_0x10220de0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10220de0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(self + 4u, arg2);
    wr32(self, arg1);
    wr32(self + 0x14u, 0x80808080u);
    wr32(self + 8u, 0xffffffffu);
    wr32(self + 0xcu, 1u);
    wr16(self + 0x10u, 0u);
    wr16(self + 0x12u, 0u);
    if ((int32_t)rd32(arg2) >= 0)
    {
        eax = arg2;
        esi = arg2;
L_10220e19: ;
        if (rd32(rd32(arg1) + rd32(eax) * 4u) != 0u)
        {
            edx = rd32(rd32(arg1) + rd32(eax) * 4u);
            eax = rd32(eax);
            if ((int16_t)rd16(self + 0x10u) < (int32_t)((uint32_t)(int16_t)rd16(edx + 0x22u) - (uint32_t)(int16_t)rd16(edx + 0x20u)))
            {
                eax = (eax & 0xffff0000u) | rd16(edx + 0x22u);
                edx = (edx & 0xffff0000u) | rd16(edx + 0x20u);
                wr16(self + 0x10u, (uint16_t)(eax - edx));
            }
        }
        if ((int32_t)rd32(esi + 8u) >= 0)
        {
            eax = esi + 8u;
            esi = esi + 8u;
            goto L_10220e19;
        }
    }
    t1 = rd16(self + 0x10u);
    wr16(self + 0x10u, (uint16_t)(uint32_t)((int32_t)((uint32_t)(int16_t)t1 - (uint32_t)((int32_t)(uint32_t)(int16_t)t1 >> 0x1fu)) >> 1u));
    return (uint32_t)((int32_t)((uint32_t)(int16_t)t1 - (uint32_t)((int32_t)(uint32_t)(int16_t)t1 >> 0x1fu)) >> 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10220de0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10220de0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
