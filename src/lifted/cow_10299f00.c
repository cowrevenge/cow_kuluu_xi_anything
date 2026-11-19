/* f_0x10299f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10299f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
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
    uint32_t t3;
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
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10299f1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10299f1b;
    case 0x10299f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10299f2d;
    case 0x10299f3au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f3a;
    case 0x10299f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10299f43;
    case 0x10299f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f48;
    case 0x10299f4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f4e;
    case 0x10299f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f58;
    case 0x10299f61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f61;
    case 0x10299f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f6d;
    case 0x10299f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f74;
    case 0x10299f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f78;
    case 0x10299f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299f8d;
    case 0x10299fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10299fa0;
    case 0x10299fafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299faf;
    case 0x10299fcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299fca;
    case 0x10299fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299fe1;
    case 0x10299fe7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299fe7;
    default: break;
    }
#endif

    COW_AT(10299f00)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->eax = t2;
    g->ecx = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 8u, 4u, 1u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    ebx = t1;
    COW_AT(10299f1b)
    t6 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, eax);
    if (t6 == 1u)
    {
        edi = eax;
        eax = t6;
        goto L_10299f43;
    }
    eax = t6;
    COW_AT(10299f2d)
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, COW_IMG(0x103bc2d8u));
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc2d8u), eax);
    COW_AT(10299f3a)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = in_ebp;
    return 0u;
L_10299f43: ;
    COW_AT(10299f43)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_stdcall(g, COW_IMG(0x102acf40u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(10299f48)
    if (eax != 0u)
    {
        esi = eax;
        goto L_10299f61;
    }
    COW_AT(10299f4e)
    wr32(sp0 - 0x10u, COW_IMG(0x103bc2a4u));
    g->ebx = ebx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc2a4u), rd32(sp0 - 0xcu));
    COW_AT(10299f58)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = in_ebp;
    return 0u;
L_10299f61: ;
    COW_AT(10299f61)
    wr32(sp0 - 0x10u, ebx);
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, edi);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 0xcu;
    t10 = cow_cdecl(g, COW_IMG(0x10299d80u), 3, edi, sp0 + 4u, ebx);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(10299f6d)
    if (eax != 0u) goto L_10299f78;
    COW_AT(10299f74)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = in_ebp;
    return eax;
L_10299f78: ;
    COW_AT(10299f78)
    wr32(esi + 0x34u, eax);
    wr32(sp0 - 0x10u, in_ebp);
    t12 = rd32(eax + 0x14u);
    wr32(sp0 - 0x14u, t12);
    t13 = rd32(eax + 0x54u);
    wr32(sp0 - 0x18u, t13);
    wr32(sp0 - 0x1cu, esi + 0x14u);
    g->ecx = esi + 0x14u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x1028da40u), 3, esi + 0x14u, t13, t12);
    t14 = g->ecx;
    ecx = t14;
    COW_AT(10299f8d)
    wr32(sp0 - 0x20u, ebx);
    t15 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t15);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, esi + 0x4cu);
    g->eax = esi + 0x4cu;
    g->ecx = ecx;
    g->edx = t15;
    g->esp = sp0 - 0x1cu;
    t16 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, esi + 0x4cu, 4u, 1u, t15, ebx);
    t17 = g->ecx;
    t18 = g->edx;
    eax = t16;
    ecx = t17;
    edx = t18;
    loc_24 = rd32(sp0 - 0x24u);
    COW_AT(10299fa0)
    wr32(sp0 - 0x34u, ebx);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 4u);
    wr32(sp0 - 0x44u, esi + 0x44u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, esi + 0x44u, 4u, 1u, eax, ebx, rd32(sp0 - 0x30u), 4u, 1u, loc_24, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t20 = g->edx;
    eax = t19;
    edx = t20;
    edi = esi + 0x44u;
    COW_AT(10299faf)
    wr32(sp0 - 0x48u, 0xe1u);
    wr32(sp0 - 0x4cu, COW_IMG(0x103bc174u));
    wr32(sp0 - 0x50u, 4u);
    wr32(sp0 - 0x54u, rd32(edi));
    t21 = rd32(edi);
    wr32(sp0 + 4u, eax);
    g->eax = eax;
    g->ecx = t21;
    g->esp = sp0 - 0x40u;
    t22 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t21, 4u, COW_IMG(0x103bc174u), 0xe1u, rd32(sp0 - 0x44u));
    t23 = g->ecx;
    eax = t22;
    ecx = t23;
    ebp = esi + 0x48u;
    COW_AT(10299fca)
    t24 = rd32(sp0 + 4u);
    wr32(ebp, eax);
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, t24);
    wr32(sp0 - 0x1cu, rd32(edi));
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, ebp);
    g->eax = rd32(edi);
    g->ecx = ecx;
    g->edx = t24;
    t25 = rd32(edi);
    g->esp = sp0 - 0x10u;
    t26 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, ebp, 4u, t25, t24, ebx);
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(10299fe1)
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102ad9b0u), 3, esi, rd32(sp0 - 0x24u), 4u);
    COW_AT(10299fe7)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->ebp = rd32(sp0 - 0x10u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10299f00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10299f1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f3au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f4eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f61u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299f6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299f74u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299f78u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299f8du:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10299fa0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x2cu, 4u);
        wr32(sp0 - 0x28u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10299fafu:
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
    case 0x10299fcau:
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
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10299fe1u:
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
        (void)sp0;
        return 1;
    }
    case 0x10299fe7u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10299f00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10299f00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
