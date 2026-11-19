/* f_0x101ec3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ec3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ec422u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101ec422;
    case 0x101ec447u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101ec447;
    case 0x101ec450u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101ec450;
    case 0x101ec465u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; goto E_101ec465;
    case 0x101ec474u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_101ec474;
    case 0x101ec476u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec476;
    case 0x101ec481u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec481;
    case 0x101ec493u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec493;
    case 0x101ec49au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec49a;
    case 0x101ec4acu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec4ac;
    case 0x101ec4b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec4b8;
    case 0x101ec4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec4ba;
    case 0x101ec4c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec4c0;
    case 0x101ec4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101ec4eb;
    default: break;
    }
#endif

    COW_AT(101ec3f0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(self + 0x20u) == 0u)
    {
        eax = rd32(self + 0x20u);
        ecx = t2;
        edx = t3;
    COW_AT(101ec447)
        if (rd16(self + 0x2cu) == 0u) goto L_101ec474;
        eax = (eax & 0xffff0000u) | rd16(self + 0x2cu);
    COW_AT(101ec450)
        wr32(sp0 - 0x18u, (uint16_t)eax);
        g->eax = (uint16_t)eax;
        g->edx = edx;
        t10 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x14u;
        t11 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t10, 1, (uint16_t)eax);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 == 0u)
        {
            ecx = t12;
            edx = t13;
            goto L_101ec474;
        }
        eax = t11;
        edx = t13;
    COW_AT(101ec465)
        wr32(sp0 - 0x18u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_thiscall(g, COW_IMG(0x1015b1e0u), eax, 1, 0u);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
        edi = t14 << 4u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    else
    {
        eax = rd32(self + 0x20u);
    COW_AT(101ec422)
        wr32(sp0 - 0x18u, 0u);
        t4 = rd32(sp0 - 4u) - ((uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int16_t)rd16(sp0 - 8u) + 4u) - 4u;
        wr32(sp0 - 0x1cu, t4);
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->edx = t4;
        t5 = rd16(self + 0x2au);
        t6 = rd16(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x1011d530u), (uint32_t)(int16_t)t5 + (uint32_t)(int16_t)t6 + 4u, 3, eax, t4, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
        edi = t7;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
    }
L_101ec476: ;
    COW_AT(101ec476)
    t17 = rd32(self + 0x30u);
    wr16(self + 0x26u, (uint16_t)edi);
    if (t17 != 0u)
    {
        eax = t17;
    COW_AT(101ec481)
        t18 = rd32(self + 0x38u);
        wr32(sp0 - 0x18u, t18);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t19 = cow_thiscall_cdecl(g, eax, t18, 5, 0u, 0u, 0u, 0u, t18);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
        edi = edi + t19 * 0x10u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(101ec493)
    if (rd32(self + 0x34u) == 0u)
    {
        eax = rd32(self + 0x34u);
    }
    else
    {
        eax = rd32(self + 0x34u);
    COW_AT(101ec49a)
        t22 = rd32(self + 0x3cu);
        wr32(sp0 - 0x18u, t22);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        g->eax = eax;
        g->edx = t22;
        g->esp = sp0 - 0x14u;
        t23 = cow_thiscall_cdecl(g, eax, ecx, 5, 0u, 0u, 0u, 0u, t22);
        t24 = g->edx;
        eax = t23 << 4u;
        edx = t24;
        edi = edi + t23 * 0x10u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(101ec4ac)
    if ((int16_t)(edi + 8u) >= (int16_t)rd16(self + 0x28u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x28u);
        edi = edi + 8u;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x28u);
    COW_AT(101ec4b8)
        edi = eax;
    }
    COW_AT(101ec4ba)
    if (rd16(self + 0x24u) != (uint16_t)edi)
    {
    COW_AT(101ec4c0)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 1u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, edi);
        t25 = (eax & 0xffff0000u) | rd16(self + 0x42u);
        wr32(sp0 - 0x28u, t25);
        t26 = rd32(sp0 - 6u);
        wr32(sp0 - 0x2cu, t26);
        t27 = rd32(sp0 - 8u);
        wr32(sp0 - 0x30u, t27);
        g->eax = t25;
        g->edx = t27;
        g->esp = sp0 - 0x14u;
        t28 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t27, t26, t25, edi, 1u, 1u, 0u);
        t29 = g->edx;
        wr8(self + 0x10u, 1u);
        wr16(self + 0x24u, (uint16_t)edi);
        wr16(self + 0x2eu, 1u);
        eax = t28;
        edx = t29;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
    }
    COW_AT(101ec4eb)
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = loc_14;
    g->edx = edx;
    return eax;
L_101ec474: ;
    COW_AT(101ec474)
    edi = 0u;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    goto L_101ec476;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ec3f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ec422u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ec447u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ec450u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101ec465u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec474u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec476u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec481u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec493u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec49au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec4acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec4b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec4bau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec4c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101ec4ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec3f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101ec3f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
