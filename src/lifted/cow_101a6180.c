/* f_0x101a6180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a6180(Guest* g)
{
    uint32_t eax;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a618du: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a618d;
    case 0x101a6190u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6190;
    case 0x101a6199u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6199;
    case 0x101a619eu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a619e;
    case 0x101a61aau: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61aa;
    case 0x101a61aeu: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61ae;
    case 0x101a61beu: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61be;
    case 0x101a61c1u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61c1;
    case 0x101a61c4u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61c4;
    case 0x101a61cbu: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61cb;
    case 0x101a61dfu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61df;
    case 0x101a61f5u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a61f5;
    case 0x101a6201u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6201;
    case 0x101a6205u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6205;
    case 0x101a6219u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6219;
    case 0x101a622fu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a622f;
    case 0x101a623bu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a623b;
    case 0x101a623fu: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a623f;
    case 0x101a6247u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6247;
    case 0x101a6253u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6253;
    case 0x101a6257u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6257;
    case 0x101a625au: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a625a;
    case 0x101a625du: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a625d;
    case 0x101a6260u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6260;
    case 0x101a626cu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a626c;
    case 0x101a6278u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6278;
    case 0x101a627cu: edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a627c;
    case 0x101a6288u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6288;
    case 0x101a6294u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6294;
    case 0x101a6298u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6298;
    case 0x101a62a4u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a62a4;
    case 0x101a62b0u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a62b0;
    default: break;
    }
#endif

    COW_AT(101a6180)
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101a61ae;
    COW_AT(101a618d)
    if ((uint32_t)(int16_t)arg1 == 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        goto L_101a6199;
    }
    COW_AT(101a6190)
    if ((uint32_t)(int16_t)arg1 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg1 - 8u;
        edx = in_edx;
        goto L_101a62b0;
    }
    eax = (uint32_t)(int16_t)arg1 - 8u;
L_101a6199: ;
    COW_AT(101a6199)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037e90u), self, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(101a619e)
    t2 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = t2;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t2);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(101a61aa)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a61ae: ;
    COW_AT(101a61ae)
    if (rd8(self + 0x1du) == 0u) goto L_101a6257;
    COW_AT(101a61be)
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101a623f;
    COW_AT(101a61c1)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101a6205;
    COW_AT(101a61c4)
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101a62a4;
    }
    COW_AT(101a61cb)
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xeeu);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(101a61df)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101a6160u), 0u, eax, 0u, 0u, 1u, 0u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(101a61f5)
    t9 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t9);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(101a6201)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a6205: ;
    COW_AT(101a6205)
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xedu);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(101a6219)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x101a6140u), 0u, eax, 0u, 0u, 1u, 0u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(101a622f)
    t16 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t17 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t16);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(101a623b)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a623f: ;
    COW_AT(101a623f)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x101a2bc0u), rd32(self + 0x14u), 0);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(101a6247)
    t21 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t22 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t21);
    t23 = g->edx;
    eax = t22;
    edx = t23;
    COW_AT(101a6253)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a6257: ;
    COW_AT(101a6257)
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101a6298;
    COW_AT(101a625a)
    if ((uint32_t)(int16_t)arg2 == 2u) goto L_101a627c;
    COW_AT(101a625d)
    if ((uint32_t)(int16_t)arg2 != 3u)
    {
        eax = (uint32_t)(int16_t)arg2 - 3u;
        edx = in_edx;
        goto L_101a62a4;
    }
    COW_AT(101a6260)
    t24 = rd32(self + 0x18u);
    g->eax = (uint32_t)(int16_t)arg2 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t25 = cow_thiscall(g, COW_IMG(0x101a2a90u), rd32(self + 0x14u), 1, t24);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    COW_AT(101a626c)
    t27 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t28 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t27);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(101a6278)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a627c: ;
    COW_AT(101a627c)
    t30 = rd32(self + 0x18u);
    g->eax = (uint32_t)(int16_t)arg2 - 2u;
    g->edx = t30;
    g->esp = sp0 - 4u;
    t31 = cow_thiscall(g, COW_IMG(0x101a2ac0u), rd32(self + 0x14u), 1, t30);
    t32 = g->edx;
    eax = t31;
    edx = t32;
    COW_AT(101a6288)
    t33 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t34 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t33);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(101a6294)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
L_101a6298: ;
    COW_AT(101a6298)
    t36 = rd32(self + 0x18u);
    g->eax = t36;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t37 = cow_thiscall(g, COW_IMG(0x101a2af0u), rd32(self + 0x14u), 1, t36);
    t38 = g->edx;
    eax = t37;
    edx = t38;
L_101a62a4: ;
    COW_AT(101a62a4)
    t39 = (uint32_t)(int8_t)rd8(self + 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t40 = cow_call_regs(g, COW_IMG(0x101a6100u), g->eax, g->ecx, edx, 0, 1, t39);
    t41 = g->edx;
    eax = t40;
    edx = t41;
L_101a62b0: ;
    COW_AT(101a62b0)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a6180(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a618du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a6190u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 6u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a6199u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a619eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a61aau:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a61aeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 5u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a61beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a61c1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a61c4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a61cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a61dfu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101a61f5u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6201u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6205u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101a6219u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101a622fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a623bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a623fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101a6247u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6253u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6257u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101a625au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x101a625du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x101a6260u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101a626cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6278u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a627cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 2u;
        (void)sp0;
        return 1;
    }
    case 0x101a6288u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6294u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6298u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a62a4u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a62b0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6180(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a6180(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
