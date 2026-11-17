/* f_0x10240bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10240bc0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, COW_IMG(0x1036c19cu));
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, COW_IMG(0x1036c19cu));
    t1 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 8u);
    t2 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t2, g->edx, 0, 1, sp0 - 8u);
    wr32(sp0 - 0x14u, 0x80808080u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, self + 0x14u);
    t3 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 6u;
    wr32(sp0 - 0x20u, t3);
    t4 = (uint32_t)(int16_t)rd16(sp0 - 8u) - 0xc0u;
    wr32(sp0 - 0x24u, t4);
    g->eax = t4;
    t5 = cow_cdecl(g, COW_IMG(0x10129f00u), 5, t4, t3, self + 0x14u, 0u, 0x80808080u);
    wr32(sp0 - 0x28u, 0x80808080u);
    t6 = rd16(sp0 - 6u);
    wr16(sp0 - 6u, (uint16_t)(t6 + 0x12u));
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, self + 0x214u);
    t7 = (uint32_t)(int16_t)(t6 + 0x12u) + 6u;
    wr32(sp0 - 0x34u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 8u) - 0xc0u;
    wr32(sp0 - 0x38u, t8);
    g->eax = t8;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t8, t7, self + 0x214u, 0u, 0x80808080u, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), self + 0x14u, 0u, 0x80808080u, in_edi);
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, self + 0x414u);
    t10 = (uint32_t)(int16_t)(rd16(sp0 - 6u) + 0x12u) + 6u;
    wr32(sp0 - 0x48u, t10);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 8u) - 0xc0u;
    wr32(sp0 - 0x4cu, t11);
    t12 = rd16(sp0 - 6u);
    wr16(sp0 - 6u, (uint16_t)(t12 + 0x12u));
    g->eax = (t9 & 0xffff0000u) | (uint16_t)(t12 + 0x12u);
    g->edx = t11;
    g->esp = sp0 - 0x20u;
    t13 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, t11, t10, self + 0x414u, 0u, 0x80808080u, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), self + 0x214u, 0u, 0x80808080u, rd32(sp0 - 0x24u));
    t14 = g->edx;
    g->edx = t14;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10240bc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10240bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
