/* f_0x1025f020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025f020(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
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
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025f071u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025f071;
    case 0x1025f088u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025f088;
    case 0x1025f095u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025f095;
    case 0x1025f0a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1025f0a1;
    case 0x1025f0b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025f0b9;
    case 0x1025f0dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0da;
    case 0x1025f0e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0e5;
    case 0x1025f0ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0ec;
    case 0x1025f0f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0f3;
    case 0x1025f0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0f9;
    case 0x1025f0ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f0ff;
    case 0x1025f10bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f10b;
    case 0x1025f124u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f124;
    case 0x1025f14fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f14f;
    case 0x1025f158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp - 0x94u; goto E_1025f158;
    case 0x1025f168u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1025f168;
    case 0x1025f18du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; goto E_1025f18d;
    default: break;
    }
#endif

    COW_AT(1025f020)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103276b0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0x7cu);
    wr32(sp0 - 0x10u, self + 0x7cu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x7cu);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 0x24u, t4);
    t5 = rd32(self + 0x78u) + 0x98u;
    wr32(sp0 - 0x28u, t5);
    wr32(sp0 - 4u, 0u);
    wr32(self + 0xb4u, 1u);
    g->eax = t5;
    g->ecx = t2;
    t6 = cow_call_regs(g, COW_IMG(0x10263590u), g->eax, g->ecx, t3, 0, 2, t5, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 == 0u)
    {
        edx = t8;
        ebx = t4;
    COW_AT(1025f088)
        if (rd32(rd32(self + 0x78u) + 0xccu) == 0u)
        {
            eax = rd32(rd32(self + 0x78u) + 0xccu);
            ecx = rd32(self + 0x78u);
            goto L_1025f0b9;
        }
        eax = rd32(rd32(self + 0x78u) + 0xccu);
        ecx = rd32(self + 0x78u);
    COW_AT(1025f095)
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 0x20u;
        t11 = cow_thiscall(g, rd32(t10 + 0x24u), ecx, 1, eax);
        t12 = g->ecx;
        t13 = g->edx;
        if ((int32_t)t11 >= 0)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_1025f0b9;
        }
        eax = t11;
        ecx = t12;
        edx = t13;
        ebp = t11;
    COW_AT(1025f0a1)
        wr32(sp0 - 0x24u, self + 0x7cu);
        wr32(self + 0xb4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x7cu);   /* kernel32.dll!LeaveCriticalSection */
        t14 = g->edx;
        eax = ebp;
        edx = t14;
    }
    else
    {
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(1025f071)
        wr32(sp0 - 0x24u, self + 0x7cu);
        wr32(self + 0xb4u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0x7cu);   /* kernel32.dll!LeaveCriticalSection */
        t9 = g->edx;
        eax = 0x80004005u;
        edx = t9;
    }
L_1025f18d: ;
    COW_AT(1025f18d)
    t51 = rd32(sp0 - 0xcu);
    t52 = rd32(sp0 - 0x14u);
    t53 = rd32(sp0 - 0x18u);
    t54 = rd32(sp0 - 0x1cu);
    t55 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t51);
    g->ebx = t52;
    g->esi = t54;
    g->edi = t55;
    g->ebp = t53;
    g->edx = edx;
    return eax;
L_1025f0b9: ;
    COW_AT(1025f0b9)
    wr32(sp0 - 0x24u, self + 0x94u);
    wr32(sp0 + 4u, self + 0x94u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0x94u);   /* kernel32.dll!EnterCriticalSection */
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd32(self + 0x6cu);
    wr8(sp0 - 4u, 1u);
    if (t17 != 0u)
    {
        eax = t17;
        ecx = t15;
        goto L_1025f168;
    }
    ecx = t15;
    edx = t16;
    COW_AT(1025f0da)
    if (rd32(self + 0x70u) != 0u)
    {
        eax = rd32(self + 0x70u);
        goto L_1025f168;
    }
    COW_AT(1025f0e5)
    if (rd32(self + 0x60u) != 0u)
    {
        eax = rd32(self + 0x60u);
        goto L_1025f168;
    }
    eax = rd32(self + 0x60u);
    COW_AT(1025f0ec)
    if (rd32(self + 0x50u) != 0u)
    {
        ecx = rd32(self + 0x50u);
    COW_AT(1025f0f3)
        wr32(sp0 - 0x24u, ebx);
        g->esp = sp0 - 0x20u;
        cow_fastcall(g, COW_IMG(0x10267be0u), ecx, edx, 1, ebx);
        t18 = g->edx;
        edx = t18;
    }
    COW_AT(1025f0f9)
    if (rd32(self + 0x64u) != 1u) goto L_1025f124;
    COW_AT(1025f0ff)
    wr32(sp0 - 0x24u, ebx);
    g->eax = rd32(self);
    g->edx = edx;
    t19 = rd32(self);
    g->esp = sp0 - 0x20u;
    t20 = cow_thiscall(g, rd32(t19 + 0x54u), self, 1, ebx);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != 0u) goto L_1025f124;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(1025f10b)
    wr32(self + 0xb4u, eax);
    wr32(sp0 - 0x24u, self + 0x94u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t23 = rd32(COW_IMG(0x10329188u));
    g->esp = sp0 - 0x20u;
    t24 = cow_stdcall(g, t23, 1, self + 0x94u);   /* kernel32.dll!LeaveCriticalSection */
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t26;
    cow_thiscall(g, t23, t25, 1, self + 0x7cu);
    t27 = g->edx;
    eax = 0x8004022bu;
    edx = t27;
    goto L_1025f18d;
L_1025f124: ;
    COW_AT(1025f124)
    wr32(sp0 - 0x24u, ebx);
    t28 = rd32(rd32(self + 0x78u) + 0xc0u);
    t29 = rd32(self + 0x78u);
    wr32(self + 0xb8u, t28);
    t30 = rd32(t29 + 0xc4u);
    wr32(self + 0x6cu, ebx);
    wr32(self + 0xbcu, t30);
    g->edx = t28;
    t31 = rd32(ebx);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(t31 + 4u), t31, 1, ebx);
    t32 = g->ecx;
    t33 = g->edx;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        ecx = t32;
        edx = t33;
    }
    else
    {
        eax = rd32(self + 0x64u);
        edx = t33;
    COW_AT(1025f14f)
        wr32(sp0 - 0x24u, 1u);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t34 = cow_fastcall(g, COW_IMG(0x1025f6d0u), self, edx, 1, 1u);
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    }
    COW_AT(1025f158)
    wr32(sp0 - 0x24u, self + 0x94u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t37 = rd32(COW_IMG(0x10329188u));
    g->esp = sp0 - 0x20u;
    t38 = cow_stdcall(g, t37, 1, self + 0x94u);   /* kernel32.dll!LeaveCriticalSection */
    t39 = g->ecx;
    t40 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t40;
    cow_thiscall(g, t37, t39, 1, self + 0x7cu);
    t41 = g->edx;
    eax = 0u;
    edx = t41;
    goto L_1025f18d;
L_1025f168: ;
    COW_AT(1025f168)
    t42 = rd32(self + 0x5cu);
    wr32(sp0 - 0x24u, t42);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t42;
    g->esp = sp0 - 0x20u;
    t43 = cow_stdcall(g, rd32(COW_IMG(0x103291c4u)), 1, t42);   /* kernel32.dll!SetEvent */
    t44 = g->ecx;
    t45 = g->edx;
    wr32(self + 0xb4u, 0u);
    wr32(sp0 - 0x24u, self + 0x94u);
    g->ecx = t44;
    g->edx = t45;
    t46 = rd32(COW_IMG(0x10329188u));
    t47 = cow_stdcall(g, t46, 1, self + 0x94u);   /* kernel32.dll!LeaveCriticalSection */
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0x24u, self + 0x7cu);
    g->edx = t49;
    cow_thiscall(g, t46, t48, 1, self + 0x7cu);
    t50 = g->edx;
    eax = 0x8000ffffu;
    edx = t50;
    goto L_1025f18d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025f020(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025f071u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f088u:
    {
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->ebp = 0u;
        g->edi = self + 0x7cu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025f095u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x7cu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025f0a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
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
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x7cu;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025f0dau:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0e5u:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0ecu:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0f3u:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0f9u:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f0ffu:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f10bu:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f124u:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f14fu:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f158u:
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
        self = g->ebp - 0x94u;
        g->esp = sp0 - 0x20u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f168u:
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
        g->esp = sp0 - 0x20u;
        g->ebp = self + 0x94u;
        g->edi = self + 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1025f18du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f020(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025f020(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
