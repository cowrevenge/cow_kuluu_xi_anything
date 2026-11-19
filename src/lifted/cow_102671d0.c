/* f_0x102671d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102671d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102671edu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102671ed;
    case 0x102671f2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102671f2;
    case 0x102671f4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_102671f4;
    case 0x1026721bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026721b;
    case 0x1026721fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026721f;
    case 0x10267224u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10267224;
    case 0x10267226u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10267226;
    default: break;
    }
#endif

    COW_AT(102671d0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327e78u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    if (self == 8u)
    {
        loc_c = t1;
    COW_AT(102671f2)
        eax = 0u;
    }
    else
    {
        loc_c = t1;
    COW_AT(102671ed)
        eax = self - 4u;
    }
    COW_AT(102671f4)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, eax + 4u);
    wr32(sp0 - 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t2 = cow_fastcall(g, COW_IMG(0x10266b90u), eax + 0x10u, in_edx, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    if (eax == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_10267224;
    }
    edx = t3;
    esi = eax + 4u;
    eax = t2;
    COW_AT(1026721b)
    if (esi == 0u) goto L_10267224;
    COW_AT(1026721f)
    ecx = esi + 4u;
L_10267226: ;
    COW_AT(10267226)
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x10265980u), ecx, edx, 0);
    t4 = rd32(sp0 - 0xcu);
    t5 = rd32(sp0 - 0x14u);
    wr32(g->fs_base, t4);
    g->esi = t5;
    return;
L_10267224: ;
    COW_AT(10267224)
    ecx = 0u;
    goto L_10267226;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102671d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102671edu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102671f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102671f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1026721bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1026721fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10267224u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10267226u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102671d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102671d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
