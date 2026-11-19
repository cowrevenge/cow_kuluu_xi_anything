/* f_0x102e73c5 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102e73c5(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e73e6u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102e73e6;
    case 0x102e7410u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_102e7410;
    case 0x102e7418u: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_102e7418;
    case 0x102e741du: ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_102e741d;
    default: break;
    }
#endif

    COW_AT(102e73c5)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, COW_IMG(0x10346420u));
    wr32(sp0 - 0x18u, 0x80000002u);
    g->eax = sp0 - 8u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329008u)), 3, 0x80000002u, COW_IMG(0x10346420u), sp0 - 8u);   /* advapi32.dll!RegOpenKeyA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        loc_4 = in_ebp;
        goto L_102e741d;
    }
    ecx = t2;
    edx = t3;
    COW_AT(102e73e6)
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, sp0 + 0x10u);
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, 0u);
    g->eax = sp0 - 0xcu;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x1032900cu)), 6, 0u, arg2, 0u, sp0 - 0xcu, arg3, sp0 + 0x10u);   /* advapi32.dll!RegQueryValueExA */
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    cow_stdcall(g, rd32(COW_IMG(0x10329024u)), 1, 0u);   /* advapi32.dll!RegCloseKey */
    if (t4 != 0u)
    {
        loc_4 = in_ebp;
        goto L_102e741d;
    }
    COW_AT(102e7410)
    if (rd32(sp0 - 0xcu) != arg1)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_102e741d;
    }
    COW_AT(102e7418)
    g->esi = in_esi;
    g->ebp = rd32(sp0 - 4u);
    return 1u;
L_102e741d: ;
    COW_AT(102e741d)
    g->esi = in_esi;
    g->ebp = loc_4;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e73c5(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e73e6u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x10u, sp0 - 8u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e7410u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102e7418u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102e741du:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e73c5(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e73c5(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
