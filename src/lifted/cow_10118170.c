/* f_0x10118170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10118170(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10118185u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10118185;
    case 0x10118197u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_10118197;
    case 0x101181a9u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_101181a9;
    case 0x101181b4u: eax = g->eax; edx = g->edx; self = g->esi; edi = g->edi; goto E_101181b4;
    case 0x101181bcu: eax = g->eax; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101181bc;
    default: break;
    }
#endif

    COW_AT(10118170)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
    }
    else
    {
        eax = t2;
        edx = t3;
        edi = t2;
    COW_AT(10118185)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t4 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
        t5 = g->edx;
        wr32(sp0 + 4u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
            loc_4 = in_ebx;
            loc_8 = in_esi;
            loc_c = in_edi;
            goto L_101181bc;
        }
        eax = t4;
        edx = t5;
L_10118197: ;
    COW_AT(10118197)
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t6 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
        t7 = g->edx;
        if (rd16(t6) != 2u)
        {
            edx = t7;
        }
        else
        {
            eax = t6;
            edx = t7;
    COW_AT(101181a9)
            wr32(sp0 - 0x10u, edi);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x10119e30u), eax, 1, edi);
            t8 = g->edx;
            wr32(self + 8u, edi);
            edx = t8;
        }
    COW_AT(101181b4)
        if (rd32(sp0 + 4u) != 0u)
        {
            eax = rd32(sp0 + 4u);
            goto L_10118197;
        }
        eax = rd32(sp0 + 4u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
    }
L_101181bc: ;
    COW_AT(101181bc)
    g->ebx = loc_4;
    g->esi = loc_8;
    g->edi = loc_c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10118170(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10118185u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10118197u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101181a9u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0x14u;
        wr32(sp0 - 0x10u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101181b4u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101181bcu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10118170(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10118170(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
