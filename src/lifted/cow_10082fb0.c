/* f_0x10082fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10082fb0(Guest* g)
{
    double d13;
    double d24;
    double d26;
    double d30;
    double d34;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10082fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x54u); g->esi = rd32(sp0 - 0x54u); goto E_10082fbd;
    case 0x10082fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10082fcc;
    case 0x10082fdcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10082fdc;
    case 0x10082fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10082fe6;
    case 0x10082ff4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10082ff4;
    case 0x10083007u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083007;
    case 0x10083010u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083010;
    case 0x10083019u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083019;
    case 0x10083024u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083024;
    case 0x1008302cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1008302c;
    case 0x10083036u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083036;
    case 0x10083044u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083044;
    case 0x10083055u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083055;
    case 0x1008305eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1008305e;
    case 0x10083067u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083067;
    case 0x10083076u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10083076;
    case 0x1008308bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1008308b;
    case 0x1008309du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1008309d;
    case 0x100830b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100830b0;
    default: break;
    }
#endif

    COW_AT(10082fb0)
    wr32(sp0 - 0x54u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    COW_AT(10082fbd)
    wr32(sp0 - 0x58u, arg1);
    wr32(sp0 - 0x5cu, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t3 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(10082fcc)
    wr32(sp0 - 0x44u, 0x3f800000u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t6 = cow_stdcall(g, COW_IMG(0x10015220u), 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10082fdc)
    wr32(sp0 - 0x58u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t8 = cow_thiscall(g, COW_IMG(0x100279f0u), sp0 - 0x40u, 1, eax);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(10082fe6)
    wr32(sp0 - 0x58u, sp0 - 0x50u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t10 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x50u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(10082ff4)
    d13 = (double)rdf32(sp0 - 0x48u);
    if ((cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
        goto L_10083019;
    }
    eax = cow_fsw(g, d13, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x100u;
    COW_AT(10083007)
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t14 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t14;
    COW_AT(10083010)
    g->esi = rd32(sp0 - 0x54u);
    return eax & 0xffffff00u;
L_10083019: ;
    COW_AT(10083019)
    wr32(sp0 - 0x58u, arg1);
    wr32(sp0 - 0x5cu, sp0 - 0x50u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x54u;
    t15 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x50u, arg1);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(10083024)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t18 = cow_stdcall(g, COW_IMG(0x10015270u), 0);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(1008302c)
    wr32(sp0 - 0x58u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    cow_thiscall(g, COW_IMG(0x10027d10u), sp0 - 0x40u, 1, eax);
    t20 = g->edx;
    edx = t20;
    COW_AT(10083036)
    wr32(sp0 - 0x58u, sp0 - 0x50u);
    g->eax = sp0 - 0x50u;
    g->edx = edx;
    g->esp = sp0 - 0x54u;
    t21 = cow_thiscall(g, COW_IMG(0x10028320u), sp0 - 0x40u, 1, sp0 - 0x50u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(10083044)
    d24 = (double)rdf32(sp0 - 0x44u);
    if (!(d24 < (double)rdf32(COW_IMG(0x1032961cu))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
        goto L_10083067;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, (double)rdf32(COW_IMG(0x1032961cu)), 0u);
    COW_AT(10083055)
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t25 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t25;
    COW_AT(1008305e)
    g->esi = rd32(sp0 - 0x54u);
    return eax & 0xffffff00u;
L_10083067: ;
    COW_AT(10083067)
    g->ecx = ecx;
    g->edx = edx;
    d26 = fr(g, (double)rdf32(sp0 - 0x50u) * (double)rdf32(COW_IMG(0x1032d3d8u)));
    fpush(g, d26);
    g->esp = sp0 - 0x54u;
    t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    COW_AT(10083076)
    d30 = fr(g, (double)rdf32(sp0 - 0x4cu) * (double)rdf32(COW_IMG(0x1032d3d8u)));
    wr32(arg2, eax);
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, d30);
    g->esp = sp0 - 0x54u;
    t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(1008308b)
    d34 = fr(g, (double)rdf32(sp0 - 0x48u) * (double)rdf32(COW_IMG(0x1032d3d8u)));
    wr32(arg2 + 4u, eax);
    g->edx = edx;
    fpush(g, d34);
    g->esp = sp0 - 0x54u;
    t35 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t36 = g->edx;
    eax = t35;
    edx = t36;
    COW_AT(1008309d)
    wr32(arg2 + 8u, eax);
    wr32(arg2 + 0xcu, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x54u;
    t37 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t37;
    COW_AT(100830b0)
    g->esi = rd32(sp0 - 0x54u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10082fb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10082fbdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10082fccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x5cu;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10082fdcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x44u, 0x3f800000u);
        (void)sp0;
        return 1;
    }
    case 0x10082fe6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10082ff4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083007u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083010u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083019u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083024u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1008302cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083036u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083044u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083055u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1008305eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083067u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10083076u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1008308bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1008309du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        g->esi = arg2;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100830b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x5cu, sp0 - 0x50u);
        wr32(sp0 - 0x58u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10082fb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10082fb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
