/* f_0x10202af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10202af0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10202afbu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 8u); goto E_10202afb;
    case 0x10202b09u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; goto E_10202b09;
    case 0x10202b12u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; goto E_10202b12;
    case 0x10202b22u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; goto E_10202b22;
    case 0x10202b79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10202b79;
    default: break;
    }
#endif

    COW_AT(10202af0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_edi);
    if ((int16_t)rd16(self + 0x3au) < 0)
    {
        eax = in_eax;
        loc_4 = self;
        loc_8 = in_edi;
        goto L_10202b79;
    }
    COW_AT(10202afb)
    wr32(sp0 - 0xcu, 3u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10087070u), in_eax, g->ecx, g->edx, 1, 1, 3u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        loc_4 = self;
        loc_8 = in_edi;
        goto L_10202b79;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10202b09)
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t5 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_10202b79;
    }
    eax = t4;
    edx = t5;
    COW_AT(10202b12)
    wr32(sp0 - 0xcu, 0xffu);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, COW_IMG(0x100956c0u), eax, 1, 0xffu);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_10202b79;
    }
    eax = t6;
    COW_AT(10202b22)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr8(sp0 - 4u, rd8(self + 0x3au));
    wr32(sp0 - 0x14u, sp0 - 4u);
    t7 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t7);
    wr32(sp0 - 0x1cu, arg2 + 7u);
    wr32(sp0 - 0x20u, arg1 - 0x3au);
    g->ebx = arg2;
    g->ecx = arg2 + 7u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x101cb0d0u), 4, arg1 - 0x3au, arg2 + 7u, t7, sp0 - 4u);
    t8 = g->ecx;
    t9 = rd32(COW_IMG(0x104e1b98u) + (((int16_t)rd16(self + 0x3au) > 0) - 1u & 9u) * 4u);
    wr32(sp0 - 0x24u, t9);
    wr32(sp0 - 0x28u, COW_IMG(0x1035baecu));
    wr32(sp0 - 0x2cu, arg2);
    wr32(sp0 - 0x30u, arg1 - 0x3au);
    wr32(sp0 - 0x34u, 0x66u);
    g->eax = t9;
    g->esp = sp0 - 0x20u;
    t10 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, 0x66u, arg1 - 0x3au, arg2, COW_IMG(0x1035baecu), t9);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = rd32(sp0 - 8u);
    return (t10 & 0xffffff00u) | 1u;
L_10202b79: ;
    COW_AT(10202b79)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = loc_8;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10202af0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10202afbu:
    {
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->edi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x10202b09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10202b12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10202b22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10202b79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10202af0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10202af0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
