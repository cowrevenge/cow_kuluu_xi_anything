/* f_0x1022a8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022a8b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022a8c0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1022a8c0;
    case 0x1022a8cau: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1022a8ca;
    case 0x1022a8ceu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1022a8ce;
    case 0x1022a8dau: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x1cu); goto E_1022a8da;
    case 0x1022a8fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a8fb;
    case 0x1022a902u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a902;
    case 0x1022a918u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a918;
    case 0x1022a93du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); goto E_1022a93d;
    case 0x1022a948u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a948;
    case 0x1022a94du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a94d;
    case 0x1022a955u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a955;
    case 0x1022a957u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a957;
    case 0x1022a95du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a95d;
    case 0x1022a990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a990;
    case 0x1022a9b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a9b7;
    case 0x1022a9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1022a9c1;
    case 0x1022a9c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9c5;
    case 0x1022a9ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9dd;
    case 0x1022a9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9e9;
    case 0x1022a9f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9f0;
    case 0x1022a9f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9f2;
    case 0x1022a9feu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022a9fe;
    case 0x1022aa18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022aa18;
    case 0x1022aa1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_1022aa1f;
    default: break;
    }
#endif

    COW_AT(1022a8b0)
    wr32(sp0 - 0x1cu, in_esi);
    if (rd8(self + 0x88u) != 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
        goto L_1022a8ca;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x88u);
    COW_AT(1022a8c0)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t1 = cow_fastcall(g, COW_IMG(0x1022a810u), self, in_edx, 0);
    t2 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t2;
    return t1;
L_1022a8ca: ;
    COW_AT(1022a8ca)
    if ((uint8_t)eax != 2u) goto L_1022a8da;
    COW_AT(1022a8ce)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t3 = cow_fastcall(g, COW_IMG(0x1022a860u), self, in_edx, 0);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t4;
    return t3;
L_1022a8da: ;
    COW_AT(1022a8da)
    wr32(sp0 - 0x20u, 0x60u);
    wr32(sp0 - 0x24u, 9u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x60u);
    t6 = g->edx;
    wr32(sp0 - 0xcu, t5);
    if (rd32(self + 0x90u) > 3u)
    {
        eax = rd32(self + 0x90u);
        edx = t6;
        goto L_1022aa1f;
    }
    eax = rd32(self + 0x90u);
    ecx = t5;
    edx = t6;
    loc_c = t5;
    COW_AT(1022a8fb)
    t7 = rd32(COW_IMG(0x1022aa24u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1022a902u: goto L_1022a902;
    case 0x1022a918u: goto L_1022a918;
    case 0x1022a9e9u: goto L_1022a9e9;
    case 0x1022a9f2u: goto L_1022a9f2;
    default: rt_fatal(g, COW_IMG(0x1022a8fbu), "switch");
    }
    return 0;
L_1022a902: ;
    COW_AT(1022a902)
    t31 = rd32(self + 8u) + 0xc4u;
    wr32(sp0 - 0x20u, t31);
    g->eax = t31;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t32 = cow_cdecl(g, COW_IMG(0x1022f5c0u), 1, t31);
    t33 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t33;
    return t32;
L_1022a918: ;
    COW_AT(1022a918)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_edi);
    t16 = rd16(self + 0x7cu);
    t17 = rd16(self + 0x7eu);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr32(sp0 - 0x18u, (uint32_t)(int16_t)t16);
    ebx = (uint32_t)(int16_t)t17;
    ebp = 0u;
    loc_20 = in_ebx;
    loc_24 = in_ebp;
    loc_28 = in_edi;
    loc_18 = (uint32_t)(int16_t)t16;
L_1022a93d: ;
    COW_AT(1022a93d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t18 = cow_thiscall(g, COW_IMG(0x10221db0u), self, 0);
    t19 = g->edx;
    if ((int32_t)(ebp + t18) < 0)
    {
        edx = t19;
        goto L_1022a955;
    }
    eax = ebp + t18;
    edx = t19;
    COW_AT(1022a948)
    if ((int32_t)eax >= (int32_t)rd32(self + 0x44u)) goto L_1022a955;
    COW_AT(1022a94d)
    eax = eax * 8u + rd32(self + 0x20u);
    edx = rd32(self + 0x20u);
L_1022a957: ;
    COW_AT(1022a957)
    if (rd32(eax) == 0u) goto L_1022a9b7;
    ecx = rd32(eax);
    COW_AT(1022a95d)
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t20 = cow_thiscall(g, COW_IMG(0x102295c0u), ecx, 0);
    t21 = g->ecx;
    t22 = rd16(t20 + 2u);
    t23 = rd32(sp0 - 0x18u);
    t24 = rd16(t20);
    t25 = rd16(self + 0x82u);
    wr16(sp0 - 0x14u, (uint16_t)t23);
    wr16(sp0 - 0x12u, (uint16_t)ebx);
    wr16(sp0 - 0x10u, (uint16_t)(t23 + ((t21 & 0xffff0000u) | t24)));
    wr16(sp0 - 0xeu, (uint16_t)(ebx + ((t20 & 0xffff0000u) | t22)));
    if ((int16_t)(ebx + ((t20 & 0xffff0000u) | t22)) > (int16_t)t25)
    {
        edx = t23;
        goto L_1022a9b7;
    }
    edx = t23;
    edi = t20;
    COW_AT(1022a990)
    t26 = ebp + rd32(self + 0x54u);
    wr32(sp0 - 0x2cu, t26);
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118980u), rd32(self + 8u), 2, sp0 - 0x14u, t26);
    if ((int32_t)(ebp + 1u) <= 8)
    {
        eax = rd32(self + 0x84u) + (uint32_t)(int16_t)rd16(edi + 2u);
        edx = (uint32_t)(int16_t)rd16(edi + 2u);
        ebx = ebx + rd32(self + 0x84u) + (uint32_t)(int16_t)rd16(edi + 2u);
        ebp = ebp + 1u;
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_1022a93d;
    }
    edx = (uint32_t)(int16_t)rd16(edi + 2u);
L_1022a9b7: ;
    COW_AT(1022a9b7)
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        ebx = rd32(sp0 - 0x20u);
        ebp = rd32(sp0 - 0x24u);
        edi = rd32(sp0 - 0x28u);
        goto L_1022a9dd;
    }
    eax = rd32(self + 0x40u);
    ebx = rd32(sp0 - 0x20u);
    ebp = rd32(sp0 - 0x24u);
    edi = rd32(sp0 - 0x28u);
    COW_AT(1022a9c1)
    ecx = rd32(sp0 - 0xcu);
L_1022a9c5: ;
    COW_AT(1022a9c5)
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, ecx);
    wr32(sp0 - 0x28u, 0x14u);
    wr32(sp0 - 0x2cu, 0x14u);
    g->ebx = ebx;
    g->edi = edi;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t27 = cow_thiscall(g, COW_IMG(0x101171b0u), rd32(self + 8u) + 0xc4u, 4, 0x14u, 0x14u, ecx, 0x80808080u);
    t28 = g->edx;
    eax = t27;
    edx = t28;
L_1022a9dd: ;
    COW_AT(1022a9dd)
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t29 = cow_fastcall(g, COW_IMG(0x10221f50u), self, edx, 0);
    t30 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t30;
    return t29;
L_1022a955: ;
    COW_AT(1022a955)
    eax = 0u;
    goto L_1022a957;
L_1022a9e9: ;
    COW_AT(1022a9e9)
    if (rd32(self + 0x40u) != 0u)
    {
        eax = rd32(self + 0x40u);
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        goto L_1022a9dd;
    }
    eax = rd32(self + 0x40u);
    COW_AT(1022a9f0)
    ebx = in_ebx;
    ebp = in_ebp;
    edi = in_edi;
    goto L_1022a9c5;
L_1022a9f2: ;
    COW_AT(1022a9f2)
    if (rd16(self + 0x8eu) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x8eu);
        goto L_1022aa18;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x8eu);
    COW_AT(1022a9fe)
    wr32(sp0 - 0x20u, eax);
    g->esp = sp0 - 0x1cu;
    t8 = cow_call_regs(g, COW_IMG(0x10153ff0u), eax, ecx, edx, 1, 1, eax);
    t9 = g->edx;
    g->esi = self;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x101544f0u), t8, 1, rd32(sp0 - 0x20u));
    t11 = g->edx;
    wr32(sp0 - 0x20u, t10);
    t12 = cow_call_regs(g, COW_IMG(0x1022a710u), t10, self, t11, 0, 1, t10);
    t13 = g->edx;
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t13;
    return t12;
L_1022aa18: ;
    COW_AT(1022aa18)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x1022a6f0u), self, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_1022aa1f: ;
    COW_AT(1022aa1f)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022a8b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022a8c0u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a8cau:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1022a8ceu:
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
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a8dau:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1022a8fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a902u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a918u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a93du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a948u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a94du:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a955u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a957u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a95du:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a990u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a9b7u:
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
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1022a9c1u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022a9feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022aa18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1022aa1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022a8b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022a8b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
