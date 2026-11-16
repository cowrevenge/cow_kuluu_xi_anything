/* f_0x101ee230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101ee230(Guest* g)
{
    double d15;
    double d9;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t2 = g->ecx;
    t3 = rd16(sp0 + 0xcu);
    wr16(self + 0x20u, (uint16_t)t3);
    wr16(self + 0x22u, (uint16_t)arg4);
    wr32(sp0 + 0xcu, (uint32_t)(int16_t)t3);
    t4 = rd32(sp0 + 0xcu);
    wrf32(self + 0x24u, (float)(double)(int32_t)t4);
    wr32(sp0 + 0xcu, (uint32_t)(int16_t)arg4);
    t5 = rd32(sp0 + 0xcu);
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x1033a000u));
    wrf32(self + 0x28u, (float)(double)(int32_t)t5);
    wr16(self + 0x14u, 0xc0u);
    wr16(self + 0x16u, 0xffffu);
    wr16(self + 0x18u, 0u);
    wr16(self + 0x1au, 0u);
    wr16(self + 0x56u, 0u);
    wr16(self + 0x54u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x3cu, 0x44000000u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x40u, 0x44000000u);
    t6 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t7 = rd32(COW_IMG(0x106218b4u));
    t8 = rd32(COW_IMG(0x106218b8u));
    wr32(sp0 + 0xcu, t6);
    g->ecx = t7;
    d9 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331390u)));
    fpush(g, d9);
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), t6, g->ecx, g->edx, 1, 0);
    t11 = g->ecx;
    wr16(self + 0x1cu, (uint16_t)t10);
    t12 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    t13 = rd16(COW_IMG(0x106218bau));
    t14 = rd16(COW_IMG(0x106218b6u));
    wr32(sp0 + 0xcu, t12);
    g->edx = t12;
    d15 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a08u)));
    fpush(g, d15);
    t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t10, g->ecx, g->edx, 1, 0);
    t17 = g->edx;
    wr16(self + 0x1eu, (uint16_t)t16);
    wr16(self + 0x6cu, 0u);
    wr32(self + 0x58u, arg5);
    wr32(self + 0x68u, arg5);
    wr16(self + 0x6eu, 0u);
    wr32(self + 0xb4u, 0u);
    wr32(self + 0xb8u, 0u);
    wr8(self + 0xa3u, 0u);
    wr16(self + 0xa6u, 0xffu);
    wr8(self + 0xa4u, 0u);
    wr16(self + 0xa8u, 0u);
    wr32(self + 0xacu, 0x44u);
    wr32(self + 0xb0u, 0xffffffffu);
    wr16(self + 0x78u, (uint16_t)arg2);
    wr32(self + 0x8cu, arg1);
    wr16(self + 0x74u, 0u);
    wr32(self + 0x84u, 0u);
    wr16(self + 0x76u, 0u);
    wr32(self + 0x88u, 0u);
    wr16(self + 0x7eu, 0u);
    wr16(self + 0x7cu, 0u);
    wr16(self + 0x82u, 0u);
    wr16(self + 0x80u, 0u);
    wr32(self + 0x90u, 0u);
    wr16(self + 0x7au, 0u);
    wr32(self + 0x94u, 0u);
    wr8(self + 0xa0u, 0u);
    wr32(self + 0x98u, 0u);
    wr8(self + 0xa1u, 0u);
    wr32(self + 0x9cu, 0u);
    cow_thiscall(g, COW_IMG(0x101efca0u), self, 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ee230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ee230(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
