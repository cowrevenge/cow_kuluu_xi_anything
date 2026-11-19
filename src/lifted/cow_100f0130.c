/* f_0x100f0130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100f0130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f0139u: in_eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0139;
    case 0x100f013du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f013d;
    case 0x100f014au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f014a;
    case 0x100f0153u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0153;
    case 0x100f015cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f015c;
    case 0x100f0253u: ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0253;
    case 0x100f0256u: ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0256;
    case 0x100f0259u: ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0259;
    case 0x100f026du: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f026d;
    case 0x100f0280u: ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0280;
    case 0x100f0290u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0290;
    case 0x100f0294u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f0294;
    default: break;
    }
#endif

    COW_AT(100f0130)
    if (arg1 != 0u) goto L_100f013d;
    COW_AT(100f0139)
    g->esi = in_esi;
    g->edi = in_edi;
    return (in_eax & 0xffffff00u) | 1u;
L_100f013d: ;
    COW_AT(100f013d)
    if (rd32(COW_IMG(0x104df770u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100f0294;
    }
    eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100f014a)
    if ((int32_t)arg1 < 1) goto L_100f0294;
    COW_AT(100f0153)
    if ((int32_t)arg1 > 3) goto L_100f0294;
    COW_AT(100f015c)
    wr32(COW_IMG(0x104df770u), COW_IMG(0x104ca650u));
    edi = COW_IMG(0x104ca650u);
    eax = 0u;
    ecx = 0x5448u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100f05c0u), ecx, 0);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x104df770u)) + 0x14u;
    g->ecx = t2;
    cow_call_regs(g, COW_IMG(0x10312090u), arg5, g->ecx, g->edx, 1, 3, t2, arg5, 0x50u);
    t3 = g->ecx;
    t4 = rd32(COW_IMG(0x104df770u)) + 0xb8u;
    g->esp = sp0 - 0x14u;
    t5 = cow_call_regs(g, COW_IMG(0x10312090u), t4, g->ecx, g->edx, 1, 3, t4, arg4, 0x10u);
    t6 = rd32(COW_IMG(0x104df770u)) + 0xc8u;
    g->ecx = arg6;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    t7 = cow_call_regs(g, COW_IMG(0x10312090u), t5, g->ecx, g->edx, 1, 3, t6, arg6, 0x50u);
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, 0xd34au);   /* ws2_32.dll!htons */
    t11 = rd32(COW_IMG(0x104df770u));
    wr16(t11 + 0x12u, (uint16_t)t10);
    wr32(rd32(COW_IMG(0x104df770u)), arg2);
    wr16(rd32(COW_IMG(0x104df770u)) + 0xcu, (uint16_t)arg3);
    wr32(rd32(COW_IMG(0x104df770u)) + 8u, arg2);
    wr16(rd32(COW_IMG(0x104df770u)) + 0x10u, (uint16_t)arg3);
    t12 = rd32(COW_IMG(0x104df770u));
    wr32(t12 + 0x118u, arg7);
    t13 = rd32(COW_IMG(0x104df770u));
    wr8(t13 + 0x120u, 1u);
    g->eax = t13;
    g->ecx = t12;
    g->edx = arg7;
    t14 = cow_stdcall(g, COW_IMG(0x100f10a0u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_stdcall(g, COW_IMG(0x100f7790u), 0);
    t18 = g->edx;
    t19 = rd32(COW_IMG(0x104df770u)) + 0x1369cu;
    g->ecx = t19;
    g->edx = t18;
    t20 = cow_cdecl(g, COW_IMG(0x100e1470u), 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0xcu;
    t23 = cow_cdecl(g, COW_IMG(0x100e6220u), 1, 0x3cu);
    t24 = g->ecx;
    t25 = g->edx;
    g->ecx = t24;
    g->edx = t25;
    g->esp = sp0 - 8u;
    t26 = cow_stdcall(g, COW_IMG(0x10114b60u), 0);
    t27 = g->ecx;
    t28 = g->edx;
    cow_stdcall(g, COW_IMG(0x100f76b0u), 0);
    if (arg1 == 1u) goto L_100f0280;
    COW_AT(100f0253)
    if (arg1 == 2u) goto L_100f026d;
    COW_AT(100f0256)
    if (arg1 != 3u)
    {
        eax = arg1 - 3u;
        goto L_100f0290;
    }
    COW_AT(100f0259)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x11cu, 1u);
    g->esi = in_esi;
    g->edi = in_edi;
    return (arg1 - 3u & 0xffffff00u) | 1u;
L_100f026d: ;
    COW_AT(100f026d)
    t29 = rd32(COW_IMG(0x104df770u));
    wr32(t29 + 0x11cu, 4u);
    g->esi = in_esi;
    g->edi = in_edi;
    return (t29 & 0xffffff00u) | 1u;
L_100f0280: ;
    COW_AT(100f0280)
    wr32(rd32(COW_IMG(0x104df770u)) + 0x11cu, 7u);
    eax = arg1 - 1u;
L_100f0290: ;
    COW_AT(100f0290)
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_100f0294: ;
    COW_AT(100f0294)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f0130(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f0139u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f013du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f014au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f0153u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f015cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100f0253u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x100f0256u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x100f0259u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x100f026du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f0280u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x100f0290u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f0294u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0130(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f0130(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
