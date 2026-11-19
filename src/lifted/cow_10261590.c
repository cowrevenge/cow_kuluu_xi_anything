/* f_0x10261590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10261590(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102615cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_102615cf;
    case 0x102615e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_102615e0;
    case 0x102615efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102615ef;
    case 0x102615fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102615fc;
    case 0x10261600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_10261600;
    case 0x10261605u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261605;
    case 0x10261609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_10261609;
    case 0x10261619u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261619;
    case 0x1026162eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026162e;
    default: break;
    }
#endif

    COW_AT(10261590)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327998u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(arg1 + 0x2cu);
    wr32(sp0 - 0x28u, t2);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x10u, t2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 8u) != 0u)
    {
        eax = rd32(arg1 + 8u);
        ecx = t3;
        edx = t4;
        esi = t2;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_10261609;
    }
    edx = t4;
    COW_AT(102615cf)
    g->eax = rd32(arg1 - 0xcu);
    g->edx = edx;
    t5 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, rd32(t5 + 0x18u), arg1 - 0xcu, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 <= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_10261605;
    }
    eax = t6;
    ebp = t6;
    edi = 0u;
L_102615e0: ;
    COW_AT(102615e0)
    wr32(sp0 - 0x28u, edi);
    g->eax = eax;
    g->edx = rd32(arg1 - 0xcu);
    t9 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 0x24u;
    t10 = cow_thiscall(g, rd32(t9 + 0x1cu), arg1 - 0xcu, 1, edi);
    t11 = g->edx;
    if (rd32(t10 + 0x18u) == 0u)
    {
        eax = t10;
        ecx = rd32(t10 + 0x18u);
        edx = t11;
        goto L_10261600;
    }
    eax = t10;
    COW_AT(102615ef)
    g->eax = eax;
    g->edx = rd32(eax);
    t12 = rd32(eax);
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, rd32(t12 + 0x14u), eax, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 < 0)
    {
        ecx = t14;
        edx = t15;
        ebx = t13;
        goto L_1026162e;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(102615fc)
L_10261600: ;
    COW_AT(10261600)
    if ((int32_t)(edi + 1u) < (int32_t)ebp)
    {
        edi = edi + 1u;
        goto L_102615e0;
    }
L_10261605: ;
    COW_AT(10261605)
    esi = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_10261609: ;
    COW_AT(10261609)
    wr32(sp0 - 0x28u, esi);
    wr32(arg1 + 8u, 1u);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
    eax = 0u;
L_10261619: ;
    COW_AT(10261619)
    t17 = rd32(sp0 - 0xcu);
    t18 = rd32(sp0 - 0x18u);
    t19 = rd32(sp0 - 0x1cu);
    t20 = rd32(sp0 - 0x20u);
    t21 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t17);
    g->ebx = t18;
    g->esi = t20;
    g->edi = t21;
    g->ebp = t19;
    return eax;
L_1026162e: ;
    COW_AT(1026162e)
    t16 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x28u, t16);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t16);   /* kernel32.dll!LeaveCriticalSection */
    eax = ebx;
    goto L_10261619;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10261590(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102615cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102615e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        g->esi = arg1 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102615efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->esi = arg1 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102615fcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->esi = arg1 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10261600u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        g->esi = arg1 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10261605u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10261609u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10261619u:
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
    case 0x1026162eu:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10261590(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10261590(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
