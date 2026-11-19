/* f_0x10131b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10131b70(Guest* g)
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
    cow_frame(g, sp0, 68u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10131b87u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_10131b87;
    case 0x10131b92u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x28u); in_ebp = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x28u); goto E_10131b92;
    case 0x10131bd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = g->edi; goto E_10131bd1;
    case 0x10131be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10131be9;
    case 0x10131bf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10131bf1;
    case 0x10131c1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131c1e;
    case 0x10131c95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131c95;
    case 0x10131cd1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131cd1;
    case 0x10131d37u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131d37;
    case 0x10131d48u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131d48;
    case 0x10131d4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131d4f;
    case 0x10131da1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131da1;
    case 0x10131da9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10131da9;
    case 0x10131dadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_10131dad;
    case 0x10131dd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10131dd0;
    case 0x10131deau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_10131dea;
    default: break;
    }
#endif

    COW_AT(10131b70)
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x20u, self);
    if (rd16(self + 0x1au) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        ebx = in_ebx;
        esi = self;
        edi = in_edi;
        loc_24 = in_ebp;
        loc_28 = in_esi;
    }
    else
    {
    COW_AT(10131b87)
        if (rd32(self + 8u) == 0u)
        {
            eax = in_eax;
            ecx = rd32(self + 8u);
            edx = in_edx;
            ebx = in_ebx;
            esi = self;
            edi = in_edi;
            loc_24 = in_ebp;
            loc_28 = in_esi;
        }
        else
        {
            ecx = rd32(self + 8u);
    COW_AT(10131b92)
            wr32(sp0 - 0x2cu, in_ebx);
            wr32(sp0 - 0x30u, in_edi);
            wr32(sp0 - 0x34u, sp0 - 0x18u);
            wr16(sp0 - 0x18u, 0u);
            wr16(sp0 - 0x16u, 0u);
            wr16(sp0 - 0x14u, 0u);
            wr16(sp0 - 0x12u, 0u);
            g->edx = in_edx;
            g->esp = sp0 - 0x30u;
            cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x18u, ecx, g->edx, 0, 1, sp0 - 0x18u);
            t1 = g->ecx;
            t2 = g->edx;
            t3 = rd32(self + 0x78u);
            t4 = rd16(sp0 - 0x18u);
            t5 = rd16(sp0 - 0x16u);
            wr16(self + 0x80u, (uint16_t)t4);
            wr16(self + 0x82u, (uint16_t)t5);
            if (t3 == 0u)
            {
                ecx = (t1 & 0xffff0000u) | t4;
                edx = (t2 & 0xffff0000u) | t5;
    COW_AT(10131be9)
                wr16(self + 0x7cu, (uint16_t)ecx);
                wr16(self + 0x7eu, (uint16_t)edx);
            }
            else
            {
                eax = t3;
                ecx = (t1 & 0xffff0000u) | t4;
                edx = (t2 & 0xffff0000u) | t5;
    COW_AT(10131bd1)
                wr16(self + 0x7cu, (uint16_t)((uint16_t)ecx + rd16(eax + 4u)));
                wr16(self + 0x7eu, (uint16_t)((uint16_t)edx + rd16(eax + 6u)));
            }
    COW_AT(10131bf1)
            t6 = rd32(sp0 - 0x12u);
            t7 = rd32(sp0 - 0x16u);
            t8 = rd32(sp0 - 0x14u);
            t9 = rd32(sp0 - 0x18u);
            wr16(self + 0x84u, (uint16_t)(t8 - t9));
            wr16(self + 0x86u, (uint16_t)(t6 - t7));
            edx = t8 - t9;
            ebp = 0u;
            esi = self + 0x96u;
            edi = COW_IMG(0x1036f75eu);
L_10131c1e: ;
    COW_AT(10131c1e)
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            t10 = rd32(sp0 - 0x20u) + 0x78u;
            wr32(esi - 0xeu, t10);
            g->esi = esi;
            g->edi = edi;
            g->eax = t10;
            g->esp = sp0 - 0x30u;
            t11 = cow_fastcall(g, COW_IMG(0x10131df0u), esi - 0xeu, edx, 2, 0u, 0u);
            t12 = g->edx;
            t13 = (t12 & 0xffff0000u) | rd16(edi - 4u);
            wr32(sp0 - 0x34u, t13);
            t14 = (t11 & 0xffff0000u) | rd16(edi - 6u);
            wr32(sp0 - 0x38u, t14);
            g->esi = esi;
            g->edi = edi;
            g->eax = t14;
            t15 = cow_fastcall(g, COW_IMG(0x10131df0u), esi - 0xeu, t13, 2, t14, t13);
            t16 = g->ecx;
            t17 = rd16(edi - 2u);
            t18 = rd32(sp0 - 0x20u);
            wr16(esi, rd16(edi));
            wr16(esi - 2u, (uint16_t)t17);
            wr16(esi + 0xau, 0xff9du);
            wr16(esi + 0xcu, 0x270fu);
            wr32(esi + 6u, t18 + 0x74u);
            wr8(esi + 0xeu, 4u);
            wr32(esi + 2u, 0u);
            wr16(esi + 0x10u, (uint16_t)(ebp * 0x6eu));
            if ((int32_t)(edi + 8u) < (int32_t)COW_IMG(0x1036f7aeu))
            {
                edx = t18;
                ebp = ebp + 1u;
                esi = esi + 0x20u;
                edi = edi + 8u;
                goto L_10131c1e;
            }
            edx = t18;
    COW_AT(10131c95)
            t19 = rd32(edx + 8u);
            wr32(edx + 0x198u, 2u);
            wr32(edx + 0x1b8u, 2u);
            wr8(t19 + 0x61u, 0u);
            wr16(sp0 - 0xcu, 0u);
            wr16(sp0 - 0xau, 0u);
            wr16(sp0 - 8u, 0u);
            wr16(sp0 - 6u, 0u);
            ebx = 0u;
            ebp = edx;
            esi = edx + 0x1d0u;
            edi = edx + 0x3d2u;
            edx = t19;
L_10131cd1: ;
    COW_AT(10131cd1)
            wr32(sp0 - 0x34u, 1u);
            wr32(sp0 - 0x38u, 1u);
            wr32(sp0 - 0x1cu, ebx + 1u);
            wr32(sp0 - 0x3cu, ebx + 1u);
            wr32(sp0 - 0x40u, sp0 - 0xcu);
            g->ebx = ebx;
            g->edi = edi;
            g->esp = sp0 - 0x30u;
            cow_thiscall(g, COW_IMG(0x10118900u), rd32(ebp + 8u), 4, sp0 - 0xcu, ebx + 1u, 1u, 1u);
            t20 = rd32(sp0 - 0xcu);
            wr16(edi - 6u, (uint16_t)(t20 - rd32(sp0 - 0x18u) - 2u));
            t21 = rd32(sp0 - 0xau);
            wr16(edi - 4u, (uint16_t)(t21 - rd32(sp0 - 0x16u) + 2u));
            t22 = rd32(sp0 - 6u);
            wr16(edi - 2u, (uint16_t)(rd32(sp0 - 8u) - t20));
            wr16(edi, (uint16_t)(t22 - t21));
            wr32(esi - 4u, ebp + 0x78u);
            wr16(esi + 4u, 0u);
            wr16(esi + 6u, 0u);
            if (ebp + 0x78u == 0u)
            {
                eax = ebp + 0x78u;
                ecx = esi - 4u;
    COW_AT(10131d48)
                wr16(esi, 0u);
                wr16(esi + 2u, 0u);
                edx = 0u;
            }
            else
            {
                eax = ebp + 0x78u;
                ecx = esi - 4u;
    COW_AT(10131d37)
                t23 = rd16(eax + 4u);
                wr16(esi, (uint16_t)t23);
                t24 = rd16(eax + 6u);
                wr16(esi + 2u, (uint16_t)t24);
                eax = (eax & 0xffff0000u) | t24;
                edx = t23;
            }
    COW_AT(10131d4f)
            t25 = (edx & 0xffff0000u) | rd16(edi - 4u);
            wr32(sp0 - 0x34u, t25);
            t26 = (eax & 0xffff0000u) | rd16(edi - 6u);
            wr32(sp0 - 0x38u, t26);
            g->esi = esi;
            g->edi = edi;
            g->eax = t26;
            g->esp = sp0 - 0x30u;
            t27 = cow_fastcall(g, COW_IMG(0x10131df0u), ecx, t25, 2, t26, t25);
            t28 = g->ecx;
            t29 = g->edx;
            t30 = rd16(edi);
            t31 = rd16(edi - 2u);
            wr16(esi + 8u, (uint16_t)t31);
            wr16(esi + 0xau, (uint16_t)t30);
            wr16(esi + 0x14u, 0u);
            wr16(esi + 0x16u, 0x13u);
            wr16(esi + 0x1au, (uint16_t)ebx);
            t32 = rd32(sp0 - 0x1cu);
            wr8(esi + 0x18u, 2u);
            wr32(esi + 0x10u, ebp + 0x74u);
            wr32(esi + 0xcu, 2u);
            if ((int32_t)t32 < 16)
            {
                edx = t29;
                ebx = t32;
                esi = esi + 0x20u;
                edi = edi + 8u;
                goto L_10131cd1;
            }
            eax = ebp + 0x74u;
            ecx = (t28 & 0xffff0000u) | t31;
            edx = t29;
    COW_AT(10131da1)
            ebx = rd32(sp0 - 0x2cu);
            esi = rd32(sp0 - 0x20u);
            edi = rd32(sp0 - 0x30u);
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
        }
    COW_AT(10131da9)
        wr16(esi + 0x1au, (uint16_t)(rd16(esi + 0x1au) + 1u));
    }
    COW_AT(10131dad)
    wr32(sp0 - 0x2cu, 2u);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x28u;
    t33 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t34 = g->ecx;
    t35 = rd32(rd32(t33) + 0x6b4u);
    t36 = rd32(t33);
    wr32(esi + 0x1c8u, t35);
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        edx = t36;
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        ecx = t34;
        edx = t36;
        ebp = rd32(sp0 - 0x24u);
        esi = rd32(sp0 - 0x28u);
    COW_AT(10131dd0)
        wr32(sp0 - 0x24u, 2u);
        wr32(sp0 - 0x28u, 0x14u);
        wr32(sp0 - 0x2cu, 0xdu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x14u);
        t38 = g->edx;
        wr32(sp0 - 0x28u, t37);
        g->edx = t38;
        g->esp = sp0 - 0x20u;
        t39 = cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, t37, 2u);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    }
    COW_AT(10131dea)
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10131b70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10131b87u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        wr32(sp0 - 0x20u, self);
        (void)sp0;
        return 1;
    }
    case 0x10131b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x28u);
        in_ebp = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        wr32(sp0 - 0x20u, self);
        (void)sp0;
        return 1;
    }
    case 0x10131bd1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10131be9u:
    {
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10131bf1u:
    {
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
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10131c1eu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10131c95u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10131cd1u:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10131d37u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10131d48u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->edx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10131d4fu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10131da1u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10131da9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131dadu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10131dd0u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10131deau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10131b70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10131b70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
