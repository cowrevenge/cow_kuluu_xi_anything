/* f_0x100e2fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100e2fd0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e2ff3u: eax = g->eax; goto E_100e2ff3;
    case 0x100e2ffdu: eax = g->eax; goto E_100e2ffd;
    case 0x100e302cu: eax = g->eax; goto E_100e302c;
    case 0x100e3032u: eax = g->eax; goto E_100e3032;
    default: break;
    }
#endif

    COW_AT(100e2fd0)
    wr16(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x50u, arg1);
    wr32(sp0 - 0x4cu, 0u);
    if (rd32(COW_IMG(0x104df770u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e3032;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e2ff3)
    if (rd32(eax + 0x1369cu) == 0u)
    {
        eax = rd32(eax + 0x1369cu);
        goto L_100e3032;
    }
    eax = rd32(eax + 0x1369cu);
    COW_AT(100e2ffd)
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, arg5);
    wr32(sp0 - 0x60u, arg4);
    wr32(sp0 - 0x64u, arg3);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, sp0 - 0x54u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t1 = cow_cdecl(g, COW_IMG(0x100e1c30u), 12, eax, 0u, 0u, 0u, 0u, sp0 - 0x54u, 0u, 0u, arg3, arg4, arg5, 1u);
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100e3032;
    }
    eax = t1;
    COW_AT(100e302c)
    return (eax & 0xffffff00u) | 1u;
L_100e3032: ;
    COW_AT(100e3032)
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e2fd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e2ff3u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100e2ffdu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100e302cu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x70u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x100e3032u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e2fd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e2fd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
