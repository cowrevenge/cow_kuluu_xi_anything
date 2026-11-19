/* f_0x10299d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10299d80(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_48;
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
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10299d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10299d9d;
    case 0x10299dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10299dab;
    case 0x10299db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299db6;
    case 0x10299dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_10299dc7;
    case 0x10299dcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299dcd;
    case 0x10299de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299de6;
    case 0x10299df3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299df3;
    case 0x10299df4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_10299df4;
    case 0x10299e04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299e04;
    case 0x10299e14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299e14;
    case 0x10299e26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_10299e26;
    case 0x10299e42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299e42;
    case 0x10299e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299e4e;
    case 0x10299e4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10299e4f;
    default: break;
    }
#endif

    COW_AT(10299d80)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x14u, t1);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t2);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, sp0 + 0xcu);
    g->eax = t2;
    g->ecx = sp0 + 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 0xcu, 4u, 1u, t2, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    esi = t1;
    COW_AT(10299d9d)
    if ((int32_t)rd32(sp0 + 0xcu) >= 1)
    {
        ebx = eax;
        eax = rd32(sp0 + 0xcu);
        goto L_10299dc7;
    }
    ebx = eax;
    eax = rd32(sp0 + 0xcu);
    COW_AT(10299dab)
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, COW_IMG(0x103bc210u));
    g->ebx = ebx;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc210u), eax);
    COW_AT(10299db6)
    wr32(rd32(sp0 + 8u), ebx);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10299dc7: ;
    COW_AT(10299dc7)
    wr32(sp0 - 0x14u, in_edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_stdcall(g, COW_IMG(0x102a9540u), 0);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    COW_AT(10299dcd)
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    t8 = rd32(sp0 + 0xcu);
    wr32(eax + 0x14u, t8);
    g->eax = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 - 4u, 4u, 1u, ebx, esi);
    edi = eax;
    eax = t9;
    COW_AT(10299de6)
    if ((int32_t)rd32(sp0 - 4u) <= 0)
    {
        ebp = in_ebp;
    }
    else
    {
        ecx = rd32(sp0 - 4u);
    COW_AT(10299df3)
        wr32(sp0 - 0x18u, in_ebp);
        ebx = 0u;
        loc_18 = in_ebp;
L_10299df4: ;
    COW_AT(10299df4)
        wr32(sp0 - 0x1cu, esi);
        wr32(sp0 - 0x20u, eax);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = sp0 + 4u;
        g->esp = sp0 - 0x18u;
        t10 = cow_cdecl(g, COW_IMG(0x1028a110u), 5, sp0 + 4u, 4u, 1u, eax, esi);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    COW_AT(10299e04)
        wr32(sp0 - 0x30u, esi);
        wr32(sp0 - 0x34u, eax);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x3cu, 4u);
        wr32(sp0 - 0x40u, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0xcu;
        t13 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, sp0 - 8u, 4u, 1u, eax, esi, sp0 + 4u, 4u, 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
        eax = t13;
    COW_AT(10299e14)
        t14 = rd32(sp0 - 8u);
        wr32(sp0 - 0x44u, t14);
        t15 = rd32(sp0 + 4u);
        wr32(sp0 - 0x48u, t15);
        wr32(sp0 - 0x4cu, edi);
        g->edx = t15;
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x102a99a0u), 6, edi, t15, t14, sp0 - 8u, 4u, 1u);
        t16 = g->edx;
        edx = t16;
        ebp = eax;
        loc_48 = rd32(sp0 - 0x48u);
    COW_AT(10299e26)
        wr32(sp0 - 0x50u, esi);
        wr32(sp0 - 0x54u, ebp);
        t17 = rd32(sp0 - 8u) * rd32(sp0 + 0xcu);
        wr32(sp0 - 0x58u, t17);
        wr32(sp0 - 0x5cu, 4u);
        t18 = rd32(edi + rd32(sp0 + 4u) * 4u + 0x54u);
        wr32(sp0 - 0x60u, t18);
        g->eax = t18;
        g->esp = sp0 - 0x2cu;
        t19 = cow_cdecl(g, COW_IMG(0x1028a110u), 13, t18, 4u, t17, ebp, esi, rd32(sp0 - 0x4cu), loc_48, rd32(sp0 - 0x44u), sp0 - 8u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u));
        eax = t19;
    COW_AT(10299e42)
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 4u))
        {
            ecx = rd32(sp0 - 4u);
            ebx = ebx + 1u;
            loc_18 = rd32(sp0 - 0x18u);
            goto L_10299df4;
        }
    COW_AT(10299e4e)
        ebp = rd32(sp0 - 0x18u);
    }
    COW_AT(10299e4f)
    wr32(rd32(sp0 + 8u), eax);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10299d80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10299d9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10299dabu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10299db6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10299dc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10299dcdu:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x24u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10299de6u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299df3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299df4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10299e04u:
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
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, sp0 + 4u);
        wr32(sp0 - 0x28u, 4u);
        wr32(sp0 - 0x24u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x10299e14u:
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
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x3cu, 4u);
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299e26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299e42u:
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
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299e4eu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x40u, sp0 - 8u);
        wr32(sp0 - 0x2cu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10299e4fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10299d80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10299d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
