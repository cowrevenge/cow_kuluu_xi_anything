/* f_0x10253870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10253870(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025388au: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_1025388a;
    case 0x10253894u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_edi = rd32(sp0 - 0x210u); in_esi = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); g->ebx = rd32(sp0 - 0x208u); g->edi = rd32(sp0 - 0x210u); g->esi = rd32(sp0 - 0x20cu); goto E_10253894;
    case 0x102538aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102538aa;
    case 0x102538c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102538c5;
    case 0x102538ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102538dd;
    case 0x102538f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102538f9;
    case 0x1025390au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025390a;
    case 0x1025390cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1025390c;
    case 0x10253919u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10253919;
    default: break;
    }
#endif

    COW_AT(10253870)
    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_esi);
    wr32(sp0 - 0x210u, in_edi);
    eax = arg1;
    ecx = self;
L_1025388a: ;
    COW_AT(1025388a)
    t1 = rd8(eax);
    wr8(eax + sp0 - arg1 - 0x200u, (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_1025388a;
    }
    COW_AT(10253894)
    wr32(sp0 - 0x214u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->edx = sp0 - 0x200u - arg1;
    g->esp = sp0 - 0x210u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4b30u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x200u);
    t3 = g->edx;
    if ((int32_t)t2 <= 0)
    {
        edi = 0u;
    }
    else
    {
        eax = t2;
        edx = t3;
        esi = t2;
    COW_AT(102538aa)
        wr32(sp0 - 0x214u, COW_IMG(0x10389d8cu));
        wr32(sp0 - 0x218u, esi);
        wr32(sp0 - 0x21cu, sp0 - 0x204u);
        g->esp = sp0 - 0x20cu;
        cow_cdecl(g, COW_IMG(0x101907a0u), 4, sp0 - 0x204u, esi, COW_IMG(0x10389d8cu), rd32(sp0 - 0x210u));
        if (rd32(sp0 - 0x204u) == 0u)
        {
            edi = 0u;
        }
        else
        {
            eax = rd32(sp0 - 0x204u);
    COW_AT(102538c5)
            wr32(sp0 - 0x214u, 0u);
            wr32(sp0 - 0x218u, esi);
            wr32(sp0 - 0x21cu, eax);
            wr32(sp0 - 0x220u, sp0 - 0x200u);
            g->eax = eax;
            g->edx = sp0 - 0x200u;
            t4 = rd32(COW_IMG(0x10662dccu));
            g->esp = sp0 - 0x210u;
            t5 = cow_thiscall(g, COW_IMG(0x101c4810u), t4, 4, sp0 - 0x200u, eax, esi, 0u);
            t6 = g->ecx;
            t7 = g->edx;
            if ((int32_t)t5 <= 0)
            {
                eax = t5;
                ecx = t6;
                edi = 0u;
            }
            else
            {
                ecx = t6;
                edx = t7;
    COW_AT(102538dd)
                wr32(sp0 - 0x214u, esi);
                t8 = rd32(sp0 - 0x204u);
                wr32(sp0 - 0x218u, t8);
                g->eax = t8;
                g->edx = edx;
                g->esp = sp0 - 0x210u;
                t9 = cow_thiscall_cdecl(g, COW_IMG(0x1030fe80u), ecx, 2, t8, esi);
                t10 = g->ecx;
                t11 = g->edx;
                wr32(sp0 - 0x21cu, 0x20cu);
                g->ecx = t10;
                g->edx = t11;
                g->esp = sp0 - 0x218u;
                t12 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x20cu);
                t13 = g->ecx;
                t14 = g->edx;
                if (t12 == 0u)
                {
                    eax = t12;
                    ecx = t13;
    COW_AT(1025390a)
                    edi = 0u;
                }
                else
                {
                    eax = t12;
                    edx = t14;
    COW_AT(102538f9)
                    t15 = rd32(sp0 - 0x204u);
                    wr32(sp0 - 0x214u, t15);
                    wr32(sp0 - 0x218u, arg1);
                    g->eax = eax;
                    g->esp = sp0 - 0x210u;
                    t16 = cow_thiscall(g, COW_IMG(0x10253970u), eax, 2, arg1, t15);
                    t17 = g->ecx;
                    eax = t16;
                    ecx = t17;
                    edi = t16;
                }
            }
    COW_AT(1025390c)
            t18 = rd32(sp0 - 0x204u);
            wr32(sp0 - 0x214u, t18);
            g->esp = sp0 - 0x210u;
            cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, t18, 1, 1, t18);
        }
    }
    COW_AT(10253919)
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = rd32(sp0 - 0x20cu);
    g->edi = rd32(sp0 - 0x210u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10253870(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025388au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        g->edx = sp0 - 0x200u - arg1;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10253894u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x210u);
        in_esi = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        g->edx = sp0 - 0x200u - arg1;
        g->ebx = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102538aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x214u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102538c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        g->edi = 0u;
        wr32(sp0 - 0x21cu, sp0 - 0x204u);
        (void)sp0;
        return 1;
    }
    case 0x102538ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x102538f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        g->ebx = arg1;
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1025390au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x1025390cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x220u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x10253919u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10253870(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10253870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
