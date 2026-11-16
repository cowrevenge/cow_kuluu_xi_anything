/* f_0x1010fbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1010fbd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd16(self + 0x62u) == rd16(self + 0x60u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x62u);
        goto L_1010fc05;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x62u);
    if ((uint16_t)arg1 != rd16(self + ((uint8_t)eax - 1u & 7u) * 8u + 0x20u)) goto L_1010fc05;
    edx = (uint8_t)eax - 1u & 7u;
    wr16(edx * 8u + self + 0x22u, (uint16_t)(rd16(edx * 8u + self + 0x22u) + 1u));
    wr32(edx * 8u + self + 0x24u, arg2);
    g->edx = edx;
    return;
L_1010fc05: ;
    wr16(self + (uint16_t)eax * 8u + 0x20u, (uint16_t)arg1);
    wr16(self + rd16(self + 0x62u) * 8u + 0x22u, 1u);
    t1 = rd16(self + 0x62u);
    wr32(self + t1 * 8u + 0x24u, arg2);
    t2 = rd16(self + 0x60u);
    t3 = rd8(self + 0x62u);
    wr16(self + 0x62u, t3 + 1u & 7u);
    if ((uint16_t)t2 != (t3 + 1u & 7u))
    {
        edx = (arg2 & 0xffff0000u) | t2;
    }
    else
    {
        edx = (arg2 & 0xffff0000u) | t2;
        wr16(self + 0x60u, (uint8_t)edx + 1u & 7u);
        edx = (uint8_t)edx + 1u & 7u;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010fbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010fbd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
