/* f_0x10264480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10264480(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102644abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102644ab;
    case 0x102644bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102644bd;
    case 0x102644c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; goto E_102644c3;
    case 0x102644ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = rd32(sp0 - 0x1cu) - 0xa4u; goto E_102644ce;
    case 0x102644d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; goto E_102644d4;
    case 0x102644ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; self = rd32(sp0 - 0x1cu) - 0xa4u; goto E_102644ec;
    case 0x102644f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; goto E_102644f2;
    case 0x1026450au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1026450a;
    case 0x10264520u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264520;
    case 0x10264528u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264528;
    case 0x1026452fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1026452f;
    case 0x10264534u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi - 0xa4u; goto E_10264534;
    case 0x10264539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi - 0xa4u; goto E_10264539;
    case 0x10264542u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10264542;
    case 0x10264557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264557;
    case 0x10264567u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264567;
    case 0x10264574u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264574;
    case 0x10264578u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_10264578;
    case 0x1026457fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi - 0xa4u; goto E_1026457f;
    case 0x10264586u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10264586;
    default: break;
    }
#endif

    COW_AT(10264480)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327c78u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, self + 0xa4u);
    wr32(sp0 - 0x10u, self + 0xa4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xa4u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    ecx = t2;
    edx = t3;
    COW_AT(102644ab)
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0xc4u) == 0u) goto L_1026450a;
    eax = rd32(self + 0xc4u);
    COW_AT(102644bd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329218u)), 0);   /* kernel32.dll!GetCurrentThreadId */
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(102644c3)
    wr32(sp0 - 0x1cu, self + 0xa4u);
    if (rd32(self + 0xc8u) != eax)
    {
        ecx = rd32(self + 0xc8u);
        goto L_102644ec;
    }
    ecx = rd32(self + 0xc8u);
    COW_AT(102644ce)
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    COW_AT(102644d4)
    t6 = rd32(sp0 - 0xcu);
    t7 = rd32(sp0 - 0x14u);
    t8 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t6);
    g->ebx = in_ebx;
    g->esi = t7;
    g->edi = t8;
    return 0x80040293u;
L_102644ec: ;
    COW_AT(102644ec)
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    COW_AT(102644f2)
    t9 = rd32(sp0 - 0xcu);
    t10 = rd32(sp0 - 0x14u);
    t11 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t9);
    g->ebx = in_ebx;
    g->esi = t10;
    g->edi = t11;
    return 0x80040294u;
L_1026450a: ;
    COW_AT(1026450a)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 2u);
    wr32(sp0 - 0x2cu, self + 0xc0u);
    g->eax = self + 0xc0u;
    g->edx = edx;
    t12 = rd32(COW_IMG(0x103291a4u));
    g->esp = sp0 - 0x1cu;
    t13 = cow_cdecl(g, t12, 4, self + 0xc0u, 2u, 0u, 0u);   /* kernel32.dll!GetCurrentProcess */
    t14 = g->edx;
    eax = t13;
    edx = t14;
    ebx = t12;
    COW_AT(10264520)
    wr32(sp0 - 0x30u, eax);
    wr32(sp0 - 0x34u, arg1);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t15 = cow_thiscall_cdecl(g, ebx, arg1, 2, arg1, eax);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(10264528)
    wr32(sp0 - 0x38u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t18 = cow_stdcall(g, rd32(COW_IMG(0x10329220u)), 7, eax, arg1, rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));   /* kernel32.dll!DuplicateHandle */
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1026452f)
    if (eax != 0u)
    {
        ebx = rd32(sp0 - 0x1cu);
        goto L_10264557;
    }
    ebx = rd32(sp0 - 0x1cu);
    COW_AT(10264534)
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t21 = cow_fastcall(g, COW_IMG(0x10266ad0u), ecx, edx, 0);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(10264539)
    wr32(sp0 - 0x1cu, self + 0xa4u);
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    esi = eax;
    COW_AT(10264542)
    t24 = rd32(sp0 - 0xcu);
    t25 = rd32(sp0 - 0x14u);
    t26 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t24);
    g->ebx = ebx;
    g->esi = t25;
    g->edi = t26;
    return esi;
L_10264557: ;
    COW_AT(10264557)
    wr32(self + 0xc4u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t27 = cow_stdcall(g, rd32(COW_IMG(0x10329218u)), 0);   /* kernel32.dll!GetCurrentThreadId */
    eax = t27;
    COW_AT(10264567)
    t28 = rd32(self);
    wr32(self + 0xc8u, eax);
    g->eax = eax;
    g->edx = t28;
    g->esp = sp0 - 0x18u;
    t29 = cow_thiscall(g, rd32(t28 + 0x64u), self, 0);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(10264574)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(10264578)
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t32 = cow_fastcall(g, COW_IMG(0x102645a0u), self, edx, 0);
        t33 = g->ecx;
        t34 = g->edx;
        eax = t32;
        ecx = t33;
        edx = t34;
    }
    COW_AT(1026457f)
    wr32(sp0 - 0x1cu, self + 0xa4u);
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xa4u);   /* kernel32.dll!LeaveCriticalSection */
    COW_AT(10264586)
    t35 = rd32(sp0 - 0xcu);
    t36 = rd32(sp0 - 0x14u);
    t37 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t35);
    g->ebx = ebx;
    g->esi = t36;
    g->edi = t37;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102644abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102644bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102644c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x102644ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = rd32(sp0 - 0x1cu) - 0xa4u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102644d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102644ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        self = rd32(sp0 - 0x1cu) - 0xa4u;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102644f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1026450au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264520u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x2cu;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10264528u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x34u;
        g->edi = self + 0xa4u;
        wr32(sp0 - 0x34u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x1026452fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264534u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi - 0xa4u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264539u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi - 0xa4u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264542u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264557u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264567u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264574u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x10264578u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = self + 0xa4u;
        (void)sp0;
        return 1;
    }
    case 0x1026457fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi - 0xa4u;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10264586u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264480(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
