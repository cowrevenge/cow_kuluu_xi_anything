/* f_0x10002b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10002b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 536u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10002b30u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b30;
    case 0x10002b37u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b37;
    case 0x10002b3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b3e;
    case 0x10002b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b47;
    case 0x10002b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b50;
    case 0x10002b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b63;
    case 0x10002b77u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b77;
    case 0x10002b89u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b89;
    case 0x10002b90u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002b90;
    case 0x10002ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002ba2;
    case 0x10002ba9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002ba9;
    case 0x10002bb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10002bb3;
    default: break;
    }
#endif

    COW_AT(10002b20)
    wr32(sp0 - 0x204u, 0xb4u);
    g->esp = sp0 - 0x1f8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xb4u, rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10002b30)
    if (eax == 0u) goto L_10002b50;
    COW_AT(10002b37)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    t3 = cow_thiscall(g, COW_IMG(0x10002790u), eax, 0);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10002b3e)
    wr32(COW_IMG(0x103d3cb8u), eax);
    if (eax != 0u) goto L_10002b63;
    COW_AT(10002b47)
    return eax & 0xffffff00u;
L_10002b50: ;
    COW_AT(10002b50)
    wr32(COW_IMG(0x103d3cb8u), 0u);
    return eax & 0xffffff00u;
L_10002b63: ;
    COW_AT(10002b63)
    wr32(sp0 - 0x204u, COW_IMG(0x1034f498u));
    wr32(sp0 - 0x208u, COW_IMG(0x1034f48cu));
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->esp = sp0 - 0x1f8u;
    t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x1034f48cu), COW_IMG(0x1034f498u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
    eax = t6;
    COW_AT(10002b77)
    wr32(sp0 - 0x210u, sp0 - 0x100u);
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->eax = eax;
    g->ecx = sp0 - 0x100u;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x20cu;
    t7 = cow_cdecl(g, COW_IMG(0x10001f20u), 2, sp0 - 0x200u, sp0 - 0x100u);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10002b89)
    if (eax != 0u)
    {
    COW_AT(10002b90)
        wr32(sp0 - 0x204u, COW_IMG(0x1034f488u));
        wr32(sp0 - 0x208u, sp0 - 0x100u);
        g->esp = sp0 - 0x1ecu;
        t10 = cow_call_regs(g, COW_IMG(0x10311ef0u), sp0 - 0x100u, g->ecx, edx, 1, 7, sp0 - 0x100u, COW_IMG(0x1034f488u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u));
        eax = t10;
    COW_AT(10002ba2)
        if (eax != 0u)
        {
    COW_AT(10002ba9)
            wr32(COW_IMG(0x10456a88u), 0u);
        }
    }
    COW_AT(10002bb3)
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10002b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10002b30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x204u;
        (void)sp0;
        return 1;
    }
    case 0x10002b37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10002b3eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10002b47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10002b50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10002b63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x10002b77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10002b89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10002b90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10002ba2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x208u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        wr32(sp0 - 0x208u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10002ba9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        wr32(sp0 - 0x208u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x10002bb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x200u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x210u, sp0 - 0x100u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10002b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10002b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
