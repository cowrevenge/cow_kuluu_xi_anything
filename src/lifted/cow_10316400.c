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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031648eu: in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebx = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_1031648e;
    case 0x103164a5u: in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebx = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_103164a5;
    case 0x103164aeu: in_edi = rd32(sp0 - 0x44u); in_esi = rd32(sp0 - 0x40u); in_ebx = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x3cu); g->edi = rd32(sp0 - 0x44u); g->esi = rd32(sp0 - 0x40u); goto E_103164ae;
    default: break;
    }
#endif

    COW_AT(10316400)
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
    COW_AT(103164a5)
        t7 = rd32(sp0 - 0x2cu);
        wr32(g->fs_base, t7);
    }
    else
    {
    COW_AT(1031648e)
        t6 = rd32(sp0 - 0x2cu);
        wr32(t6, rd32(rd32(g->fs_base)));
        wr32(g->fs_base, t6);
    }
    COW_AT(103164ae)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10316400(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031648eu:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebx = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ecx = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x34u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x10u, sp0 - 0x44u);
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x103164a5u:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebx = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ecx = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x34u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x10u, sp0 - 0x44u);
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x103164aeu:
    {
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_edi = rd32(sp0 - 0x44u);
        in_esi = rd32(sp0 - 0x40u);
        in_ebx = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x44u;
        g->ecx = sp0 - 0x34u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x34u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x10u, sp0 - 0x44u);
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10316400(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10316400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
