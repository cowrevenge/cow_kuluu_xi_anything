/* f_0x1022cdb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1022cdb0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022ce42u: in_esi = g->esi; in_edi = g->edi; goto E_1022ce42;
    case 0x1022ce46u: edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_1022ce46;
    default: break;
    }
#endif

    COW_AT(1022cdb0)
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x3cu, 0x4au);
    wr32(sp0 - 0x40u, 9u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x4au);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x44u, 0xecu);
    wr32(sp0 - 0x48u, 9u);
    wr32(sp0 - 0x30u, t1);
    wr32(sp0 - 0x2cu, 0xau);
    wr32(sp0 - 0x28u, 0x14u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x40u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xecu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x4cu, 0x4bu);
    wr32(sp0 - 0x50u, 9u);
    wr32(sp0 - 0x24u, t4);
    wr32(sp0 - 0x20u, 0xau);
    wr32(sp0 - 0x1cu, 0x28u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x48u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x4bu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x54u, 0x4cu);
    wr32(sp0 - 0x58u, 9u);
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x14u, 0xau);
    wr32(sp0 - 0x10u, 0x14u);
    g->esp = sp0 - 0x50u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x4cu);
    wr32(sp0 - 0xcu, t10);
    wr32(sp0 - 8u, 0xau);
    wr32(sp0 - 4u, 0x28u);
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, arg1);
    if (rd8(self + 0xbdu) != 0u)
    {
        edx = sp0 - 0x30u;
    }
    else
    {
    COW_AT(1022ce42)
        edx = sp0 - 0x18u;
    }
    COW_AT(1022ce46)
    wr32(sp0 - 0x40u, edx);
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_cdecl(g, COW_IMG(0x10220d90u), 6, edx, arg1, arg2, 2u, rd32(sp0 - 0x30u), 0xau);
    t12 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t12;
    return t11;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022cdb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022ce42u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_edi;
        uint32_t in_esi;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->eax = arg2;
        g->ecx = arg1;
        g->edx = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, arg1);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x34u, 2u);
        wr32(sp0 - 0x2cu, 0xau);
        (void)sp0;
        return 1;
    }
    case 0x1022ce46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x3cu;
        g->eax = arg2;
        g->ecx = arg1;
        wr32(sp0 - 0x3cu, arg1);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x34u, 2u);
        wr32(sp0 - 0x2cu, 0xau);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022cdb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022cdb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
