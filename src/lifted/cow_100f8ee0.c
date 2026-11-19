/* f_0x100f8ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f8ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t2;
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
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f8f20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f20;
    case 0x100f8f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f2d;
    case 0x100f8f34u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f34;
    case 0x100f8f42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f42;
    case 0x100f8f50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f50;
    case 0x100f8f5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f5e;
    case 0x100f8f6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f6c;
    case 0x100f8f7au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f7a;
    case 0x100f8f86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8f86;
    case 0x100f8fcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x5cu); in_esi = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x5cu); g->esi = rd32(sp0 - 0x58u); goto E_100f8fcf;
    default: break;
    }
#endif

    COW_AT(100f8ee0)
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    t1 = rd32(sp0 + 0xcu);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x60u, 0xfu);
    wr32(sp0 - 0x64u, t1 + 0xeu);
    wr32(sp0 - 0x68u, sp0 - 0x34u);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t2 = cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x34u, g->ecx, g->edx, 1, 3, sp0 - 0x34u, t1 + 0xeu, 0xfu);
    t3 = g->edx;
    wr8(sp0 - 0x25u, 0u);
    wr32(sp0 - 0x6cu, sp0 - 0x34u);
    g->edx = t3;
    g->esp = sp0 - 0x68u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100e0a50u), sp0 - 0x34u, 1, sp0 - 0x34u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_100f8fcf;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    esi = t1;
    edi = t1 + 0xeu;
    COW_AT(100f8f20)
    if (((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u > 5u)
    {
        eax = ((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u;
        goto L_100f8fcf;
    }
    eax = ((eax & 0xffffff00u) | rd8(esi + 0x1du)) - 1u;
    COW_AT(100f8f2d)
    t7 = rd32(COW_IMG(0x100f8fd8u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x100f8f34u: goto L_100f8f34;
    case 0x100f8f42u: goto L_100f8f42;
    case 0x100f8f50u: goto L_100f8f50;
    case 0x100f8f5eu: goto L_100f8f5e;
    case 0x100f8f6cu: goto L_100f8f6c;
    case 0x100f8f7au: goto L_100f8f7a;
    default: rt_fatal(g, COW_IMG(0x100f8f2du), "switch");
    }
    return 0;
L_100f8f34: ;
    COW_AT(100f8f34)
    wr8(sp0 + 0xcu, 0xfu);
    wr16(sp0 - 0x4cu, 0x65u);
L_100f8f86: ;
    COW_AT(100f8f86)
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    t8 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x10093e30u), t8, t9, t10, 1, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x64u, esi + 0x1eu);
    wr32(sp0 - 0x68u, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    t13 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x7cu, t13);
    g->eax = t13;
    g->ecx = t11;
    g->edx = t12;
    t14 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, t13, 0u, 0u, 0u, 0u, COW_IMG(0x1034f7e0u), esi + 0x1eu);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x80u, 0x10u);
    wr32(sp0 - 0x84u, edi);
    wr32(sp0 - 0x88u, COW_IMG(0x104df910u));
    g->edx = t16;
    g->esp = sp0 - 0x7cu;
    t17 = cow_call_regs(g, COW_IMG(0x10312090u), t14, g->ecx, g->edx, 1, 3, COW_IMG(0x104df910u), edi, 0x10u);
    t18 = g->edx;
    wr8(COW_IMG(0x104df91fu), 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t18;
    return (t17 & 0xffffff00u) | 1u;
L_100f8f42: ;
    COW_AT(100f8f42)
    wr8(sp0 + 0xcu, 0x10u);
    wr16(sp0 - 0x4cu, 0x66u);
    goto L_100f8f86;
L_100f8f50: ;
    COW_AT(100f8f50)
    wr8(sp0 + 0xcu, 0x1cu);
    wr16(sp0 - 0x4cu, 0x121u);
    goto L_100f8f86;
L_100f8f5e: ;
    COW_AT(100f8f5e)
    wr8(sp0 + 0xcu, 0x1fu);
    wr16(sp0 - 0x4cu, 0x121u);
    goto L_100f8f86;
L_100f8f6c: ;
    COW_AT(100f8f6c)
    wr8(sp0 + 0xcu, 0xdu);
    wr16(sp0 - 0x4cu, 0x92u);
    goto L_100f8f86;
L_100f8f7a: ;
    COW_AT(100f8f7a)
    wr8(sp0 + 0xcu, 0xeu);
    wr16(sp0 - 0x4cu, 0x64u);
    goto L_100f8f86;
L_100f8fcf: ;
    COW_AT(100f8fcf)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f8ee0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f8f20u:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f2du:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f34u:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f42u:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f50u:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f5eu:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f6cu:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f7au:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8f86u:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    case 0x100f8fcfu:
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
        in_edi = rd32(sp0 - 0x5cu);
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x6cu, sp0 - 0x34u);
        wr32(sp0 - 0x68u, sp0 - 0x34u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8ee0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f8ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
