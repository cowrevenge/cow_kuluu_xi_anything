/* f_0x101fc7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fc7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_110;
    uint32_t loc_114;
    uint32_t loc_11c;
    uint32_t loc_120;
    uint32_t loc_124;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
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
    cow_frame(g, sp0, 324u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fc7f7u: self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x124u); g->esi = rd32(sp0 - 0x124u); goto E_101fc7f7;
    case 0x101fc800u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_124 = rd32(sp0 - 0x124u); loc_11c = rd32(sp0 - 0x11cu); loc_108 = rd32(sp0 - 0x108u); goto E_101fc800;
    case 0x101fc81au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101fc81a;
    case 0x101fc831u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101fc831;
    case 0x101fc880u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_104 = rd32(sp0 - 0x104u); goto E_101fc880;
    case 0x101fc898u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101fc898;
    case 0x101fc8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); goto E_101fc8a9;
    case 0x101fc8bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); goto E_101fc8ba;
    case 0x101fc8c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_104 = rd32(sp0 - 0x104u); goto E_101fc8c7;
    case 0x101fc8d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); goto E_101fc8d3;
    case 0x101fc8e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_120 = rd32(sp0 - 0x120u); loc_114 = rd32(sp0 - 0x114u); loc_110 = rd32(sp0 - 0x110u); loc_104 = rd32(sp0 - 0x104u); goto E_101fc8e4;
    case 0x101fc943u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_108 = rd32(sp0 - 0x108u); goto E_101fc943;
    case 0x101fc956u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_11c = rd32(sp0 - 0x11cu); loc_108 = rd32(sp0 - 0x108u); goto E_101fc956;
    case 0x101fc959u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_124 = rd32(sp0 - 0x124u); loc_11c = rd32(sp0 - 0x11cu); loc_108 = rd32(sp0 - 0x108u); goto E_101fc959;
    default: break;
    }
#endif

    COW_AT(101fc7e0)
    wr32(sp0 - 0x124u, in_esi);
    if (rd16(arg1) == 0u)
    {
        eax = arg1;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_124 = in_esi;
    }
    else
    {
    COW_AT(101fc7f7)
        wr32(sp0 - 0x128u, in_ebx);
        wr32(sp0 - 0x12cu, in_ebp);
        wr32(sp0 - 0x130u, in_edi);
        wr32(sp0 - 0x11cu, arg1);
        eax = arg1;
        ecx = self;
        edx = in_edx;
        ebx = arg1;
        loc_124 = in_esi;
        loc_128 = in_ebx;
        loc_12c = in_ebp;
        loc_130 = in_edi;
        loc_11c = arg1;
L_101fc800: ;
    COW_AT(101fc800)
        wr32(sp0 - 0x134u, 1u);
        wr32(sp0 - 0x138u, 0xfffffffeu);
        wr32(sp0 - 0x13cu, rd16(eax));
        g->ebx = ebx;
        g->ecx = ecx;
        g->edx = edx;
        t1 = rd16(eax);
        g->esp = sp0 - 0x130u;
        t2 = cow_call_regs(g, COW_IMG(0x101f7340u), eax, g->ecx, g->edx, 1, 3, t1, 0xfffffffeu, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        if ((uint8_t)t2 == 0u)
        {
            ecx = t3;
            edx = t4;
        }
        else
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            edi = t1;
    COW_AT(101fc81a)
            wr32(sp0 - 0x134u, edi);
            wr32(sp0 - 0x138u, 0x14u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x130u;
            t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, edi);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(sp0 - 0x108u, t5);
            if (t5 == 0u)
            {
                ecx = t6;
                edx = t7;
            }
            else
            {
                loc_108 = t5;
    COW_AT(101fc831)
                wr32(sp0 - 0x134u, 0x20u);
                wr32(sp0 - 0x138u, sp0 - 0x80u);
                wr32(sp0 - 0x13cu, sp0 - 0x100u);
                wr32(sp0 - 0x140u, edi);
                t8 = rd32(self + 0x64u) + rd32(self + 0x54u) * 8u;
                wr32(sp0 - 0x118u, t8);
                wr32(sp0 - 0x114u, 0u);
                wr32(sp0 - 0x120u, 0u);
                g->eax = 0u;
                g->edx = sp0 - 0x100u;
                t9 = rd32(self + 0x54u);
                t10 = rd32(self + 0x60u);
                g->esp = sp0 - 0x130u;
                t11 = cow_thiscall_cdecl(g, COW_IMG(0x101fc970u), sp0 - 0x80u, 4, edi, sp0 - 0x100u, sp0 - 0x80u, 0x20u);
                t12 = g->edx;
                wr32(sp0 - 0x104u, t11);
                wr32(sp0 - 0x110u, 0u);
                if ((int32_t)t11 <= 0)
                {
                    edx = t12;
                    ebx = t9 * 0x54u + t10;
                    ebp = t8;
                    loc_114 = 0u;
                    goto L_101fc8c7;
                }
                eax = t11;
                ecx = 0u;
                edx = t12;
                ebx = t9 * 0x54u + t10;
                loc_114 = 0u;
                loc_120 = 0u;
                loc_104 = t11;
                loc_110 = 0u;
L_101fc880: ;
    COW_AT(101fc880)
                wr32(sp0 - 0x134u, 1u);
                t13 = rd32(ecx * 4u + sp0 - 0x100u);
                wr32(sp0 - 0x138u, t13);
                wr32(sp0 - 0x13cu, edi);
                wr32(sp0 - 0x10cu, t13);
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x130u;
                t14 = cow_call_regs(g, COW_IMG(0x101f7340u), eax, g->ecx, g->edx, 1, 3, edi, t13, 1u);
                t15 = g->edx;
                if ((uint8_t)t14 == 0u)
                {
                    edx = t15;
                    loc_114 = rd32(sp0 - 0x114u);
                    loc_120 = rd32(sp0 - 0x120u);
                }
                else
                {
                    edx = t15;
    COW_AT(101fc898)
                    t16 = rd32(sp0 - 0x10cu);
                    wr32(sp0 - 0x114u, t16);
                    t17 = rd32(sp0 - 0x120u) + 1u;
                    wr32(sp0 - 0x120u, t17);
                    loc_114 = t16;
                    loc_120 = t17;
                }
    COW_AT(101fc8a9)
                t18 = rd32(sp0 - 0x110u) + 1u;
                t19 = rd32(sp0 - 0x110u);
                wr32(sp0 - 0x110u, t18);
                if ((int32_t)(t19 + 1u) < (int32_t)rd32(sp0 - 0x104u))
                {
                    eax = rd32(sp0 - 0x104u);
                    ecx = t18;
                    loc_104 = rd32(sp0 - 0x104u);
                    loc_110 = t18;
                    goto L_101fc880;
                }
    COW_AT(101fc8ba)
                if ((int32_t)loc_120 > 1)
                {
                    ebp = rd32(sp0 - 0x118u);
                    goto L_101fc8d3;
                }
                ebp = rd32(sp0 - 0x118u);
L_101fc8c7: ;
    COW_AT(101fc8c7)
                wr32(ebp, edi);
                wr32(ebp + 4u, loc_114);
L_101fc8e4: ;
    COW_AT(101fc8e4)
                wr32(sp0 - 0x134u, 0x80808080u);
                t20 = rd32(sp0 - 0x108u);
                wr32(sp0 - 0x138u, t20);
                wr32(sp0 - 0x13cu, 1u);
                wr32(sp0 - 0x140u, 0u);
                g->eax = t20;
                g->esp = sp0 - 0x130u;
                t21 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, edx, 4, 0u, 1u, t20, 0x80808080u);
                t22 = g->ecx;
                t23 = g->edx;
                wr32(sp0 - 0x134u, 0x80808080u);
                wr32(sp0 - 0x138u, 0u);
                wr32(sp0 - 0x13cu, edi);
                g->ebx = ebx;
                g->edx = t23;
                g->esp = sp0 - 0x12cu;
                t24 = cow_cdecl(g, COW_IMG(0x101cbc10u), 4, edi, 0u, 0x80808080u, rd32(sp0 - 0x130u));
                t25 = g->edx;
                wr32(sp0 - 0x138u, t24);
                wr32(sp0 - 0x13cu, 0x21u);
                wr32(sp0 - 0x140u, 1u);
                g->esp = sp0 - 0x130u;
                t26 = cow_fastcall(g, COW_IMG(0x101f4b20u), ebx, t25, 4, 1u, 0x21u, t24, 0x80808080u);
                t27 = g->ecx;
                t28 = g->edx;
                wr32(sp0 - 0x134u, 0x14u);
                wr32(sp0 - 0x138u, 0xeu);
                wr32(ebx + 0x48u, ebp);
                g->ecx = t27;
                t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x14u);
                t30 = g->ecx;
                wr32(ebx + 0x4cu, t29);
                wr32(sp0 - 0x134u, 1u);
                t31 = (t30 & 0xffff0000u) | (uint16_t)(rd32(self + 0x54u) + 1u);
                wr32(sp0 - 0x138u, t31);
                t32 = rd32(self + 0x60u);
                wr32(sp0 - 0x13cu, t32);
                t33 = rd32(self + 0x54u) + 1u;
                wr32(self + 0x54u, t33);
                g->esi = self;
                g->edi = edi;
                cow_fastcall(g, COW_IMG(0x101f7020u), self, t32, 3, t32, t31, 1u);
                t34 = g->ecx;
                t35 = g->edx;
                ecx = t34;
                edx = t35;
                ebx = rd32(sp0 - 0x11cu);
            }
        }
    COW_AT(101fc943)
        wr32(sp0 - 0x11cu, ebx + 2u);
        if (rd16(ebx + 2u) != 0u)
        {
            eax = ebx + 2u;
            loc_124 = rd32(sp0 - 0x124u);
            loc_128 = rd32(sp0 - 0x128u);
            loc_12c = rd32(sp0 - 0x12cu);
            loc_130 = rd32(sp0 - 0x130u);
            loc_11c = ebx + 2u;
            ebx = ebx + 2u;
            goto L_101fc800;
        }
        eax = ebx + 2u;
    COW_AT(101fc956)
        ebx = rd32(sp0 - 0x128u);
        ebp = rd32(sp0 - 0x12cu);
        edi = rd32(sp0 - 0x130u);
        loc_124 = rd32(sp0 - 0x124u);
    }
    COW_AT(101fc959)
    g->ebx = ebx;
    g->esi = loc_124;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
L_101fc8d3: ;
    COW_AT(101fc8d3)
    wr32(ebp + 4u, 0u);
    wr32(ebp, 0xfffffffeu - edi);
    edx = 0xfffffffeu - edi;
    goto L_101fc8e4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fc7e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fc7f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x124u;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101fc800u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        uint32_t loc_11c;
        uint32_t loc_124;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc81au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc831u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc880u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc898u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc8a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc8bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc8c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc8d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc8e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_104;
        uint32_t loc_110;
        uint32_t loc_114;
        uint32_t loc_120;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_120 = rd32(sp0 - 0x120u);
        loc_114 = rd32(sp0 - 0x114u);
        loc_110 = rd32(sp0 - 0x110u);
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc943u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_108;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc956u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_108;
        uint32_t loc_11c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_11c = rd32(sp0 - 0x11cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x130u;
        (void)sp0;
        return 1;
    }
    case 0x101fc959u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_108;
        uint32_t loc_11c;
        uint32_t loc_124;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_124 = rd32(sp0 - 0x124u);
        loc_11c = rd32(sp0 - 0x11cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fc7e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fc7e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
