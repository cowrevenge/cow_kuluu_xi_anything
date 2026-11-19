/* f_0x102efa87 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102efa87(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102efaa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102efaa0;
    case 0x102efad4u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efad4;
    case 0x102efae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efae3;
    case 0x102efaeeu: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efaee;
    case 0x102efaf2u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efaf2;
    case 0x102efaf8u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efaf8;
    case 0x102efb00u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102efb00;
    case 0x102efb04u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb04;
    case 0x102efb11u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb11;
    case 0x102efb21u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb21;
    case 0x102efb28u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb28;
    case 0x102efb33u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb33;
    case 0x102efb3au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb3a;
    case 0x102efb45u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb45;
    case 0x102efb4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb4c;
    case 0x102efb57u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb57;
    case 0x102efb5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb5e;
    case 0x102efb69u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb69;
    case 0x102efb70u: ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb70;
    case 0x102efb75u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102efb75;
    case 0x102efb78u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb78;
    case 0x102efb82u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102efb82;
    default: break;
    }
#endif

    COW_AT(102efa87)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, in_edx, 1, 5, arg1, 0u, in_edi, in_esi, in_ebx);
    t1 = g->edx;
    ecx = 0u;
    edx = t1;
    loc_4 = in_ebp;
    loc_8 = in_ebx;
    loc_c = in_esi;
    loc_10 = in_edi;
L_102efaa0: ;
    COW_AT(102efaa0)
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    wr32(sp0 - 0x1cu, arg1);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f1f8fu), g->eax, g->ecx, edx, 1, 3, arg1, sp0 + 4u, 4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 + 4u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x24u, arg1);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x20u;
    t7 = cow_cdecl(g, COW_IMG(0x102f20e1u), 1, arg1);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, arg1 + 0x10cu);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t9, 1, 5, arg1, arg1 + 0x10cu, 4u, arg1, sp0 + 4u);
    t10 = g->edx;
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347ed4u)))
    {
        edx = t10;
        edi = t4;
        goto L_102efae3;
    }
    ecx = rd32(arg1 + 0x10cu);
    edx = t10;
    edi = t4;
    COW_AT(102efad4)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    g->eax = COW_IMG(0x10347ed4u);
    g->esp = sp0 - 0x10u;
    t11 = cow_call_regs(g, COW_IMG(0x102f806cu), g->eax, ecx, edx, 1, 3, arg1, arg2, edi);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
L_102efb75: ;
    COW_AT(102efb75)
L_102efb78: ;
    COW_AT(102efb78)
    if ((rd8(arg1 + 0x58u) & 0x10u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_102efaa0;
    }
    COW_AT(102efb82)
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102efae3: ;
    COW_AT(102efae3)
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347edcu))) goto L_102efb11;
    ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efaee)
    if (edi != 0u) goto L_102efb04;
    COW_AT(102efaf2)
    if ((rd8(arg1 + 0x58u) & 8u) != 0u) goto L_102efb04;
    COW_AT(102efaf8)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg1);
    g->eax = COW_IMG(0x10347edcu);
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(102efb00)
    ecx = 0u;
    goto L_102efb78;
L_102efb04: ;
    COW_AT(102efb04)
    wr32(sp0 - 0x14u, COW_IMG(0x1034807cu));
    wr32(sp0 - 0x18u, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, arg1, COW_IMG(0x1034807cu));
    rt_fatal(g, COW_IMG(0x102efb0au), "no way on");
    return 0;
L_102efb11: ;
    COW_AT(102efb11)
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, arg1);
    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347eecu)))
    {
        loc_14 = edi;
    COW_AT(102efb28)
        if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347ee4u)))
        {
    COW_AT(102efb3a)
            if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347ef4u)))
            {
    COW_AT(102efb4c)
                if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347efcu)))
                {
    COW_AT(102efb5e)
                    if (rd32(arg1 + 0x10cu) != rd32(COW_IMG(0x10347f04u)))
                    {
                        ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efb70)
                        g->ebx = arg1 + 0x10cu;
                        g->ecx = ecx;
                        g->esp = sp0 - 0x10u;
                        t31 = cow_call_regs(g, COW_IMG(0x102f8787u), COW_IMG(0x10347f04u), g->ecx, edx, 1, 3, arg1, arg2, loc_14);
                        t32 = g->ecx;
                        t33 = g->edx;
                        eax = t31;
                        ecx = t32;
                        edx = t33;
                    }
                    else
                    {
                        ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efb69)
                        g->eax = COW_IMG(0x10347f04u);
                        g->esp = sp0 - 0xcu;
                        t28 = cow_call_regs(g, COW_IMG(0x102f85d0u), g->eax, ecx, edx, 1, 4, arg1, arg2, loc_14, rd32(sp0 - 0x10u));
                        t29 = g->ecx;
                        t30 = g->edx;
                        eax = t28;
                        ecx = t29;
                        edx = t30;
                    }
                }
                else
                {
                    ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efb57)
                    g->eax = COW_IMG(0x10347efcu);
                    g->esp = sp0 - 0x10u;
                    t25 = cow_call_regs(g, COW_IMG(0x102f84e1u), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
                    t26 = g->ecx;
                    t27 = g->edx;
                    eax = t25;
                    ecx = t26;
                    edx = t27;
                }
            }
            else
            {
                ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efb45)
                g->eax = COW_IMG(0x10347ef4u);
                g->esp = sp0 - 0xcu;
                t22 = cow_call_regs(g, COW_IMG(0x102f83d6u), g->eax, ecx, edx, 1, 4, arg1, arg2, loc_14, rd32(sp0 - 0x10u));
                t23 = g->ecx;
                t24 = g->edx;
                eax = t22;
                ecx = t23;
                edx = t24;
            }
        }
        else
        {
            ecx = rd32(arg1 + 0x10cu);
    COW_AT(102efb33)
            g->eax = COW_IMG(0x10347ee4u);
            g->esp = sp0 - 0x10u;
            t19 = cow_call_regs(g, COW_IMG(0x102f838cu), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
    }
    else
    {
        ecx = rd32(arg1 + 0x10cu);
        loc_14 = edi;
    COW_AT(102efb21)
        g->eax = COW_IMG(0x10347eecu);
        g->esp = sp0 - 0x10u;
        t16 = cow_call_regs(g, COW_IMG(0x102f8262u), g->eax, ecx, edx, 1, 3, arg1, arg2, loc_14);
        t17 = g->ecx;
        t18 = g->edx;
        eax = t16;
        ecx = t17;
        edx = t18;
    }
    goto L_102efb75;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102efa87(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102efaa0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102efad4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347ed4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efae3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efaeeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efaf2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efaf8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efb00u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102efb04u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->eax = COW_IMG(0x10347edcu);
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efb11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efb21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347eecu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb28u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347ee4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb3au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347ef4u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb4cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347efcu);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb69u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347f04u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb70u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->eax = COW_IMG(0x10347f04u);
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0x18u, arg2);
        (void)sp0;
        return 1;
    }
    case 0x102efb75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efb78u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg1 + 0x10cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102efb82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102efa87(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102efa87(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
