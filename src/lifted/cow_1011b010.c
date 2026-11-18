/* f_0x1011b010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011b010(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011b051u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1011b051;
    case 0x1011b05eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_1011b05e;
    case 0x1011b06au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b06a;
    case 0x1011b0b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b0b4;
    case 0x1011b0c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b0c2;
    case 0x1011b0d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_1011b0d1;
    case 0x1011b0ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_1011b0dd;
    case 0x1011b0f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b0f6;
    case 0x1011b0feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b0fe;
    case 0x1011b125u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b125;
    case 0x1011b131u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b131;
    case 0x1011b132u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b132;
    case 0x1011b13fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b13f;
    case 0x1011b143u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011b143;
    case 0x1011b14fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b14f;
    case 0x1011b15cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1011b15c;
    case 0x1011b15eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b15e;
    case 0x1011b17cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b17c;
    case 0x1011b184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b184;
    case 0x1011b18cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011b18c;
    case 0x1011b19bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011b19b;
    case 0x1011b1a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1011b1a4;
    default: break;
    }
#endif

    COW_AT(1011b010)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, 0x10u);
    wr32(sp0 - 0x30u, arg1);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x34u, self + 0x46u);
    wr8(sp0 - 0x15u, 0u);
    g->eax = self + 0x46u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_cdecl(g, COW_IMG(0x1011b1b0u), 7, self + 0x46u, arg1, 0x10u, in_edi, in_esi, in_ebp, in_ebx);
    t2 = g->edx;
    wr32(sp0 - 0x38u, 0x10u);
    wr32(sp0 - 0x3cu, arg1);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ecx = sp0 - 0x10u;
    g->edx = t2;
    g->esp = sp0 - 0x24u;
    t3 = cow_cdecl(g, COW_IMG(0x1011b1b0u), 7, sp0 - 0x10u, arg1, 0x10u, self + 0x46u, arg1, 0x10u, in_edi);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x44u, 0x10u);
    g->esp = sp0 - 0x38u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t4, t5, 1, 3, 0x10u, sp0 - 0x10u, arg1);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        goto L_1011b05e;
    }
    eax = t6;
    edx = t7;
    COW_AT(1011b051)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t8 = cow_thiscall(g, COW_IMG(0x1011b380u), eax, 0);
    t9 = g->edx;
    if (t8 != 0u)
    {
        eax = t8;
        edx = t9;
        esi = t8;
        goto L_1011b06a;
    }
    eax = t8;
L_1011b05e: ;
    COW_AT(1011b05e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax & 0xffffff00u;
L_1011b06a: ;
    COW_AT(1011b06a)
    wr32(sp0 - 0x2cu, arg1);
    wr32(self + 8u, esi);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t10 = cow_thiscall(g, COW_IMG(0x1011b3b0u), esi, 1, arg1);
    wr32(sp0 - 0x2cu, 6u);
    t11 = rd32(esi);
    wr16(self + 0x10u, rd16(t11 + 2u));
    t12 = rd32(esi);
    t13 = rd16(rd32(esi) + 4u);
    wr16(self + 0x12u, (uint16_t)t13);
    wr16(self + 0x14u, (uint16_t)(rd16(rd32(esi) + 0xau) + rd16(rd32(esi) + 2u)));
    t14 = rd32(esi);
    t15 = rd16(rd32(esi) + 0xcu);
    t16 = rd16(rd32(esi) + 4u);
    wr16(self + 0x16u, (uint16_t)(t15 + t16));
    g->edi = self;
    g->eax = t14;
    g->edx = ((t11 | t13) & 0xffff0000u) | (uint16_t)(t15 + t16);
    t17 = cow_thiscall(g, COW_IMG(0x1011b620u), esi, 1, 6u);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        goto L_1011b0f6;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    ebp = t17;
    COW_AT(1011b0b4)
    wr32(sp0 - 0x2cu, 0x26u);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x26u, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t21 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        goto L_1011b0d1;
    }
    eax = t20;
    edx = t21;
    COW_AT(1011b0c2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t22 = cow_thiscall(g, COW_IMG(0x1011b900u), eax, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x14u, t22);
    if (t22 != 0u)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        loc_14 = t22;
        goto L_1011b0dd;
    }
    eax = t22;
L_1011b0d1: ;
    COW_AT(1011b0d1)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return eax & 0xffffff00u;
L_1011b0dd: ;
    COW_AT(1011b0dd)
    t25 = (ecx & 0xffff0000u) | rd16(rd32(esi) + 8u);
    wr32(sp0 - 0x2cu, t25);
    t26 = (edx & 0xffff0000u) | rd16(rd32(esi) + 6u);
    wr32(sp0 - 0x30u, t26);
    wr32(sp0 - 0x34u, ebp);
    g->ebx = arg1;
    g->edx = t26;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x1011b910u), eax, 3, ebp, t26, t25);
    t27 = g->ecx;
    t28 = g->edx;
    wr8(sp0 - 0x15u, 1u);
    ecx = t27;
    edx = t28;
L_1011b0f6: ;
    COW_AT(1011b0f6)
    if ((uint8_t)rd32(sp0 - 0xfu) == 0u) goto L_1011b17c;
    eax = rd32(sp0 - 0xfu);
    COW_AT(1011b0fe)
    wr16(self + 0x18u, (uint8_t)eax);
    t29 = (uint8_t)eax * 0x14u + 4u;
    wr32(sp0 - 0x2cu, t29);
    g->eax = t29;
    g->esp = sp0 - 0x20u;
    t30 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, (ecx & 0xffff0000u) | (uint8_t)eax, (uint8_t)eax * 5u, 1, 3, t29, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t31 = g->ecx;
    t32 = g->edx;
    if (t30 == 0u)
    {
        eax = t30;
        goto L_1011b143;
    }
    ecx = t31;
    edx = t32;
    esi = (uint8_t)eax;
    eax = t30;
    COW_AT(1011b125)
    wr32(eax, esi);
    if ((int32_t)(esi - 1u) < 0)
    {
        ebx = eax + 4u;
    }
    else
    {
        ebx = eax + 4u;
        ebp = eax + 4u;
        esi = esi - 1u;
    COW_AT(1011b131)
        esi = esi + 1u;
L_1011b132: ;
    COW_AT(1011b132)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x28u;
        t33 = cow_thiscall(g, COW_IMG(0x1011b670u), ebp, 0);
        t34 = g->ecx;
        t35 = g->edx;
        if (esi != 1u)
        {
            eax = t33;
            edx = t35;
            ebp = ebp + 0x14u;
            esi = esi - 1u;
            goto L_1011b132;
        }
        eax = t33;
        ecx = t34;
        edx = t35;
    }
    COW_AT(1011b13f)
    if (ebx != 0u) goto L_1011b14f;
L_1011b143: ;
    COW_AT(1011b143)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return eax & 0xffffff00u;
L_1011b14f: ;
    COW_AT(1011b14f)
    t36 = rd8(sp0 - 0xfu);
    wr32(self + 4u, ebx);
    if ((uint8_t)t36 != 0u)
    {
        eax = (eax & 0xffffff00u) | t36;
    COW_AT(1011b15c)
        ebp = ebx;
        esi = 0u;
L_1011b15e: ;
    COW_AT(1011b15e)
        wr32(sp0 - 0x2cu, arg1);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t37 = cow_thiscall(g, COW_IMG(0x1011b6b0u), ebp, 1, arg1);
        t38 = g->ecx;
        if ((int32_t)(esi + 1u) < (int32_t)(uint8_t)rd32(sp0 - 0xfu))
        {
            eax = t37;
            edx = (uint8_t)rd32(sp0 - 0xfu);
            ebp = ebp + 0x14u;
            esi = esi + 1u;
            goto L_1011b15e;
        }
        ecx = t38;
        edx = (uint8_t)rd32(sp0 - 0xfu);
    }
L_1011b17c: ;
    COW_AT(1011b17c)
    if (rd32(sp0 - 0x14u) == 0u)
    {
        eax = rd32(sp0 - 0x14u);
        goto L_1011b1a4;
    }
    eax = rd32(sp0 - 0x14u);
    COW_AT(1011b184)
    if (rd8(sp0 - 0x15u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x15u);
        goto L_1011b19b;
    }
    COW_AT(1011b18c)
    wr32(self + 0xcu, eax);
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (eax & 0xffffff00u) | 1u;
L_1011b19b: ;
    COW_AT(1011b19b)
    wr32(sp0 - 0x2cu, eax);
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t39 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    eax = t39;
L_1011b1a4: ;
    COW_AT(1011b1a4)
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011b010(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011b051u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x14u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1011b05eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b06au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x28u;
        g->ebx = arg1;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b0feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b125u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b131u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b132u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b13fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b143u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b14fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b15cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        g->esi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b15eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b17cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b184u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b18cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b19bu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1011b1a4u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011b010(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011b010(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
