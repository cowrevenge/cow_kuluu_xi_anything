/* f_0x10259650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10259650(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025965du: eax = g->eax; edx = g->edx; in_esi = g->esi; in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); goto E_1025965d;
    case 0x10259664u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); goto E_10259664;
    case 0x10259675u: eax = g->eax; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_10259675;
    case 0x102596d0u: eax = g->eax; edx = g->edx; self = g->ebp; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_102596d0;
    default: break;
    }
#endif

    COW_AT(10259650)
    if (arg2 != 0xffffffffu) goto L_10259664;
    COW_AT(1025965d)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    return 0u;
L_10259664: ;
    COW_AT(10259664)
    g->eax = in_eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x38u, in_esi, in_ebp);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_102596d0;
    }
    edx = t2;
    esi = t1;
    COW_AT(10259675)
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 6u);
    wr32(esi, COW_IMG(0x1033ceacu));
    wr32(esi + 0xcu, 2u);
    wr32(esi + 0x10u, arg1);
    wr32(esi + 0x14u, 0xffffffffu);
    wr32(esi + 0x1cu, arg2);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0x20u, 1, arg3);
    t4 = g->edx;
    wr32(esi + 0x2cu, 0u);
    wr32(esi + 0x30u, 0u);
    wr32(esi, COW_IMG(0x1033cec0u));
    t5 = cow_thiscall(g, COW_IMG(0x10259780u), self, 1, esi);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    return t5;
L_102596d0: ;
    COW_AT(102596d0)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x10259780u), self, 1, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    return t6;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10259650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025965du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10259664u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = arg2;
        g->ebp = self;
        (void)sp0;
        return 1;
    }
    case 0x10259675u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102596d0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10259650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10259650(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
