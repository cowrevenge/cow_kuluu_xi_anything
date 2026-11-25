/* f_0x10282100 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10282100(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10282125u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10282125;
    case 0x10282131u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10282131;
    case 0x10282148u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10282148;
    case 0x10282151u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_10282151;
    case 0x10282159u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_10282159;
    case 0x1028216du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1028216d;
    case 0x10282182u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10282182;
    case 0x1028218cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1028218c;
    case 0x1028218eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_1028218e;
    case 0x102821a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102821a5;
    default: break;
    }
#endif

    COW_AT(10282100)
    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u, t1);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu) != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u))
    {
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
        esi = t1;
    COW_AT(10282131)
        wr32(sp0 - 8u, sp0 + 4u);
        wr32(sp0 - 0xcu, 0u);
        t3 = rd32(COW_IMG(0x1099d638u) + ecx * 0x28u);
        wr32(sp0 - 0x10u, t3);
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1099d638u) + ecx * 0x28u)) + 0x3cu), sp0 + 4u, 3, t3, 0u, sp0 + 4u);
    COW_AT(10282148)
        eax = rd32(COW_IMG(0x1099d200u));
        edx = rd32(sp0 + 4u);
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        esi = t1;
    COW_AT(10282125)
        t2 = rd32(eax + 0x8fcu);
        wr32(sp0 + 4u, t2);
        edx = t2;
        loc_4 = in_esi;
    }
    COW_AT(10282151)
    if (esi != rd32(eax + 0x8acu)) goto L_1028218e;
    COW_AT(10282159)
    t4 = rd32(eax + 0x900u);
    wr32(sp0 - 8u, t4);
    wr32(sp0 - 0xcu, edx);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x7cu), rd32(COW_IMG(0x1066941cu)), 3, rd32(COW_IMG(0x1066941cu)), edx, t4);
    COW_AT(1028216d)
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu) == rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u)) goto L_102821a5;
    ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    COW_AT(10282182)
    t5 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t5);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(t5) + 8u), ecx, 1, t5);
    COW_AT(1028218c)
    g->esi = rd32(sp0 - 4u);
    return;
L_1028218e: ;
    COW_AT(1028218e)
    t6 = rd32(COW_IMG(0x1099d63cu) + esi * 0x28u);
    wr32(sp0 - 8u, t6);
    wr32(sp0 - 0xcu, edx);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x7cu), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), edx, t6);
L_102821a5: ;
    COW_AT(102821a5)
    g->esi = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10282100(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10282125u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10282131u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10282148u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10282151u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10282159u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028216du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10282182u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028218cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028218eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102821a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10282100(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10282100(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
