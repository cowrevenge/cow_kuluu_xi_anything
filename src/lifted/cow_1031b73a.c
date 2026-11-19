/* f_0x1031b73a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031b73a(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031b748u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b748;
    case 0x1031b756u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b756;
    case 0x1031b760u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b760;
    case 0x1031b765u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b765;
    case 0x1031b774u: eax = g->eax; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b774;
    case 0x1031b77bu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b77b;
    case 0x1031b780u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b780;
    case 0x1031b787u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1031b787;
    case 0x1031b790u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b790;
    case 0x1031b797u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b797;
    case 0x1031b79fu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b79f;
    case 0x1031b7a5u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7a5;
    case 0x1031b7aau: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7aa;
    case 0x1031b7bcu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7bc;
    case 0x1031b7cau: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7ca;
    case 0x1031b7cfu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7cf;
    case 0x1031b7d3u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1031b7d3;
    case 0x1031b7e3u: eax = g->eax; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031b7e3;
    case 0x1031b7e8u: eax = g->eax; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031b7e8;
    case 0x1031b7eau: eax = g->eax; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1031b7ea;
    default: break;
    }
#endif

    COW_AT(1031b73a)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_esi);
    if (rd32(COW_IMG(0x109f8408u)) != 3u)
    {
        eax = rd32(COW_IMG(0x109f8408u));
        goto L_1031b760;
    }
    COW_AT(1031b748)
    if (rd32(sp0 + 4u) > 0x3f8u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_1031b7e8;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(1031b756)
    wr32(COW_IMG(0x109f8400u), eax);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_esi;
L_1031b7e3: ;
    COW_AT(1031b7e3)
    wr32(sp0 - 0xcu, 1u);
    eax = 1u;
L_1031b7ea: ;
    COW_AT(1031b7ea)
    g->esi = loc_8;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_1031b760: ;
    COW_AT(1031b760)
    if (eax != 2u) goto L_1031b77b;
    COW_AT(1031b765)
    if (((rd32(sp0 + 4u) + 0xfu & 0xffffff00u) | (rd32(sp0 + 4u) + 0xfu & 0xf0u)) > 0x780u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_1031b7e8;
    }
    eax = (rd32(sp0 + 4u) + 0xfu & 0xffffff00u) | (rd32(sp0 + 4u) + 0xfu & 0xf0u);
    COW_AT(1031b774)
    wr32(COW_IMG(0x103d29dcu), eax);
    edx = in_edx;
    loc_4 = in_ebp;
    loc_8 = in_esi;
    goto L_1031b7e3;
L_1031b77b: ;
    COW_AT(1031b77b)
    if (eax != 1u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_1031b7e8;
    }
    COW_AT(1031b780)
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        loc_8 = in_esi;
        goto L_1031b7e8;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(1031b787)
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x1031b4a1u), g->eax, self, in_edx, 1, 3, sp0 + 4u, in_esi, in_ebp);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1031b790)
    if (rd8(sp0 + 4u) < 6u) goto L_1031b7bc;
    COW_AT(1031b797)
    if (esi > 0x3f8u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1031b7e8;
    }
    COW_AT(1031b79f)
    wr32(sp0 - 0xcu, esi);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1031b7edu), g->eax, sp0 + 4u, edx, 1, 1, esi);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1031b7a5)
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1031b7e8;
    }
    COW_AT(1031b7aa)
    wr32(COW_IMG(0x109f8400u), esi);
    wr32(COW_IMG(0x109f8408u), 3u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1031b7e3;
L_1031b7bc: ;
    COW_AT(1031b7bc)
    if ((esi + 0xfu & 0xfffffff0u) > 0x780u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1031b7e8;
    }
    esi = esi + 0xfu & 0xfffffff0u;
    COW_AT(1031b7ca)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_fastcall(g, COW_IMG(0x1031c756u), sp0 + 4u, edx, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1031b7cf)
    if (eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_1031b7e8;
    }
    COW_AT(1031b7d3)
    wr32(COW_IMG(0x103d29dcu), esi);
    wr32(COW_IMG(0x109f8408u), 2u);
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    goto L_1031b7e3;
L_1031b7e8: ;
    COW_AT(1031b7e8)
    eax = 0u;
    goto L_1031b7ea;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031b73a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031b748u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b756u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b760u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b765u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b774u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b77bu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b780u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b787u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b790u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b797u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b79fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b7a5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b7aau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b7bcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b7cau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ecx = sp0 + 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b7cfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b7d3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031b7e3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b7e8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031b7eau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031b73a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031b73a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
