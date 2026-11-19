/* f_0x10323dde - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10323dde(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 12u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10323de8u: eax = g->eax; in_edx = g->edx; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10323de8;
    case 0x10323e07u: eax = g->eax; edx = g->edx; goto E_10323e07;
    case 0x10323e0cu: eax = g->eax; edx = g->edx; loc_4 = rd32(sp0 - 4u); goto E_10323e0c;
    case 0x10323e11u: eax = g->eax; edx = g->edx; goto E_10323e11;
    default: break;
    }
#endif

    COW_AT(10323dde)
    wr32(sp0 - 4u, in_ebp);
    if (rd32(sp0 + 4u) == 0u)
    {
        edx = in_edx;
        loc_4 = in_ebp;
        goto L_10323e0c;
    }
    eax = rd32(sp0 + 4u);
    COW_AT(10323de8)
    wr8(sp0 + 7u, 0u);
    wr8(sp0 + 4u, (uint8_t)((uint8_t)eax + 0x40u));
    wr32(sp0 - 8u, sp0 + 4u);
    wr8(sp0 + 5u, 0x3au);
    wr8(sp0 + 6u, 0x5cu);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x10329290u)), 1, sp0 + 4u);   /* kernel32.dll!GetDriveTypeA */
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10323e11;
    }
    eax = t1;
    edx = t2;
    COW_AT(10323e07)
    if (eax == 1u) goto L_10323e11;
    loc_4 = rd32(sp0 - 4u);
L_10323e0c: ;
    COW_AT(10323e0c)
    wr32(sp0 - 8u, 1u);
    g->ebp = loc_4;
    g->edx = edx;
    return 1u;
L_10323e11: ;
    COW_AT(10323e11)
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10323dde(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10323de8u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323e07u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10323e0cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        edx = g->edx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323e11u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10323dde(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10323dde(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
