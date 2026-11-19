/* f_0x10264f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10264f20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264f40u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10264f40;
    case 0x10264f59u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10264f59;
    case 0x10264f6cu: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10264f6c;
    case 0x10264f71u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10264f71;
    case 0x10264f73u: eax = g->eax; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10264f73;
    case 0x10264f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264f9d;
    case 0x10264fa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fa5;
    case 0x10264fafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264faf;
    case 0x10264fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fb4;
    case 0x10264fcbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fcb;
    case 0x10264fcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fcf;
    case 0x10264fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fe5;
    case 0x10264febu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264feb;
    case 0x10264fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264fef;
    case 0x10264ff5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10264ff5;
    default: break;
    }
#endif

    COW_AT(10264f20)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327d38u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        ebx = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_10264f59;
    }
    loc_c = t1;
    COW_AT(10264f40)
    wr32(g->fs_base, loc_c);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004003u;
L_10264f59: ;
    COW_AT(10264f59)
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, 0u);
    if (t2 == 0xcu)
    {
        eax = t2 - 0xcu;
        esi = t2;
    COW_AT(10264f71)
        edi = 0u;
    }
    else
    {
        eax = t2 - 0xcu;
        esi = t2;
    COW_AT(10264f6c)
        edi = esi + 4u;
    }
    COW_AT(10264f73)
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 + 4u, edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, edi);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    t4 = rd32(esi + 0x1cu);
    wr32(ebx + 0x1cu, t4);
    t5 = rd32(esi + 0x20u);
    wr32(esi + 0x1cu, ebx);
    wr32(esi + 0x20u, t5 + 1u);
    if (rd32(esi + 0x28u) == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        edx = t3;
    COW_AT(10264f9d)
        g->esp = sp0 - 0x18u;
        cow_fastcall(g, COW_IMG(0x102650d0u), esi - 0xcu, edx, 0);
        t6 = g->edx;
        edx = t6;
    }
    COW_AT(10264fa5)
    if (rd32(esi + 0x48u) == 0u)
    {
        eax = rd32(esi + 0x20u);
        ecx = rd32(esi + 0x48u);
        goto L_10264fcb;
    }
    eax = rd32(esi + 0x20u);
    ecx = rd32(esi + 0x48u);
    COW_AT(10264faf)
    if (eax != rd32(esi + 0x30u)) goto L_10264fcb;
    COW_AT(10264fb4)
    g->eax = eax;
    g->edx = rd32(esi - 0xcu);
    t7 = rd32(esi - 0xcu);
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, rd32(t7 + 0x10u), esi - 0xcu, 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(esi + 0x48u, 0u);
    eax = t8;
    ecx = t9;
    edx = t10;
    ebx = 1u;
L_10264fcf: ;
    COW_AT(10264fcf)
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 4u, 0xffffffffu);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, edi);   /* kernel32.dll!LeaveCriticalSection */
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(esi + 0x4cu) == 0u)
    {
        eax = rd32(esi + 0x4cu);
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(esi + 0x4cu);
        edx = t12;
    COW_AT(10264fe5)
        wr32(sp0 - 0x1cu, eax);
        g->eax = eax;
        g->edx = edx;
        t13 = rd32(eax);
        g->esp = sp0 - 0x18u;
        t14 = cow_thiscall(g, rd32(t13 + 0xcu), t13, 1, eax);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    COW_AT(10264feb)
    if (ebx != 0u)
    {
    COW_AT(10264fef)
        wr32(sp0 - 0x1cu, esi);
        g->edx = rd32(esi);
        t17 = rd32(esi);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(t17 + 8u), ecx, 1, esi);
        t18 = g->edx;
        edx = t18;
    }
    COW_AT(10264ff5)
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t19);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t20;
    g->edi = t21;
    g->edx = edx;
    return 0u;
L_10264fcb: ;
    COW_AT(10264fcb)
    ebx = rd32(sp0 + 8u);
    goto L_10264fcf;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264f40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264f59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264f6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264f71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264f73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264f9du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fa5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fcbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fcfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fe5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264febu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264fefu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264ff5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264f20(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
