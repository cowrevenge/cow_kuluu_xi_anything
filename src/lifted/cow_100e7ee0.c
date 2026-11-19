/* f_0x100e7ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e7ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_frame(g, sp0, 552u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e7f04u: eax = g->eax; ecx = g->ecx; goto E_100e7f04;
    case 0x100e7f0eu: eax = g->eax; ecx = g->ecx; goto E_100e7f0e;
    case 0x100e7f2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7f2b;
    case 0x100e7f4au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7f4a;
    case 0x100e7f5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7f5c;
    case 0x100e7f93u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7f93;
    case 0x100e7f9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7f9c;
    default: break;
    }
#endif

    COW_AT(100e7ee0)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x808u, 0u);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x5f0u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e7f0e;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e7f04)
    return 0xffffffffu;
L_100e7f0e: ;
    COW_AT(100e7f0e)
    wr32(sp0 - 0x204u, 0u);
    wr32(sp0 - 0x208u, 0x200u);
    wr32(sp0 - 0x20cu, sp0 - 0x200u);
    wr32(sp0 - 0x210u, 0x14u);
    wr32(eax + 0x5f0u, 1u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x1030ff10u), 4, 0x14u, sp0 - 0x200u, 0x200u, 0u);
    t1 = g->ecx;
    ecx = t1;
    COW_AT(100e7f2b)
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    wr32(sp0 - 0x218u, COW_IMG(0x10361e20u));
    wr32(sp0 - 0x21cu, 0x200u);
    t2 = rd32(COW_IMG(0x104df770u)) + 0x5f4u;
    wr32(sp0 - 0x220u, t2);
    g->eax = t2;
    g->edx = sp0 - 0x200u;
    g->esp = sp0 - 0x210u;
    t3 = cow_cdecl(g, COW_IMG(0x1031033bu), 4, t2, 0x200u, COW_IMG(0x10361e20u), sp0 - 0x200u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(100e7f4a)
    t5 = rd32(COW_IMG(0x104df770u)) + 0x5f4u;
    wr32(sp0 - 0x224u, t5);
    g->eax = eax;
    g->esp = sp0 - 0x220u;
    t6 = cow_cdecl(g, COW_IMG(0x102536d0u), 1, t5);
    eax = t6;
    COW_AT(100e7f5c)
    t7 = rd32(COW_IMG(0x104df770u));
    wr32(t7 + 0x7fcu, eax);
    wr32(sp0 - 0x204u, COW_IMG(0x100e7fe0u));
    t8 = rd32(COW_IMG(0x104df770u)) + 0x7f4u;
    wr32(sp0 - 0x208u, t8);
    t9 = rd32(COW_IMG(0x104df770u)) + 0x5f4u;
    wr32(sp0 - 0x20cu, t9);
    wr32(sp0 - 0x210u, COW_IMG(0x100f19b0u));
    wr32(sp0 - 0x214u, COW_IMG(0x100f19a0u));
    wr32(sp0 - 0x218u, 0xau);
    g->eax = t9;
    g->ecx = t8;
    g->edx = t7;
    g->esp = sp0 - 0x20cu;
    t10 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19a0u), COW_IMG(0x100f19b0u));
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(100e7f93)
    wr32(sp0 - 0x210u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_cdecl(g, COW_IMG(0x100f1340u), 4, eax, rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), COW_IMG(0x100e7fe0u));
    t13 = g->edx;
    edx = t13;
    COW_AT(100e7f9c)
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e7ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e7f04u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x100e7f0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x100e7f2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100e7f4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x220u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100e7f5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x224u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100e7f93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x218u;
        wr32(sp0 - 0x204u, COW_IMG(0x100e7fe0u));
        (void)sp0;
        return 1;
    }
    case 0x100e7f9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e7ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
