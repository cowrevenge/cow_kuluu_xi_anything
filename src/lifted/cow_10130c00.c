/* f_0x10130c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10130c00(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10130c09u: in_eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c09;
    case 0x10130c0fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c0f;
    case 0x10130c19u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c19;
    case 0x10130c28u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c28;
    case 0x10130c31u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c31;
    case 0x10130c3au: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c3a;
    case 0x10130c43u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c43;
    case 0x10130c4cu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c4c;
    case 0x10130c55u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c55;
    case 0x10130c5eu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c5e;
    case 0x10130c67u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c67;
    case 0x10130c70u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c70;
    case 0x10130c77u: eax = g->eax; edx = g->edx; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10130c77;
    default: break;
    }
#endif

    COW_AT(10130c00)
    if (arg1 != 0u) goto L_10130c0f;
    COW_AT(10130c09)
    g->esi = in_esi;
    return in_eax & 0xffffff00u;
L_10130c0f: ;
    COW_AT(10130c0f)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(t1 + 0x54u), self, 0);
    t3 = g->edx;
    if (t2 > 0x10u)
    {
        eax = t2;
        edx = t3;
        goto L_10130c70;
    }
    eax = t2;
    edx = t3;
    COW_AT(10130c19)
    t4 = rd32(COW_IMG(0x10130cbcu) + rd8(COW_IMG(0x10130ce4u) + eax) * 4u);
    switch (t4 - RD)
    {
    case 0x10130c28u: goto L_10130c28;
    case 0x10130c31u: goto L_10130c31;
    case 0x10130c3au: goto L_10130c3a;
    case 0x10130c43u: goto L_10130c43;
    case 0x10130c4cu: goto L_10130c4c;
    case 0x10130c55u: goto L_10130c55;
    case 0x10130c5eu: goto L_10130c5e;
    case 0x10130c67u: goto L_10130c67;
    case 0x10130c70u: goto L_10130c70;
    default: rt_fatal(g, COW_IMG(0x10130c21u), "switch");
    }
    return 0;
L_10130c28: ;
    COW_AT(10130c28)
    loc_c = 1u;
L_10130c77: ;
    COW_AT(10130c77)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 0u, 0x40u, loc_c, 0x80808080u);
    t6 = g->ecx;
    t7 = g->edx;
    t8 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t9 = rd32(rd32(t8) + 0x2e4u);
    g->eax = t9;
    t10 = rd32(t8);
    t11 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t10, 4, 1u, 0x41u, t9, 0x80808080u);
    t12 = g->edx;
    wr32(arg1 + 0x4cu, 0u);
    wr32(arg1 + 0x48u, 0xffffffffu);
    g->esi = in_esi;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_10130c31: ;
    COW_AT(10130c31)
    loc_c = 2u;
    goto L_10130c77;
L_10130c3a: ;
    COW_AT(10130c3a)
    loc_c = 3u;
    goto L_10130c77;
L_10130c43: ;
    COW_AT(10130c43)
    loc_c = 4u;
    goto L_10130c77;
L_10130c4c: ;
    COW_AT(10130c4c)
    loc_c = 5u;
    goto L_10130c77;
L_10130c55: ;
    COW_AT(10130c55)
    loc_c = 6u;
    goto L_10130c77;
L_10130c5e: ;
    COW_AT(10130c5e)
    loc_c = 7u;
    goto L_10130c77;
L_10130c67: ;
    COW_AT(10130c67)
    loc_c = 8u;
    goto L_10130c77;
L_10130c70: ;
    COW_AT(10130c70)
    loc_c = 0u;
    goto L_10130c77;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10130c00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10130c09u:
    {
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10130c0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c19u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c43u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c67u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10130c77u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        wr32(sp0 - 8u, 0x80808080u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10130c00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10130c00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
