/* f_0x1028c430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028c430(Guest* g)
{
    double d15;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    uint32_t self = g->ecx;
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
    case 0x1028c441u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_1028c441;
    case 0x1028c460u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028c460;
    case 0x1028c462u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1028c462;
    case 0x1028c47eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c47e;
    case 0x1028c49du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c49d;
    case 0x1028c4a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c4a1;
    case 0x1028c4c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c4c5;
    case 0x1028c4f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c4f7;
    case 0x1028c503u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1028c503;
    case 0x1028c505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1028c505;
    default: break;
    }
#endif

    COW_AT(1028c430)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_edi);
    if (rd32(arg1 + 0x24u) == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        loc_4 = in_ebp;
        loc_8 = in_edi;
    }
    else
    {
    COW_AT(1028c441)
        wr32(sp0 - 0xcu, COW_IMG(0x103b9b84u));
        wr32(sp0 - 0x10u, arg2);
        g->ecx = self;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, in_edx, 1, 2, arg2, COW_IMG(0x103b9b84u));
        t1 = g->ecx;
        t2 = g->edx;
        if ((int32_t)rd32(arg1 + 0x24u) <= 0)
        {
            ebx = in_ebx;
            esi = in_esi;
            loc_4 = in_ebp;
            loc_8 = in_edi;
        }
        else
        {
            eax = rd32(arg1 + 0x24u);
            ecx = t1;
            edx = t2;
    COW_AT(1028c460)
            wr32(sp0 - 0xcu, in_ebx);
            wr32(sp0 - 0x10u, in_esi);
            ebp = 0u;
            loc_c = in_ebx;
            loc_10 = in_esi;
L_1028c462: ;
    COW_AT(1028c462)
            wr32(sp0 - 0x14u, ebp);
            wr32(sp0 - 0x18u, arg1);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t3 = cow_cdecl(g, COW_IMG(0x10279850u), 2, arg1, ebp);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(sp0 - 0x1cu, ebp);
            wr32(sp0 - 0x20u, arg1);
            g->ecx = t4;
            g->edx = t5;
            g->esp = sp0 - 0x18u;
            t6 = cow_cdecl(g, COW_IMG(0x10279b20u), 2, arg1, ebp);
            t7 = g->ecx;
            t8 = g->edx;
            if (!(rd32(t3 + 0x20u) & 1u))
            {
                eax = rd32(t3 + 0x20u);
                ecx = t7;
                edx = t8;
                ebx = t3;
                esi = t6;
    COW_AT(1028c49d)
                if ((eax & 2u) == 0u)
                {
    COW_AT(1028c4c5)
                    wr32(sp0 - 0x14u, 0x222u);
                    wr32(sp0 - 0x18u, COW_IMG(0x103b98f8u));
                    wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
                    g->ebx = ebx;
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t18 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
                    t19 = g->ecx;
                    t20 = g->edx;
                    wr32(sp0 - 0x20u, esi);
                    wr32(sp0 - 0x24u, COW_IMG(0x103b9b38u));
                    g->ebx = ebx;
                    g->ecx = t19;
                    g->edx = t20;
                    g->esp = sp0 - 0x1cu;
                    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9b38u), esi);
                    t21 = g->ecx;
                    t22 = g->edx;
                    wr32(sp0 - 0x28u, esi);
                    wr32(sp0 - 0x2cu, COW_IMG(0x103b9b0cu));
                    wr32(sp0 - 0x30u, arg2);
                    g->ebx = ebx;
                    g->ecx = t21;
                    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t22, 1, 5, arg2, COW_IMG(0x103b9b0cu), esi, COW_IMG(0x103b9b38u), rd32(sp0 - 0x20u));
                    t23 = g->ecx;
                    t24 = g->edx;
                    ecx = t23;
                    edx = t24;
                }
                else
                {
    COW_AT(1028c4a1)
                    wr32(sp0 - 0x14u, ebx);
                    wr32(sp0 - 0x18u, arg1);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->esp = sp0 - 0x10u;
                    t13 = cow_cdecl(g, COW_IMG(0x1028c510u), 2, arg1, ebx);
                    t14 = g->ecx;
                    d15 = cow_take_float(g);
                    wrf64(sp0 - 0x18u, d15);
                    wr32(sp0 - 0x1cu, 0x80u);
                    wr32(sp0 - 0x20u, esi);
                    wr32(sp0 - 0x24u, COW_IMG(0x103b9b58u));
                    wr32(sp0 - 0x28u, arg2);
                    g->ebx = ebx;
                    g->ecx = t14;
                    g->esp = sp0 - 0x14u;
                    cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, arg2, 1, 5, arg2, COW_IMG(0x103b9b58u), esi, 0x80u, cow_dlo(d15));
                    t16 = g->ecx;
                    t17 = g->edx;
                    ecx = t16;
                    edx = t17;
                }
            }
            else
            {
                eax = rd32(t3 + 0x20u);
                ecx = t7;
                edx = t8;
                ebx = t3;
                esi = t6;
    COW_AT(1028c47e)
                wr32(sp0 - 0x14u, ebp);
                wr32(sp0 - 0x18u, 0u);
                wr32(sp0 - 0x1cu, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t9 = cow_cdecl(g, COW_IMG(0x10279bc0u), 3, arg1, 0u, ebp);
                t10 = g->edx;
                wr32(sp0 - 0x20u, t9);
                wr32(sp0 - 0x24u, esi);
                wr32(sp0 - 0x28u, COW_IMG(0x103b9b70u));
                wr32(sp0 - 0x2cu, arg2);
                g->ebx = ebx;
                g->ecx = arg2;
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t10, 1, 5, arg2, COW_IMG(0x103b9b70u), esi, t9, arg1);
                t11 = g->ecx;
                t12 = g->edx;
                ecx = t11;
                edx = t12;
            }
    COW_AT(1028c4f7)
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x24u))
            {
                eax = rd32(arg1 + 0x24u);
                ebp = ebp + 1u;
                loc_c = rd32(sp0 - 0xcu);
                loc_10 = rd32(sp0 - 0x10u);
                goto L_1028c462;
            }
    COW_AT(1028c503)
            ebx = rd32(sp0 - 0xcu);
            esi = rd32(sp0 - 0x10u);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(1028c505)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = loc_8;
    g->ebp = loc_4;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028c430(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028c441u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c460u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 8u;
        g->ebp = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c462u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c47eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c49du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c4a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c4c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c4f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1028c503u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1028c505u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c430(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1028c430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
