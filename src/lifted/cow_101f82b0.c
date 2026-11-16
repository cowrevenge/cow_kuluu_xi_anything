/* f_0x101f82b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101f82b0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x24u, in_esi);
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, in_edi);
        wr32(sp0 - 0x30u, 0x1b8u);
        wr32(sp0 - 0x34u, self + 0x6d4u);
        g->esp = sp0 - 0x24u;
        t1 = cow_call_regs(g, COW_IMG(0x101c8c50u), self + 0x6d4u, g->ecx, g->edx, 1, 4, self + 0x6d4u, 0x1b8u, in_edi, in_ebx);
        wr32(self + 0x6d0u, t1);
        t2 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
        wr32(sp0 - 0x38u, t2);
        wr32(sp0 - 0x3cu, arg2);
        wr32(sp0 - 0x40u, arg1);
        wr32(sp0 - 0x44u, COW_IMG(0x10385008u));
        wr32(sp0 - 0x48u, sp0 - 0x20u);
        g->edx = t2;
        g->esp = sp0 - 0x34u;
        t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10385008u), arg1, arg2, t2);
        t4 = g->edx;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        t5 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x101c49e0u), t5, 2, sp0 - 0x20u, 0u);
        t6 = g->ecx;
        wr32(sp0 - 0x30u, arg2);
        wr32(sp0 - 0x34u, arg1);
        wr32(sp0 - 0x38u, COW_IMG(0x1038501cu));
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1038501cu), arg1, arg2, in_edi);
        t7 = g->edx;
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0x1c0u);
        wr32(sp0 - 0x3cu, self + 0x6ccu);
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, sp0 - 0x20u, self + 0x6ccu, 0x1c0u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f82b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f82b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
