/* f_0x10266b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10266b40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10266b5du: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10266b5d;
    case 0x10266b66u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10266b66;
    case 0x10266b68u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10266b68;
    case 0x10266b6fu: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10266b6f;
    case 0x10266b78u: eax = g->eax; edx = g->edx; zf = g->zf; goto E_10266b78;
    default: break;
    }
#endif

    COW_AT(10266b40)
    wr32(sp0 - 0x94u, 0x94u);
    wr32(sp0 - 0x98u, sp0 - 0x94u);
    g->eax = sp0 - 0x94u;
    g->edx = in_edx;
    g->esp = sp0 - 0x94u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1, sp0 - 0x94u);   /* kernel32.dll!GetVersionExA */
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10266b78;
    }
    edx = t2;
    COW_AT(10266b5d)
    if (rd32(sp0 - 0x90u) > 5u)
    {
        eax = rd32(sp0 - 0x90u);
        goto L_10266b6f;
    }
    eax = rd32(sp0 - 0x90u);
    zf = rd32(sp0 - 0x90u) == 5u;
    COW_AT(10266b66)
    if (!zf) goto L_10266b78;
    COW_AT(10266b68)
    if (rd32(sp0 - 0x8cu) < 1u) goto L_10266b78;
L_10266b6f: ;
    COW_AT(10266b6f)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10266b78: ;
    COW_AT(10266b78)
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10266b40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10266b5du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10266b66u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10266b68u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10266b6fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10266b78u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10266b40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10266b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
