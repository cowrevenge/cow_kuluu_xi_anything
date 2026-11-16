/* f_0x10188b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10188b70(Guest* g)
{
    double d11;
    double d3;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
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
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, COW_IMG(0x10186fd0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    d3 = cow_take_float(g);
    wr32(sp0 - 0x20u, t1);
    wrf32(sp0 - 0x20u, (float)(double)(float)d3);
    wr32(sp0 - 0x24u, self + 0xe4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x10u, self + 0xe4u, cow_f2bits((double)(float)d3));
    t4 = rd32(sp0 - 0x10u);
    t5 = rd32(sp0 - 0xcu);
    wr32(arg1 + 4u, t4);
    t6 = rd32(sp0 - 8u);
    wr32(arg1, 3u);
    wr32(arg1 + 8u, t5);
    wr32(arg1 + 0xcu, t6);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x24u, 0u);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x2cu, 0u);
    wr32(arg1 + 0x30u, 0u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x18u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    t7 = rd32(self + 0xa4u);
    wr32(arg1 + 0x40u, t7);
    t8 = rd32(self + 0xa8u);
    wr32(arg1 + 0x44u, t8);
    t9 = rd32(self + 0xacu);
    wr32(arg1 + 0x48u, t9);
    wr32(arg1 + 0x64u, 0x3f800000u);
    wr32(arg1 + 0x60u, 0x3f800000u);
    wr32(arg1 + 0x5cu, 0x3f800000u);
    wr32(arg1 + 0x58u, 0x3f800000u);
    wr32(arg1 + 0x54u, 0x3f800000u);
    wr32(arg1 + 0x50u, 0x3f800000u);
    wr32(arg1 + 0x4cu, 0x3f800000u);
    cow_thiscall(g, COW_IMG(0x10186fd0u), self, 0);
    t10 = g->ecx;
    d11 = cow_take_float(g);
    wr32(sp0 - 0x20u, t10);
    wrf32(sp0 - 0x20u, (float)(double)(float)d11);
    wr32(sp0 - 0x24u, self + 0xf4u);
    wr32(sp0 - 0x28u, sp0 - 0x10u);
    cow_cdecl(g, COW_IMG(0x100272e0u), 3, sp0 - 0x10u, self + 0xf4u, cow_f2bits((double)(float)d11));
    t12 = rd32(sp0 - 0x10u);
    t13 = rd32(sp0 - 0xcu);
    wr32(arg2 + 4u, t12);
    t14 = rd32(sp0 - 8u);
    wr32(arg2, 3u);
    wr32(arg2 + 8u, t13);
    wr32(arg2 + 0xcu, t14);
    wr32(arg2 + 0x10u, 0u);
    wr32(arg2 + 0x24u, 0u);
    wr32(arg2 + 0x28u, 0u);
    wr32(arg2 + 0x2cu, 0u);
    wr32(arg2 + 0x30u, 0u);
    wr32(arg2 + 0x14u, 0u);
    wr32(arg2 + 0x18u, 0u);
    wr32(arg2 + 0x1cu, 0u);
    wr32(arg2 + 0x20u, 0u);
    t15 = rd32(self + 0xc4u);
    wr32(arg2 + 0x40u, t15);
    t16 = rd32(self + 0xc8u);
    wr32(arg2 + 0x44u, t16);
    t17 = rd32(self + 0xccu);
    wr32(arg2 + 0x48u, t17);
    wr32(arg2 + 0x64u, 0x3f800000u);
    wr32(arg2 + 0x60u, 0x3f800000u);
    wr32(arg2 + 0x5cu, 0x3f800000u);
    wr32(arg2 + 0x58u, 0x3f800000u);
    wr32(arg2 + 0x54u, 0x3f800000u);
    wr32(arg2 + 0x50u, 0x3f800000u);
    wr32(arg2 + 0x4cu, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10188b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10188b70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
