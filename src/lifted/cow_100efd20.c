/* f_0x100efd20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100efd20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100efd3bu: eax = g->eax; edx = g->edx; esi = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_100efd3b;
    case 0x100efd4du: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd4d;
    case 0x100efd59u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd59;
    case 0x100efd5bu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd5b;
    case 0x100efd61u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd61;
    case 0x100efd67u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd67;
    case 0x100efd6cu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd6c;
    case 0x100efd72u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd72;
    case 0x100efd77u: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd77;
    case 0x100efd8cu: eax = g->eax; edx = g->edx; esi = g->esi; goto E_100efd8c;
    default: break;
    }
#endif

    COW_AT(100efd20)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_esi);
    t1 = rd32(COW_IMG(0x104df770u));
    wr32(t1 + 0x136acu, 0u);
    eax = t1;
    edx = in_edx;
    esi = 0u;
    loc_2c = in_ebx;
    loc_30 = in_esi;
L_100efd3b: ;
    COW_AT(100efd3b)
    wr32(sp0 - 0x34u, sp0 - 0x28u);
    wr32(sp0 - 0x38u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_cdecl(g, COW_IMG(0x1030ffb5u), 2, esi, sp0 - 0x28u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        goto L_100efd6c;
    }
    edx = t3;
    COW_AT(100efd4d)
    if (!(rd32(sp0 - 0x28u) & 1u))
    {
        eax = rd32(sp0 - 0x28u) & 1u;
        goto L_100efd6c;
    }
    COW_AT(100efd59)
    eax = 0u;
L_100efd5b: ;
    COW_AT(100efd5b)
    if (!(rd8(eax + sp0 - 8u) & 1u)) goto L_100efd67;
    COW_AT(100efd61)
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        goto L_100efd5b;
    }
    eax = eax + 1u;
L_100efd67: ;
    COW_AT(100efd67)
    if (eax != 8u) goto L_100efd72;
L_100efd6c: ;
    COW_AT(100efd6c)
    if ((int32_t)(esi + 1u) < 64)
    {
        esi = esi + 1u;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        goto L_100efd3b;
    }
    esi = esi + 1u;
L_100efd72: ;
    COW_AT(100efd72)
    if (esi != 0x40u) goto L_100efd8c;
    COW_AT(100efd77)
    t4 = rd32(sp0 - 0x2cu);
    t5 = rd32(sp0 - 0x30u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0xffffffffu);
    g->ebx = t4;
    g->esi = t5;
    return 0xffffffffu;
L_100efd8c: ;
    COW_AT(100efd8c)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x30u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100efd20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100efd3bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100efd4du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd59u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd5bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd61u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd67u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd6cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->ebx = 1u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd72u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd77u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100efd8cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x34u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100efd20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100efd20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
