/* f_0x101be2c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101be2c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 12u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x10314dd1u), 1, sp0 + 4u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101be306;
    }
    eax = t1;
    edx = t2;
    t3 = rd8(eax);
    wr8(self + 9u, (uint8_t)t3);
    t4 = rd8(eax + 4u);
    wr8(self + 0xau, (uint8_t)t4);
    t5 = rd8(eax + 8u);
    wr8(self + 0xbu, (uint8_t)t5);
    t6 = rd8(eax + 0xcu);
    wr8(self + 0xcu, (uint8_t)t6);
    wr8(self + 0xdu, (uint8_t)(rd8(eax + 0x10u) + 1u));
    t7 = rd16(eax + 0x14u);
    wr16(self + 0xeu, (uint16_t)(t7 + 0x76cu));
    g->edx = ((edx | t4 | t6) & 0xffff0000u) | (uint16_t)(t7 + 0x76cu);
    return;
L_101be306: ;
    wr8(self + 9u, 0u);
    wr8(self + 0xau, 0u);
    wr8(self + 0xbu, 0u);
    wr8(self + 0xcu, 1u);
    wr8(self + 0xdu, 1u);
    wr16(self + 0xeu, 0x76cu);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be2c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101be2c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
