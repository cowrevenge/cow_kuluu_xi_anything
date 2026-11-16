/* f_0x10010700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10010700(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x54u, 0);
    t1 = g->edx;
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x94u, 0);
    t2 = g->edx;
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0xd4u, 0);
    t3 = g->edx;
    g->edx = t3;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x114u, 0);
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x154u, 0);
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x194u, 0);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x1d4u, 0);
    t7 = g->edx;
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x214u, 0);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x254u, 0);
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x10027990u), self + 0x294u, 0);
    t10 = g->edx;
    wr32(self, COW_IMG(0x10329c14u));
    wr8(self + 0xbu, 1u);
    wr16(self + 4u, 0u);
    wr16(self + 6u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x2cu, 0xbf800000u);
    wr32(self + 0x28u, 0x3f800000u);
    wr32(self + 0x30u, 2u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x20u, 0u);
    wr8(self + 8u, 1u);
    wr8(self + 9u, 0u);
    wr8(self + 0xau, 1u);
    wr32(self + 0x40u, 0xffffffffu);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x4cu, 0u);
    t11 = rd8(COW_IMG(0x10456a98u));
    wr32(COW_IMG(0x1047b970u), 0u);
    wr32(COW_IMG(0x1047b974u), 0u);
    wr32(COW_IMG(0x1045b774u), 0u);
    wr32(COW_IMG(0x1047d140u), 0u);
    wr32(COW_IMG(0x1047d128u), 0u);
    wr32(COW_IMG(0x1047bffcu), 0u);
    wr32(COW_IMG(0x104e1bf4u), 0u);
    wr32(COW_IMG(0x10578158u), 0u);
    wr32(COW_IMG(0x1057815cu), 0u);
    wr32(COW_IMG(0x10578160u), 0u);
    wr32(COW_IMG(0x1045690cu), 0u);
    wr32(COW_IMG(0x1047d688u), 0u);
    wr32(COW_IMG(0x1047d68cu), 0u);
    wr32(COW_IMG(0x10456c0cu), 0u);
    wr32(COW_IMG(0x10456d18u), 0u);
    wr8(self + 0xbu, (uint8_t)t11);
    wr32(self + 0x50u, 0u);
    wr32(COW_IMG(0x10456920u), 0u);
    wr32(COW_IMG(0x10456924u), 0u);
    wr32(COW_IMG(0x10456928u), 0u);
    wr32(COW_IMG(0x10456910u), 0u);
    wr32(COW_IMG(0x10456914u), 0u);
    wr32(COW_IMG(0x10456918u), 0u);
    wr32(COW_IMG(0x1045691cu), 0u);
    wr32(COW_IMG(0x1045692cu), 0u);
    wr32(COW_IMG(0x10456930u), 0u);
    wr32(COW_IMG(0x10456934u), 0u);
    wr32(COW_IMG(0x10456938u), 0u);
    wr32(COW_IMG(0x1045693cu), 0u);
    wr32(COW_IMG(0x10456940u), 0u);
    wr32(COW_IMG(0x10456944u), 0u);
    wr8(COW_IMG(0x10350174u), 0x80u);
    wr32(self + 0x2e4u, 0x3f800000u);
    wr32(self + 0x2e8u, 0x3f4a7efau);
    wr32(self + 0x2ecu, 0x3f800000u);
    wr32(self + 0x2f0u, 0x3f800000u);
    cow_thiscall(g, COW_IMG(0x100279b0u), COW_IMG(0x104568a8u), 0);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10010700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10010700(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
