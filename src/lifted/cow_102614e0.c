/* f_0x102614e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102614e0(Guest* g)
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
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10261521u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10261521;
    case 0x10261534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_10261534;
    case 0x10261543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261543;
    case 0x1026154eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026154e;
    case 0x10261552u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261552;
    case 0x10261554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10261554;
    case 0x1026155du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1026155d;
    case 0x10261561u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10261561;
    default: break;
    }
#endif

    COW_AT(102614e0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327978u));
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
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) == 0u)
    {
        eax = rd32(t3 + 8u);
        ecx = t4;
        edx = t5;
        ebx = 0u;
        ebp = t3;
        esi = t2;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
        loc_24 = in_edi;
    }
    else
    {
        edx = t5;
        ebp = t3;
    COW_AT(10261521)
        g->eax = rd32(ebp - 0xcu);
        g->edx = edx;
        t6 = rd32(ebp - 0xcu);
        g->esp = sp0 - 0x24u;
        t7 = cow_thiscall(g, rd32(t6 + 0x18u), ebp - 0xcu, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x14u, t7);
        if ((int32_t)t7 <= 0)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            ebx = 0u;
            goto L_1026155d;
        }
        eax = t7;
        ebx = 0u;
        esi = ebp - 0xcu;
        edi = 0u;
        loc_14 = t7;
L_10261534: ;
    COW_AT(10261534)
        wr32(sp0 - 0x28u, edi);
        g->eax = eax;
        g->edx = rd32(esi);
        t10 = rd32(esi);
        g->esp = sp0 - 0x24u;
        t11 = cow_thiscall(g, rd32(t10 + 0x1cu), esi, 1, edi);
        t12 = g->edx;
        if (rd32(t11 + 0x18u) == 0u)
        {
            ecx = rd32(t11 + 0x18u);
            edx = t12;
        }
        else
        {
            eax = t11;
    COW_AT(10261543)
            g->eax = eax;
            g->edx = rd32(eax);
            t13 = rd32(eax);
            g->esp = sp0 - 0x24u;
            t14 = cow_thiscall(g, rd32(t13 + 0x18u), eax, 0);
            t15 = g->ecx;
            t16 = g->edx;
            if ((int32_t)t14 >= 0)
            {
                ecx = t15;
                edx = t16;
            }
            else
            {
                eax = t14;
                ecx = t15;
                edx = t16;
    COW_AT(1026154e)
                if ((int32_t)ebx >= 0)
                {
    COW_AT(10261552)
                    ebx = eax;
                }
            }
        }
    COW_AT(10261554)
        if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x14u))
        {
            eax = rd32(sp0 - 0x14u);
            edi = edi + 1u;
            loc_14 = rd32(sp0 - 0x14u);
            goto L_10261534;
        }
        eax = rd32(sp0 - 0x14u);
L_1026155d: ;
    COW_AT(1026155d)
        esi = rd32(sp0 + 4u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(10261561)
    wr32(sp0 - 0x28u, esi);
    wr32(ebp + 8u, 0u);
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
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
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102614e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10261521u:
    {
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
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10261534u:
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
    case 0x10261543u:
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
    case 0x1026154eu:
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
    case 0x10261552u:
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
    case 0x10261554u:
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
    case 0x1026155du:
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
    case 0x10261561u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102614e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102614e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
