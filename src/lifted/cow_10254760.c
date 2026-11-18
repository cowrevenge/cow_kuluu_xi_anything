/* f_0x10254760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10254760(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    int64_t q1;
    int64_t q11;
    int64_t q31;
    int64_t q35;
    int64_t q5;
    int64_t q8;
    uint32_t t10;
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
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10254770u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10254770;
    case 0x10254774u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10254774;
    case 0x1025478cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1025478c;
    case 0x102547d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102547d1;
    case 0x102547d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102547d8;
    case 0x102547f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102547f6;
    case 0x102547fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102547fb;
    case 0x102547ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102547ff;
    case 0x10254803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10254803;
    case 0x10254818u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10254818;
    case 0x10254821u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10254821;
    case 0x10254823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10254823;
    case 0x102548bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102548bc;
    case 0x102548d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_102548d8;
    case 0x10254935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10254935;
    default: break;
    }
#endif

    COW_AT(10254760)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(self + 4u) != 0u)
    {
        eax = rd32(self + 4u);
    COW_AT(10254774)
        q1 = (int64_t)cow_muls(0x92492493u, rd32(self + 8u) - eax);
        t2 = (uint32_t)((int32_t)(cow_qhi(q1) + rd32(self + 8u) - eax) >> 4u);
        edx = t2 + (t2 >> 0x1fu);
    }
    else
    {
    COW_AT(10254770)
        edx = 0u;
    }
    COW_AT(1025478c)
    wr32(sp0 - 4u, edx);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 1u);
    t3 = rd32(self + 0x28u);
    wr32(sp0 - 0x24u, t3);
    wr32(sp0 - 8u, 0u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x102555e0u), self + 0x20u, 3, t3, 1u, sp0 - 8u);
    t4 = g->edx;
    q5 = (int64_t)cow_muls(0x92492493u, rd32(self + 0xcu) - rd32(self + 8u));
    t6 = rd32(self + 8u);
    t7 = (uint32_t)((int32_t)(cow_qhi(q5) + rd32(self + 0xcu) - rd32(self + 8u)) >> 4u);
    if (t7 + (t7 >> 0x1fu) >= 1u)
    {
        ecx = t6;
        edx = t7 + (t7 >> 0x1fu);
        edi = t6;
        goto L_102548bc;
    }
    ecx = t6;
    edx = t7 + (t7 >> 0x1fu);
    edi = t6;
    COW_AT(102547d1)
    if (rd32(self + 4u) == 0u)
    {
        ebp = rd32(self + 4u);
        goto L_102547f6;
    }
    ebp = rd32(self + 4u);
    COW_AT(102547d8)
    q8 = (int64_t)cow_muls(0x92492493u, ecx - ebp);
    t9 = (uint32_t)((int32_t)(ecx + cow_qhi(q8) - ebp) >> 4u);
    t10 = t9 + (t9 >> 0x1fu);
    if (t9 + (t9 >> 0x1fu) > 1u)
    {
        edx = t10;
        ebx = t10;
        goto L_102547fb;
    }
    edx = t10;
L_102547f6: ;
    COW_AT(102547f6)
    ebx = 1u;
L_102547fb: ;
    COW_AT(102547fb)
    if (ebp != 0u)
    {
    COW_AT(10254803)
        q11 = (int64_t)cow_muls(0x92492493u, ecx - ebp);
        t12 = (uint32_t)((int32_t)(ecx + cow_qhi(q11) - ebp) >> 4u);
        ecx = t12 >> 0x1fu;
        edx = t12 + (t12 >> 0x1fu);
    }
    else
    {
    COW_AT(102547ff)
        edx = 0u;
    }
    COW_AT(10254818)
    if ((int32_t)(ebx + edx) >= 0)
    {
        eax = ebx + edx;
        ebp = ebx + edx;
    }
    else
    {
        ebp = ebx + edx;
    COW_AT(10254821)
        eax = 0u;
    }
    COW_AT(10254823)
    wr32(sp0 - 0x1cu, eax * 0x1cu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, eax * 0x1cu, 1, 3, eax * 0x1cu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t14 = g->edx;
    wr32(sp0 - 0x1cu, t13);
    wr32(sp0 - 0x20u, edi);
    t15 = rd32(self + 4u);
    wr32(sp0 - 0x24u, t15);
    g->edi = edi;
    g->eax = t15;
    g->edx = t14;
    g->esp = sp0 - 0x18u;
    t16 = cow_stdcall(g, COW_IMG(0x10255840u), 3, t15, edi, t13);
    t17 = g->edx;
    wr32(sp0 - 8u, t16);
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, t16);
    g->edi = edi;
    cow_stdcall(g, COW_IMG(0x10255be0u), 3, t16, 1u, arg1);
    t18 = rd32(sp0 - 8u) + 0x1cu;
    wr32(sp0 - 0x1cu, t18);
    t19 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t19);
    wr32(sp0 - 0x24u, edi);
    g->edi = edi;
    g->eax = t19;
    t20 = cow_stdcall(g, COW_IMG(0x10255840u), 3, edi, t19, t18);
    t21 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t21);
    t22 = rd32(self + 4u);
    wr32(sp0 - 0x20u, t22);
    cow_fastcall(g, COW_IMG(0x102553d0u), self, t22, 2, t22, t21);
    t23 = g->ecx;
    t24 = g->edx;
    t25 = rd32(self + 4u);
    wr32(sp0 - 0x1cu, t25);
    g->eax = t25;
    t26 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t23, t24, 1, 1, t25);
    t27 = ebp * 0x1cu + t13;
    wr32(self + 0xcu, t27);
    t28 = cow_thiscall(g, COW_IMG(0x102551f0u), self, 0);
    wr32(self + 4u, t13);
    t29 = t13 + t28 * 0x1cu + 0x1cu;
    t30 = rd32(sp0 - 0x18u);
    wr32(self + 8u, t29);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = t30;
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t29;
    return t28 + 1u;
L_102548bc: ;
    COW_AT(102548bc)
    q31 = (int64_t)cow_muls(0x92492493u, ecx - edi);
    t32 = (uint32_t)((int32_t)(ecx + cow_qhi(q31) - edi) >> 4u);
    if (t32 + (t32 >> 0x1fu) >= 1u)
    {
        eax = t32 >> 0x1fu;
        edx = t32 + (t32 >> 0x1fu);
        goto L_10254935;
    }
    eax = t32 >> 0x1fu;
    COW_AT(102548d8)
    wr32(sp0 - 0x1cu, edi + 0x1cu);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, edi);
    g->edi = edi;
    g->edx = edi + 0x1cu;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10255840u), 3, edi, ecx, edi + 0x1cu);
    t33 = g->edx;
    t34 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, arg1);
    q35 = (int64_t)cow_muls(0x92492493u, t34 - edi);
    t36 = (uint32_t)((int32_t)(t34 + cow_qhi(q35) - edi) >> 4u);
    t37 = 1u - (t36 + (t36 >> 0x1fu));
    wr32(sp0 - 0x20u, t37);
    wr32(sp0 - 0x24u, t34);
    g->edi = edi;
    g->eax = t36 >> 0x1fu;
    g->ecx = self;
    t38 = cow_stdcall(g, COW_IMG(0x10255be0u), 3, t34, t37, arg1);
    t39 = g->ecx;
    wr32(sp0 - 0x1cu, arg1);
    t40 = rd32(self + 8u);
    wr32(sp0 - 0x20u, t40);
    wr32(sp0 - 0x24u, edi);
    g->edi = edi;
    cow_call_regs(g, COW_IMG(0x10256230u), g->eax, t39, t40, 1, 3, edi, t40, arg1);
    t41 = g->edx;
    t42 = rd32(self + 8u) + 0x1cu;
    wr32(self + 8u, t42);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t41;
    return t42;
L_10254935: ;
    COW_AT(10254935)
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, ecx - 0x1cu);
    g->edi = edi;
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_stdcall(g, COW_IMG(0x10255840u), 3, ecx - 0x1cu, ecx, ecx);
    t43 = g->ecx;
    t44 = g->edx;
    t45 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t45);
    wr32(sp0 - 0x20u, t45 - 0x1cu);
    wr32(sp0 - 0x24u, edi);
    g->edi = edi;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102563b0u), g->eax, t43, t44, 1, 4, edi, t45 - 0x1cu, t45, rd32(sp0 - 0x18u));
    t46 = g->edx;
    wr32(sp0 - 0x28u, arg1);
    wr32(sp0 - 0x2cu, edi + 0x1cu);
    wr32(sp0 - 0x30u, edi);
    g->edi = edi;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10256230u), g->eax, edi + 0x1cu, t46, 1, 3, edi, edi + 0x1cu, arg1);
    t47 = g->edx;
    t48 = rd32(self + 8u) + 0x1cu;
    wr32(self + 8u, t48);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = t47;
    return t48;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10254760(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10254770u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10254774u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1025478cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102547d1u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102547d8u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102547f6u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102547fbu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102547ffu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254803u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254818u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254821u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254823u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102548bcu:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x102548d8u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10254935u:
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
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10254760(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10254760(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
