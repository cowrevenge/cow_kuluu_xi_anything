/* f_0x1019c5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019c5e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
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
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1019c601u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1019c601;
    case 0x1019c65eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c65e;
    case 0x1019c6a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6a8;
    case 0x1019c6b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6b7;
    case 0x1019c6c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6c9;
    case 0x1019c6dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6db;
    case 0x1019c6edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6ed;
    case 0x1019c6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c6ff;
    case 0x1019c711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c711;
    case 0x1019c723u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c723;
    case 0x1019c729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c729;
    case 0x1019c796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c796;
    case 0x1019c7b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019c7b7;
    case 0x1019c7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; goto E_1019c7c2;
    default: break;
    }
#endif

    COW_AT(1019c5e0)
    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_ebp);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr16(sp0 - 0x38u, 0u);
    wr16(sp0 - 0x36u, 0u);
    wr16(sp0 - 0x34u, 0u);
    wr16(sp0 - 0x32u, 0u);
    edx = in_edx;
    edi = 0u;
    loc_3c = in_ebx;
    loc_40 = in_ebp;
    loc_44 = in_esi;
    loc_48 = in_edi;
L_1019c601: ;
    COW_AT(1019c601)
    wr32(sp0 - 0x4cu, 1u);
    wr32(sp0 - 0x50u, 1u);
    wr32(sp0 - 0x54u, edi + 1u);
    wr32(sp0 - 0x58u, sp0 - 0x38u);
    g->ebx = 0u;
    g->edi = edi;
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x38u, edi + 1u, 1u, 1u);
    wr32(sp0 - 0x4cu, 0x80808080u);
    t1 = rd32(edi * 4u + rd32(self + 0x6cu) + rd32(self + 0x14u) * 4u);
    wr32(sp0 - 0x50u, t1);
    wr32(sp0 - 0x54u, 0xbu);
    g->eax = t1;
    g->esp = sp0 - 0x4cu;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xbu, t1);
    wr32(sp0 - 0x50u, t2);
    t3 = (uint32_t)(int16_t)rd16(sp0 - 0x36u);
    wr32(sp0 - 0x54u, t3);
    t4 = (uint32_t)(int16_t)rd16(sp0 - 0x38u) + 0x40u;
    wr32(sp0 - 0x58u, t4);
    g->ecx = t3;
    g->edx = t4;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x101907e0u), 9, t4, t3, t2, 0x80808080u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(edi + self + rd32(self + 0x14u) + 0x29u) == 0u)
    {
        ecx = (t5 & 0xffffff00u) | rd8(edi + self + rd32(self + 0x14u) + 0x29u);
        ebp = edi + 1u;
        goto L_1019c796;
    }
    eax = edi + self + rd32(self + 0x14u) + 0x29u;
    edx = t6;
    ebp = edi + 1u;
    COW_AT(1019c65e)
    wr32(sp0 - 0x20u, rd32(COW_IMG(0x1037a800u)));
    t7 = rd8(COW_IMG(0x1037a804u));
    wr32(sp0 - 0x1bu, 0u);
    wr8(sp0 - 0x1cu, (uint8_t)t7);
    wr32(sp0 - 0x17u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr16(sp0 - 0x13u, 0u);
    wr8(sp0 - 0x11u, 0u);
    t8 = ((edx | t7) & 0xffffff00u) | rd8(eax);
    wr32(sp0 - 0x50u, t8);
    g->eax = eax;
    g->esp = sp0 - 0x4cu;
    t9 = cow_cdecl(g, COW_IMG(0x101afce0u), 1, t8);
    wr8(sp0 - 0x30u, (uint8_t)t9);
    if ((uint8_t)rd32(sp0 - 0x30u) - 0xf0u > 0xfu) goto L_1019c723;
    eax = (uint8_t)rd32(sp0 - 0x30u) - 0xf0u;
    COW_AT(1019c6a8)
    t10 = rd32(COW_IMG(0x1019c7ccu) + rd8(COW_IMG(0x1019c7e8u) + eax) * 4u);
    switch (t10 - RD)
    {
    case 0x1019c6b7u: goto L_1019c6b7;
    case 0x1019c6c9u: goto L_1019c6c9;
    case 0x1019c6dbu: goto L_1019c6db;
    case 0x1019c6edu: goto L_1019c6ed;
    case 0x1019c6ffu: goto L_1019c6ff;
    case 0x1019c711u: goto L_1019c711;
    case 0x1019c723u: goto L_1019c723;
    default: rt_fatal(g, COW_IMG(0x1019c6b0u), "switch");
    }
    return 0;
L_1019c6b7: ;
    COW_AT(1019c6b7)
    wr8(sp0 - 0x30u, 0x87u);
    wr8(sp0 - 0x2fu, 0xc4u);
    wr8(sp0 - 0x2eu, 0u);
L_1019c729: ;
    COW_AT(1019c729)
    t11 = rd8(edi + self + rd32(self + 0x14u) + 0x29u);
    wr32(sp0 - 0x4cu, t11);
    wr32(sp0 - 0x50u, COW_IMG(0x1037a7f8u));
    wr32(sp0 - 0x54u, sp0 - 0x10u);
    g->ebx = 0u;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x1037a7f8u), t11, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    wr32(sp0 - 0x58u, 0x80808080u);
    wr32(sp0 - 0x5cu, sp0 - 0x20u);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 0x36u);
    wr32(sp0 - 0x60u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 0x38u) + 4u;
    wr32(sp0 - 0x64u, t13);
    g->eax = t12;
    g->ecx = t13;
    t14 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, t13, t12, sp0 - 0x20u, 0x80808080u, sp0 - 0x10u, COW_IMG(0x1037a7f8u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t15 = g->ecx;
    wr32(sp0 - 0x68u, sp0 - 0x30u);
    g->esp = sp0 - 0x54u;
    t16 = cow_call_regs(g, COW_IMG(0x10190830u), t14, t15, g->edx, 1, 5, sp0 - 0x30u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x6cu, 0x80808080u);
    wr32(sp0 - 0x70u, sp0 - 0x30u);
    t17 = (uint32_t)(int16_t)rd16(sp0 - 0x36u);
    wr32(sp0 - 0x74u, t17);
    t18 = (uint32_t)(int16_t)rd16(sp0 - 0x38u) - (uint32_t)((int32_t)(t16 - (uint32_t)((int32_t)t16 >> 0x1fu)) >> 1u) + 0x13u;
    wr32(sp0 - 0x78u, t18);
    g->eax = (uint32_t)((int32_t)(t16 - (uint32_t)((int32_t)t16 >> 0x1fu)) >> 1u);
    g->edx = (uint32_t)((int32_t)t16 >> 0x1fu);
    t19 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, t18, t17, sp0 - 0x30u, 0x80808080u, sp0 - 0x30u, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), sp0 - 0x20u, 0x80808080u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_1019c7b7: ;
    COW_AT(1019c7b7)
    if ((int32_t)ebp < 14)
    {
        edi = ebp;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        goto L_1019c601;
    }
    COW_AT(1019c7c2)
    g->ebx = rd32(sp0 - 0x3cu);
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    g->ebp = rd32(sp0 - 0x40u);
    g->edx = edx;
    return eax;
L_1019c6c9: ;
    COW_AT(1019c6c9)
    wr8(sp0 - 0x30u, 0x85u);
    wr8(sp0 - 0x2fu, 0xa3u);
    wr8(sp0 - 0x2eu, 0u);
    goto L_1019c729;
L_1019c6db: ;
    COW_AT(1019c6db)
    wr8(sp0 - 0x30u, 0x85u);
    wr8(sp0 - 0x2fu, 0xbbu);
    wr8(sp0 - 0x2eu, 0u);
    goto L_1019c729;
L_1019c6ed: ;
    COW_AT(1019c6ed)
    wr8(sp0 - 0x30u, 0x85u);
    wr8(sp0 - 0x2fu, 0xb5u);
    wr8(sp0 - 0x2eu, 0u);
    goto L_1019c729;
L_1019c6ff: ;
    COW_AT(1019c6ff)
    wr8(sp0 - 0x30u, 0x85u);
    wr8(sp0 - 0x2fu, 0xbeu);
    wr8(sp0 - 0x2eu, 0u);
    goto L_1019c729;
L_1019c711: ;
    COW_AT(1019c711)
    wr8(sp0 - 0x30u, 0x85u);
    wr8(sp0 - 0x2fu, 0xd8u);
    wr8(sp0 - 0x2eu, 0u);
    goto L_1019c729;
L_1019c723: ;
    COW_AT(1019c723)
    wr8(sp0 - 0x2fu, 0u);
    goto L_1019c729;
L_1019c796: ;
    COW_AT(1019c796)
    wr32(sp0 - 0x4cu, 0x80808080u);
    wr32(sp0 - 0x50u, COW_IMG(0x1037a800u));
    t21 = (uint32_t)(int16_t)rd16(sp0 - 0x36u);
    wr32(sp0 - 0x54u, t21);
    t22 = (uint32_t)(int16_t)rd16(sp0 - 0x38u) + 4u;
    wr32(sp0 - 0x58u, t22);
    g->eax = t22;
    g->edx = t21;
    g->esp = sp0 - 0x34u;
    t23 = cow_cdecl(g, COW_IMG(0x101907e0u), 9, t22, t21, COW_IMG(0x1037a800u), 0x80808080u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u));
    t24 = g->edx;
    eax = t23;
    edx = t24;
    goto L_1019c7b7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1019c5e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1019c601u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019c65eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6edu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c6ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c723u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1019c729u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019c796u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019c7b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019c7c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c5e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1019c5e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
