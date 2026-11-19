/* f_0x102baaa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
uint32_t cow_fn_102baaa0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102baaadu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; sf = g->sf; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_102baaad;
    case 0x102bab03u: eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; esi = g->esi; sf = g->sf; goto E_102bab03;
    case 0x102bab06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab06;
    case 0x102bab11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab11;
    case 0x102bab35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab35;
    case 0x102bab37u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab37;
    case 0x102bab42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab42;
    case 0x102bab6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab6f;
    case 0x102bab7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_102bab7a;
    case 0x102bab7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; goto E_102bab7b;
    case 0x102bab8au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; sf = g->sf; loc_4 = rd32(sp0 - 4u); goto E_102bab8a;
    default: break;
    }
#endif

    COW_AT(102baaa0)
    wr32(sp0 - 4u, in_ebp);
    if (arg6 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = in_esi;
        edi = in_edi;
        loc_4 = in_ebp;
    }
    else
    {
    COW_AT(102baaad)
        wr32(sp0 - 8u, in_esi);
        wr32(sp0 - 0xcu, in_edi);
        t1 = rd32(sp0 + 4u);
        wr32(sp0 - 0x10u, t1);
        g->eax = t1;
        g->esp = sp0 - 0xcu;
        t2 = cow_thiscall_cdecl(g, arg2, self, 1, t1);
        wr32(sp0 - 0x14u, sp0 + 0x18u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, arg3);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 + 4u, t2);
        g->esp = sp0 - 0x10u;
        cow_call_regs(g, COW_IMG(0x102ba6b0u), t2, g->ecx, g->edx, 1, 4, t2, arg3, 0u, sp0 + 0x18u);
        wr32(sp0 - 0x24u, 0x13bu);
        wr32(sp0 - 0x28u, COW_IMG(0x103c24e0u));
        wr32(sp0 - 0x2cu, 0xcu);
        t3 = rd32(t2 + 8u) - arg6;
        wr32(sp0 - 0x30u, t3);
        wr32(arg5, t3);
        g->eax = t3;
        g->ecx = arg5;
        g->esp = sp0 - 0x1cu;
        t4 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t3, 0xcu, COW_IMG(0x103c24e0u), 0x13bu, rd32(sp0 - 0x20u));
        t5 = g->ecx;
        wr32(arg4, t4);
        if ((int32_t)rd32(t2 + 8u) <= 0)
        {
            eax = rd32(t2 + 8u);
            edx = arg4;
        }
        else
        {
            ecx = t5;
            esi = t2;
    COW_AT(102bab03)
            wr32(sp0 - 0x10u, in_ebx);
            edx = arg4;
            ebx = 0u;
            edi = 0u;
L_102bab06: ;
    COW_AT(102bab06)
            if (rd32(ebx + rd32(esi + 4u) + 4u) != 0u)
            {
                eax = rd32(ebx + rd32(esi + 4u) + 4u);
                sf = (int32_t)rd32(ebx + rd32(esi + 4u) + 4u) < 0;
    COW_AT(102bab35)
                if (!sf)
                {
    COW_AT(102bab42)
                    wr32(arg6 + edi * 4u, eax - 1u);
                    t11 = rd32(esi + 0xcu) + rd32(ebx + rd32(esi + 4u)) * 0xcu;
                    wr32(sp0 - 0x14u, t11);
                    t12 = eax * 0xcu + rd32(arg4) - 0xcu;
                    wr32(sp0 - 0x18u, t12);
                    g->ecx = arg4;
                    g->edx = rd32(arg4);
                    t13 = rd32(arg4);
                    g->esp = sp0 - 0x10u;
                    cow_cdecl(g, COW_IMG(0x10274670u), 2, t12, t11);
                    t14 = g->ecx;
                    t15 = g->edx;
                    ecx = t14;
                    edx = t15;
                }
                else
                {
    COW_AT(102bab37)
                    wr32(arg6 + edi * 4u, 0xffffffffu - eax);
                    ecx = 0xffffffffu - eax;
                }
            }
            else
            {
                eax = rd32(ebx + rd32(esi + 4u) + 4u);
    COW_AT(102bab11)
                wr32(sp0 - 0x14u, 0x13fu);
                wr32(sp0 - 0x18u, COW_IMG(0x103c24e0u));
                wr32(sp0 - 0x1cu, COW_IMG(0x103b379cu));
                g->ebx = ebx;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c24e0u));
                t7 = g->ecx;
                t8 = g->edx;
                wr32(sp0 - 0x20u, edi);
                wr32(sp0 - 0x24u, COW_IMG(0x103c2510u));
                g->ebx = ebx;
                g->ecx = t7;
                g->edx = t8;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2510u), edi);
                t9 = g->ecx;
                t10 = g->edx;
                ecx = t9;
                edx = t10;
            }
    COW_AT(102bab6f)
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 8u))
            {
                ebx = ebx + 0xcu;
                edi = edi + 1u;
                goto L_102bab06;
            }
            eax = rd32(esi + 8u);
    COW_AT(102bab7a)
        }
    COW_AT(102bab7b)
        wr32(sp0 - 0x10u, sp0 + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t16 = cow_cdecl(g, COW_IMG(0x102ba660u), 3, sp0 + 4u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t17 = g->edx;
        eax = t16;
        edx = t17;
        esi = rd32(sp0 - 8u);
        edi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(102bab8a)
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102baaa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102baaadu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab03u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        esi = g->esi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        g->edx = arg4;
        g->ebp = arg6;
        g->edi = 0u;
        wr32(sp0 - 0x14u, sp0 + 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102bab06u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab11u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab35u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x102bab37u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab42u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab6fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg6;
        (void)sp0;
        return 1;
    }
    case 0x102bab7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102bab7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102bab8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_4;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        sf = g->sf;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102baaa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102baaa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
