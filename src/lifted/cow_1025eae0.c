/* f_0x1025eae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025eae0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025eb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = g->edi - 0xc4u; g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025eb1c;
    case 0x1025eb39u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025eb39;
    case 0x1025eb42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1025eb42;
    case 0x1025eb60u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025eb60;
    case 0x1025eb74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025eb74;
    case 0x1025eb76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025eb76;
    case 0x1025eb81u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->edi - 0xc4u; goto E_1025eb81;
    case 0x1025eb9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025eb9e;
    case 0x1025eba4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1025eba4;
    case 0x1025ebcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1025ebcd;
    default: break;
    }
#endif

    COW_AT(1025eae0)
    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327673u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0xc4u);
    wr32(sp0 - 0x14u, self + 0xc4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, self + 0xc4u);   /* kernel32.dll!EnterCriticalSection */
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t2;
        edx = t3;
        goto L_1025eb39;
    }
    eax = rd32(sp0 + 4u);
    ecx = t2;
    edx = t3;
    COW_AT(1025eb1c)
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t4 = g->edx;
    t5 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t5);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t4;
    return 0u;
L_1025eb39: ;
    COW_AT(1025eb39)
    if (rd32(self + 0x78u) != 0u)
    {
        loc_18 = in_ebx;
        loc_1c = in_esi;
        loc_20 = in_edi;
        goto L_1025ebcd;
    }
    COW_AT(1025eb42)
    wr32(sp0 - 0x24u, 0xe0u);
    wr32(sp0 + 4u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xe0u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x10u, t6);
    wr8(sp0 - 4u, 1u);
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
    COW_AT(1025eb74)
        eax = 0u;
    }
    else
    {
        eax = t6;
        edx = t8;
    COW_AT(1025eb60)
        wr32(sp0 - 0x24u, COW_IMG(0x10385e28u));
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x2cu, self);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, COW_IMG(0x1025f8d0u), eax, 3, self, sp0 + 4u, COW_IMG(0x10385e28u));
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    COW_AT(1025eb76)
    wr8(sp0 - 4u, 0u);
    wr32(self + 0x78u, eax);
    if (eax != 0u) goto L_1025eb9e;
    COW_AT(1025eb81)
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t12 = g->edx;
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 0x18u);
    t15 = rd32(sp0 - 0x1cu);
    t16 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t13);
    g->ebx = t14;
    g->esi = t15;
    g->edi = t16;
    g->edx = t12;
    return 0u;
L_1025eb9e: ;
    COW_AT(1025eb9e)
    if ((int32_t)rd32(sp0 + 4u) >= 0)
    {
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_1025ebcd;
    }
    COW_AT(1025eba4)
    wr32(sp0 - 0x24u, 1u);
    g->eax = eax;
    g->edx = rd32(eax);
    t17 = rd32(eax);
    g->esp = sp0 - 0x20u;
    t18 = cow_thiscall(g, rd32(t17 + 0xcu), eax, 1, 1u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x24u, self + 0xc4u);
    wr32(self + 0x78u, 0u);
    g->edx = t20;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t21 = g->edx;
    t22 = rd32(sp0 - 0xcu);
    t23 = rd32(sp0 - 0x18u);
    t24 = rd32(sp0 - 0x1cu);
    t25 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t22);
    g->ebx = t23;
    g->esi = t24;
    g->edi = t25;
    g->edx = t21;
    return 0u;
L_1025ebcd: ;
    COW_AT(1025ebcd)
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    t26 = rd32(self + 0x78u);
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, self + 0xc4u);   /* kernel32.dll!LeaveCriticalSection */
    t27 = g->edx;
    t28 = rd32(sp0 - 0xcu);
    t29 = rd32(sp0 - 0x18u);
    t30 = rd32(sp0 - 0x1cu);
    t31 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t28);
    g->ebx = t29;
    g->esi = t30;
    g->edi = t31;
    g->edx = t27;
    return t26;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025eae0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025eb1cu:
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
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025eb39u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025eb42u:
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
        self = g->esi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1025eb60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025eb74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025eb76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025eb81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->edi - 0xc4u;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1025eb9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025eba4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = 0u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    case 0x1025ebcdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->edi = self + 0xc4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025eae0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025eae0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
