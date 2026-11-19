/* f_0x100e16a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e16a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 12u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e16a8u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16a8;
    case 0x100e16b5u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16b5;
    case 0x100e16bcu: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16bc;
    case 0x100e16c4u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16c4;
    case 0x100e16ceu: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16ce;
    case 0x100e16d0u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16d0;
    case 0x100e16d3u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100e16d3;
    default: break;
    }
#endif

    COW_AT(100e16a0)
    if (rd32(sp0 + 0xcu) == 0u)
    {
        eax = rd32(sp0 + 0xcu);
        edx = in_edx;
        goto L_100e16d3;
    }
    eax = rd32(sp0 + 0xcu);
    COW_AT(100e16a8)
    wr32(sp0 - 4u, sp0 + 0xcu);
    wr32(sp0 - 8u, rd32(eax));
    g->eax = eax;
    t1 = rd32(eax);
    g->esp = sp0;
    t2 = cow_call_regs(g, COW_IMG(0x100d92a0u), g->eax, sp0 + 0xcu, t1, 1, 2, t1, sp0 + 0xcu);
    t3 = g->edx;
    eax = t2;
    edx = t3;
    COW_AT(100e16b5)
    if (eax != 0u) goto L_100e16d3;
    COW_AT(100e16bc)
    if (rd32(sp0 + 0xcu) != 0u)
    {
        eax = rd32(sp0 + 0xcu);
        sf = (int32_t)rd32(sp0 + 0xcu) < 0;
        goto L_100e16ce;
    }
    COW_AT(100e16c4)
    wr16(arg1, (uint16_t)(rd16(arg1) + 1u));
    g->edx = edx;
    return (arg1 & 0xffffff00u) | 1u;
L_100e16ce: ;
    COW_AT(100e16ce)
    if (sf) goto L_100e16d3;
    COW_AT(100e16d0)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100e16d3: ;
    COW_AT(100e16d3)
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e16a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e16a8u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e16b5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e16bcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e16c4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e16ceu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e16d0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100e16d3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e16a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e16a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
