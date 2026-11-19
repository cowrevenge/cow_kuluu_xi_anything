/* f_0x100f17f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f17f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f180au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f180a;
    case 0x100f181bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f181b;
    case 0x100f1822u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f1822;
    case 0x100f1833u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f1833;
    case 0x100f183au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f183a;
    case 0x100f1862u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100f1862;
    default: break;
    }
#endif

    COW_AT(100f17f0)
    wr32(sp0 - 0x6cu, sp0 - 0x68u);
    g->eax = sp0 - 0x68u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x68u;
    t1 = cow_cdecl(g, COW_IMG(0x100f1910u), 1, sp0 - 0x68u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x70u, t1);
    g->edx = t3;
    g->esp = sp0 - 0x6cu;
    t4 = cow_cdecl(g, COW_IMG(0x100f1580u), 1, t1);
    t5 = g->edx;
    if ((int32_t)t4 < 0)
    {
        eax = t4;
        edx = t5;
        goto L_100f1862;
    }
    eax = t4;
    edx = t5;
    COW_AT(100f180a)
    wr32(sp0 - 0x6cu, sp0 - 0x68u);
    g->eax = eax;
    g->ecx = sp0 - 0x68u;
    g->edx = edx;
    g->esp = sp0 - 0x68u;
    t6 = cow_cdecl(g, COW_IMG(0x100f1530u), 1, sp0 - 0x68u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
        ecx = t7;
        goto L_100f1822;
    }
    eax = t6;
    edx = t8;
    COW_AT(100f181b)
    g->edx = edx;
    return 0xffffffffu;
L_100f1822: ;
    COW_AT(100f1822)
    wr32(sp0 - 0x6cu, sp0 - 0x68u);
    g->eax = eax;
    g->edx = sp0 - 0x68u;
    g->esp = sp0 - 0x68u;
    t9 = cow_cdecl(g, COW_IMG(0x100f1540u), 1, sp0 - 0x68u);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        edx = t10;
        goto L_100f183a;
    }
    eax = t9;
    edx = t10;
    COW_AT(100f1833)
    g->edx = edx;
    return 0xffffffffu;
L_100f183a: ;
    COW_AT(100f183a)
    t11 = (uint16_t)rd32(sp0 - 0x66u);
    wr32(sp0 - 0x6cu, t11);
    wr32(sp0 - 0x70u, 0xffffffffu);
    wr32(sp0 - 0x74u, 0xfffffffeu);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0xfffffffeu);
    wr32(sp0 - 0x80u, sp0 - 0x68u);
    g->eax = t11;
    g->ecx = sp0 - 0x68u;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t12 = cow_cdecl(g, COW_IMG(0x100f1560u), 1, sp0 - 0x68u);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x80u, t12);
    g->edx = t14;
    t15 = cow_cdecl(g, COW_IMG(0x103100a7u), 1, t12);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_100f1862: ;
    COW_AT(100f1862)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f17f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f180au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f181bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f1822u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f1833u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f183au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        wr32(sp0 - 0x6cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100f1862u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f17f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f17f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
