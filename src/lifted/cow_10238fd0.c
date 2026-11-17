/* f_0x10238fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10238fd0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x106218b8u)));
    t1 = rd32(COW_IMG(0x106218b8u));
    t2 = rd32(COW_IMG(0x106218b4u));
    wr16(sp0 - 0x24u, (uint16_t)t1);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, t1 - t2);
    wr32(sp0 - 0x18u, 0x1eu);
    wr32(sp0 - 0x14u, 0x29u);
    wr32(sp0 - 0x10u, 0x34u);
    wr32(sp0 - 0x20u, t2);
    t3 = rd32(self + 0x14u);
    wr16(sp0 - 0x28u, (uint16_t)t2);
    wr32(sp0 - 0xcu, 0x1du);
    t4 = rd32(sp0 + t3 * 4u - 0x18u);
    wr32(sp0 - 0x3cu, t4);
    wr32(sp0 - 0x40u, 8u);
    wr32(sp0 - 8u, 0x28u);
    wr32(sp0 - 4u, 0x33u);
    wr16(sp0 - 0x26u, 0u);
    wr16(sp0 - 0x22u, 0u);
    g->eax = t3;
    g->ecx = t4;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, t4);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x3cu, t5);
    g->esp = sp0 - 0x30u;
    t8 = cow_thiscall_cdecl(g, COW_IMG(0x1011d530u), t6, 3, t5, rd32(sp0 - 0x38u), 4u);
    wr32(sp0 - 0x34u, 0u);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 0x1au) - (uint32_t)(int16_t)rd16(sp0 - 0x1eu) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x1au) - (uint32_t)(int16_t)rd16(sp0 - 0x1eu)) >> 0x1fu);
    wr32(sp0 - 0x38u, sp0 - 0x28u);
    t10 = rd32(self + 0x14u);
    wr16(sp0 - 0x26u, (uint16_t)((uint32_t)((int32_t)t9 >> 1u) - (uint32_t)((int32_t)((uint32_t)(int16_t)t8 - (uint32_t)((int32_t)(uint32_t)(int16_t)t8 >> 0x1fu)) >> 1u) - 0x18u));
    wr16(sp0 - 0x22u, (uint16_t)(rd32(sp0 - 0x26u) + 0x10u));
    t11 = rd32(sp0 + t10 * 4u - 0xcu);
    wr32(sp0 - 0x3cu, t11);
    wr32(sp0 - 0x40u, 8u);
    g->eax = t11;
    g->ecx = sp0 - 0x28u;
    g->edx = t10;
    g->esp = sp0 - 0x38u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, t11);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x3cu, t12);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1011d7f0u), 3, t12, sp0 - 0x28u, 0u);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    t15 = rd32(sp0 + rd32(self + 0x14u) * 4u - 0x18u);
    wr32(sp0 - 0x3cu, t15);
    wr32(sp0 - 0x40u, 8u);
    g->eax = t15;
    g->ecx = sp0 - 0x20u;
    g->edx = rd32(self + 0x14u);
    t16 = rd32(self + 0x14u);
    g->esp = sp0 - 0x38u;
    t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 8u, t15);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 - 0x3cu, t17);
    g->edx = t19;
    g->esp = sp0 - 0x30u;
    t20 = cow_cdecl(g, COW_IMG(0x1011d7f0u), 3, t17, sp0 - 0x20u, 4u);
    t21 = g->edx;
    g->edx = t21;
    return t20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
