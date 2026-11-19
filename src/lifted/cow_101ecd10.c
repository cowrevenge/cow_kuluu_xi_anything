/* f_0x101ecd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ecd10(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
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
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ecd2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101ecd2c;
    case 0x101ecd40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101ecd40;
    case 0x101ecd47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101ecd47;
    case 0x101ecd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101ecd57;
    case 0x101ecd61u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 8u); goto E_101ecd61;
    case 0x101ecd83u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecd83;
    case 0x101ecd8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecd8c;
    case 0x101ecd8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecd8f;
    case 0x101ecd9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecd9c;
    case 0x101ecd9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecd9e;
    case 0x101ecda0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecda0;
    case 0x101ecda3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101ecda3;
    case 0x101ecde0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecde0;
    case 0x101ecdf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecdf8;
    case 0x101ece1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ece1d;
    case 0x101ece49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ece49;
    case 0x101ece4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ece4e;
    case 0x101ecea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101ecea4;
    case 0x101eceb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101eceb1;
    default: break;
    }
#endif

    COW_AT(101ecd10)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0xcu, 1u);
    g->ecx = t3;
    g->edx = t4;
    t5 = cow_cdecl(g, COW_IMG(0x100eb1b0u), 1, 1u);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 6u, (uint16_t)(t5 + 1u));
    if ((int16_t)(t5 + 1u) > 0)
    {
        ecx = t6;
        edx = t7;
        goto L_101ecd40;
    }
    eax = t5 + 1u;
    edx = t7;
    COW_AT(101ecd2c)
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    g->esi = self;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t8 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, edx, 3, 0u, 0u, 1u);
    t9 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t9;
    return t8;
L_101ecd40: ;
    COW_AT(101ecd40)
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
    COW_AT(101ecd47)
        wr32(sp0 - 0xcu, eax);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(self + 8u, 0u);
        ecx = t10;
        edx = t11;
    }
    COW_AT(101ecd57)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        ebx = in_ebx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_edi;
    }
    else
    {
    COW_AT(101ecd61)
        t12 = (uint32_t)(int16_t)rd16(self + 6u) * 0x54u;
        wr32(sp0 - 0x18u, t12);
        g->eax = (uint32_t)(int16_t)rd16(self + 6u) * 8u - (uint32_t)(int16_t)rd16(self + 6u);
        t13 = rd16(self + 6u);
        g->esp = sp0 - 0xcu;
        t14 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t12, edx, 1, 3, t12, in_edi, in_ebp);
        t15 = g->ecx;
        t16 = g->edx;
        if (t14 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
    COW_AT(101ecd9e)
            ebx = in_ebx;
            ebp = 0u;
        }
        else
        {
            ecx = t15;
            edx = t16;
            ebp = t14;
            edi = (uint32_t)(int16_t)t13;
    COW_AT(101ecd83)
            if ((int32_t)(edi - 1u) < 0)
            {
                eax = edi - 1u;
                ebx = ebp;
            }
            else
            {
                eax = edi - 1u;
                ebx = ebp;
    COW_AT(101ecd8c)
                edi = eax + 1u;
L_101ecd8f: ;
    COW_AT(101ecd8f)
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t17 = cow_thiscall(g, COW_IMG(0x101f4af0u), ebx, 0);
                t18 = g->ecx;
                t19 = g->edx;
                if (edi != 1u)
                {
                    eax = t17;
                    edx = t19;
                    ebx = ebx + 0x54u;
                    edi = edi - 1u;
                    goto L_101ecd8f;
                }
                eax = t17;
                ecx = t18;
                edx = t19;
                ebx = ebx + 0x54u;
    COW_AT(101ecd9c)
            }
        }
    COW_AT(101ecda0)
        wr32(self + 8u, ebp);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(101ecda3)
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, 0x2cu);
    wr32(sp0 - 0x20u, 9u);
    t20 = rd32(self + 8u);
    wr16(self + 4u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x2cu);
    t22 = g->edx;
    wr32(sp0 - 0x1cu, t21);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    g->esp = sp0 - 0x14u;
    t23 = cow_fastcall(g, COW_IMG(0x101f4b20u), t20, t22, 4, 1u, 1u, t21, 0x80808080u);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(t20 + 0x48u, 1u);
    wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
    if ((int16_t)rd16(self + 6u) <= 0)
    {
        edx = t25;
        edi = t20;
        goto L_101eceb1;
    }
    eax = t23;
    ecx = t24;
    ebp = 0u;
    edi = t20;
L_101ecde0: ;
    COW_AT(101ecde0)
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, 1u);
    g->eax = eax;
    g->edx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t26 = cow_cdecl(g, COW_IMG(0x100eb160u), 3, 1u, ebp, sp0 - 4u);
    t27 = g->edx;
    if (t26 != 0u)
    {
        eax = t26;
        edx = t27;
    }
    else
    {
        edx = t27;
    COW_AT(101ecdf8)
        if ((int32_t)rd32(rd32(sp0 - 4u) + 4u) < 0)
        {
            eax = rd32(sp0 - 4u);
            edi = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
        }
        else
        {
            eax = rd32(sp0 - 4u);
            ecx = rd32(rd32(sp0 - 4u) + 4u);
            edi = rd32(self + 8u) + (uint32_t)(int16_t)rd16(self + 4u) * 0x54u;
    COW_AT(101ece1d)
            t28 = (edx & 0xffff0000u) | rd16(eax);
            wr32(sp0 - 0x18u, t28);
            wr32(sp0 - 0x1cu, 0u);
            g->esi = self;
            g->eax = eax;
            g->edx = t28;
            g->esp = sp0 - 0x14u;
            t29 = cow_cdecl(g, COW_IMG(0x101cba50u), 2, 0u, t28);
            t30 = g->edx;
            t31 = (-((uint8_t)t29 != 0u) & 0x404040u) - 0x7fbfbfc0u;
            if (rd8(rd32(sp0 - 4u) + 2u) < rd8(rd32(sp0 - 4u) + 3u))
            {
                eax = rd32(sp0 - 4u);
                ecx = t31;
                edx = (t30 & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 2u);
                ebx = (ebx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 3u);
            }
            else
            {
                eax = rd32(sp0 - 4u);
                edx = (t30 & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 2u);
                ebx = (ebx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 3u);
    COW_AT(101ece49)
                ecx = 0x80404040u;
            }
    COW_AT(101ece4e)
            wr32(sp0 - 0x18u, ecx);
            wr32(sp0 - 0x1cu, rd16(eax));
            wr32(sp0 - 0x20u, 0x19u);
            wr32(sp0 - 0x24u, 1u);
            g->esp = sp0 - 0x14u;
            cow_fastcall(g, COW_IMG(0x101f4b20u), edi, edx, 4, 1u, 0x19u, rd16(eax), ecx);
            wr32(sp0 - 0x18u, 0x80808080u);
            t32 = rd16(rd32(sp0 - 4u));
            wr32(sp0 - 0x1cu, t32);
            wr32(sp0 - 0x20u, 0x15u);
            wr32(sp0 - 0x24u, 0u);
            g->eax = rd32(sp0 - 4u);
            t33 = rd32(sp0 - 4u);
            t34 = cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t32, 4, 0u, 0x15u, t32, 0x80808080u);
            wr32(sp0 - 0x18u, 0x80808080u);
            t35 = (rd32(rd32(sp0 - 4u) + 4u) & 0x7fffffffu) + 1u;
            wr32(sp0 - 0x1cu, t35);
            wr32(sp0 - 0x20u, 0xau);
            wr32(sp0 - 0x24u, 2u);
            cow_fastcall(g, COW_IMG(0x101f4b20u), edi, t35, 4, 2u, 0xau, t35, 0x80808080u);
            t36 = g->edx;
            t37 = rd32(sp0 - 4u);
            wr32(edi + 0x48u, t37);
            wr16(self + 4u, (uint16_t)(rd16(self + 4u) + 1u));
            eax = t37;
            edx = t36;
        }
    }
    COW_AT(101ecea4)
    if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 6u))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 6u);
        ebp = ebp + 1u;
        goto L_101ecde0;
    }
L_101eceb1: ;
    COW_AT(101eceb1)
    wr32(sp0 - 0x18u, 1u);
    t38 = (edx & 0xffff0000u) | rd16(self + 4u);
    wr32(sp0 - 0x1cu, t38);
    t39 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t39);
    g->esi = self;
    g->edi = edi;
    g->eax = t39;
    g->esp = sp0 - 0x14u;
    t40 = cow_fastcall(g, COW_IMG(0x101f7020u), arg1, t38, 3, t39, t38, 1u);
    t41 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t41;
    return t40;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ecd10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ecd2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ecd40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ecd47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ecd57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ecd61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0xcu, in_ebx);
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101ecd83u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecd8cu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecd8fu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecd9cu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecd9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecda0u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecda3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecde0u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecdf8u:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ece1du:
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
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101ece49u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ece4eu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101ecea4u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101eceb1u:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ecd10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ecd10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
