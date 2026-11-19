/* f_0x10265500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10265500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
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
    cow_frame(g, sp0, 56u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10265520u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10265520;
    case 0x10265525u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10265525;
    case 0x10265527u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10265527;
    case 0x10265547u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10265547;
    case 0x10265563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265563;
    case 0x1026556cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1026556c;
    case 0x10265573u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265573;
    case 0x1026557au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1026557a;
    case 0x1026558au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1026558a;
    case 0x10265593u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265593;
    case 0x10265597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265597;
    case 0x102655b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_102655b4;
    case 0x102655d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102655d3;
    case 0x102655ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102655dd;
    case 0x102655ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102655eb;
    case 0x10265608u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265608;
    case 0x10265628u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10265628;
    case 0x1026562fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_1026562f;
    default: break;
    }
#endif

    COW_AT(10265500)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327dd8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    if (self == 0u)
    {
        eax = t1;
        loc_c = t1;
    COW_AT(10265525)
        ebp = 0u;
    }
    else
    {
        eax = t1;
        loc_c = t1;
    COW_AT(10265520)
        ebp = self + 0x10u;
    }
    COW_AT(10265527)
    wr32(sp0 - 0x24u, ebp);
    wr32(sp0 - 0x10u, ebp);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, ebp);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10265270u), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        edi = t4;
        goto L_10265563;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    edi = t4;
    COW_AT(10265547)
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu);
    t9 = rd32(sp0 - 0x14u);
    t10 = rd32(sp0 - 0x18u);
    t11 = rd32(sp0 - 0x1cu);
    t12 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t8);
    g->ebx = t9;
    g->esi = t11;
    g->edi = t12;
    g->ebp = t10;
    g->edx = t7;
    return edi;
L_10265563: ;
    COW_AT(10265563)
    if (edi == 1u) goto L_1026562f;
    COW_AT(1026556c)
    if (rd32(self + 0x60u) != 0u)
    {
        eax = rd32(self + 0x60u);
    COW_AT(10265573)
        g->esp = sp0 - 0x20u;
        cow_fastcall(g, COW_IMG(0x10265660u), self, edx, 0);
        t13 = g->edx;
        edx = t13;
    }
    COW_AT(1026557a)
    if ((int32_t)rd32(self + 0x44u) <= 1)
    {
        ecx = rd32(self + 0x44u);
        edi = rd32(self + 0x40u) + rd32(self + 0x48u);
    }
    else
    {
        ecx = rd32(self + 0x44u);
        edi = rd32(self + 0x40u) + rd32(self + 0x48u);
    COW_AT(1026558a)
        t14 = cow_divs(g, edi, ecx);
        t15 = cow_mods(g, edi, ecx);
        if (t15 == 0u)
        {
            edx = t15;
        }
        else
        {
            edx = t15;
    COW_AT(10265593)
            edi = ecx + edi - edx;
            ecx = ecx - edx;
        }
    }
    COW_AT(10265597)
    wr32(sp0 - 0x24u, 4u);
    wr32(sp0 - 0x28u, 0x1000u);
    t16 = rd32(self + 0x38u) * edi;
    wr32(sp0 - 0x2cu, t16);
    wr32(sp0 - 0x30u, 0u);
    g->eax = t16;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t17 = cow_stdcall(g, rd32(COW_IMG(0x10329228u)), 4, 0u, t16, 0x1000u, 4u);   /* kernel32.dll!VirtualAlloc */
    t18 = g->ecx;
    t19 = g->edx;
    wr32(self + 0x60u, t17);
    if (t17 != 0u)
    {
        eax = t17;
        edx = t19;
        goto L_102655d3;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
L_102655b4: ;
    COW_AT(102655b4)
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
    t33 = g->edx;
    t34 = rd32(sp0 - 0xcu);
    t35 = rd32(sp0 - 0x14u);
    t36 = rd32(sp0 - 0x18u);
    t37 = rd32(sp0 - 0x1cu);
    t38 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t34);
    g->ebx = t35;
    g->esi = t37;
    g->edi = t38;
    g->ebp = t36;
    g->edx = t33;
    return 0x8007000eu;
L_102655d3: ;
    COW_AT(102655d3)
    if ((int32_t)rd32(self + 0x3cu) >= (int32_t)rd32(self + 0x38u))
    {
        ecx = rd32(self + 0x3cu);
        goto L_10265628;
    }
    ecx = rd32(self + 0x3cu);
    ebx = eax;
L_102655dd: ;
    COW_AT(102655dd)
    wr32(sp0 - 0x24u, 0x48u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x48u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
        goto L_102655b4;
    }
    eax = t20;
    COW_AT(102655eb)
    t23 = rd32(self + 0x40u);
    wr32(sp0 - 0x24u, t23);
    t24 = ebx + rd32(self + 0x48u);
    wr32(sp0 - 0x28u, t24);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    wr32(sp0 - 0x30u, self);
    wr32(sp0 - 0x34u, 0u);
    g->eax = eax;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t25 = cow_thiscall(g, COW_IMG(0x102639a0u), eax, 5, 0u, self, sp0 - 0x10u, t24, t23);
    t26 = g->ecx;
    t27 = g->edx;
    if (t25 == 0u)
    {
        eax = t25;
        ecx = t26;
        edx = t27;
        goto L_102655b4;
    }
    eax = t25;
    edx = t27;
    COW_AT(10265608)
    t28 = rd32(self + 0x28u);
    wr32(eax + 0x1cu, t28);
    t29 = rd32(self + 0x2cu);
    wr32(self + 0x28u, eax);
    wr32(self + 0x2cu, t29 + 1u);
    t30 = rd32(self + 0x3cu) + 1u;
    t31 = rd32(self + 0x38u);
    t32 = rd32(self + 0x3cu);
    wr32(self + 0x3cu, t30);
    if ((int32_t)(t32 + 1u) < (int32_t)t31)
    {
        eax = t30;
        ecx = t31;
        ebx = ebx + edi;
        goto L_102655dd;
    }
    eax = t30;
    ecx = t31;
L_10265628: ;
    COW_AT(10265628)
    wr32(self + 0x4cu, 0u);
L_1026562f: ;
    COW_AT(1026562f)
    wr32(sp0 - 0x24u, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebp);   /* kernel32.dll!LeaveCriticalSection */
    t39 = g->edx;
    t40 = rd32(sp0 - 0xcu);
    t41 = rd32(sp0 - 0x14u);
    t42 = rd32(sp0 - 0x18u);
    t43 = rd32(sp0 - 0x1cu);
    t44 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t40);
    g->ebx = t41;
    g->esi = t43;
    g->edi = t44;
    g->ebp = t42;
    g->edx = t39;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10265500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10265520u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10265525u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10265527u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10265547u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10265563u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026556cu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10265573u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026557au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026558au:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10265593u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10265597u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102655b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102655d3u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102655ddu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x102655ebu:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10265608u:
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
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10265628u:
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
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1026562fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10265500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10265500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
