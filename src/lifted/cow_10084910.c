/* f_0x10084910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10084910(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x70u) == 0u)
    {
        eax = rd32(self + 0x70u);
        goto L_1008495d;
    }
    eax = rd32(self + 0x70u);
    if (rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) == (uint16_t)arg2) goto L_10084951;
    cf = rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) < (uint16_t)arg2;
    pf = PARITY((uint8_t)(rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) - (uint16_t)arg2));
    zf = (uint16_t)(rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) - (uint16_t)arg2) == 0u;
    sf = (int16_t)(rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) - (uint16_t)arg2) < 0;
    of = ((rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) ^ (uint16_t)arg2) & (rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) ^ (uint16_t)(rd16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu) - (uint16_t)arg2))) >> 0xfu;
    wr16(eax + (uint32_t)(int8_t)arg1 * 2u + 0xfcu, (uint16_t)arg2);
    wr16(eax + 0xf4u, (uint16_t)(rd16(eax + 0xf4u) | 1u << (arg1 & 0x1fu)));
    wr16(COW_IMG(0x1047d61cu) + arg1 * 2u, (uint16_t)arg2);
    g->edx = arg2;
    return eax;
L_10084951: ;
    wr16(COW_IMG(0x1047d61cu) + arg1 * 2u, (uint16_t)arg2);
    g->edx = arg2;
    return eax;
L_1008495d: ;
    wr16(COW_IMG(0x1047d61cu) + arg1 * 2u, (uint16_t)arg2);
    return (eax & 0xffff0000u) | (uint16_t)arg2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10084910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10084910(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
