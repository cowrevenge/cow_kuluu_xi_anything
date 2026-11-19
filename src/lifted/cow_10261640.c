/* f_0x10261640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261640(Guest* g)
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026168du: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1026168d;
    case 0x10261699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261699;
    case 0x102616a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_102616a4;
    case 0x102616aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_102616aa;
    case 0x102616bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102616bf;
    case 0x102616ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102616ce;
    case 0x102616e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102616e5;
    case 0x102616e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102616e9;
    case 0x102616eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102616ee;
    case 0x102616f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102616f2;
    case 0x10261702u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261702;
    case 0x10261717u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261717;
    default: break;
    }
#endif

    COW_AT(10261640)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103279b8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 0x10u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t4 = g->edx;
    wr32(t3 + 0x14u, arg2);
    wr32(t3 + 0x18u, arg3);
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) != 0u)
    {
        eax = rd32(t3 + 8u);
        ecx = arg3;
        edx = t4;
        esi = t3;
        edi = t2;
        goto L_102616a4;
    }
    eax = rd32(t3 + 8u);
    esi = t3;
    edi = t2;
    COW_AT(1026168d)
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = rd32(esi);
    t5 = rd32(esi);
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, rd32(t5 + 0x14u), arg3, 1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_102616a4;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = t6;
    COW_AT(10261699)
    wr32(sp0 - 0x28u, edi);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, edi);   /* kernel32.dll!LeaveCriticalSection */
    eax = ebx;
L_10261702: ;
    COW_AT(10261702)
    t21 = rd32(sp0 - 0xcu);
    t22 = rd32(sp0 - 0x18u);
    t23 = rd32(sp0 - 0x1cu);
    t24 = rd32(sp0 - 0x20u);
    t25 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t21);
    g->ebx = t22;
    g->esi = t24;
    g->edi = t25;
    g->ebp = t23;
    return eax;
L_102616a4: ;
    COW_AT(102616a4)
    if (rd32(esi + 8u) == 2u)
    {
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
        goto L_102616f2;
    }
    COW_AT(102616aa)
    g->eax = rd32(esi - 0xcu);
    g->edx = edx;
    t9 = rd32(esi - 0xcu);
    g->esp = sp0 - 0x24u;
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi - 0xcu, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x14u, t10);
    if ((int32_t)t10 <= 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102616ee;
    }
    eax = t10;
    ebx = t10;
    ebp = 0u;
    edi = esi - 0xcu;
    loc_14 = t10;
L_102616bf: ;
    COW_AT(102616bf)
    wr32(sp0 - 0x28u, ebp);
    g->eax = eax;
    g->edx = rd32(edi);
    t13 = rd32(edi);
    g->esp = sp0 - 0x24u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1cu), edi, 1, ebp);
    t15 = g->edx;
    if (rd32(t14 + 0x18u) == 0u)
    {
        eax = t14;
        ecx = rd32(t14 + 0x18u);
        edx = t15;
        goto L_102616e9;
    }
    eax = t14;
    COW_AT(102616ce)
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg2);
    g->eax = eax;
    g->edx = rd32(eax);
    t16 = rd32(eax);
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, rd32(t16 + 0x1cu), eax, 2, arg2, arg3);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        ecx = t18;
        ebx = t17;
        goto L_10261717;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(102616e5)
    ebx = rd32(sp0 - 0x14u);
L_102616e9: ;
    COW_AT(102616e9)
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        loc_14 = rd32(sp0 - 0x14u);
        goto L_102616bf;
    }
L_102616ee: ;
    COW_AT(102616ee)
    edi = rd32(sp0 + 4u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = rd32(sp0 - 0x20u);
    loc_24 = rd32(sp0 - 0x24u);
L_102616f2: ;
    COW_AT(102616f2)
    wr32(sp0 - 0x28u, edi);
    wr32(esi + 8u, 2u);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, edi);   /* kernel32.dll!LeaveCriticalSection */
    eax = 0u;
    goto L_10261702;
L_10261717: ;
    COW_AT(10261717)
    t20 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t20);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t20);   /* kernel32.dll!LeaveCriticalSection */
    eax = ebx;
    goto L_10261702;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10261640(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026168du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ecx = arg3;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10261699u:
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
    case 0x102616a4u:
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102616aau:
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
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102616bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102616ceu:
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
    case 0x102616e5u:
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
    case 0x102616e9u:
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
    case 0x102616eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x102616f2u:
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
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10261702u:
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
    case 0x10261717u:
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
void cow_adapter_10261640(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10261640(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
