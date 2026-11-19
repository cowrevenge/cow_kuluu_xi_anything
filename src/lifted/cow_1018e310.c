/* f_0x1018e310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018e310(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_104;
    uint32_t loc_108;
    uint32_t loc_10c;
    uint32_t loc_110;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 296u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1018e329u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_10c = rd32(sp0 - 0x10cu); loc_108 = rd32(sp0 - 0x108u); goto E_1018e329;
    case 0x1018e339u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e339;
    case 0x1018e346u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e346;
    case 0x1018e349u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e349;
    case 0x1018e351u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e351;
    case 0x1018e353u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e353;
    case 0x1018e358u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e358;
    case 0x1018e38bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e38b;
    case 0x1018e38eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e38e;
    case 0x1018e39eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e39e;
    case 0x1018e3a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e3a8;
    case 0x1018e3b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e3b7;
    case 0x1018e3c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e3c5;
    case 0x1018e3c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e3c7;
    case 0x1018e3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e3d7;
    case 0x1018e3e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e3e4;
    case 0x1018e3e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e3e7;
    case 0x1018e3f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e3f1;
    case 0x1018e3fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e3fa;
    case 0x1018e416u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; goto E_1018e416;
    case 0x1018e48au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = g->edi; loc_104 = rd32(sp0 - 0x104u); goto E_1018e48a;
    default: break;
    }
#endif

    COW_AT(1018e310)
    wr32(sp0 - 0x108u, in_ebx);
    wr32(sp0 - 0x10cu, in_ebp);
    wr32(sp0 - 0x110u, in_esi);
    g->ebx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x110u;
    t1 = cow_thiscall(g, COW_IMG(0x1018e6a0u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    esi = 0u;
    loc_108 = in_ebx;
    loc_10c = in_ebp;
    loc_110 = in_esi;
L_1018e329: ;
    COW_AT(1018e329)
    wr32(sp0 - 0x114u, arg1);
    g->eax = eax;
    g->edx = edx;
    t3 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x110u;
    t4 = cow_thiscall(g, COW_IMG(0x101c4a90u), t3, 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_1018e349;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1018e339)
    wr32(sp0 - 0x114u, 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t7 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x64u);   /* kernel32.dll!Sleep */
    t8 = g->edx;
    if ((int32_t)esi > 20)
    {
        eax = t7;
        edx = t8;
        goto L_1018e349;
    }
    eax = t7;
    edx = t8;
    COW_AT(1018e346)
    esi = esi + 1u;
    loc_108 = rd32(sp0 - 0x108u);
    loc_10c = rd32(sp0 - 0x10cu);
    loc_110 = rd32(sp0 - 0x110u);
    goto L_1018e329;
L_1018e349: ;
    COW_AT(1018e349)
    wr32(sp0 - 0x104u, 0u);
    loc_104 = 0u;
L_1018e351: ;
    COW_AT(1018e351)
    esi = 0u;
L_1018e353: ;
    COW_AT(1018e353)
    if ((int32_t)esi >= 20) goto L_1018e3b7;
    COW_AT(1018e358)
    t9 = cow_divs(g, esi, 0x14u);
    t10 = cow_mods(g, esi, 0x14u);
    wr32(sp0 - 0x114u, t10);
    t11 = rd32(self + 0xdcu);
    wr32(sp0 - 0x118u, t11);
    wr32(sp0 - 0x11cu, sp0 - 0x100u);
    g->ebx = self;
    g->eax = sp0 - 0x100u;
    g->edx = t11;
    g->esp = sp0 - 0x110u;
    t12 = cow_cdecl(g, COW_IMG(0x1018e170u), 3, sp0 - 0x100u, t11, t10);
    t13 = g->edx;
    wr32(sp0 - 0x114u, sp0 - 0x100u);
    g->edx = t13;
    t14 = rd32(COW_IMG(0x10662dccu));
    t15 = cow_thiscall(g, COW_IMG(0x101c4a90u), t14, 1, sp0 - 0x100u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        ecx = t16;
        goto L_1018e38e;
    }
    eax = t15;
    edx = t17;
    COW_AT(1018e38b)
    esi = esi + 1u;
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1018e353;
L_1018e38e: ;
    COW_AT(1018e38e)
    t18 = rd32(sp0 - 0x104u);
    wr32(sp0 - 0x104u, t18 + 1u);
    if ((int32_t)t18 >= 20)
    {
        eax = t18 + 1u;
        edx = t18;
        goto L_1018e3a8;
    }
    eax = t18 + 1u;
    edx = t18;
    loc_104 = t18 + 1u;
    COW_AT(1018e39e)
    wr32(sp0 - 0x114u, 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t19 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x64u);   /* kernel32.dll!Sleep */
    t20 = g->edx;
    eax = t19;
    edx = t20;
    loc_104 = rd32(sp0 - 0x104u);
    goto L_1018e351;
L_1018e3a8: ;
    COW_AT(1018e3a8)
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xffffffffu;
L_1018e3b7: ;
    COW_AT(1018e3b7)
    if (rd8(self + 0xdau) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xdau);
        goto L_1018e48a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0xdau);
    COW_AT(1018e3c5)
    esi = 0u;
L_1018e3c7: ;
    COW_AT(1018e3c7)
    wr32(sp0 - 0x114u, arg1);
    g->eax = eax;
    g->edx = edx;
    t21 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x110u;
    t22 = cow_thiscall(g, COW_IMG(0x101c4a90u), t21, 1, arg1);
    t23 = g->ecx;
    t24 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        ecx = t23;
        edx = t24;
        goto L_1018e3e7;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(1018e3d7)
    wr32(sp0 - 0x114u, 0x64u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    t25 = cow_stdcall(g, rd32(COW_IMG(0x103290f8u)), 1, 0x64u);   /* kernel32.dll!Sleep */
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)esi > 20)
    {
        ecx = t26;
        edx = t27;
        goto L_1018e3e7;
    }
    eax = t25;
    edx = t27;
    COW_AT(1018e3e4)
    esi = esi + 1u;
    goto L_1018e3c7;
L_1018e3e7: ;
    COW_AT(1018e3e7)
    if (rd32(self + 0xd0u) == 0u)
    {
        eax = rd32(self + 0xd0u);
    }
    else
    {
        eax = rd32(self + 0xd0u);
    COW_AT(1018e3f1)
        wr32(sp0 - 0x114u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x110u;
        t28 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
        t29 = g->ecx;
        eax = t28;
        ecx = t29;
    }
    COW_AT(1018e3fa)
    t30 = rd16(self + 0xd8u);
    wr32(sp0 - 0x114u, t30);
    g->eax = eax;
    g->esp = sp0 - 0x108u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, t30, 1, 3, t30, rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu));
    t32 = g->edx;
    wr32(self + 0xd0u, t31);
    if (t31 == 0u)
    {
        eax = t31;
        edx = t32;
        goto L_1018e48a;
    }
    edx = t32;
    COW_AT(1018e416)
    wr32(sp0 - 0x114u, in_edi);
    wr32(sp0 - 0x118u, 0u);
    esi = self;
    edi = self + 0x64u;
    ecx = 0x19u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x11cu, 0x64u);
    wr32(sp0 - 0x120u, self + 0x64u);
    wr32(sp0 - 0x124u, arg1);
    g->esp = sp0 - 0x114u;
    cow_thiscall(g, COW_IMG(0x101c48f0u), rd32(COW_IMG(0x10662dccu)), 4, arg1, self + 0x64u, 0x64u, 0u);
    wr32(sp0 - 0x118u, 1u);
    t33 = rd16(self + 0xd8u);
    t34 = rd32(self + 0xccu);
    t35 = rd32(self + 0xd0u);
    esi = t34;
    edi = t35;
    ecx = t33 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t33 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t36 = rd16(self + 0xd8u);
    wr32(sp0 - 0x11cu, t36);
    t37 = rd32(self + 0xd0u);
    wr32(sp0 - 0x120u, t37);
    wr32(sp0 - 0x124u, arg1);
    g->edx = t37;
    cow_thiscall(g, COW_IMG(0x101c48f0u), rd32(COW_IMG(0x10662dccu)), 4, arg1, t37, t36, 1u);
    t38 = g->edx;
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x10cu);
    g->edx = t38;
    return 1u;
L_1018e48a: ;
    COW_AT(1018e48a)
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x118u, 0x64u);
    wr32(sp0 - 0x11cu, self);
    wr32(sp0 - 0x120u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x110u;
    cow_thiscall(g, COW_IMG(0x101c4930u), rd32(COW_IMG(0x10662dccu)), 4, arg1, self, 0x64u, 0u);
    t39 = g->edx;
    wr32(sp0 - 0x114u, 1u);
    t40 = rd16(self + 0xd8u);
    wr32(sp0 - 0x118u, t40);
    t41 = rd32(self + 0xccu);
    wr32(sp0 - 0x11cu, t41);
    wr32(sp0 - 0x120u, arg1);
    g->edx = t39;
    cow_thiscall(g, COW_IMG(0x101c4930u), rd32(COW_IMG(0x10662dccu)), 4, arg1, t41, t40, 1u);
    t42 = g->edx;
    g->ebx = rd32(sp0 - 0x108u);
    g->esi = rd32(sp0 - 0x110u);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x10cu);
    g->edx = t42;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1018e310(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1018e329u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_108;
        uint32_t loc_10c;
        uint32_t loc_110;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_10c = rd32(sp0 - 0x10cu);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e339u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e346u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e349u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e351u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e353u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e358u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e38bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e38eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e39eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e3a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        wr32(sp0 - 0x114u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x1018e3b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3e7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e3fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e416u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1018e48au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_104;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        loc_104 = rd32(sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e310(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1018e310(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
