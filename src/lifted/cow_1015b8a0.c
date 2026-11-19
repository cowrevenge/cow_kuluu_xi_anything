/* f_0x1015b8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015b8a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015b8b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); goto E_1015b8b1;
    case 0x1015b8b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015b8b3;
    case 0x1015b8d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1015b8d5;
    case 0x1015b8e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1015b8e6;
    case 0x1015b8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; goto E_1015b8f5;
    case 0x1015b8f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015b8f7;
    default: break;
    }
#endif

    COW_AT(1015b8a0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = in_esi;
        edi = in_edi;
        loc_4 = t1;
        loc_8 = in_ebx;
    }
    else
    {
        eax = t1;
        edx = t2;
        loc_4 = t1;
    COW_AT(1015b8b1)
        wr32(sp0 - 0xcu, in_esi);
        wr32(sp0 - 0x10u, in_edi);
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
L_1015b8b3: ;
    COW_AT(1015b8b3)
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x10u;
        t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t4 = g->edx;
        wr32(sp0 - 0x14u, eax);
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, eax);
        t6 = g->edx;
        if (rd32(t3 + 0x150cu) == 0u)
        {
            eax = t5;
            edx = t6;
            esi = t3;
        }
        else
        {
            eax = t5;
            ecx = rd32(t3 + 0x150cu);
            esi = t3;
    COW_AT(1015b8d5)
            wr32(sp0 - 0x14u, 1u);
            g->eax = eax;
            g->edx = rd32(ecx);
            t7 = rd32(ecx);
            g->esp = sp0 - 0x10u;
            t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, 1u);
            t9 = g->edx;
            wr32(esi + 0x150cu, 0u);
            eax = t8;
            edx = t9;
        }
    COW_AT(1015b8e6)
        g->esp = sp0 - 0x10u;
        cow_fastcall(g, COW_IMG(0x1015afa0u), esi, edx, 0);
        t10 = g->edx;
        if (rd32(sp0 - 4u) != 0u)
        {
            eax = rd32(sp0 - 4u);
            edx = t10;
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
            goto L_1015b8b3;
        }
        eax = rd32(sp0 - 4u);
        edx = t10;
    COW_AT(1015b8f5)
        esi = rd32(sp0 - 0xcu);
        edi = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
    }
    COW_AT(1015b8f7)
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x101265d0u), self, edx, 0);
    g->ebx = rd32(sp0 - 8u);
    g->esi = esi;
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015b8a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015b8b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015b8b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015b8d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015b8e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015b8f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1015b8f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
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
void cow_adapter_1015b8a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1015b8a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
