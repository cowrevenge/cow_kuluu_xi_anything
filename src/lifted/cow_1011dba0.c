/* f_0x1011dba0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011dba0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 12u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011dbafu: eax = g->eax; edx = g->edx; goto E_1011dbaf;
    case 0x1011dbbdu: eax = g->eax; edx = g->edx; goto E_1011dbbd;
    case 0x1011dbc3u: eax = g->eax; edx = g->edx; goto E_1011dbc3;
    case 0x1011dbc9u: eax = g->eax; edx = g->edx; goto E_1011dbc9;
    case 0x1011dbcfu: eax = g->eax; edx = g->edx; goto E_1011dbcf;
    case 0x1011dbd5u: eax = g->eax; edx = g->edx; goto E_1011dbd5;
    case 0x1011dbdbu: eax = g->eax; edx = g->edx; goto E_1011dbdb;
    case 0x1011dbe1u: eax = g->eax; edx = g->edx; goto E_1011dbe1;
    case 0x1011dbe7u: eax = g->eax; edx = g->edx; goto E_1011dbe7;
    case 0x1011dbedu: eax = g->eax; edx = g->edx; goto E_1011dbed;
    case 0x1011dbf3u: eax = g->eax; edx = g->edx; goto E_1011dbf3;
    case 0x1011dbf6u: eax = g->eax; edx = g->edx; goto E_1011dbf6;
    default: break;
    }
#endif

    COW_AT(1011dba0)
    wr32(sp0 - 4u, sp0 + 4u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t1);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall_cdecl(g, COW_IMG(0x1011daa0u), t1, 2, t1, sp0 + 4u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(1011dbaf)
    if (rd16(sp0 + 4u) < 0x61u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_1011dbc3;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 4u);
    COW_AT(1011dbbd)
    if ((uint16_t)eax <= 0x7au) goto L_1011dbf6;
L_1011dbc3: ;
    COW_AT(1011dbc3)
    if ((uint16_t)eax < 0x85bfu) goto L_1011dbcf;
    COW_AT(1011dbc9)
    if ((uint16_t)eax <= 0x85d5u) goto L_1011dbf6;
L_1011dbcf: ;
    COW_AT(1011dbcf)
    if ((uint16_t)eax < 0x85d7u) goto L_1011dbdb;
    COW_AT(1011dbd5)
    if ((uint16_t)eax <= 0x85ddu) goto L_1011dbf6;
L_1011dbdb: ;
    COW_AT(1011dbdb)
    if ((uint16_t)eax == 0x855cu) goto L_1011dbf6;
    COW_AT(1011dbe1)
    if ((uint16_t)eax == 0x855au) goto L_1011dbf6;
    COW_AT(1011dbe7)
    if ((uint16_t)eax == 0x855eu) goto L_1011dbf6;
    COW_AT(1011dbed)
    if ((uint16_t)eax == 0x85deu) goto L_1011dbf6;
    COW_AT(1011dbf3)
    g->edx = edx;
    return 0u;
L_1011dbf6: ;
    COW_AT(1011dbf6)
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011dba0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011dbafu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbbdu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbc3u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbc9u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbcfu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbd5u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbdbu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbe1u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbe7u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbedu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbf3u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011dbf6u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011dba0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011dba0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
