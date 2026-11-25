/* f_0x100ae3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100ae3a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ae3acu: eax = g->eax; in_edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ae3ac;
    case 0x100ae3bcu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ae3bc;
    case 0x100ae3d7u: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ae3d7;
    case 0x100ae3ddu: eax = g->eax; edx = g->edx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_100ae3dd;
    default: break;
    }
#endif

    COW_AT(100ae3a0)
    if (rd8(COW_IMG(0x1047d3ecu)) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1047d3ecu));
        edx = in_edx;
    }
    else
    {
    COW_AT(100ae3ac)
        g->eax = rd32(COW_IMG(0x1047d3e8u));
        g->edx = in_edx;
        t1 = rd32(COW_IMG(0x1047d3e8u));
        g->esp = sp0 - 4u;
        COW_RET(0x100ae3bcu);
        t2 = cow_thiscall(g, COW_IMG(0x1015eb60u), COW_IMG(0x10621838u), 1, t1);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    COW_AT(100ae3bc)
        t4 = rd8(COW_IMG(0x104886f4u));
        wr8(COW_IMG(0x1047d3ecu), 0u);
        wr8(COW_IMG(0x104898f8u), 0u);
        wr8(COW_IMG(0x104897f4u), 0u);
        if ((uint8_t)t4 == 2u)
        {
            eax = (eax & 0xffffff00u) | t4;
        }
        else
        {
            eax = (eax & 0xffffff00u) | t4;
    COW_AT(100ae3d7)
            wr8(COW_IMG(0x104886f4u), 0u);
        }
    }
    COW_AT(100ae3dd)
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10127ea0u), eax, rd32(COW_IMG(0x10578158u)), edx);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ae3a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ae3acu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100ae3bcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100ae3d7u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x100ae3ddu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae3a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100ae3a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
