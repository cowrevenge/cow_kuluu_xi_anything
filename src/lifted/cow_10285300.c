/* f_0x10285300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10285300(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028531au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1028531a;
    case 0x10285328u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10285328;
    case 0x10285335u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; goto E_10285335;
    case 0x1028533du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1028533d;
    case 0x10285344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285344;
    case 0x10285358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285358;
    case 0x10285367u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285367;
    case 0x10285376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10285376;
    case 0x1028538bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028538b;
    case 0x102853a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853a2;
    case 0x102853b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853b2;
    case 0x102853beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853be;
    case 0x102853d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853d3;
    case 0x102853e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853e5;
    case 0x102853f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102853f7;
    default: break;
    }
#endif

    COW_AT(10285300)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0xcu, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x10u, t2);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->eax = t2;
    g->ecx = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    edi = t1;
    COW_AT(1028531a)
    if (rd32(sp0 + 8u) == 3u)
    {
        ebx = eax;
        eax = rd32(sp0 + 8u);
        goto L_1028533d;
    }
    ebx = eax;
    eax = rd32(sp0 + 8u);
    COW_AT(10285328)
    wr32(sp0 - 0xcu, 3u);
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0x14u, COW_IMG(0x103b7b44u));
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7b44u), eax);
    COW_AT(10285335)
    g->ebx = rd32(sp0 - 4u);
    g->esi = in_esi;
    g->edi = rd32(sp0 - 8u);
    g->ebp = in_ebp;
    return 0u;
L_1028533d: ;
    COW_AT(1028533d)
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x102957d0u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(10285344)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, ebx + 0x50u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, eax + 0x20u);
    g->eax = eax + 0x20u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, eax + 0x20u, 4u, 1u, ebx + 0x50u, edi);
    t10 = g->ecx;
    t11 = g->edx;
    ecx = t10;
    edx = t11;
    esi = eax;
    eax = t9;
    COW_AT(10285358)
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, eax);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, esi + 0x1cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, esi + 0x1cu, 4u, 1u, eax, edi, rd32(sp0 - 0x24u), 4u, 1u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t13 = g->ecx;
    t14 = g->edx;
    eax = t12;
    ecx = t13;
    edx = t14;
    ebp = esi + 0x1cu;
    COW_AT(10285367)
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, eax);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x4cu, esi + 0x28u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, esi + 0x28u, 4u, 1u, eax, edi, rd32(sp0 - 0x38u), 4u, 1u, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t16 = g->ecx;
    eax = t15;
    ecx = t16;
    ebx = esi + 0x28u;
    COW_AT(10285376)
    wr32(sp0 - 0x50u, 0x68u);
    wr32(sp0 - 0x54u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x58u, 4u);
    wr32(sp0 - 0x5cu, rd32(ebx));
    t17 = rd32(ebx);
    wr32(sp0 + 4u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x48u;
    t18 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t17, 4u, COW_IMG(0x103b7ad8u), 0x68u, rd32(sp0 - 0x4cu));
    eax = t18;
    COW_AT(1028538b)
    t19 = rd32(sp0 + 4u);
    t20 = rd32(ebx);
    wr32(esi + 0x2cu, eax);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, t19);
    wr32(sp0 - 0x1cu, t20);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x10u;
    t21 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, eax, 4u, t20, t19, edi);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(102853a2)
    wr32(sp0 + 4u, eax);
    if (rd32(sp0 + 8u) != 1u)
    {
        eax = rd32(sp0 + 8u);
    }
    else
    {
    COW_AT(102853b2)
        t24 = rd32(rd32(ebx) * 4u + rd32(esi + 0x2cu) - 4u);
        t25 = rd32(ebx);
        t26 = rd32(esi + 0x2cu);
        wr32(esi + 0x20u, t24);
        eax = t25;
        ecx = t26;
        edx = t24;
    }
    COW_AT(102853be)
    wr32(sp0 - 0x14u, 0x70u);
    wr32(sp0 - 0x18u, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x1cu, 4u);
    t27 = rd32(ebp) * rd32(ebx);
    wr32(sp0 - 0x20u, t27);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t27, 4u, COW_IMG(0x103b7ad8u), 0x70u, rd32(sp0 - 0x10u));
    t29 = g->edx;
    eax = t28;
    edx = t29;
    ebp = t27;
    COW_AT(102853d3)
    wr32(sp0 - 0x24u, edi);
    t30 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t30);
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, eax);
    wr32(esi + 0x30u, eax);
    g->eax = eax;
    g->ecx = t30;
    g->esp = sp0;
    t31 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, eax, 4u, ebp, t30, edi, rd32(sp0 - 0x20u), 4u, COW_IMG(0x103b7ad8u), 0x70u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u), rd32(sp0 - 4u));
    t32 = g->ecx;
    eax = t31;
    ecx = t32;
    COW_AT(102853e5)
    wr32(sp0 - 0x38u, 0x72u);
    wr32(sp0 - 0x3cu, COW_IMG(0x103b7ad8u));
    wr32(sp0 - 0x40u, 4u);
    t33 = rd32(esi + 0x1cu);
    wr32(sp0 - 0x44u, t33);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t34 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t33, 4u, COW_IMG(0x103b7ad8u), 0x72u, rd32(sp0 - 0x34u));
    eax = t34;
    COW_AT(102853f7)
    wr32(esi + 0x34u, eax);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 8u);
    g->ebp = rd32(sp0 - 0xcu);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10285300(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028531au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285328u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285335u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1028533du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285344u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x1cu, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10285358u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10285367u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x34u, 4u);
        wr32(sp0 - 0x30u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10285376u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1028538bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        (void)sp0;
        return 1;
    }
    case 0x102853a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102853b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102853beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102853d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x18u, COW_IMG(0x103b7ad8u));
        wr32(sp0 - 0x14u, 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x102853e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x102853f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10285300(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10285300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
