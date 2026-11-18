/* f_0x102690c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102690c0(Guest* g)
{
    uint32_t t1;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    COW_AT(102690c0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327f81u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x1cu, self + 8u);
    g->eax = self + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, self + 8u);   /* kernel32.dll!InitializeCriticalSection */
    t3 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10269aa0u), self + 0x20u, 1, 0u);
    t5 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr8(sp0 - 4u, 1u);
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10269aa0u), self + 0x38u, 1, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    wr8(sp0 - 4u, 2u);
    cow_fastcall(g, COW_IMG(0x10265b90u), self + 0x50u, t7, 1, 1u);
    t8 = g->edx;
    t9 = rd32(sp0 - 0xcu);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    wr32(self + 0x5cu, 0u);
    wr32(self + 0x60u, 0u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x68u, 0u);
    wr32(self + 0x6cu, 0u);
    wr32(g->fs_base, t9);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102690c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102690c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
