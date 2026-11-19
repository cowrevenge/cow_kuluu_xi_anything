/* f_0x102813d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102813d0(Guest* g)
{
    double d12;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t t26;
    uint32_t t27;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028140eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_1028140e;
    case 0x10281421u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10281421;
    case 0x10281432u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10281432;
    case 0x10281433u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_10281433;
    default: break;
    }
#endif

    COW_AT(102813d0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10281c70u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x14u, 0u);
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t2, t3, 1, 3, 0u, 1u, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t6, 1, 0);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    t7 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u);
    wr32(sp0 - 0x20u, t7);
    g->eax = t7;
    g->ecx = sp0 - 4u;
    g->edx = rd32(COW_IMG(0x1099d200u));
    t8 = rd32(COW_IMG(0x1099d200u));
    t9 = cow_cdecl(g, COW_IMG(0x10281b80u), 3, t7, sp0 - 4u, sp0 - 8u);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)rd32(sp0 + 4u) <= 0)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        edi = in_edi;
        loc_c = in_esi;
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = rd32(sp0 + 4u);
    COW_AT(1028140e)
        d12 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 8u));
        wr32(sp0 - 0x10u, in_edi);
        wrf32(sp0 + 4u, (float)d12);
        edi = rd32(sp0 + 4u);
L_10281421: ;
    COW_AT(10281421)
        wr32(sp0 - 0x14u, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t13 = cow_call_regs(g, COW_IMG(0x102826e0u), g->eax, g->ecx, edx, 1, 1, edi);
        t14 = g->ecx;
        t15 = g->edx;
        g->ecx = t14;
        g->edx = t15;
        t16 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        if (esi != 1u)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            esi = esi - 1u;
            goto L_10281421;
        }
        eax = t16;
        ecx = t17;
        edx = t18;
    COW_AT(10281432)
        edi = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(10281433)
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, ecx, edx, 1, 3, 1u, loc_c, rd32(sp0 - 8u));
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->esp = sp0 - 0x10u;
    t22 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t21, 1, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x14u, 0xffffffffu);
    g->ecx = t23;
    g->edx = t24;
    t25 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10281c70u), 1, 0u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102813d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028140eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10281421u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10281432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10281433u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102813d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102813d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
