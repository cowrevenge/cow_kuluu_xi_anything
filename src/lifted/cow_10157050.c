/* f_0x10157050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10157050(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015706cu: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1015706c;
    case 0x10157074u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10157074;
    case 0x101570b1u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_101570b1;
    case 0x101570beu: eax = g->eax; edx = g->edx; self = g->esi; goto E_101570be;
    case 0x101570e3u: eax = g->eax; edx = g->edx; self = g->esi; goto E_101570e3;
    case 0x101570ebu: eax = g->eax; edx = g->edx; goto E_101570eb;
    case 0x101570f3u: eax = g->eax; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101570f3;
    default: break;
    }
#endif

    COW_AT(10157050)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101c5b90u), self + 0x860u, 1, 0u);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101570b1;
    }
    edx = t2;
    COW_AT(1015706c)
    if (rd32(self + 0x874u) == arg2)
    {
        loc_4 = in_ebx;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_101570f3;
    }
    COW_AT(10157074)
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, sp0 + 8u);
    wr32(self + 0x874u, 0xffffffffu);
    wr32(self + 0x878u, arg2);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x810u, 2, sp0 + 8u, arg2);
    t3 = rd32(self + 0x86cu);
    wr32(sp0 - 0x10u, t3);
    wr32(sp0 - 0x14u, arg2);
    t4 = rd32(self + 0x870u);
    wr32(sp0 - 0x18u, t4);
    g->edx = arg2;
    cow_thiscall(g, COW_IMG(0x101c5a70u), self + 0x860u, 3, t4, arg2, t3);
    t5 = g->edx;
    edx = t5;
L_101570e3: ;
    COW_AT(101570e3)
    if (rd32(self + 0x874u) == arg2)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_101570f3;
    }
    COW_AT(101570eb)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return 0u;
L_101570b1: ;
    COW_AT(101570b1)
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0x860u, 1, 0u);
    t7 = g->edx;
    if (t6 == 0u)
    {
        edx = t7;
    }
    else
    {
    COW_AT(101570be)
        t8 = rd32(self + 0x878u);
        t9 = rd32(self + 0x870u);
        t10 = rd32(self + 0x86cu);
        wr32(self + 0x874u, t8);
        wr32(sp0 - 0x10u, t10);
        wr32(sp0 - 0x14u, t9);
        g->edx = t10;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10257d00u), self + 0x810u, 2, t9, t10);
        t11 = g->edx;
        edx = t11;
    }
    goto L_101570e3;
L_101570f3: ;
    COW_AT(101570f3)
    wr32(sp0 - 0x10u, arg3);
    t12 = rd32(self + 0x870u);
    wr32(sp0 - 0x14u, t12);
    wr32(sp0 - 0x18u, arg1);
    g->ebx = arg2;
    g->edx = t12;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10156e80u), 3, arg1, t12, arg3);
    t13 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t13;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10157050(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015706cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->edi = self + 0x860u;
        (void)sp0;
        return 1;
    }
    case 0x10157074u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->edi = self + 0x860u;
        (void)sp0;
        return 1;
    }
    case 0x101570b1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        g->edi = self + 0x860u;
        (void)sp0;
        return 1;
    }
    case 0x101570beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101570e3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101570ebu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101570f3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10157050(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10157050(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
