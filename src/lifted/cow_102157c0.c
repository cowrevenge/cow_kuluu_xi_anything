/* f_0x102157c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102157c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 4308u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102157d0u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102157d0;
    case 0x102157dau: self = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_102157da;
    case 0x102157ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_102157ec;
    case 0x102157f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_102157f2;
    case 0x102157f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_102157f7;
    case 0x102157fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x10ccu); in_esi = rd32(sp0 - 0x10c8u); in_ebp = rd32(sp0 - 0x10c4u); in_ebx = rd32(sp0 - 0x10c0u); g->ebp = rd32(sp0 - 0x10c4u); g->ebx = rd32(sp0 - 0x10c0u); g->edi = rd32(sp0 - 0x10ccu); g->esi = rd32(sp0 - 0x10c8u); goto E_102157fd;
    case 0x10215856u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215856;
    case 0x1021585au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021585a;
    case 0x10215864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215864;
    case 0x1021587au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021587a;
    case 0x102158a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158a3;
    case 0x102158a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158a7;
    case 0x102158b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158b1;
    case 0x102158c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158c7;
    case 0x102158f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158f0;
    case 0x102158f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158f4;
    case 0x102158feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102158fe;
    case 0x10215914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215914;
    case 0x1021593du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021593d;
    case 0x10215941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215941;
    case 0x1021594bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1021594b;
    case 0x10215961u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215961;
    case 0x102159bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102159ba;
    case 0x102159beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102159be;
    case 0x102159c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102159c8;
    case 0x102159deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102159de;
    case 0x102159feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102159fe;
    case 0x10215a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10215a03;
    default: break;
    }
#endif

    COW_AT(102157c0)
    wr32(self + 0x154u, 0u);
    COW_AT(102157d0)
    COW_AT(102157da)
    wr32(sp0 - 0x10c0u, in_ebx);
    wr32(sp0 - 0x10c4u, in_ebp);
    wr32(sp0 - 0x10c8u, in_esi);
    wr32(sp0 - 0x10ccu, in_edi);
    eax = 0x10bcu;
    edx = self + 0x10u;
    ebp = 0x1fu;
L_102157ec: ;
    COW_AT(102157ec)
    if (rd32(edx) != 0u)
    {
        ecx = rd32(edx);
    COW_AT(102157f2)
        g->edx = edx;
        g->esp = sp0 - 0x10ccu;
        t1 = cow_call_regs(g, COW_IMG(0x10212100u), eax, ecx, g->edx, 1, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(102157f7)
    if (ebp != 1u)
    {
        edx = edx + 4u;
        ebp = ebp - 1u;
        goto L_102157ec;
    }
    edx = edx + 4u;
    COW_AT(102157fd)
    wr32(self + 0x154u, 0u);
    wr8(self + 0x158u, 1u);
    wr32(self + 0x150u, 0u);
    wr16(self + 0x17au, 0u);
    wr32(sp0 - 0x10d0u, 9u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    wr32(sp0 - 0x10b4u, 0u);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t3 = rd32(COW_IMG(0x10664530u));
    t4 = rd32(self + 0x10u);
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = eax;
    g->ecx = t3;
    g->esp = sp0 - 0x10ccu;
    t5 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 9u);
    t6 = g->ecx;
    eax = t5;
    ecx = t6;
    edi = t4;
    COW_AT(10215856)
    edx = sp0 - 0x10a4u;
L_1021585a: ;
    COW_AT(1021585a)
    t7 = rd8(eax);
    wr8(edx, (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        edx = edx + 1u;
        goto L_1021585a;
    }
    edx = edx + 1u;
    COW_AT(10215864)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t8 = rd32(self + 0x150u);
    wr32(sp0 - 0x10b8u, t8);
    g->edx = edx;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), edi, 1, sp0 - 0x10bcu);
    t9 = g->edx;
    edx = t9;
    COW_AT(1021587a)
    wr32(sp0 - 0x10d0u, 0xau);
    t10 = rd8(edi + 0x28u);
    wr8(edi + 0x28u, (uint8_t)(t10 | 1u));
    t11 = rd32(self + 0x150u) + 1u;
    wr32(self + 0x150u, t11);
    g->eax = t11;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t12 = rd32(COW_IMG(0x10664530u));
    t13 = rd32(self + t11 * 4u + 0x10u);
    g->esp = sp0 - 0x10ccu;
    t14 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0xau);
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    edi = t13;
    COW_AT(102158a3)
    edx = sp0 - 0x10a4u;
L_102158a7: ;
    COW_AT(102158a7)
    t16 = rd8(eax);
    wr8(edx, (uint8_t)t16);
    if ((uint8_t)t16 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t16;
        edx = edx + 1u;
        goto L_102158a7;
    }
    COW_AT(102158b1)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t17 = rd32(self + 0x150u);
    wr32(sp0 - 0x10b8u, t17);
    g->edx = t17;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), edi, 1, sp0 - 0x10bcu);
    t18 = g->edx;
    edx = t18;
    COW_AT(102158c7)
    wr32(sp0 - 0x10d0u, 0xbu);
    t19 = rd8(edi + 0x28u);
    wr8(edi + 0x28u, (uint8_t)(t19 | 1u));
    t20 = rd32(self + 0x150u) + 1u;
    wr32(self + 0x150u, t20);
    g->eax = t20;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t21 = rd32(COW_IMG(0x10664530u));
    t22 = rd32(self + t20 * 4u + 0x10u);
    g->esp = sp0 - 0x10ccu;
    t23 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0xbu);
    t24 = g->ecx;
    eax = t23;
    ecx = t24;
    edi = t22;
    COW_AT(102158f0)
    edx = sp0 - 0x10a4u;
L_102158f4: ;
    COW_AT(102158f4)
    t25 = rd8(eax);
    wr8(edx, (uint8_t)t25);
    if ((uint8_t)t25 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t25;
        edx = edx + 1u;
        goto L_102158f4;
    }
    eax = eax + 1u;
    COW_AT(102158fe)
    t26 = rd32(self + 0x150u);
    wr32(sp0 - 0x10b8u, t26);
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    g->edx = sp0 - 0x10bcu;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), edi, 1, sp0 - 0x10bcu);
    t27 = g->edx;
    edx = t27;
    COW_AT(10215914)
    wr32(sp0 - 0x10d0u, 0xeu);
    t28 = rd8(edi + 0x28u);
    wr8(edi + 0x28u, (uint8_t)(t28 | 1u));
    t29 = rd32(self + 0x150u) + 1u;
    wr32(self + 0x150u, t29);
    g->eax = t29;
    g->ecx = rd32(COW_IMG(0x10664530u));
    t30 = rd32(COW_IMG(0x10664530u));
    t31 = rd32(self + t29 * 4u + 0x10u);
    g->esp = sp0 - 0x10ccu;
    t32 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 0xeu);
    t33 = g->ecx;
    eax = t32;
    ecx = t33;
    edi = t31;
    COW_AT(1021593d)
    edx = sp0 - 0x10a4u;
L_10215941: ;
    COW_AT(10215941)
    t34 = rd8(eax);
    wr8(edx, (uint8_t)t34);
    if ((uint8_t)t34 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t34;
        edx = edx + 1u;
        goto L_10215941;
    }
    edx = edx + 1u;
    COW_AT(1021594b)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t35 = rd32(self + 0x150u);
    wr32(sp0 - 0x10b8u, t35);
    g->edx = edx;
    g->esp = sp0 - 0x10ccu;
    cow_thiscall(g, COW_IMG(0x10212120u), edi, 1, sp0 - 0x10bcu);
    t36 = g->edx;
    edx = t36;
    COW_AT(10215961)
    wr32(sp0 - 0x10d0u, 4u);
    wr32(sp0 - 0x10bcu, COW_IMG(0x1033bcf0u));
    t37 = rd8(edi + 0x28u);
    wr8(edi + 0x28u, t37 & 0xfeu);
    wr32(sp0 - 0x10b4u, 0u);
    t38 = rd32(self + 0x150u) + 1u;
    wr32(self + 0x150u, t38);
    wr32(sp0 - 0x10b0u, 0u);
    wr32(sp0 - 0x10acu, 0u);
    t39 = rd32(COW_IMG(0x10664530u));
    t40 = rd32(self + t38 * 4u + 0x10u);
    wr16(sp0 - 0x10a8u, 0u);
    wr16(sp0 - 0x10a6u, 0u);
    wr8(sp0 - 0x10a4u, 0u);
    wr8(sp0 - 0xfa4u, 0u);
    wr8(sp0 - 4u, 0u);
    g->eax = t38;
    g->ecx = t39;
    g->esp = sp0 - 0x10ccu;
    t41 = cow_stdcall(g, COW_IMG(0x10216a50u), 1, 4u);
    t42 = g->ecx;
    eax = t41;
    ecx = t42;
    ebp = t40;
    COW_AT(102159ba)
    edi = sp0 - 0x10a4u;
L_102159be: ;
    COW_AT(102159be)
    t43 = rd8(eax);
    wr8(edi, (uint8_t)t43);
    if ((uint8_t)t43 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t43;
        edi = edi + 1u;
        goto L_102159be;
    }
    COW_AT(102159c8)
    wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
    t44 = rd32(self + 0x150u);
    wr32(sp0 - 0x10b8u, t44);
    g->eax = sp0 - 0x10bcu;
    g->edx = t44;
    g->esp = sp0 - 0x10ccu;
    t45 = cow_thiscall(g, COW_IMG(0x10212120u), ebp, 1, sp0 - 0x10bcu);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(102159de)
    t47 = rd8(ebp + 0x28u);
    wr8(ebp + 0x28u, (uint8_t)(t47 | 1u));
    t48 = rd32(self + 0x150u) + 1u;
    wr32(self + 0x150u, t48);
    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        edx = (edx & 0xffffff00u) | t47 | 1u;
    COW_AT(102159fe)
        g->esp = sp0 - 0x10ccu;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
    }
    COW_AT(10215a03)
    t49 = (rd32(self + 0x11cu) & 0xffffff00u) | (rd32(self + 0x11cu) & 0xfcu);
    t50 = rd32(sp0 - 0x10ccu);
    wr32(self + 0x11cu, t49);
    g->ebx = rd32(sp0 - 0x10c0u);
    g->esi = rd32(sp0 - 0x10c8u);
    g->edi = t50;
    g->ebp = rd32(sp0 - 0x10c4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102157c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102157d0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x102157dau:
    {
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x10bcu;
        g->eax = 0x10bcu;
        (void)sp0;
        return 1;
    }
    case 0x102157ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102157f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102157f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102157fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10ccu);
        in_esi = rd32(sp0 - 0x10c8u);
        in_ebp = rd32(sp0 - 0x10c4u);
        in_ebx = rd32(sp0 - 0x10c0u);
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        g->edi = self + 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10215856u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021585au:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215864u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021587au:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102158a3u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102158a7u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102158b1u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102158c7u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102158f0u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102158f4u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102158feu:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215914u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x1021593du:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215941u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021594bu:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10215961u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102159bau:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102159beu:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102159c8u:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102159deu:
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
        g->esp = sp0 - 0x10ccu;
        g->ebx = 0u;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x102159feu:
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
        g->esp = sp0 - 0x10ccu;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    case 0x10215a03u:
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
        g->esp = sp0 - 0x10ccu;
        wr32(sp0 - 0x10d0u, sp0 - 0x10bcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102157c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102157c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
