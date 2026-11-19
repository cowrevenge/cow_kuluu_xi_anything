/* f_0x1011db40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011db40(Guest* g)
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
    case 0x1011db4fu: eax = g->eax; edx = g->edx; goto E_1011db4f;
    case 0x1011db5du: eax = g->eax; edx = g->edx; goto E_1011db5d;
    case 0x1011db63u: eax = g->eax; edx = g->edx; goto E_1011db63;
    case 0x1011db69u: eax = g->eax; edx = g->edx; goto E_1011db69;
    case 0x1011db6fu: eax = g->eax; edx = g->edx; goto E_1011db6f;
    case 0x1011db75u: eax = g->eax; edx = g->edx; goto E_1011db75;
    case 0x1011db7bu: eax = g->eax; edx = g->edx; goto E_1011db7b;
    case 0x1011db81u: eax = g->eax; edx = g->edx; goto E_1011db81;
    case 0x1011db87u: eax = g->eax; edx = g->edx; goto E_1011db87;
    case 0x1011db8du: eax = g->eax; edx = g->edx; goto E_1011db8d;
    case 0x1011db93u: eax = g->eax; edx = g->edx; goto E_1011db93;
    case 0x1011db96u: eax = g->eax; edx = g->edx; goto E_1011db96;
    default: break;
    }
#endif

    COW_AT(1011db40)
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
    COW_AT(1011db4f)
    if (rd16(sp0 + 4u) < 0x41u)
    {
        eax = (eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_1011db63;
    }
    eax = (eax & 0xffff0000u) | rd16(sp0 + 4u);
    COW_AT(1011db5d)
    if ((uint16_t)eax <= 0x5au) goto L_1011db96;
L_1011db63: ;
    COW_AT(1011db63)
    if ((uint16_t)eax < 0x859fu) goto L_1011db6f;
    COW_AT(1011db69)
    if ((uint16_t)eax <= 0x85b5u) goto L_1011db96;
L_1011db6f: ;
    COW_AT(1011db6f)
    if ((uint16_t)eax < 0x85b7u) goto L_1011db7b;
    COW_AT(1011db75)
    if ((uint16_t)eax <= 0x85bdu) goto L_1011db96;
L_1011db7b: ;
    COW_AT(1011db7b)
    if ((uint16_t)eax == 0x854cu) goto L_1011db96;
    COW_AT(1011db81)
    if ((uint16_t)eax == 0x854au) goto L_1011db96;
    COW_AT(1011db87)
    if ((uint16_t)eax == 0x854eu) goto L_1011db96;
    COW_AT(1011db8d)
    if ((uint16_t)eax == 0x855fu) goto L_1011db96;
    COW_AT(1011db93)
    g->edx = edx;
    return 0u;
L_1011db96: ;
    COW_AT(1011db96)
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011db40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011db4fu:
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
    case 0x1011db5du:
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
    case 0x1011db63u:
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
    case 0x1011db69u:
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
    case 0x1011db6fu:
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
    case 0x1011db75u:
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
    case 0x1011db7bu:
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
    case 0x1011db81u:
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
    case 0x1011db87u:
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
    case 0x1011db8du:
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
    case 0x1011db93u:
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
    case 0x1011db96u:
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
void cow_adapter_1011db40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011db40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
