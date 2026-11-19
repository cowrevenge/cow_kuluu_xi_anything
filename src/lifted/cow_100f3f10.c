/* f_0x100f3f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100f3f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f3f20u: self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3f20;
    case 0x100f3f27u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3f27;
    case 0x100f3f30u: self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3f30;
    case 0x100f3f43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f3f43;
    case 0x100f3f47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f3f47;
    case 0x100f3f51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; sf = g->sf; goto E_100f3f51;
    case 0x100f3f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_100f3f6e;
    case 0x100f3f7au: eax = g->eax; edx = g->edx; edi = g->edi; sf = g->sf; goto E_100f3f7a;
    case 0x100f3f85u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; sf = g->sf; goto E_100f3f85;
    case 0x100f3f98u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3f98;
    case 0x100f3fa2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f3fa2;
    case 0x100f3fb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; goto E_100f3fb5;
    case 0x100f3fbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fbe;
    case 0x100f3fc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fc0;
    case 0x100f3fc8u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fc8;
    case 0x100f3fcau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fca;
    case 0x100f3fd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fd3;
    case 0x100f3fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fe6;
    case 0x100f3fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f3fef;
    case 0x100f400au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f400a;
    case 0x100f400cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f400c;
    case 0x100f4024u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; goto E_100f4024;
    case 0x100f402du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f402d;
    case 0x100f402fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f402f;
    case 0x100f4037u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f4037;
    case 0x100f4039u: eax = g->eax; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f4039;
    case 0x100f4040u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f4040;
    case 0x100f4052u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; sf = g->sf; goto E_100f4052;
    case 0x100f405bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f405b;
    case 0x100f4062u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = g->edi; sf = g->sf; goto E_100f4062;
    case 0x100f407du: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f407d;
    case 0x100f4087u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f4087;
    case 0x100f409au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f409a;
    case 0x100f40a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f40a3;
    default: break;
    }
#endif

    COW_AT(100f3f10)
    wr32(sp0 - 4u, in_esi);
    if (arg1 > 3u) goto L_100f40a3;
    COW_AT(100f3f20)
    t1 = rd32(COW_IMG(0x100f40acu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f3f27u: goto L_100f3f27;
    case 0x100f3f30u: goto L_100f3f30;
    case 0x100f3f98u: goto L_100f3f98;
    case 0x100f407du: goto L_100f407d;
    default: rt_fatal(g, COW_IMG(0x100f3f20u), "switch");
    }
    return 0;
L_100f3f27: ;
    COW_AT(100f3f27)
    g->esi = in_esi;
    g->edi = in_edi;
    return 3u;
L_100f3f30: ;
    COW_AT(100f3f30)
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = arg1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t20 = cow_stdcall(g, rd32(COW_IMG(0x103291e4u)), 1, self + 0xe48u);   /* kernel32.dll!GetFileAttributesA */
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0xffffffffu)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    else
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    COW_AT(100f3f43)
        if (eax & 1u)
        {
    COW_AT(100f3f47)
            t23 = (eax & 0xffffff00u) | (eax & 0xfeu);
            wr32(sp0 - 0xcu, t23);
            wr32(sp0 - 0x10u, self + 0xe48u);
            g->eax = t23;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t24 = cow_stdcall(g, rd32(COW_IMG(0x103291e0u)), 2, self + 0xe48u, t23);   /* kernel32.dll!SetFileAttributesA */
            t25 = g->ecx;
            t26 = g->edx;
            eax = t24;
            ecx = t25;
            edx = t26;
        }
    }
    COW_AT(100f3f51)
    wr32(sp0 - 0xcu, self + 0xe48u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t27 = cow_stdcall(g, rd32(COW_IMG(0x10329124u)), 1, self + 0xe48u);   /* kernel32.dll!DeleteFileA */
    t28 = g->ecx;
    t29 = g->edx;
    wr32(sp0 - 0xcu, 0xeu);
    wr32(sp0 - 0x10u, self + 0xe48u);
    t30 = cow_cdecl(g, COW_IMG(0x10310ebfu), 2, self + 0xe48u, 0xeu);
    wr32(self + 0x208u, t30);
    if ((int32_t)t30 >= 0)
    {
        edi = rd32(sp0 - 8u);
        goto L_100f3f85;
    }
    eax = t30;
    edi = rd32(sp0 - 8u);
    COW_AT(100f3f6e)
    if (arg3 == 0u) goto L_100f4052;
    COW_AT(100f3f7a)
    wr32(arg3, eax);
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x13u;
L_100f3f85: ;
    COW_AT(100f3f85)
    wr32(self + 0x20cu, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x16u;
L_100f3f98: ;
    COW_AT(100f3f98)
    if ((int32_t)rd32(self + 0x20cu) >= 0)
    {
        eax = rd32(self + 0x20cu);
        goto L_100f400c;
    }
    COW_AT(100f3fa2)
    t2 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t2);
    g->eax = t2;
    g->ecx = self;
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
        goto L_100f3fbe;
    }
    COW_AT(100f3fb5)
    g->esi = rd32(sp0 - 4u);
    g->edi = in_edi;
    return 0x16u;
L_100f3fbe: ;
    COW_AT(100f3fbe)
    if (!sf) goto L_100f3fd3;
    COW_AT(100f3fc0)
    if (arg3 != 0u)
    {
    COW_AT(100f3fc8)
        wr32(arg3, eax);
    }
    COW_AT(100f3fca)
    t6 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t6);
    ecx = t6;
L_100f4040: ;
    COW_AT(100f4040)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    edi = in_edi;
L_100f4052: ;
    COW_AT(100f4052)
    g->esi = rd32(sp0 - 4u);
    g->edi = edi;
    return 0x13u;
L_100f3fd3: ;
    COW_AT(100f3fd3)
    t7 = rd32(rd32(self + 0xa0u) + 0x38u);
    t8 = rd32(self + 0xa0u);
    t9 = rd32(rd32(self + 0xa0u) + 0x38u);
    wr32(self + 0x20cu, t7);
    if ((int32_t)t9 > 0)
    {
        eax = t7;
        goto L_100f3fef;
    }
    edx = t8;
    COW_AT(100f3fe6)
    t10 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t10);
    eax = t10;
L_100f4062: ;
    COW_AT(100f4062)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10310ed5u), 0);
    wr32(self + 0x208u, 0xffffffffu);
    g->esi = rd32(sp0 - 4u);
    g->edi = in_edi;
    return 0x17u;
L_100f3fef: ;
    COW_AT(100f3fef)
    wr32(sp0 - 8u, eax);
    t11 = rd32(self + 0xa4u);
    wr32(sp0 - 0xcu, t11);
    t12 = rd32(self + 0x208u);
    wr32(sp0 - 0x10u, t12);
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10310f0cu), 3, t12, t11, eax);
    t14 = g->edx;
    if ((int32_t)t13 >= 0) goto L_100f4024;
    eax = t13;
    edx = t14;
    COW_AT(100f400a)
L_100f402f: ;
    COW_AT(100f402f)
    if (arg3 != 0u)
    {
    COW_AT(100f4037)
        wr32(arg3, eax);
    }
    COW_AT(100f4039)
    t18 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t18);
    eax = t18;
    ecx = arg3;
    goto L_100f4040;
L_100f400c: ;
    COW_AT(100f400c)
    wr32(sp0 - 8u, sp0 + 4u);
    t15 = rd32(self + 0x208u);
    wr32(sp0 - 0xcu, t15);
    g->eax = eax;
    g->edx = t15;
    g->esp = sp0 - 4u;
    t16 = cow_cdecl(g, COW_IMG(0x10310f17u), 2, t15, sp0 + 4u);
    t17 = g->edx;
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        sf = (int32_t)t16 < 0;
        goto L_100f402d;
    }
L_100f4024: ;
    COW_AT(100f4024)
    g->esi = rd32(sp0 - 4u);
    g->edi = in_edi;
    return 0x16u;
L_100f402d: ;
    COW_AT(100f402d)
    if (!sf) goto L_100f405b;
    goto L_100f402f;
L_100f405b: ;
    COW_AT(100f405b)
    t19 = rd32(self + 0x208u);
    wr32(sp0 - 8u, t19);
    ecx = t19;
    goto L_100f4062;
L_100f407d: ;
    COW_AT(100f407d)
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
    COW_AT(100f4087)
        wr32(sp0 - 8u, eax);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    COW_AT(100f409a)
    g->esi = in_esi;
    g->edi = in_edi;
    return 6u;
L_100f40a3: ;
    COW_AT(100f40a3)
    g->esi = in_esi;
    g->edi = in_edi;
    return 0x15u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f3f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f3f20u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3f27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = arg1;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3f43u:
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
        g->edi = self + 0xe48u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f47u:
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
        g->edi = self + 0xe48u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f51u:
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
        g->edi = self + 0xe48u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f7au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f3f85u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3f98u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3fa2u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f3fb5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3fbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x100f3fc0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3fc8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f3fcau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3fd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3fe6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f3fefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f400au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f400cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4024u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f402du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->of = (uint8_t)(0u);
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f402fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f4037u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f4039u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100f4040u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f4052u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f405bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 4u;
        wr32(sp0 - 8u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x100f4062u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = g->edi;
        sf = g->sf;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x100f407du:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f4087u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f409au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f40a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t sf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
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
void cow_adapter_100f3f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f3f10(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
