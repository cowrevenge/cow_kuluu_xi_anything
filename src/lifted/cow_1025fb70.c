/* f_0x1025fb70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1025fb70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025fba7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1025fba7;
    case 0x1025fbcau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fbca;
    case 0x1025fbd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fbd1;
    case 0x1025fbdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fbdb;
    case 0x1025fbe2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fbe2;
    case 0x1025fc0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fc0f;
    case 0x1025fc16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fc16;
    case 0x1025fc1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fc1b;
    case 0x1025fc26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1025fc26;
    case 0x1025fc2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1025fc2d;
    default: break;
    }
#endif

    COW_AT(1025fb70)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327840u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t2 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t2);
    g->eax = rd32(rd32(rd32(sp0 + 4u) + 0x40u));
    g->edx = t2;
    t3 = rd32(rd32(rd32(sp0 + 4u) + 0x40u));
    t4 = rd32(rd32(sp0 + 4u) + 0x40u);
    t5 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(t3 + 0x9cu), t4, 1, t2);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t8;
        ebx = t6;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        ebx = t6;
        edi = t5;
    COW_AT(1025fba7)
        t9 = rd32(edi + 0x40u) + 0x7cu;
        wr32(sp0 - 0x20u, t9);
        wr32(sp0 + 4u, t9);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t9);   /* kernel32.dll!EnterCriticalSection */
        t10 = g->edx;
        wr32(sp0 - 4u, 0u);
        if (rd32(rd32(edi - 0x70u) + 0x14u) == 0u)
        {
            eax = rd32(edi - 0x70u);
            ecx = rd32(rd32(edi - 0x70u) + 0x14u);
            edx = t10;
            ebp = t9;
        }
        else
        {
            eax = rd32(edi - 0x70u);
            ecx = rd32(rd32(edi - 0x70u) + 0x14u);
            edx = t10;
            ebp = t9;
    COW_AT(1025fbca)
            if (rd8(edi + 9u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + 9u);
            }
            else
            {
    COW_AT(1025fbd1)
                if (rd32(rd32(edi + 0x40u) + 0x60u) != 0u)
                {
                    eax = rd32(rd32(edi + 0x40u) + 0x60u);
                    ecx = rd32(edi + 0x40u);
                }
                else
                {
                    eax = rd32(rd32(edi + 0x40u) + 0x60u);
                    ecx = rd32(edi + 0x40u);
    COW_AT(1025fbdb)
                    if (rd8(edi - 0x74u) != 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(edi - 0x74u);
                    }
                    else
                    {
                        eax = (eax & 0xffffff00u) | rd8(edi - 0x74u);
    COW_AT(1025fbe2)
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, ebx);
                        wr32(sp0 - 0x28u, 3u);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t11 = cow_thiscall(g, COW_IMG(0x10261a00u), ecx, 3, 3u, ebx, 0u);
                        t12 = g->ecx;
                        t13 = g->edx;
                        t14 = rd32(edi + 0x40u) + 0x94u;
                        wr32(sp0 - 0x20u, t14);
                        wr32(sp0 + 8u, t14);
                        g->edx = t13;
                        cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t14);   /* kernel32.dll!EnterCriticalSection */
                        t15 = g->edx;
                        t16 = rd32(edi + 0x40u);
                        wr8(sp0 - 4u, 1u);
                        if (rd32(t16 + 0x64u) == 0u)
                        {
                            eax = rd32(t16 + 0x64u);
                            ecx = t16;
                            edx = t15;
                            esi = t14;
                        }
                        else
                        {
                            ecx = t16;
                            edx = t15;
                            esi = t14;
    COW_AT(1025fc0f)
                            if (rd32(ecx + 0x74u) != 0u)
                            {
                                eax = rd32(ecx + 0x74u);
                            }
                            else
                            {
                                eax = rd32(ecx + 0x74u);
    COW_AT(1025fc16)
                                g->eax = eax;
                                g->esp = sp0 - 0x1cu;
                                t17 = cow_fastcall(g, COW_IMG(0x1025f4b0u), ecx, edx, 0);
                                t18 = g->ecx;
                                t19 = g->edx;
                                eax = t17;
                                ecx = t18;
                                edx = t19;
                            }
                        }
    COW_AT(1025fc1b)
                        wr32(sp0 - 0x20u, esi);
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t20 = cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, esi);   /* kernel32.dll!LeaveCriticalSection */
                        t21 = g->ecx;
                        t22 = g->edx;
                        wr8(edi - 0x74u, 1u);
                        eax = t20;
                        ecx = t21;
                        edx = t22;
                    }
                }
            }
        }
    COW_AT(1025fc26)
        wr32(sp0 - 0x20u, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
        t23 = g->edx;
        edx = t23;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1025fc2d)
    t24 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t24);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    g->edx = edx;
    return ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025fb70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025fba7u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1025fbcau:
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
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025fbd1u:
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
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025fbdbu:
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
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025fbe2u:
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
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025fc0fu:
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
        (void)sp0;
        return 1;
    }
    case 0x1025fc16u:
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
        (void)sp0;
        return 1;
    }
    case 0x1025fc1bu:
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
        (void)sp0;
        return 1;
    }
    case 0x1025fc26u:
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
        (void)sp0;
        return 1;
    }
    case 0x1025fc2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025fb70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025fb70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
