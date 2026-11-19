/* f_0x102016e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102016e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102016edu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102016ed;
    case 0x102016fbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_102016fb;
    case 0x10201707u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201707;
    case 0x1020172au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020172a;
    case 0x10201740u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201740;
    case 0x10201750u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201750;
    case 0x10201757u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201757;
    case 0x10201760u: eax = g->eax; edx = g->edx; goto E_10201760;
    case 0x1020176bu: eax = g->eax; edx = g->edx; goto E_1020176b;
    case 0x10201776u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201776;
    case 0x1020177au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020177a;
    case 0x1020178au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1020178a;
    case 0x10201799u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10201799;
    default: break;
    }
#endif

    COW_AT(102016e0)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_10201799;
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(102016ed)
    if (rd32(COW_IMG(0x106643a8u)) == 0u) goto L_10201799;
    ecx = rd32(COW_IMG(0x106643a8u));
    COW_AT(102016fb)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10203120u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(t1 + 0x16u) == 0u)
    {
        eax = t1;
        goto L_1020172a;
    }
    eax = t1;
    edx = t3;
    COW_AT(10201707)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385400u));
    t5 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103853ecu), 1u, 0u);
    return;
L_1020172a: ;
    COW_AT(1020172a)
    if (rd32(eax) != rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u))
    {
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c390u);
        edx = rd32(eax);
        goto L_10201750;
    }
    edx = rd32(eax);
    COW_AT(10201740)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103853d8u), 1u, 0u);
    return;
L_10201750: ;
    COW_AT(10201750)
    if (rd32(eax + 4u) != ecx)
    {
        eax = rd32(eax + 4u);
        goto L_10201776;
    }
    eax = rd32(eax + 4u);
    COW_AT(10201757)
    if (edx == 0u) goto L_1020176b;
    COW_AT(10201760)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103853c4u), 1u, 0u);
    return;
L_1020176b: ;
    COW_AT(1020176b)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103853d8u), 1u, 0u);
    return;
L_10201776: ;
    COW_AT(10201776)
    if (eax == 0u) goto L_1020178a;
    COW_AT(1020177a)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103853b0u), 1u, 0u);
    return;
L_1020178a: ;
    COW_AT(1020178a)
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038539cu), 1u, 0u);
L_10201799: ;
    COW_AT(10201799)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102016e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102016edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102016fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10201707u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1020172au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10201740u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10201750u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10201757u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10201760u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ecx = COW_IMG(0x10621838u);
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020176bu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->ecx = COW_IMG(0x10621838u);
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10201776u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020177au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020178au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        wr32(sp0 - 8u, 1u);
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10201799u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102016e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102016e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
