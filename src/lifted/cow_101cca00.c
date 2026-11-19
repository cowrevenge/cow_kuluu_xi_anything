/* f_0x101cca00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101cca00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    cow_frame(g, sp0, 80u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101cca1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x30u); goto E_101cca1a;
    case 0x101cca2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101cca2b;
    case 0x101cca39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101cca39;
    case 0x101cca3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101cca3b;
    case 0x101cca40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_101cca40;
    case 0x101cca51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; goto E_101cca51;
    case 0x101ccab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101ccab8;
    case 0x101ccae3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101ccae3;
    case 0x101ccafeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101ccafe;
    case 0x101ccb2cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101ccb2c;
    case 0x101ccb32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101ccb32;
    default: break;
    }
#endif

    COW_AT(101cca00)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x100dc080u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, t1);
    if (rd32(COW_IMG(0x10662f68u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10662f68u));
        edx = t3;
        loc_28 = in_ebx;
        loc_2c = in_ebp;
        loc_30 = in_esi;
        loc_24 = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x10662f68u));
        ecx = t2;
        edx = t3;
        loc_24 = t1;
    COW_AT(101cca1a)
        wr32(sp0 - 0x34u, 0x3f4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t4 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x3f4u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
    COW_AT(101cca39)
            eax = 0u;
        }
        else
        {
            eax = t4;
            edx = t5;
    COW_AT(101cca2b)
            wr32(sp0 - 0x34u, COW_IMG(0x1037d7a0u));
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t6 = cow_thiscall(g, COW_IMG(0x101cc9c0u), eax, 1, COW_IMG(0x1037d7a0u));
            t7 = g->edx;
            eax = t6;
            edx = t7;
        }
    COW_AT(101cca3b)
        wr32(COW_IMG(0x10662f68u), eax);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
    }
    COW_AT(101cca40)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t8 = cow_thiscall(g, COW_IMG(0x101cc6a0u), eax, 0);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        edx = t9;
        ebx = t8;
    COW_AT(101cca51)
        wr32(sp0 - 0x34u, in_edi);
        wr32(sp0 - 0x38u, 0x50u);
        t10 = rd32(COW_IMG(0x10662f68u));
        esi = arg1;
        edi = rd32(COW_IMG(0x10662f68u)) + 0x3c4u;
        ecx = 0xcu;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        t11 = rd32(COW_IMG(0x10662f68u)) + 0x3a4u;
        wr32(sp0 - 0x3cu, t11);
        g->ecx = t11;
        g->esp = sp0 - 0x2cu;
        t12 = cow_call_regs(g, COW_IMG(0x101c8c50u), t10, g->ecx, g->edx, 1, 4, t11, 0x50u, in_edi, rd32(sp0 - 0x30u));
        t13 = g->ecx;
        wr32(sp0 - 0x40u, 0u);
        t14 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x44u, t14);
        t15 = rd32(COW_IMG(0x10662f68u));
        wr32(t15 + 0x3a0u, t12);
        wr32(sp0 - 0x48u, COW_IMG(0x1037d790u));
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        g->ebx = ebx;
        g->eax = sp0 - 0x20u;
        g->edx = t15;
        g->esp = sp0 - 0x38u;
        t16 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037d790u), t14, 0u, rd32(sp0 - 0x3cu));
        t17 = g->edx;
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        t18 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x34u;
        t19 = cow_thiscall(g, COW_IMG(0x101c4c90u), t18, 2, sp0 - 0x20u, 0u);
        t20 = g->ecx;
        if ((uint8_t)t19 == 0u)
        {
            ebp = 0u;
            esi = t14;
            goto L_101ccae3;
        }
        eax = t19;
        ecx = t20;
        ebp = 0u;
        esi = t14;
L_101ccab8: ;
    COW_AT(101ccab8)
        wr32(sp0 - 0x34u, ebp + 1u);
        wr32(sp0 - 0x38u, esi);
        wr32(sp0 - 0x3cu, COW_IMG(0x1037d790u));
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        g->ebx = ebx;
        g->edx = sp0 - 0x20u;
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1037d790u), esi, ebp + 1u, rd32(sp0 - 0x30u));
        t21 = g->edx;
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        t22 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x30u;
        t23 = cow_thiscall(g, COW_IMG(0x101c4c90u), t22, 2, sp0 - 0x20u, 0u);
        t24 = g->ecx;
        if ((uint8_t)t23 != 0u)
        {
            eax = t23;
            ecx = t24;
            ebp = ebp + 1u;
            goto L_101ccab8;
        }
        ebp = ebp + 1u;
L_101ccae3: ;
    COW_AT(101ccae3)
        t25 = rd32(COW_IMG(0x10662f68u)) + 0x3a0u;
        wr32(sp0 - 0x34u, t25);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->edx = t25;
        g->esp = sp0 - 0x30u;
        t26 = cow_thiscall(g, COW_IMG(0x101cc7f0u), rd32(COW_IMG(0x10662f68u)), 2, sp0 - 0x20u, t25);
        t27 = g->edx;
        if (t26 != 0u)
        {
            eax = t26;
            edx = t27;
        }
        else
        {
            eax = t26;
            edx = t27;
    COW_AT(101ccafe)
            wr32(ebx, esi);
            wr16(ebx + 4u, (uint16_t)ebp);
            wr16(ebx + 6u, (uint16_t)eax);
            t28 = rd32(rd32(COW_IMG(0x10662f68u)) + 0x39cu) + 1u;
            wr32(rd32(COW_IMG(0x10662f68u)) + 0x39cu, t28);
            if ((int32_t)rd32(rd32(COW_IMG(0x10662f68u)) + 0x39cu) < 100)
            {
                eax = rd32(COW_IMG(0x10662f68u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10662f68u));
    COW_AT(101ccb2c)
                wr32(eax + 0x39cu, 0x64u);
            }
        }
    }
    COW_AT(101ccb32)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x2cu);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101cca00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101cca1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cca2bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cca39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cca3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cca40u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101cca51u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ccab8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ccae3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ccafeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ccb2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ecx = 0x64u;
        wr32(sp0 - 0x4cu, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101ccb32u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101cca00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101cca00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
