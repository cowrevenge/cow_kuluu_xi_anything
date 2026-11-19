/* f_0x10142b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10142b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10142b8eu: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142b8e;
    case 0x10142b95u: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142b95;
    case 0x10142b9fu: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142b9f;
    case 0x10142ba9u: self = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142ba9;
    case 0x10142bc8u: ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142bc8;
    case 0x10142bdau: edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142bda;
    case 0x10142be6u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142be6;
    case 0x10142bfdu: edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142bfd;
    case 0x10142c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c0a;
    case 0x10142c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c1a;
    case 0x10142c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c52;
    case 0x10142c54u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c54;
    case 0x10142c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c62;
    case 0x10142c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142c73;
    case 0x10142ca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142ca9;
    case 0x10142caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10142cae;
    default: break;
    }
#endif

    COW_AT(10142b80)
    if ((uint32_t)(int16_t)arg2 == 5u) goto L_10142b9f;
    COW_AT(10142b8e)
    if ((uint32_t)(int16_t)arg2 != 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 6u;
        edx = in_edx;
        goto L_10142cae;
    }
    COW_AT(10142b95)
    g->eax = (uint32_t)(int16_t)arg2 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_10142c73: ;
    COW_AT(10142c73)
    wr32(self + 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x101425a0u), 0);
    t31 = g->edx;
    t32 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t31;
    t33 = rd32(COW_IMG(0x10578204u));
    t34 = cow_call_regs(g, COW_IMG(0x1015e790u), t32, COW_IMG(0x10621838u), g->edx, 0, 2, t32, 1u);
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x1013bf40u), t33, 0);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t37;
    return (t36 & 0xffffff00u) | 1u;
L_10142b9f: ;
    COW_AT(10142b9f)
    if ((uint16_t)arg3 != 0u) goto L_10142bc8;
    COW_AT(10142ba9)
    g->eax = ((uint32_t)(int16_t)arg2 - 5u & 0xffff0000u) | (uint16_t)arg3;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t4 = g->edx;
    g->ebx = self;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371554u), 1u, 0u);
    t6 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_10142bc8: ;
    COW_AT(10142bc8)
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_10142ca9;
    }
    edx = rd32(arg1 + 0x38u);
    COW_AT(10142bda)
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_10142ca9;
    }
    COW_AT(10142be6)
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u == 0u)
    {
        eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        goto L_10142ca9;
    }
    esi = edx + (uint32_t)(int16_t)arg3 * 0x54u;
    COW_AT(10142bfd)
    g->eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x10141b80u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10142ca9;
    }
    ecx = t8;
    edx = t9;
    COW_AT(10142c0a)
    t10 = rd32(esi + 0x48u);
    g->eax = t10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10142b50u), 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        zf = t11 == 0u;
        sf = (int32_t)t11 < 0;
        goto L_10142c52;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(10142c1a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(esi + 0x48u);
    g->esp = sp0 - 0x18u;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2c5u);
    t19 = g->edx;
    g->ebx = self;
    g->edx = t19;
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10142cc0u), t17, t18, 0u, 0u, 1u, 0u);
    t21 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_10142c52: ;
    COW_AT(10142c52)
    if (zf || sf) goto L_10142ca9;
    COW_AT(10142c54)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t22 = rd32(esi + 0x48u);
    g->esp = sp0 - 0xcu;
    t23 = cow_stdcall(g, COW_IMG(0x10141e70u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == t22)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_10142ca9;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10142c62)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t27 = g->ecx;
    t28 = rd32(esi + 0x48u);
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x10141e40u), 1, t28);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    goto L_10142c73;
L_10142ca9: ;
    COW_AT(10142ca9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
L_10142cae: ;
    COW_AT(10142cae)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10142b80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10142b8eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 5u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x10142b95u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 6u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x10142b9fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 5u;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x10142ba9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = ((uint32_t)(int16_t)arg2 - 5u & 0xffff0000u) | (uint16_t)arg3;
        g->ebx = self;
        (void)sp0;
        return 1;
    }
    case 0x10142bc8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = ((uint32_t)(int16_t)arg2 - 5u & 0xffff0000u) | (uint16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x10142bdau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ecx = (uint32_t)(int16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x10142be6u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x10142bfdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x10142c0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142c1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142c52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x10142c54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142c62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142c73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142ca9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10142caeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10142b80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10142b80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
