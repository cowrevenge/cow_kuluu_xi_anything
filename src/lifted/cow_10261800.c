/* f_0x10261800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261800(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10261824u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10261824;
    case 0x1026182bu: self = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1026182b;
    case 0x10261854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261854;
    case 0x10261870u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261870;
    case 0x10261879u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261879;
    case 0x1026188fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); goto E_1026188f;
    case 0x102618a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102618a4;
    default: break;
    }
#endif

    COW_AT(10261800)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103279f8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (arg3 != 0u)
    {
        loc_c = t1;
    COW_AT(1026182b)
        t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
        wr32(sp0 - 0x24u, t2);
        wr32(sp0 - 0x10u, t2);
        g->edx = in_edx;
        t3 = rd32(sp0 + 4u);
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
        t4 = g->edx;
        wr32(sp0 - 4u, 0u);
        g->eax = rd32(t3 - 0xcu);
        t5 = rd32(t3 - 0xcu);
        t6 = cow_thiscall(g, rd32(t5 + 0x18u), t3 - 0xcu, 0);
        t7 = g->ecx;
        wr32(sp0 + 4u, t6);
        if ((int32_t)t6 <= 0)
        {
            eax = t6;
            ecx = t7;
            ebp = t2;
            goto L_10261879;
        }
        eax = t6;
        ebx = 0u;
        ebp = t2;
        esi = t3 - 0xcu;
L_10261854: ;
    COW_AT(10261854)
        wr32(sp0 - 0x24u, ebx);
        g->eax = eax;
        g->edx = rd32(esi);
        t8 = rd32(esi);
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, rd32(t8 + 0x1cu), esi, 1, ebx);
        t10 = g->edx;
        wr32(sp0 - 0x24u, arg2);
        t11 = rd32(t9 + 0x14u);
        wr32(sp0 - 0x28u, t11);
        t12 = cow_call_regs(g, COW_IMG(0x102660f0u), t11, arg2, g->edx, 0, 2, t11, arg2);
        t13 = g->ecx;
        if (t12 == 0u)
        {
            edi = t9;
            goto L_102618a4;
        }
        ecx = t13;
    COW_AT(10261870)
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 + 4u))
        {
            eax = rd32(sp0 + 4u);
            ebx = ebx + 1u;
            goto L_10261854;
        }
        eax = rd32(sp0 + 4u);
L_10261879: ;
    COW_AT(10261879)
        wr32(sp0 - 0x24u, ebp);
        wr32(arg3, 0u);
        g->edx = arg3;
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
        t19 = g->edx;
        eax = 0x80040216u;
        edx = t19;
        loc_c = rd32(sp0 - 0xcu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
    }
    else
    {
        loc_c = t1;
    COW_AT(10261824)
        eax = 0x80004003u;
        edx = in_edx;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
L_1026188f: ;
    COW_AT(1026188f)
    wr32(g->fs_base, loc_c);
    g->ebx = loc_14;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    g->edx = edx;
    return eax;
L_102618a4: ;
    COW_AT(102618a4)
    wr32(sp0 - 0x24u, edi + 0xcu);
    wr32(arg3, edi + 0xcu);
    g->eax = edi + 0xcu;
    g->edx = arg3;
    t14 = rd32(edi + 0xcu);
    g->esp = sp0 - 0x20u;
    t15 = cow_thiscall(g, rd32(t14 + 4u), t14, 1, edi + 0xcu);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(sp0 - 0x24u, ebp);
    g->edx = t17;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
    t18 = g->edx;
    eax = 0u;
    edx = t18;
    loc_c = rd32(sp0 - 0xcu);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    goto L_1026188f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10261800(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10261824u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026182bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        self = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->eax = arg3;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10261854u:
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
        (void)sp0;
        return 1;
    }
    case 0x10261870u:
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
        (void)sp0;
        return 1;
    }
    case 0x10261879u:
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
        (void)sp0;
        return 1;
    }
    case 0x1026188fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102618a4u:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10261800(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10261800(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
