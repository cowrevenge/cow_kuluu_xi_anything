/* f_0x1025e280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1025e280(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);

    COW_AT(1025e280)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x1032756eu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, arg1);
    wr32(sp0 - 0x28u, self + 0x7cu);
    wr32(sp0 - 0x2cu, arg3);
    wr32(sp0 - 0x30u, arg2);
    wr32(sp0 - 0x10u, self);
    g->eax = arg1;
    g->esp = sp0 - 0x20u;
    t2 = cow_fastcall(g, COW_IMG(0x10261230u), self, arg2, 4, arg2, arg3, self + 0x7cu, arg1);
    t3 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(self + 0x50u, 0u);
    t4 = cow_fastcall(g, COW_IMG(0x10265b90u), self + 0x54u, t3, 1, 0u);
    t5 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    wr8(sp0 - 4u, 1u);
    t6 = cow_fastcall(g, COW_IMG(0x10265b90u), self + 0x58u, t5, 1, 1u);
    t7 = g->edx;
    wr32(sp0 - 0x24u, 1u);
    wr8(sp0 - 4u, 2u);
    t8 = cow_fastcall(g, COW_IMG(0x10265b90u), self + 0x5cu, t7, 1, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    t11 = rd32(COW_IMG(0x10329184u));
    wr32(self + 0x60u, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(self + 0x70u, 0u);
    wr32(self + 0x74u, 0u);
    wr32(self + 0x78u, 0u);
    g->edx = t10;
    cow_thiscall(g, t11, t9, 1, self + 0x7cu);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x24u, self + 0x94u);
    g->eax = self + 0x94u;
    g->edx = t13;
    t14 = cow_thiscall(g, t11, t12, 1, self + 0x94u);
    t15 = g->edx;
    wr32(self + 0xacu, 0u);
    wr32(sp0 - 0x24u, self + 0xc4u);
    wr32(self + 0xb0u, 1u);
    wr32(self + 0xb4u, 0u);
    wr32(self + 0xb8u, 0u);
    wr32(self + 0xbcu, 0u);
    wr32(self + 0xc0u, 0u);
    t16 = cow_thiscall(g, t11, self + 0xc4u, 1, self + 0xc4u);
    t17 = g->ecx;
    t18 = rd32(self + 0x5cu);
    wr32(self, COW_IMG(0x10340478u));
    wr32(sp0 - 0x24u, t18);
    wr32(self + 0xcu, COW_IMG(0x1034043cu));
    wr32(self + 0x10u, COW_IMG(0x10340428u));
    cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t18);   /* kernel32.dll!SetEvent */
    t19 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t19);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e280(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025e280(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
