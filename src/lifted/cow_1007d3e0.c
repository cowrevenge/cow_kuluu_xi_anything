/* f_0x1007d3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d3e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007d3ebu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1007d3eb;
    case 0x1007d3f7u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1007d3f7;
    case 0x1007d400u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1007d400;
    case 0x1007d40au: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d40a;
    case 0x1007d41au: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d41a;
    case 0x1007d430u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d430;
    case 0x1007d43du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d43d;
    case 0x1007d444u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d444;
    case 0x1007d460u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d460;
    case 0x1007d47bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d47b;
    case 0x1007d48eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d48e;
    case 0x1007d4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d4a3;
    case 0x1007d4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d4ba;
    case 0x1007d4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d4cc;
    case 0x1007d4e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d4e2;
    case 0x1007d4feu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d4fe;
    case 0x1007d510u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d510;
    case 0x1007d526u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d526;
    case 0x1007d547u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d547;
    case 0x1007d55du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d55d;
    case 0x1007d56fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d56f;
    case 0x1007d576u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d576;
    case 0x1007d58fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1007d58f;
    default: break;
    }
#endif

    COW_AT(1007d3e0)
    if (rd32(sp0 + 0xcu) != 0x56u)
    {
        esi = rd32(sp0 + 0xcu);
        goto L_1007d3f7;
    }
    esi = rd32(sp0 + 0xcu);
    COW_AT(1007d3eb)
    wr8(sp0 + 0xcu, 0u);
    loc_4 = self & 0xffffff00u;
L_1007d40a: ;
    COW_AT(1007d40a)
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        edx = in_edx;
        goto L_1007d58f;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    COW_AT(1007d41a)
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10077ba0u), eax, self, in_edx, 1, 2, COW_IMG(0x10357a1cu), eax);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        goto L_1007d58f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1007d430)
    if ((uint32_t)(int8_t)rd8(eax + 5u) > 5u) goto L_1007d58f;
    eax = (uint32_t)(int8_t)rd8(eax + 5u);
    COW_AT(1007d43d)
    t4 = rd32(COW_IMG(0x1007d594u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1007d444u: goto L_1007d444;
    case 0x1007d4bau: goto L_1007d4ba;
    case 0x1007d4ccu: goto L_1007d4cc;
    case 0x1007d4feu: goto L_1007d4fe;
    case 0x1007d510u: goto L_1007d510;
    case 0x1007d547u: goto L_1007d547;
    default: rt_fatal(g, COW_IMG(0x1007d43du), "switch");
    }
    return 0;
L_1007d3f7: ;
    COW_AT(1007d3f7)
    if (esi != 0x57u)
    {
        edx = in_edx;
        loc_4 = self;
        goto L_1007d56f;
    }
    COW_AT(1007d400)
    wr8(sp0 + 0xcu, 5u);
    loc_4 = (self & 0xffffff00u) | 1u;
    goto L_1007d40a;
L_1007d444: ;
    COW_AT(1007d444)
    t38 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->esp = sp0 - 8u;
    t39 = cow_call_regs(g, COW_IMG(0x1007a1c0u), eax, rd32(COW_IMG(0x103551e0u)), t38, 1, 4, t38, 1u, 0u, 1u);
    t40 = g->edx;
    if (t39 != 0u)
    {
        eax = t39;
        goto L_1007d47b;
    }
    edx = t40;
    COW_AT(1007d460)
    t41 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1007c740u), 2, t41, COW_IMG(0x1007d5b0u));
    t42 = g->edx;
    g->esi = in_esi;
    g->edx = t42;
    return esi;
L_1007d47b: ;
    COW_AT(1007d47b)
    t43 = rd32(eax + 4u);
    if ((t43 & 0xff000000u) != 0x1000000u)
    {
        ecx = t43;
        goto L_1007d4a3;
    }
    edx = t43 & 0xff000000u;
    COW_AT(1007d48e)
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9fu);
    t44 = g->edx;
    g->esi = in_esi;
    g->edx = t44;
    return esi;
L_1007d4a3: ;
    COW_AT(1007d4a3)
    t45 = rd32(sp0 + 0xcu);
    t46 = (eax & 0xffff0000u) | rd16(eax);
    g->edx = t45;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e8fd0u), 3, ecx, t46, t45);
    t47 = g->edx;
    g->esi = in_esi;
    g->edx = t47;
    return esi;
L_1007d4ba: ;
    COW_AT(1007d4ba)
    t36 = rd32(sp0 + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e9050u), 1, t36);
    t37 = g->edx;
    g->esi = in_esi;
    g->edx = t37;
    return esi;
L_1007d4cc: ;
    COW_AT(1007d4cc)
    t24 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t25 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t26 = cow_call_regs(g, COW_IMG(0x10077c30u), t24, ecx, g->edx, 1, 1, t24);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_1007d55d;
    }
    COW_AT(1007d4e2)
    t29 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    t30 = rd32(sp0 + 0xcu);
    g->edx = t29;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e9220u), 2, t30, t29);
    t31 = g->edx;
    g->esi = in_esi;
    g->edx = t31;
    return esi;
L_1007d4fe: ;
    COW_AT(1007d4fe)
    t22 = rd32(sp0 + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e9090u), 1, t22);
    t23 = g->edx;
    g->esi = in_esi;
    g->edx = t23;
    return esi;
L_1007d510: ;
    COW_AT(1007d510)
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t14 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x10077c30u), t13, ecx, g->edx, 1, 1, t13);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_1007d55d;
    }
    COW_AT(1007d526)
    t18 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    t19 = rd32(sp0 + 0xcu);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t20 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e9420u), 3, t19, t18, loc_4);
    t21 = g->edx;
    g->esi = in_esi;
    g->edx = t21;
    return esi;
L_1007d547: ;
    COW_AT(1007d547)
    t5 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t6 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10077c30u), t5, ecx, g->edx, 1, 1, t5);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u) goto L_1007d576;
    eax = t7;
    ecx = t8;
    edx = t9;
L_1007d55d: ;
    COW_AT(1007d55d)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t32 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t33 = g->ecx;
    t34 = g->edx;
    g->edx = t34;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t32, 9u);
    t35 = g->edx;
    edx = t35;
L_1007d56f: ;
    COW_AT(1007d56f)
    g->esi = in_esi;
    g->edx = edx;
    return -esi;
L_1007d576: ;
    COW_AT(1007d576)
    t10 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    t11 = rd32(sp0 + 0xcu);
    g->edx = t10;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100e9420u), 3, t11, t10, 4u);
    t12 = g->edx;
    edx = t12;
L_1007d58f: ;
    COW_AT(1007d58f)
    g->esi = in_esi;
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007d3e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007d3ebu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007d3f7u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007d400u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1007d40au:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d41au:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d430u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d43du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d444u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d460u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d47bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d48eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d4a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d4bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d4ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d4e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d4feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d510u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d526u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d547u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d55du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d56fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d576u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1007d58fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007d3e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007d3e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
