/* f_0x102224c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102224c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102224feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102224fe;
    case 0x10222515u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10222515;
    case 0x10222529u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10222529;
    case 0x10222548u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10222548;
    case 0x1022256fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1022256f;
    default: break;
    }
#endif

    COW_AT(102224c0)
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0x5au);
    wr32(sp0 - 8u, 0u);
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x5au);
    t2 = g->edx;
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x100731b0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, t1);
    t4 = g->edx;
    wr32(sp0 - 8u, rd32(t3));
    g->edx = t4;
    t5 = rd32(t3);
    t6 = rd32(rd32(t3));
    t7 = cow_call_regs(g, COW_IMG(0x10071e90u), t5, t6, g->edx, 1, 0);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    t10 = cow_call_regs(g, COW_IMG(0x1022ec50u), g->eax, g->ecx, t9, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_c = in_esi;
        loc_10 = in_edi;
    }
    else
    {
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(102224fe)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t13 = cow_stdcall(g, COW_IMG(0x1022f3d0u), 0);
        t14 = g->ecx;
        t15 = g->edx;
        g->ecx = t14;
        g->edx = t15;
        t16 = cow_stdcall(g, COW_IMG(0x1022d7a0u), 0);
        t17 = g->ecx;
        t18 = g->edx;
        g->ecx = t17;
        g->edx = t18;
        cow_stdcall(g, COW_IMG(0x10229430u), 0);
        t19 = g->ecx;
        t20 = g->edx;
        if (rd32(sp0 - 8u) == 0u)
        {
            eax = rd32(sp0 - 8u);
            ecx = t19;
            edx = t20;
            loc_c = in_esi;
            loc_10 = in_edi;
        }
        else
        {
            eax = rd32(sp0 - 8u);
            edx = t20;
    COW_AT(10222515)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t21 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
            t22 = g->edx;
            g->edx = t22;
            t23 = cow_thiscall(g, COW_IMG(0x10071050u), sp0 - 8u, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(sp0 - 8u, 0u);
            eax = t23;
            ecx = t24;
            edx = t25;
            loc_c = rd32(sp0 - 0xcu);
            loc_10 = rd32(sp0 - 0x10u);
        }
    }
    COW_AT(10222529)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t26 = cow_stdcall(g, COW_IMG(0x1022b080u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    g->ecx = t27;
    g->edx = t28;
    t29 = cow_stdcall(g, COW_IMG(0x10222960u), 0);
    t30 = g->ecx;
    t31 = g->edx;
    g->ecx = t30;
    g->edx = t31;
    t32 = cow_stdcall(g, COW_IMG(0x10227750u), 0);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x14u, 0x28u);
    g->esp = sp0 - 8u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t33, t34, 1, 3, 0x28u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t36 = g->edx;
    if (t35 == 0u)
    {
        eax = t35;
        goto L_1022256f;
    }
    eax = t35;
    edx = t36;
    esi = t35;
    COW_AT(10222548)
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t37 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x1033c000u));
    wr32(COW_IMG(0x10666ea4u), esi);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return t37;
L_1022256f: ;
    COW_AT(1022256f)
    wr32(COW_IMG(0x10666ea4u), 0u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102224c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102224feu:
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
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10222515u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10222529u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10222548u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1022256fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = 0u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102224c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102224c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
