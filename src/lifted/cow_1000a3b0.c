/* f_0x1000a3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1000a3b0(Guest* g)
{
    double d7;
    double d8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 168u);

    wr32(sp0 - 0x94u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_thiscall(g, COW_IMG(0x10009e00u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(t1 + 8u);
    wr32(sp0 - 0x18u, t4);
    g->eax = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10009e00u), t2, 0);
    t6 = rd32(t5 + 0xcu);
    wr32(sp0 - 0xcu, t6);
    d7 = (double)(float)(double)(int32_t)rd32(sp0 - 0x18u);
    wrf32(sp0 - 0x74u, (float)d7);
    wr32(sp0 - 0x80u, 0x80808080u);
    wr32(sp0 - 0x6cu, arg2);
    wr32(sp0 - 0x64u, 0x80808080u);
    wrf32(sp0 - 0x54u, (float)(double)(float)(double)(int32_t)t6);
    d8 = (double)(float)(double)(int32_t)rd32(sp0 - 0x18u);
    wrf32(sp0 - 0x3cu, (float)d8);
    wr32(sp0 - 0x48u, 0x80808080u);
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x2cu, 0x80808080u);
    wr32(sp0 - 0x90u, 0u);
    wrf32(sp0 - 0x38u, (float)(double)(float)(double)(int32_t)t6);
    wr32(sp0 - 0x8cu, 0u);
    wr32(sp0 - 0x88u, arg2);
    wr32(sp0 - 0x84u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x68u, 0x3f800000u);
    wr32(sp0 - 0x60u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x50u, arg2);
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    wr32(sp0 - 0x98u, arg1);
    wr32(sp0 - 0x9cu, 0u);
    t9 = rd32(self + 0xcu);
    wr32(sp0 - 0xa0u, t9);
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0xf4u), arg1, 3, t9, 0u, arg1);
    t10 = g->ecx;
    wr32(sp0 - 0x98u, 0x144u);
    t11 = rd32(self + 0xcu);
    wr32(sp0 - 0x9cu, t11);
    g->edx = rd32(t11);
    t12 = rd32(t11);
    cow_thiscall(g, rd32(t12 + 0x130u), t10, 2, t11, 0x144u);
    t13 = g->edx;
    wr32(sp0 - 0x98u, 0x1cu);
    wr32(sp0 - 0x9cu, sp0 - 0x90u);
    wr32(sp0 - 0xa0u, 2u);
    wr32(sp0 - 0xa4u, 5u);
    cow_thiscall(g, COW_IMG(0x1000cd00u), self, 4, 5u, 2u, sp0 - 0x90u, 0x1cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000a3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1000a3b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
