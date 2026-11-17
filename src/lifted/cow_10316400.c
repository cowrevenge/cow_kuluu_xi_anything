/* f_0x10316400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10316400(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_esi);
    wr32(sp0 - 0x44u, in_edi);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x28u, COW_IMG(0x103164b6u));
    wr32(sp0 - 0x24u, arg5);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x1cu, arg6);
    wr32(sp0 - 0x18u, arg7);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x14u, COW_IMG(0x10316488u));
    wr32(sp0 - 0x10u, sp0 - 0x44u);
    wr32(sp0 - 0xcu, sp0 - 4u);
    wr32(sp0 - 0x2cu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x2cu);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x34u, arg1);
    wr32(sp0 - 0x30u, arg3);
    wr32(sp0 - 0x48u, sp0 - 0x34u);
    wr32(sp0 - 0x4cu, rd32(arg1));
    g->eax = arg1;
    t2 = rd32(arg1);
    g->esp = sp0 - 0x44u;
    t3 = cow_call_regs(g, COW_IMG(0x1031a04du), g->eax, self, in_edx, 1, 2, t2, sp0 - 0x34u);
    t4 = g->ecx;
    t5 = g->edx;
    g->esp = sp0 - 0x4cu;
    cow_thiscall(g, rd32(t3 + 0x68u), t4, 0);
    wr32(sp0 - 0x38u, 0u);
    if (1u)
    {
        t7 = rd32(sp0 - 0x2cu);
        wr32(g->fs_base, t7);
    }
    else
    {
        t6 = rd32(sp0 - 0x2cu);
        wr32(t6, rd32(rd32(g->fs_base)));
        wr32(g->fs_base, t6);
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10316400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10316400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
