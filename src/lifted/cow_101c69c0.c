/* f_0x101c69c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c69c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c69d0u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c69d0;
    case 0x101c69ddu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c69dd;
    case 0x101c69e4u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c69e4;
    case 0x101c6a01u: eax = g->eax; edx = g->edx; self = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a01;
    case 0x101c6a03u: eax = g->eax; edx = g->edx; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a03;
    case 0x101c6a27u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a27;
    case 0x101c6a44u: eax = g->eax; edx = g->edx; self = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a44;
    case 0x101c6a46u: eax = g->eax; edx = g->edx; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a46;
    case 0x101c6a6au: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a6a;
    case 0x101c6a8cu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6a8c;
    case 0x101c6aabu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6aab;
    case 0x101c6acdu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6acd;
    case 0x101c6aefu: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6aef;
    case 0x101c6b11u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6b11;
    case 0x101c6b33u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6b33;
    case 0x101c6b55u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6b55;
    case 0x101c6b79u: eax = g->eax; edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6b79;
    case 0x101c6b9du: edx = g->edx; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6b9d;
    case 0x101c6bc2u: eax = g->eax; edx = g->edx; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101c6bc2;
    default: break;
    }
#endif

    COW_AT(101c69c0)
    if (arg1 == 0u) goto L_101c6b9d;
    COW_AT(101c69d0)
    if (rd32(arg1 + 8u) - 1u > 0xau) goto L_101c6bc2;
    eax = rd32(arg1 + 8u) - 1u;
    COW_AT(101c69dd)
    t1 = rd32(COW_IMG(0x101c6bc8u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101c69e4u: goto L_101c69e4;
    case 0x101c6a27u: goto L_101c6a27;
    case 0x101c6a6au: goto L_101c6a6a;
    case 0x101c6a8cu: goto L_101c6a8c;
    case 0x101c6aabu: goto L_101c6aab;
    case 0x101c6acdu: goto L_101c6acd;
    case 0x101c6aefu: goto L_101c6aef;
    case 0x101c6b11u: goto L_101c6b11;
    case 0x101c6b33u: goto L_101c6b33;
    case 0x101c6b55u: goto L_101c6b55;
    case 0x101c6b79u: goto L_101c6b79;
    default: rt_fatal(g, COW_IMG(0x101c69ddu), "switch");
    }
    return;
L_101c69e4: ;
    COW_AT(101c69e4)
    t35 = rd32(arg1 + 0x69cu);
    t36 = rd32(arg1 + 0x698u);
    t37 = rd32(arg1 + 0x398u);
    edx = t37;
    loc_c = 8u;
    loc_10 = t35;
    loc_14 = t36;
    loc_1c = t37;
    loc_20 = 0u;
L_101c6a01: ;
    COW_AT(101c6a01)
    loc_24 = 1u;
L_101c6a03: ;
    COW_AT(101c6a03)
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x28u), rd32(self + 0xcu), 8, 5u, loc_24, loc_20, loc_1c, arg1 + 4u, loc_14, loc_10, loc_c);
    t38 = g->edx;
    cow_call_regs(g, COW_IMG(0x101b5b60u), arg1 + 0x12u, rd32(self + 0xcu), g->edx, 0, 1, arg1 + 0x12u);
    wr32(rd32(self + 0x10u) + 0x2218u, arg1);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101c6a27: ;
    COW_AT(101c6a27)
    t29 = rd32(arg1 + 0x69cu);
    t30 = rd32(arg1 + 0x698u);
    t31 = rd32(arg1 + 0x398u);
    eax = t31;
    loc_c = 0u;
    loc_10 = t29;
    loc_14 = t30;
    loc_1c = t31;
    loc_20 = 0u;
L_101c6a44: ;
    COW_AT(101c6a44)
    loc_24 = 1u;
L_101c6a46: ;
    COW_AT(101c6a46)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0xcu));
    t32 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 8u;
    t33 = cow_thiscall(g, rd32(t32 + 0x28u), rd32(self + 0xcu), 8, 5u, loc_24, loc_20, loc_1c, arg1 + 4u, loc_14, loc_10, loc_c);
    t34 = g->edx;
    cow_call_regs(g, COW_IMG(0x101b5b60u), t33, rd32(self + 0xcu), g->edx, 0, 1, arg1 + 0x12u);
    wr32(rd32(self + 0x10u) + 0x2218u, arg1);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101c6a6a: ;
    COW_AT(101c6a6a)
    t26 = rd32(arg1 + 0x69cu);
    t27 = rd32(arg1 + 0x698u);
    t28 = rd32(arg1 + 0x398u);
    edx = t28;
    loc_c = 8u;
    loc_10 = t26;
    loc_14 = t27;
    loc_1c = t28;
    loc_20 = 1u;
    goto L_101c6a01;
L_101c6a8c: ;
    COW_AT(101c6a8c)
    t23 = rd32(arg1 + 0x69cu);
    t24 = rd32(arg1 + 0x698u);
    t25 = rd32(arg1 + 0x398u);
    eax = t25;
    loc_c = 0u;
    loc_10 = t23;
    loc_14 = t24;
    loc_1c = t25;
    loc_20 = 1u;
    goto L_101c6a44;
L_101c6aab: ;
    COW_AT(101c6aab)
    t20 = rd32(arg1 + 0x69cu);
    t21 = rd32(arg1 + 0x698u);
    t22 = rd32(arg1 + 0x398u);
    edx = t22;
    loc_c = 0u;
    loc_10 = t20;
    loc_14 = t21;
    loc_1c = t22;
    loc_20 = 2u;
    goto L_101c6a01;
L_101c6acd: ;
    COW_AT(101c6acd)
    t17 = rd32(arg1 + 0x69cu);
    t18 = rd32(arg1 + 0x698u);
    t19 = rd32(arg1 + 0x398u);
    eax = t19;
    loc_c = 8u;
    loc_10 = t17;
    loc_14 = t18;
    loc_1c = t19;
    loc_20 = 3u;
    goto L_101c6a44;
L_101c6aef: ;
    COW_AT(101c6aef)
    t14 = rd32(arg1 + 0x69cu);
    t15 = rd32(arg1 + 0x698u);
    t16 = rd32(arg1 + 0x398u);
    edx = t16;
    loc_c = 8u;
    loc_10 = t14;
    loc_14 = t15;
    loc_1c = t16;
    loc_20 = 4u;
    goto L_101c6a01;
L_101c6b11: ;
    COW_AT(101c6b11)
    t11 = rd32(arg1 + 0x69cu);
    t12 = rd32(arg1 + 0x698u);
    t13 = rd32(arg1 + 0x398u);
    eax = t13;
    loc_c = 0u;
    loc_10 = t11;
    loc_14 = t12;
    loc_1c = t13;
    loc_20 = 4u;
    goto L_101c6a44;
L_101c6b33: ;
    COW_AT(101c6b33)
    t8 = rd32(arg1 + 0x69cu);
    t9 = rd32(arg1 + 0x698u);
    t10 = rd32(arg1 + 0x398u);
    edx = t10;
    loc_c = 8u;
    loc_10 = t8;
    loc_14 = t9;
    loc_1c = t10;
    loc_20 = 5u;
    goto L_101c6a01;
L_101c6b55: ;
    COW_AT(101c6b55)
    t5 = rd32(arg1 + 0x69cu);
    t6 = rd32(arg1 + 0x698u);
    t7 = rd32(arg1 + 0x398u);
    eax = t7;
    loc_c = 8u;
    loc_10 = t5;
    loc_14 = t6;
    loc_1c = t7;
    loc_20 = 5u;
    loc_24 = 0u;
    goto L_101c6a46;
L_101c6b79: ;
    COW_AT(101c6b79)
    t2 = rd32(arg1 + 0x69cu);
    t3 = rd32(arg1 + 0x698u);
    t4 = rd32(arg1 + 0x398u);
    edx = t4;
    loc_c = 0xau;
    loc_10 = t2;
    loc_14 = t3;
    loc_1c = t4;
    loc_20 = 5u;
    loc_24 = 0u;
    goto L_101c6a03;
L_101c6b9d: ;
    COW_AT(101c6b9d)
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x28u), rd32(self + 0xcu), 8, 3u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    wr32(rd32(self + 0x10u) + 0x2218u, 0u);
L_101c6bc2: ;
    COW_AT(101c6bc2)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c69c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c69d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c69ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c69e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6a01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, arg1 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c6a03u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, arg1 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c6a27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6a44u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, arg1 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c6a46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        wr32(sp0 - 0x18u, arg1 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101c6a6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6a8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6aabu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6acdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6aefu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6b11u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6b33u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6b55u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6b79u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6b9du:
    {
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101c6bc2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c69c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101c69c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
