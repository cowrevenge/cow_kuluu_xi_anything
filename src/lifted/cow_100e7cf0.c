/* f_0x100e7cf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e7cf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e7cfdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100e7cfd;
    case 0x100e7d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d09;
    case 0x100e7d11u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d11;
    case 0x100e7d14u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100e7d14;
    case 0x100e7d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d1e;
    case 0x100e7d2au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d2a;
    case 0x100e7d32u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d32;
    case 0x100e7d35u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_100e7d35;
    case 0x100e7d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d41;
    case 0x100e7d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e7d5f;
    case 0x100e7d82u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100e7d82;
    case 0x100e7d8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100e7d8b;
    case 0x100e7d8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_100e7d8e;
    default: break;
    }
#endif

    COW_AT(100e7cf0)
    if ((int32_t)arg1 >= 0)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e7d14;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e7cfd)
    t1 = rd32(eax + 0x5d8u);
    g->eax = eax;
    g->ecx = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100e7d09)
    g->eax = eax;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(100e7d11)
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e7d14: ;
    COW_AT(100e7d14)
    if (rd32(eax + 0x5ecu) == 0u)
    {
        ecx = rd32(eax + 0x5ecu);
        goto L_100e7d35;
    }
    ecx = rd32(eax + 0x5ecu);
    COW_AT(100e7d1e)
    t7 = rd32(eax + 0x5d8u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t7;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(100e7d2a)
    g->eax = eax;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(100e7d32)
    g->edx = edx;
    return eax & 0xffffff00u;
L_100e7d35: ;
    COW_AT(100e7d35)
    t13 = rd32(eax + 0x5e0u);
    g->eax = t13;
    g->esp = sp0;
    t14 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, in_edx, 1, 1, t13);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(100e7d41)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x5dcu, eax);
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x5dcu) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x5dcu);
    COW_AT(100e7d5f)
        g->eax = eax + 0x5d8u;
        g->ecx = ecx;
        g->edx = eax + 0x5e4u;
        g->esp = sp0 - 0xcu;
        t16 = cow_cdecl(g, COW_IMG(0x100f1280u), 3, 0xau, COW_IMG(0x100f19d0u), COW_IMG(0x100f19f0u));
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
        loc_8 = eax + 0x5e4u;
        loc_c = eax + 0x5d8u;
        eax = t16;
    COW_AT(100e7d82)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t19 = cow_cdecl(g, COW_IMG(0x100f1340u), 4, eax, loc_c, loc_8, COW_IMG(0x100e7da0u));
        t20 = g->edx;
        eax = t19;
        edx = t20;
    COW_AT(100e7d8b)
    }
    COW_AT(100e7d8e)
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e7cf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e7cfdu:
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
    case 0x100e7d09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e7d11u:
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
    case 0x100e7d14u:
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
    case 0x100e7d1eu:
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
    case 0x100e7d2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e7d32u:
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
    case 0x100e7d35u:
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
    case 0x100e7d41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100e7d5fu:
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
    case 0x100e7d82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 4u, COW_IMG(0x100e7da0u));
        (void)sp0;
        return 1;
    }
    case 0x100e7d8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100e7d8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e7cf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e7cf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
