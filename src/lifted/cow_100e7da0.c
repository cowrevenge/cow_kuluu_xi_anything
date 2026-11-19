/* f_0x100e7da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e7da0(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e7dbcu: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7dbc;
    case 0x100e7dc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7dc4;
    case 0x100e7dd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7dd3;
    case 0x100e7ddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7ddb;
    case 0x100e7defu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7def;
    case 0x100e7e1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7e1b;
    case 0x100e7e46u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7e46;
    case 0x100e7e5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7e5b;
    case 0x100e7e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7e82;
    case 0x100e7e8au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100e7e8a;
    default: break;
    }
#endif

    COW_AT(100e7da0)
    t1 = rd32(rd32(COW_IMG(0x104df770u)) + 0x5d8u);
    g->ecx = t1;
    g->edx = in_edx;
    cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)arg1 >= 0)
    {
        edx = t3;
        goto L_100e7dc4;
    }
    ecx = t2;
    edx = t3;
    COW_AT(100e7dbc)
    g->eax = arg1;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t5 = g->edx;
    g->esi = in_esi;
    g->edx = t5;
    return t4 & 0xffffff00u;
L_100e7dc4: ;
    COW_AT(100e7dc4)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x5ecu) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e7ddb;
    }
    eax = rd32(COW_IMG(0x104df770u));
    ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x5ecu);
    COW_AT(100e7dd3)
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t7 = g->edx;
    g->esi = in_esi;
    g->edx = t7;
    return t6 & 0xffffff00u;
L_100e7ddb: ;
    COW_AT(100e7ddb)
    if (rd32(eax + 0x5e0u) == rd32(eax + 0x5e4u))
    {
        ecx = eax + 0x5e4u;
        edx = rd32(eax + 0x5e0u);
        goto L_100e7e1b;
    }
    ecx = eax + 0x5e4u;
    edx = rd32(eax + 0x5e0u);
    COW_AT(100e7def)
    g->eax = eax + 0x5d8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19d0u), COW_IMG(0x100f19f0u));
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, t8, eax + 0x5d8u, ecx, COW_IMG(0x100e7da0u));
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return t11 & 0xffffff00u;
L_100e7e1b: ;
    COW_AT(100e7e1b)
    t13 = rd32(eax + 0x5dcu);
    g->eax = t13;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x10310485u), 1, t13);
    t15 = rd32(COW_IMG(0x104df770u));
    wr32(t15 + 0x5e8u, t14);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x5e8u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x5e8u);
        ecx = t15;
        edx = rd32(COW_IMG(0x104df770u));
        goto L_100e7e5b;
    }
    eax = rd32(rd32(COW_IMG(0x104df770u)) + 0x5e8u);
    ecx = t15;
    edx = rd32(COW_IMG(0x104df770u));
    COW_AT(100e7e46)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t16 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x100182e0u), 1, 0x7d3u);
    t20 = g->edx;
    g->esi = in_esi;
    g->edx = t20;
    return t19 & 0xffffff00u;
L_100e7e5b: ;
    COW_AT(100e7e5b)
    t21 = rd32(eax + 0x20u);
    g->eax = t21;
    g->esp = sp0;
    t22 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, edx, 1, 1, t21);
    t23 = g->edx;
    wr32(rd32(COW_IMG(0x104df770u)) + 0x80cu, t22);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x80cu) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        edx = t23;
        goto L_100e7e8a;
    }
    eax = rd32(COW_IMG(0x104df770u));
    ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x80cu);
    edx = t23;
    COW_AT(100e7e82)
    g->eax = eax;
    g->esp = sp0;
    t24 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t25 = g->edx;
    g->esi = in_esi;
    g->edx = t25;
    return t24 & 0xffffff00u;
L_100e7e8a: ;
    COW_AT(100e7e8a)
    wr32(eax + 0x3d4u, 2u);
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e7da0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e7dbcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e7dc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7dd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7ddbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7defu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7e1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7e46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7e5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7e82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100e7e8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7da0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e7da0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
