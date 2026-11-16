/* f_0x102e5402 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e5402(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x103282fdu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e540cu));
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, self);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x18u, self);
    g->esp = sp0 - 0x24u;
    cow_fastcall(g, COW_IMG(0x102e2047u), self, in_edx, 3, arg1, 0u, 1u);
    t2 = g->edx;
    t3 = rd32(self + 0x1038u) + 1u & 0xfffffffeu;
    t4 = rd32(self + 0x1030u);
    wr32(self + 0x1078u, t3);
    t5 = t3 - (t4 & 0xfffffffeu);
    wr32(sp0 - 0x28u, t5 << 4u);
    wr32(sp0 - 8u, 0u);
    wr32(self, COW_IMG(0x1034619cu));
    wr32(self + 0x1070u, t4 & 0xfffffffeu);
    wr32(self + 0x1074u, 0u);
    wr32(self + 0x1080u, 0u);
    wr32(self + 0x107cu, 0u);
    wr32(self + 0x1084u, 0u);
    wr32(self + 0x1088u, t5);
    wr32(self + 0x108cu, 0u);
    wr32(self + 0x1090u, 1u);
    g->eax = t5 << 4u;
    g->esp = sp0 - 0x1cu;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4 & 0xfffffffeu, t2, 1, 3, t5 << 4u, in_edi, in_esi);
    t7 = g->edx;
    wr32(sp0 - 0x14u, t6);
    t8 = rd32(sp0 - 0x28u);
    wr8(sp0 - 8u, 1u);
    if (t6 == 0u)
    {
        edx = t7;
        eax = 0u;
    }
    else
    {
        eax = t6;
        ecx = t8;
        edx = t7;
        ebx = t5;
        loc_14 = t6;
        wr32(sp0 - 0x28u, COW_IMG(0x102d2a17u));
        wr32(sp0 - 0x2cu, ebx);
        wr32(sp0 - 0x30u, 0x10u);
        wr32(sp0 - 0x34u, eax);
        g->esp = sp0 - 0x24u;
        cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, ebx, COW_IMG(0x102d2a17u));
        t9 = g->edx;
        eax = rd32(sp0 - 0x14u);
        edx = t9;
    }
    wr32(self + 0x106cu, eax);
    if (eax == 0u)
    {
        wr32(self + 0x1090u, 0u);
    }
    if (rd32(arg1 + 4u) != 0x59565955u)
    {
        wr32(self + 0x1094u, 0u);
        wr32(self + 0x1098u, 8u);
    }
    else
    {
        wr32(self + 0x1094u, 8u);
        wr32(self + 0x1098u, 0u);
    }
    t10 = rd32(sp0 - 0x10u);
    wr32(g->fs_base, t10);
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5402(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102e5402(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
