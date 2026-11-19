/* f_0x101fc9d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fc9d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_118;
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
    cow_frame(g, sp0, 300u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fca12u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; loc_118 = rd32(sp0 - 0x118u); in_edi = rd32(sp0 - 0x114u); in_esi = rd32(sp0 - 0x110u); in_ebp = rd32(sp0 - 0x10cu); loc_104 = rd32(sp0 - 0x104u); g->ebp = rd32(sp0 - 0x10cu); g->edi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x110u); goto E_101fca12;
    case 0x101fca13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_101fca13;
    case 0x101fca2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101fca2b;
    case 0x101fca3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101fca3e;
    case 0x101fcac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101fcac2;
    case 0x101fcad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101fcad3;
    case 0x101fcad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_118 = rd32(sp0 - 0x118u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); loc_104 = rd32(sp0 - 0x104u); goto E_101fcad4;
    default: break;
    }
#endif

    COW_AT(101fc9d0)
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, 0x20u);
    wr32(sp0 - 0x11cu, sp0 - 0x80u);
    wr32(sp0 - 0x120u, sp0 - 0x100u);
    wr32(sp0 - 0x124u, (uint16_t)arg1);
    g->eax = sp0 - 0x80u;
    g->edx = in_edx;
    g->esp = sp0 - 0x114u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x101fc970u), sp0 - 0x100u, 4, (uint16_t)arg1, sp0 - 0x100u, sp0 - 0x80u, 0x20u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x104u, t1);
    wr32(sp0 - 0x108u, 0u);
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        ebx = in_ebx;
        loc_10c = in_ebp;
        loc_110 = in_esi;
        loc_114 = in_edi;
    }
    else
    {
        ecx = t2;
        edx = t3;
        loc_104 = t1;
    COW_AT(101fca12)
        wr32(sp0 - 0x118u, in_ebx);
        ebx = in_ebx;
        edi = 0u;
        loc_10c = in_ebp;
        loc_110 = in_esi;
        loc_114 = in_edi;
        loc_118 = in_ebx;
        loc_108 = 0u;
L_101fca13: ;
    COW_AT(101fca13)
        wr32(sp0 - 0x11cu, 1u);
        t4 = rd32(edi * 4u + sp0 - 0x100u);
        wr32(sp0 - 0x120u, t4);
        wr32(sp0 - 0x124u, (uint16_t)arg1);
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x118u;
        t5 = cow_call_regs(g, COW_IMG(0x101f7340u), t4, g->ecx, g->edx, 1, 3, (uint16_t)arg1, t4, 1u);
        t6 = g->ecx;
        t7 = g->edx;
        if ((uint8_t)t5 == 0u)
        {
            ecx = t6;
            edx = t7;
        }
        else
        {
            eax = t5;
            ecx = t6;
            edx = t7;
    COW_AT(101fca2b)
            wr32(sp0 - 0x11cu, (uint16_t)arg1);
            wr32(sp0 - 0x120u, 0x14u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x118u;
            t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, (uint16_t)arg1);
            t9 = g->ecx;
            t10 = g->edx;
            if (t8 == 0u)
            {
                ecx = t9;
                edx = t10;
            }
            else
            {
                eax = t8;
    COW_AT(101fca3e)
                wr32(sp0 - 0x11cu, 0x80808080u);
                wr32(sp0 - 0x120u, eax);
                wr32(sp0 - 0x124u, 1u);
                wr32(sp0 - 0x128u, 0u);
                t11 = rd32(self + 0x64u);
                t12 = rd32(self + 0x54u);
                t13 = rd32(self + 0x60u);
                wr32(t11 + t12 * 8u, (uint16_t)arg1);
                t14 = rd32(sp0 + rd32(sp0 - 0x108u) * 4u - 0x100u);
                t15 = rd32(sp0 - 0x108u);
                wr32(t11 + t12 * 8u + 4u, t14);
                t16 = t12 * 0x54u + t13;
                g->esp = sp0 - 0x118u;
                cow_fastcall(g, COW_IMG(0x101f4b20u), t16, t15, 4, 0u, 1u, eax, 0x80808080u);
                t17 = g->edx;
                wr32(sp0 - 0x11cu, 0x80808080u);
                t18 = rd32(sp0 + rd32(sp0 - 0x108u) * 4u - 0x80u);
                wr32(sp0 - 0x120u, t18);
                wr32(sp0 - 0x124u, 9u);
                wr32(sp0 - 0x128u, 1u);
                g->eax = rd32(sp0 - 0x108u);
                t19 = rd32(sp0 - 0x108u);
                t20 = cow_fastcall(g, COW_IMG(0x101f4b20u), t16, t17, 4, 1u, 9u, t18, 0x80808080u);
                t21 = g->ecx;
                t22 = g->edx;
                wr32(sp0 - 0x11cu, 0x14u);
                wr32(sp0 - 0x120u, 0xeu);
                t23 = t11 + t12 * 8u;
                wr32(t16 + 0x48u, t23);
                g->edx = t22;
                t24 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
                t25 = g->edx;
                wr32(t16 + 0x4cu, t24);
                t26 = rd32(self + 0x54u) + 1u;
                wr32(self + 0x54u, t26);
                wr32(sp0 - 0x11cu, 1u);
                t27 = (t25 & 0xffff0000u) | (uint16_t)t26;
                wr32(sp0 - 0x120u, t27);
                t28 = rd32(self + 0x60u);
                wr32(sp0 - 0x124u, t28);
                g->esi = self;
                g->edi = t16;
                cow_fastcall(g, COW_IMG(0x101f7020u), self, t27, 3, t28, t27, 1u);
                t29 = g->ecx;
                t30 = g->edx;
                ecx = t29;
                edx = t30;
                ebx = t23;
                edi = rd32(sp0 - 0x108u);
            }
        }
    COW_AT(101fcac2)
        wr32(sp0 - 0x108u, edi + 1u);
        if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x104u))
        {
            loc_10c = rd32(sp0 - 0x10cu);
            loc_110 = rd32(sp0 - 0x110u);
            loc_114 = rd32(sp0 - 0x114u);
            loc_118 = rd32(sp0 - 0x118u);
            loc_104 = rd32(sp0 - 0x104u);
            loc_108 = edi + 1u;
            edi = edi + 1u;
            goto L_101fca13;
        }
        eax = rd32(sp0 - 0x104u);
    COW_AT(101fcad3)
        ebx = rd32(sp0 - 0x118u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_110 = rd32(sp0 - 0x110u);
        loc_114 = rd32(sp0 - 0x114u);
    }
    COW_AT(101fcad4)
    g->ebx = ebx;
    g->esi = loc_110;
    g->edi = loc_114;
    g->ebp = loc_10c;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fc9d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fca12u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_104;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        loc_118 = rd32(sp0 - 0x118u);
        in_edi = rd32(sp0 - 0x114u);
        in_esi = rd32(sp0 - 0x110u);
        in_ebp = rd32(sp0 - 0x10cu);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        g->ebp = (uint16_t)arg1;
        g->edi = 0u;
        wr32(sp0 - 0x120u, sp0 - 0x100u);
        wr32(sp0 - 0x11cu, sp0 - 0x80u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101fca13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x118u;
        g->ebp = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x101fca2bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->ebp = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x101fca3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->ebp = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x101fcac2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x118u;
        g->ebp = (uint16_t)arg1;
        (void)sp0;
        return 1;
    }
    case 0x101fcad3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x118u;
        (void)sp0;
        return 1;
    }
    case 0x101fcad4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_104;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_118;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_118 = rd32(sp0 - 0x118u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc9d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fc9d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
