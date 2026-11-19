/* f_0x10114320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114320(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_8;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114344u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x20u); goto E_10114344;
    case 0x10114352u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x20u); goto E_10114352;
    case 0x10114366u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10114366;
    case 0x10114371u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_10114371;
    case 0x10114372u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_8 = rd32(sp0 - 8u); goto E_10114372;
    case 0x10114386u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_10114386;
    case 0x1011439bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011439b;
    case 0x101143d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101143d9;
    case 0x101143fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101143fc;
    case 0x101143ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101143ff;
    case 0x10114403u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10114403;
    case 0x10114407u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10114407;
    case 0x10114413u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10114413;
    case 0x1011441eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1011441e;
    case 0x10114427u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10114427;
    case 0x10114434u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); goto E_10114434;
    case 0x1011443cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_8 = rd32(sp0 - 8u); goto E_1011443c;
    case 0x10114445u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_10114445;
    case 0x1011444fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_1011444f;
    case 0x1011445bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_1011445b;
    case 0x10114483u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_10114483;
    case 0x1011448fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_1011448f;
    case 0x101144c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_101144c2;
    case 0x101144d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_101144d9;
    case 0x101144f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_8 = rd32(sp0 - 8u); goto E_101144f1;
    default: break;
    }
#endif

    COW_AT(10114320)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    t1 = rd8(self + 0x10au) - rd8(self + 0x108u) & 0xfu;
    if ((uint16_t)t1 == 0u)
    {
        edi = in_edi;
        loc_18 = in_ebx;
        loc_1c = in_ebp;
        loc_20 = in_esi;
    }
    else
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x108u);
        esi = t1;
    COW_AT(10114344)
        if (rd32(COW_IMG(0x10662dccu)) == 0u)
        {
            edi = in_edi;
            loc_18 = in_ebx;
            loc_1c = in_ebp;
            loc_20 = in_esi;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10662dccu));
    COW_AT(10114352)
            wr32(sp0 - 0x24u, self + 0x238u);
            g->eax = self + 0x238u;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t2 = cow_thiscall(g, COW_IMG(0x101c4aa0u), ecx, 1, self + 0x238u);
            t3 = g->ecx;
            t4 = g->edx;
            if ((uint8_t)t2 != 0u)
            {
                edi = in_edi;
                loc_18 = in_ebx;
                loc_1c = in_ebp;
                loc_20 = in_esi;
            }
            else
            {
                eax = t2;
                ecx = t3;
                edx = t4;
    COW_AT(10114366)
                if ((uint16_t)esi == 0u)
                {
                    edi = in_edi;
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_20 = rd32(sp0 - 0x20u);
                }
                else
                {
    COW_AT(10114371)
                    wr32(sp0 - 0x24u, in_edi);
                    ebp = 0u;
                    loc_24 = in_edi;
                    loc_8 = rd32(sp0 - 8u);
L_10114372: ;
    COW_AT(10114372)
                    wr32(sp0 - 0x14u, esi + 0xffffu);
                    if ((uint16_t)ebp >= 4u) goto L_10114445;
                    loc_14 = esi + 0xffffu;
                    esi = esi + 0xffffu;
    COW_AT(10114386)
                    wr32(sp0 - 0x28u, sp0 - 0x10u);
                    g->esp = sp0 - 0x24u;
                    cow_call_regs(g, COW_IMG(0x10114120u), eax, self, edx, 0, 1, sp0 - 0x10u);
                    t5 = g->edx;
                    if ((uint16_t)rd32(sp0 - 0xcu) == 0u)
                    {
                        ecx = rd32(sp0 - 0xcu);
                        edx = t5;
    COW_AT(101143ff)
                        eax = rd32(sp0 - 8u);
                    }
                    else
                    {
                        ecx = rd32(sp0 - 0xcu);
    COW_AT(1011439b)
                        t6 = rd32(sp0 - 0x10u);
                        wr32(self + (uint16_t)ebp * 0x48u + 0x110u, t6);
                        wr32(self + (uint16_t)ebp * 0x48u + 0x114u, ecx);
                        t7 = self + (uint16_t)ebp * 0x48u + 0x118u;
                        edi = t7;
                        eax = 0u;
                        ecx = 0x10u;
                        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                        if ((rd32(sp0 - 0xau) & 0xff00u) == 0u)
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = rd32(sp0 - 0xau);
                            edx = t7;
                        }
                        else
                        {
                            eax = rd32(sp0 - 8u);
                            ecx = rd32(sp0 - 0xau);
                            edx = t7;
    COW_AT(101143d9)
                            t8 = (uint16_t)ecx >> 8u << 2u;
                            t9 = rd32(eax + 4u);
                            esi = t9;
                            edi = edx;
                            ecx = t8 >> 2u;
                            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                            ecx = t8 & 3u;
                            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
                            edx = t8;
                            esi = rd32(sp0 - 0x14u);
                        }
    COW_AT(101143fc)
                        ebp = ebp + 1u;
                    }
    COW_AT(10114403)
                    if (eax == 0u)
                    {
                        loc_8 = rd32(sp0 - 8u);
                    }
                    else
                    {
    COW_AT(10114407)
                        t10 = rd32(eax) - 1u;
                        t11 = rd32(eax);
                        wr32(eax, t10);
                        if (t11 >= 2u)
                        {
                            ecx = t11;
                            edx = t10;
                        }
                        else
                        {
                            ecx = t11;
                            edx = t10;
    COW_AT(10114413)
                            if (rd32(rd32(sp0 - 8u) + 4u) == 0u)
                            {
                                eax = rd32(rd32(sp0 - 8u) + 4u);
                            }
                            else
                            {
                                eax = rd32(rd32(sp0 - 8u) + 4u);
    COW_AT(1011441e)
                                wr32(sp0 - 0x28u, eax);
                                g->ebx = self;
                                g->eax = eax;
                                g->esp = sp0 - 0x1cu;
                                t12 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
                                t13 = g->edx;
                                eax = t12;
                                edx = t13;
                            }
    COW_AT(10114427)
                            t14 = rd32(sp0 - 8u);
                            wr32(sp0 - 0x28u, t14);
                            g->eax = eax;
                            g->esp = sp0 - 0x24u;
                            t15 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t14, edx, 1, 1, t14);
                            t16 = g->ecx;
                            t17 = g->edx;
                            eax = t15;
                            ecx = t16;
                            edx = t17;
                        }
    COW_AT(10114434)
                        wr32(sp0 - 8u, 0u);
                        loc_8 = 0u;
                    }
    COW_AT(1011443c)
                    if ((uint16_t)esi != 0u)
                    {
                        loc_24 = rd32(sp0 - 0x24u);
                        goto L_10114372;
                    }
                    loc_24 = rd32(sp0 - 0x24u);
L_10114445: ;
    COW_AT(10114445)
                    if ((uint16_t)ebp == 0u)
                    {
                        edi = loc_24;
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                    }
                    else
                    {
                        edi = loc_24;
    COW_AT(1011444f)
                        if (rd32(self + 0x234u) <= 0x2710u)
                        {
    COW_AT(101144c2)
                            wr32(sp0 - 0x24u, 1u);
                            t21 = (uint16_t)ebp * 0x48u;
                            wr32(sp0 - 0x28u, t21);
                            wr32(sp0 - 0x2cu, self + 0x110u);
                            esi = t21;
                            loc_28 = t21;
                            loc_24 = 1u;
                        }
                        else
                        {
    COW_AT(1011445b)
                            t18 = rd8(self + 0x232u);
                            t19 = rd16(self + 0x230u);
                            wr32(self + 0x234u, 0u);
                            wr16(self + 0x232u, t18 + 1u & 7u);
                            if ((uint16_t)t19 != (t18 + 1u & 7u))
                            {
                                eax = t18 + 1u & 7u;
                                ecx = (ecx & 0xffff0000u) | t19;
                            }
                            else
                            {
                                eax = t18 + 1u & 7u;
                                ecx = (ecx & 0xffff0000u) | t19;
    COW_AT(10114483)
                                wr16(self + 0x230u, (uint8_t)ecx + 1u & 7u);
                                ecx = (uint8_t)ecx + 1u & 7u;
                            }
    COW_AT(1011448f)
                            wr32(sp0 - 0x24u, (uint16_t)eax);
                            wr32(sp0 - 0x28u, COW_IMG(0x1036c084u));
                            wr32(sp0 - 0x2cu, self + 0x238u);
                            g->ebx = self;
                            g->esp = sp0 - 0x18u;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x238u, COW_IMG(0x1036c084u), (uint16_t)eax, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
                            wr32(sp0 - 0x24u, 0u);
                            t20 = (uint16_t)ebp * 0x48u;
                            wr32(sp0 - 0x28u, t20);
                            wr32(sp0 - 0x2cu, self + 0x110u);
                            edx = self + 0x110u;
                            esi = t20;
                            loc_28 = t20;
                            loc_24 = 0u;
                        }
    COW_AT(101144d9)
                        wr32(sp0 - 0x30u, self + 0x238u);
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x101c4900u), rd32(COW_IMG(0x10662dccu)), 4, self + 0x238u, self + 0x110u, loc_28, loc_24);
                        wr32(self + 0x234u, esi + rd32(self + 0x234u));
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_20 = rd32(sp0 - 0x20u);
                    }
                }
            }
        }
    }
    COW_AT(101144f1)
    g->ebx = loc_18;
    g->esi = loc_20;
    g->edi = edi;
    g->ebp = loc_1c;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114320(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114344u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10114352u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10114366u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10114371u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114372u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10114386u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1011439bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101143d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101143fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101143ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10114403u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10114407u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10114413u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011441eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x28u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10114427u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10114434u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1011443cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10114445u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1011444fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011445bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10114483u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1011448fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101144c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x101144d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x2cu, self + 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x101144f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114320(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10114320(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
