/* f_0x1015d9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015d9e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
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
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015d9f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015d9f6;
    case 0x1015da12u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015da12;
    case 0x1015da22u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015da22;
    case 0x1015da2au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015da2a;
    case 0x1015da43u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015da43;
    case 0x1015da5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015da5f;
    case 0x1015da6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015da6f;
    case 0x1015da77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015da77;
    case 0x1015da79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015da79;
    case 0x1015da92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015da92;
    case 0x1015daaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015daae;
    case 0x1015dabeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015dabe;
    case 0x1015dac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1015dac6;
    case 0x1015dac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_4 = rd32(sp0 - 4u); goto E_1015dac8;
    case 0x1015dad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015dad9;
    case 0x1015dae5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015dae5;
    case 0x1015daefu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015daef;
    case 0x1015dafbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1015dafb;
    default: break;
    }
#endif

    COW_AT(1015d9e0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        loc_8 = in_ebx;
        loc_c = in_ebp;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_1015da2a;
    }
    eax = t1;
    edx = t2;
    loc_4 = t1;
    loc_8 = in_ebx;
    loc_c = in_ebp;
    loc_10 = in_esi;
    loc_14 = in_edi;
L_1015d9f6: ;
    COW_AT(1015d9f6)
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->edx;
    wr32(sp0 - 0x18u, eax);
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, eax);
    t6 = g->edx;
    if (t3 == 0u)
    {
        edx = t6;
    }
    else
    {
        eax = t5;
        edx = t6;
        esi = t3;
    COW_AT(1015da12)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t7 = cow_thiscall(g, COW_IMG(0x10117460u), esi, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x18u, esi);
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t8, t9, 1, 1, esi);
        t10 = g->edx;
        edx = t10;
    }
    COW_AT(1015da22)
    if (rd32(sp0 - 4u) != 0u)
    {
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        goto L_1015d9f6;
    }
    eax = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_1015da2a: ;
    COW_AT(1015da2a)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t11 = cow_fastcall(g, COW_IMG(0x101265d0u), self, edx, 0);
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x1cu, 0);
    t14 = g->edx;
    wr32(sp0 - 4u, t13);
    if (t13 == 0u)
    {
        eax = t13;
        edx = t14;
        goto L_1015da79;
    }
    eax = t13;
    edx = t14;
    loc_4 = t13;
L_1015da43: ;
    COW_AT(1015da43)
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t15 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t16 = g->edx;
    wr32(sp0 - 0x18u, eax);
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x1cu, 1, eax);
    t18 = g->edx;
    if (t15 == 0u)
    {
        edx = t18;
    }
    else
    {
        eax = t17;
        edx = t18;
        edi = t15;
    COW_AT(1015da5f)
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t19 = cow_fastcall(g, COW_IMG(0x1011af20u), edi, edx, 0);
        t20 = g->ecx;
        t21 = g->edx;
        wr32(sp0 - 0x18u, edi);
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t20, t21, 1, 1, edi);
        t22 = g->edx;
        edx = t22;
    }
    COW_AT(1015da6f)
    if (rd32(sp0 - 4u) != 0u)
    {
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
        goto L_1015da43;
    }
    eax = rd32(sp0 - 4u);
    COW_AT(1015da77)
L_1015da79: ;
    COW_AT(1015da79)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t23 = cow_fastcall(g, COW_IMG(0x101265d0u), self + 0x1cu, edx, 0);
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x38u, 0);
    t26 = g->edx;
    wr32(sp0 - 4u, t25);
    if (t25 == 0u)
    {
        eax = t25;
        edx = t26;
        loc_4 = t25;
        goto L_1015dac8;
    }
    eax = t25;
    loc_4 = t25;
L_1015da92: ;
    COW_AT(1015da92)
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t27 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, sp0 - 4u, 0, 1, sp0 - 4u);
    t28 = g->edx;
    wr32(sp0 - 0x18u, eax);
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x10126580u), self + 0x38u, 1, eax);
    t30 = g->edx;
    if (t27 == 0u)
    {
        edx = t30;
    }
    else
    {
        eax = t29;
        edx = t30;
        edi = t27;
    COW_AT(1015daae)
        g->eax = eax;
        g->ecx = edi;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t31 = cow_stdcall(g, COW_IMG(0x10126330u), 0);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(sp0 - 0x18u, edi);
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t32, t33, 1, 1, edi);
        t34 = g->edx;
        edx = t34;
    }
    COW_AT(1015dabe)
    if (rd32(sp0 - 4u) != 0u)
    {
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
        goto L_1015da92;
    }
    eax = rd32(sp0 - 4u);
    COW_AT(1015dac6)
    loc_4 = rd32(sp0 - 4u);
L_1015dac8: ;
    COW_AT(1015dac8)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t35 = cow_fastcall(g, COW_IMG(0x101265d0u), self + 0x38u, edx, 0);
    t36 = g->edx;
    if (rd32(COW_IMG(0x1057845cu)) == 0u)
    {
        eax = t35;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057845cu));
        edx = t36;
    COW_AT(1015dad9)
        wr32(sp0 - 0x18u, 1u);
        g->eax = rd32(ecx);
        t37 = rd32(ecx);
        g->esp = sp0 - 0x14u;
        t38 = cow_thiscall(g, rd32(t37), ecx, 1, 1u);
        wr32(COW_IMG(0x1057845cu), 0u);
        eax = t38;
    }
    COW_AT(1015dae5)
    if (rd32(COW_IMG(0x10578460u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578460u));
    COW_AT(1015daef)
        wr32(sp0 - 0x18u, 1u);
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(rd32(ecx)), ecx, 1, 1u);
        wr32(COW_IMG(0x10578460u), 0u);
    }
    COW_AT(1015dafb)
    t39 = rd32(sp0 - 0x14u);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t39;
    g->ebp = rd32(sp0 - 0xcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015d9e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015d9f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015da12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015da22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015da2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015da43u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1015da5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1015da6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1015da77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1015da79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->esi = self + 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1015da92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1015daaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1015dabeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1015dac6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->esi = self + 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1015dac8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->esi = self + 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1015dad9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015dae5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015daefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1015dafbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015d9e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1015d9e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
