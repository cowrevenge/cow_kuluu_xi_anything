/* f_0x1026e750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026e750(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
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
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026e75fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1026e75f;
    case 0x1026e76cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1026e76c;
    case 0x1026e7afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e7af;
    case 0x1026e7c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e7c5;
    case 0x1026e7d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e7d2;
    case 0x1026e819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e819;
    case 0x1026e861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e861;
    case 0x1026e865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1026e865;
    case 0x1026e880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1026e880;
    default: break;
    }
#endif

    COW_AT(1026e750)
    if (rd32(sp0 + 4u) == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        esi = in_esi;
        edi = in_edi;
    }
    else
    {
        eax = rd32(sp0 + 4u);
    COW_AT(1026e75f)
        if ((rd8(eax + 0xa8u) & 4u) == 0u)
        {
            ebx = in_ebx;
            ebp = in_ebp;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
    COW_AT(1026e76c)
            wr32(sp0 - 0x5cu, in_ebx);
            wr32(sp0 - 0x60u, in_ebp);
            wr32(sp0 - 0x64u, in_esi);
            wr32(sp0 - 0x68u, in_edi);
            wr32(sp0 - 0x6cu, 0u);
            wr32(sp0 - 0x70u, 0u);
            t1 = rd32(arg2 + 0x1cu);
            t2 = rd32(rd32(arg2 + 0x1cu) + 0x68u);
            wr32(t1 + 0x68u, 0u);
            wr32(sp0 + 4u, t2);
            g->eax = t1;
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0x68u;
            t3 = cow_cdecl(g, COW_IMG(0x10284b40u), 2, 0u, 0u);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(sp0 - 0x74u, 0xffffffffu);
            g->ecx = t4;
            g->edx = t5;
            g->esp = sp0 - 0x70u;
            t6 = cow_cdecl(g, COW_IMG(0x10281c40u), 1, 0xffffffffu);
            t7 = g->ecx;
            t8 = g->edx;
            g->ecx = t7;
            g->esp = sp0 - 0x74u;
            t9 = cow_call_regs(g, COW_IMG(0x10283240u), g->eax, g->ecx, t8, 1, 0);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x78u, 0u);
            g->esp = sp0 - 0x6cu;
            t12 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t10, t11, 1, 3, 0u, 0xffffffffu, 0u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(sp0 - 0x7cu, 0u);
            g->ecx = t13;
            g->esp = sp0 - 0x78u;
            t15 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, t14, 1, 1, 0u);
            t16 = g->ecx;
            t17 = g->edx;
            if (t2 == 0u)
            {
                eax = t15;
                ecx = t16;
                ebp = t2;
    COW_AT(1026e7c5)
                wr32(sp0 - 0x6cu, sp0 - 0x40u);
                g->ecx = ecx;
                g->edx = sp0 - 0x40u;
                g->esp = sp0 - 0x68u;
                cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, sp0 - 0x40u);
                t21 = g->ecx;
                t22 = g->edx;
                ecx = t21;
                edx = t22;
            }
            else
            {
                edx = t17;
                ebp = t2;
    COW_AT(1026e7af)
                t18 = rd32(ebp + 0x64u) + 0x1cu;
                wr32(sp0 - 0x6cu, t18);
                wr32(sp0 - 0x70u, sp0 - 0x40u);
                g->cf = rd32(ebp + 0x64u) + 0x1cu < rd32(ebp + 0x64u);
                g->pf = PARITY((uint8_t)(rd32(ebp + 0x64u) + 0x1cu));
                g->af = (rd32(ebp + 0x64u) ^ 0x1cu ^ rd32(ebp + 0x64u) + 0x1cu) >> 4u & 1u;
                g->zf = rd32(ebp + 0x64u) + 0x1cu == 0u;
                g->sf = (int32_t)(rd32(ebp + 0x64u) + 0x1cu) < 0;
                g->of = ((rd32(ebp + 0x64u) ^ rd32(ebp + 0x64u) + 0x1cu) & (rd32(ebp + 0x64u) + 0x1cu ^ 0x1cu)) >> 0x1fu;
                g->ecx = sp0 - 0x40u;
                g->edx = edx;
                g->esp = sp0 - 0x5cu;
                cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x40u, t18, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                t19 = g->ecx;
                t20 = g->edx;
                ecx = t19;
                edx = t20;
            }
    COW_AT(1026e7d2)
            wr32(sp0 - 0x6cu, sp0 - 0x40u);
            g->eax = sp0 - 0x40u;
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            t23 = cow_cdecl(g, COW_IMG(0x10283e20u), 1, sp0 - 0x40u);
            t24 = g->edx;
            wr32(sp0 - 0x70u, sp0 - 0x58u);
            g->ecx = sp0 - 0x58u;
            g->esp = sp0 - 0x6cu;
            t25 = cow_cdecl(g, COW_IMG(0x10274660u), 1, sp0 - 0x58u);
            t26 = g->ecx;
            wr32(sp0 - 0x74u, sp0 - 0x4cu);
            g->edx = sp0 - 0x4cu;
            g->esp = sp0 - 0x70u;
            cow_cdecl(g, COW_IMG(0x10274660u), 1, sp0 - 0x4cu);
            t27 = g->edx;
            wr32(sp0 - 0x78u, 0u);
            wr32(sp0 - 0x7cu, sp0 - 0x4cu);
            wr32(sp0 - 0x80u, sp0 - 0x58u);
            g->ecx = sp0 - 0x58u;
            g->edx = t27;
            g->esp = sp0 - 0x74u;
            cow_cdecl(g, COW_IMG(0x1026e890u), 3, sp0 - 0x58u, sp0 - 0x4cu, 0u);
            t28 = g->ecx;
            t29 = g->edx;
            if ((int32_t)rd32(arg2 + 0x28u) <= 1)
            {
                eax = rd32(arg2 + 0x28u);
                ecx = t28;
                edx = t29;
                goto L_1026e865;
            }
            eax = rd32(arg2 + 0x28u);
            ecx = t28;
            ebx = 1u;
            esi = rd32(arg2 + 0x20u) + 0xf8u;
L_1026e819: ;
    COW_AT(1026e819)
            t30 = rd32(esi + 0x68u);
            wr32(sp0 - 0x6cu, t30);
            g->eax = eax;
            g->edx = t30;
            g->esp = sp0 - 0x68u;
            t31 = cow_cdecl(g, COW_IMG(0x1027c6c0u), 1, t30);
            t32 = g->edx;
            wr32(sp0 - 0x70u, sp0 - 0x58u);
            t33 = rd32(esi + 0x68u);
            wr32(sp0 - 0x74u, t33);
            wr32(sp0 - 0x78u, arg2);
            g->eax = sp0 - 0x58u;
            g->ecx = t33;
            g->esp = sp0 - 0x6cu;
            t34 = cow_cdecl(g, COW_IMG(0x1027cd10u), 3, arg2, t33, sp0 - 0x58u);
            t35 = g->ecx;
            wr32(sp0 - 0x7cu, sp0 - 0x4cu);
            wr32(sp0 - 0x80u, esi);
            wr32(sp0 - 0x84u, arg2);
            g->edx = sp0 - 0x4cu;
            g->esp = sp0 - 0x78u;
            cow_cdecl(g, COW_IMG(0x1027cd10u), 3, arg2, esi, sp0 - 0x4cu);
            t36 = g->edx;
            wr32(sp0 - 0x88u, t31 - 1u);
            wr32(sp0 - 0x8cu, sp0 - 0x4cu);
            wr32(sp0 - 0x90u, sp0 - 0x58u);
            g->ecx = sp0 - 0x58u;
            g->edx = t36;
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x1026e890u), 3, sp0 - 0x58u, sp0 - 0x4cu, t31 - 1u);
            t37 = g->ecx;
            t38 = g->edx;
            if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg2 + 0x28u))
            {
                eax = rd32(arg2 + 0x28u);
                ecx = t37;
                ebx = ebx + 1u;
                esi = esi + 0xf8u;
                goto L_1026e819;
            }
            eax = rd32(arg2 + 0x28u);
            ecx = t37;
            edx = t38;
    COW_AT(1026e861)
            ebp = rd32(sp0 + 4u);
L_1026e865: ;
    COW_AT(1026e865)
            wr32(sp0 - 0x6cu, 1u);
            g->eax = eax;
            g->ecx = ecx;
            g->esp = sp0 - 0x68u;
            t39 = cow_call_regs(g, COW_IMG(0x10282370u), g->eax, g->ecx, edx, 1, 1, 1u);
            t40 = g->ecx;
            t41 = g->edx;
            wr32(sp0 - 0x70u, 1u);
            g->esp = sp0 - 0x64u;
            cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t40, t41, 1, 3, 1u, 1u, rd32(sp0 - 0x68u));
            t42 = rd32(sp0 - 0x68u);
            wr32(rd32(arg2 + 0x1cu) + 0x68u, ebp);
            ebx = rd32(sp0 - 0x5cu);
            ebp = rd32(sp0 - 0x60u);
            esi = rd32(sp0 - 0x64u);
            edi = t42;
        }
    }
    COW_AT(1026e880)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026e750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026e75fu:
    {
        uint32_t eax;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x1026e76cu:
    {
        uint32_t eax;
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
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x1026e7afu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026e7c5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026e7d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1026e819u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x1026e861u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        wr32(sp0 - 0x90u, sp0 - 0x58u);
        wr32(sp0 - 0x8cu, sp0 - 0x4cu);
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x1026e865u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x68u;
        g->edi = arg2;
        wr32(sp0 - 0x7cu, sp0 - 0x4cu);
        wr32(sp0 - 0x70u, sp0 - 0x58u);
        (void)sp0;
        return 1;
    }
    case 0x1026e880u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026e750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026e750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
