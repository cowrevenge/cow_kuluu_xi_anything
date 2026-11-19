/* f_0x101c6dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101c6dc0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c6e0au: eax = g->eax; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101c6e0a;
    case 0x101c6e18u: eax = g->eax; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101c6e18;
    default: break;
    }
#endif

    COW_AT(101c6dc0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0xcu, 0x5849414du);
    t1 = rd32(self + 4u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0x1cu, t1 << 3u);
    wr32(sp0 - 0x20u, self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x101c8c50u), t1 << 3u, g->ecx, g->edx, 1, 4, self + 8u, t1 << 3u, in_edi, in_esi);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0xcu);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x18u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, arg1, sp0 - 0xcu, 0xcu, 0u, 0u);
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        goto L_101c6e18;
    }
    COW_AT(101c6e0a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 4u;
L_101c6e18: ;
    COW_AT(101c6e18)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    t5 = rd32(self + 4u) << 3u;
    wr32(sp0 - 0x24u, t5);
    wr32(sp0 - 0x28u, self + 8u);
    wr32(sp0 - 0x2cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, arg1, self + 8u, t5, 1u, 0u);
    t7 = ((int32_t)t6 >= 0) - 1u & 4u;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return t7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c6dc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c6e0au:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101c6e18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg1;
        g->edi = self + 8u;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6dc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c6dc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
