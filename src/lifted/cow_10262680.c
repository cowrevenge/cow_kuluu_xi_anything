/* f_0x10262680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10262680(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102626a0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102626a0;
    case 0x102626b9u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102626b9;
    case 0x102626dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102626da;
    case 0x102626fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_102626fa;
    case 0x10262704u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10262704;
    case 0x1026270bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1026270b;
    case 0x1026272bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_1026272b;
    case 0x10262741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10262741;
    case 0x10262765u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; goto E_10262765;
    default: break;
    }
#endif

    COW_AT(10262680)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327b38u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        edi = rd32(sp0 + 8u);
        loc_c = t1;
        goto L_102626b9;
    }
    loc_c = t1;
    COW_AT(102626a0)
    wr32(g->fs_base, loc_c);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x80004003u;
L_102626b9: ;
    COW_AT(102626b9)
    t2 = rd32(arg1 + 0x14u);
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 + 8u, t2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(arg1 + 0xcu) == 0u)
    {
        edx = t4;
        ebx = t2;
        goto L_102626fa;
    }
    eax = rd32(arg1 + 0xcu);
    ecx = t3;
    edx = t4;
    ebx = t2;
    COW_AT(102626da)
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebx);   /* kernel32.dll!LeaveCriticalSection */
    t5 = g->edx;
    t6 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t6);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t5;
    return 0x80040204u;
L_102626fa: ;
    COW_AT(102626fa)
    if (rd32(rd32(arg1 + 0x1cu) + 0x14u) == 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        goto L_1026272b;
    }
    eax = rd32(arg1 + 0x1cu);
    ecx = rd32(rd32(arg1 + 0x1cu) + 0x14u);
    COW_AT(10262704)
    if (rd8(arg1 + 0x19u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x19u);
        goto L_1026272b;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x19u);
    COW_AT(1026270b)
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebx);   /* kernel32.dll!LeaveCriticalSection */
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t8);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t7;
    return 0x80040224u;
L_1026272b: ;
    COW_AT(1026272b)
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x10262920u), arg1 - 0xcu, 2, edi, arg3);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t9 >= 0)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_10262765;
    }
    eax = t9;
    edi = t9;
    COW_AT(10262741)
    g->eax = eax;
    g->edx = rd32(arg1 - 0xcu);
    t12 = rd32(arg1 - 0xcu);
    g->esp = sp0 - 0x18u;
    t13 = cow_thiscall(g, rd32(t12 + 0x2cu), arg1 - 0xcu, 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x1cu, ebx);
    g->edx = t15;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebx);   /* kernel32.dll!LeaveCriticalSection */
    t16 = g->edx;
    t17 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t17);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t16;
    return edi;
L_10262765: ;
    COW_AT(10262765)
    wr32(sp0 - 0x1cu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebx);   /* kernel32.dll!LeaveCriticalSection */
    t18 = g->edx;
    t19 = rd32(sp0 - 0xcu);
    t20 = rd32(sp0 - 0x14u);
    t21 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t19);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t20;
    g->edi = t21;
    g->edx = t18;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10262680(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102626a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102626b9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102626dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102626fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262704u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1026270bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1026272bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10262741u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10262765u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
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
void cow_adapter_10262680(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10262680(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
