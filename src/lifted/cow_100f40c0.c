/* f_0x100f40c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f40c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f40d0u: self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f40d0;
    case 0x100f40d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f40d7;
    case 0x100f40e0u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f40e0;
    case 0x100f40fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f40fb;
    case 0x100f4107u: eax = g->eax; edx = g->edx; sf = g->sf; goto E_100f4107;
    case 0x100f4112u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4112;
    case 0x100f4125u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4125;
    case 0x100f412fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f412f;
    case 0x100f4142u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f4142;
    case 0x100f414bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f414b;
    case 0x100f414du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f414d;
    case 0x100f4155u: eax = g->eax; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4155;
    case 0x100f4157u: eax = g->eax; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4157;
    case 0x100f4160u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4160;
    case 0x100f4173u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4173;
    case 0x100f417cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f417c;
    case 0x100f4197u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f4197;
    case 0x100f4199u: eax = g->eax; self = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4199;
    case 0x100f41b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f41b1;
    case 0x100f41bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41ba;
    case 0x100f41bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41bc;
    case 0x100f41c4u: eax = g->eax; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41c4;
    case 0x100f41c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41c6;
    case 0x100f41cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41cd;
    case 0x100f41dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; goto E_100f41df;
    case 0x100f41e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41e8;
    case 0x100f41efu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f41ef;
    case 0x100f420au: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f420a;
    case 0x100f4214u: eax = g->eax; self = g->ecx; in_edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4214;
    case 0x100f4227u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4227;
    case 0x100f4230u: eax = g->eax; ecx = g->ecx; edx = g->edx; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4230;
    default: break;
    }
#endif

    COW_AT(100f40c0)
    wr32(sp0 - 4u, in_esi);
    if (arg1 > 3u) goto L_100f4230;
    COW_AT(100f40d0)
    t1 = rd32(COW_IMG(0x100f423cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f40d7u: goto L_100f40d7;
    case 0x100f40e0u: goto L_100f40e0;
    case 0x100f4125u: goto L_100f4125;
    case 0x100f420au: goto L_100f420a;
    default: rt_fatal(g, COW_IMG(0x100f40d0u), "switch");
    }
    return 0;
L_100f40d7: ;
    COW_AT(100f40d7)
    g->esi = in_esi;
    return 3u;
L_100f40e0: ;
    COW_AT(100f40e0)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = self + 0xe48u;
    g->esp = sp0 - 4u;
    t20 = cow_cdecl(g, COW_IMG(0x10310ebfu), 2, self + 0xe48u, 1u);
    wr32(self + 0x208u, t20);
    if ((int32_t)t20 >= 0) goto L_100f4112;
    eax = t20;
    COW_AT(100f40fb)
    if (arg2 == 0u) goto L_100f41df;
    COW_AT(100f4107)
    wr32(arg2, eax);
    g->esi = rd32(sp0 - 4u);
    return 0x12u;
L_100f4112: ;
    COW_AT(100f4112)
    wr32(self + 0x20cu, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f4125: ;
    COW_AT(100f4125)
    if ((int32_t)rd32(self + 0x20cu) >= 0) goto L_100f4199;
    eax = rd32(self + 0x20cu);
    COW_AT(100f412f)
    t2 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t2);
    g->eax = eax;
    g->ecx = t2;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x10310ecau), 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        sf = (int32_t)t3 < 0;
        goto L_100f414b;
    }
    COW_AT(100f4142)
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f414b: ;
    COW_AT(100f414b)
    if (!sf) goto L_100f4160;
    COW_AT(100f414d)
    if (arg2 != 0u)
    {
    COW_AT(100f4155)
        wr32(arg2, eax);
    }
    COW_AT(100f4157)
    t6 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t6);
    ecx = arg2;
    edx = t6;
L_100f41cd: ;
    COW_AT(100f41cd)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
L_100f41df: ;
    COW_AT(100f41df)
    g->esi = rd32(sp0 - 4u);
    return 0x12u;
L_100f4160: ;
    COW_AT(100f4160)
    t7 = rd32(rd32(self + 0xa0u) + 0x38u);
    t8 = rd32(rd32(self + 0xa0u) + 0x38u);
    wr32(self + 0x20cu, t7);
    if ((int32_t)t8 > 0)
    {
        eax = t7;
        goto L_100f417c;
    }
    eax = t7;
    COW_AT(100f4173)
    t9 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t9);
    ecx = t9;
L_100f41ef: ;
    COW_AT(100f41ef)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    return 0x17u;
L_100f417c: ;
    COW_AT(100f417c)
    wr32(sp0 - 8u, eax);
    t10 = rd32(self + 0xa4u);
    wr32(sp0 - 0xcu, t10);
    t11 = rd32(self + 0x208u);
    wr32(sp0 - 0x10u, t11);
    g->eax = t11;
    g->edx = t10;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10310ef6u), 3, t11, t10, eax);
    t13 = g->edx;
    if ((int32_t)t12 >= 0) goto L_100f41b1;
    eax = t12;
    edx = t13;
    COW_AT(100f4197)
L_100f41bc: ;
    COW_AT(100f41bc)
    if (arg2 != 0u)
    {
    COW_AT(100f41c4)
        wr32(arg2, eax);
    }
    COW_AT(100f41c6)
    t18 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t18);
    ecx = t18;
    goto L_100f41cd;
L_100f4199: ;
    COW_AT(100f4199)
    wr32(sp0 - 8u, sp0 + 4u);
    t14 = rd32(self + 0x208u);
    wr32(sp0 - 0xcu, t14);
    g->eax = t14;
    g->ecx = self;
    g->edx = sp0 + 4u;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10310f01u), 2, t14, sp0 + 4u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        sf = (int32_t)t15 < 0;
        goto L_100f41ba;
    }
L_100f41b1: ;
    COW_AT(100f41b1)
    g->esi = rd32(sp0 - 4u);
    return 0x16u;
L_100f41ba: ;
    COW_AT(100f41ba)
    if (!sf) goto L_100f41e8;
    goto L_100f41bc;
L_100f41e8: ;
    COW_AT(100f41e8)
    t19 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t19);
    edx = t19;
    goto L_100f41ef;
L_100f420a: ;
    COW_AT(100f420a)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
    COW_AT(100f4214)
        wr32(sp0 - 8u, eax);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    COW_AT(100f4227)
    g->esi = in_esi;
    return 6u;
L_100f4230: ;
    COW_AT(100f4230)
    g->esi = in_esi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f40c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f40d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f40d7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f40e0u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f40fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4107u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4112u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4125u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f412fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4142u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f414bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100f414du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4155u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4157u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f4160u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4173u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f417cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4197u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4199u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f41b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f41bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f41bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f41c4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100f41c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f41cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f41dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f41e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f41efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        sf = g->sf;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f420au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f4214u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f4227u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4230u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        sf = g->sf;
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
void cow_adapter_100f40c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f40c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
