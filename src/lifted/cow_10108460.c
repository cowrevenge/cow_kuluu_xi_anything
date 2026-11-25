/* f_0x10108460 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10108460(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10108478u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10108478;
    case 0x1010847fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1010847f;
    case 0x10108487u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108487;
    case 0x1010848fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1010848f;
    case 0x10108498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108498;
    case 0x101084a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101084a0;
    case 0x101084a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101084a7;
    case 0x101084b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101084b0;
    case 0x101084b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101084b2;
    case 0x101084beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101084be;
    case 0x101084c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101084c7;
    case 0x101084e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101084e8;
    case 0x101084f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_101084f5;
    case 0x10108507u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108507;
    case 0x10108509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108509;
    case 0x10108511u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108511;
    case 0x10108515u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_10108515;
    case 0x10108539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10108539;
    default: break;
    }
#endif

    COW_AT(10108460)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(arg2 + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = arg2;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
        goto L_101084a0;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = arg2;
    esi = rd32(arg2 + 4u);
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
L_10108478: ;
    COW_AT(10108478)
    t1 = rd16(esi + 8u);
    if ((uint16_t)t1 == 0u) goto L_101084a0;
    COW_AT(1010847f)
    wr32(sp0 - 0x20u, arg1);
    g->ebp = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x10108487u);
    t2 = cow_thiscall(g, COW_IMG(0x10108990u), esi, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(10108487)
    if (eax != 0u) goto L_10108539;
    COW_AT(1010848f)
    if (rd32(esi + 4u) != 0u)
    {
        ebx = esi;
        esi = rd32(esi + 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        goto L_10108478;
    }
    ebx = esi;
    COW_AT(10108498)
    if (eax != 0u) goto L_10108539;
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
L_101084a0: ;
    COW_AT(101084a0)
    if (rd32(arg2 + 8u) == 0u)
    {
        eax = rd32(arg2 + 8u);
    COW_AT(101084b2)
        t9 = rd16(arg2 + 0x10u);
        wr32(sp0 - 0x20u, t9);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        COW_RET(0x101084beu);
        t10 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, t9, 1, 3, t9, loc_1c, loc_18);
        t11 = g->ecx;
        t12 = g->edx;
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(arg2 + 8u);
    COW_AT(101084a7)
        t5 = rd16(arg2 + 0x10u);
        wr32(sp0 - 0x20u, t5);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x101084b0u);
        t6 = cow_thiscall_cdecl(g, eax, t5, 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(101084b0)
    }
    COW_AT(101084be)
    if (eax != 0u)
    {
        esi = eax;
    }
    else
    {
        esi = eax;
    COW_AT(101084c7)
        t13 = (eax & 0xffff0000u) | rd16(arg2 + 0x10u);
        wr32(sp0 - 4u, t13);
        wr32(sp0 - 0x20u, COW_IMG(0x1034b694u));
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 8u, arg1);
        g->eax = sp0 - 0xcu;
        g->ecx = 0u;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x101084e8u);
        t14 = cow_call_regs(g, COW_IMG(0x10315aaeu), g->eax, g->ecx, edx, 0, 2, sp0 - 0xcu, COW_IMG(0x1034b694u));
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    }
    COW_AT(101084e8)
    t17 = (ecx & 0xffff0000u) | rd16(arg2 + 0x10u);
    wr32(sp0 - 0x20u, t17);
    wr32(sp0 - 0x24u, arg2);
    g->esp = sp0 - 0x1cu;
    COW_RET(0x101084f5u);
    cow_thiscall(g, COW_IMG(0x101086c0u), esi, 2, arg2, t17);
    COW_AT(101084f5)
    wr32(esi, ebx);
    t18 = rd32(ebx + 4u);
    wr32(esi + 4u, t18);
    wr32(ebx + 4u, esi);
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
        edx = t18;
    }
    else
    {
        eax = rd32(esi + 4u);
        edx = t18;
    COW_AT(10108507)
        wr32(eax, esi);
    }
    COW_AT(10108509)
    wr32(sp0 - 0x20u, arg1);
    g->ebp = arg1;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    COW_RET(0x10108511u);
    t19 = cow_thiscall(g, COW_IMG(0x10108990u), esi, 1, arg1);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(10108511)
    if (eax == 0u)
    {
    COW_AT(10108515)
        t21 = (eax & 0xffff0000u) | rd16(arg2 + 0x10u);
        wr32(sp0 - 4u, t21);
        wr32(sp0 - 0x20u, COW_IMG(0x1034b694u));
        wr32(sp0 - 0x24u, sp0 - 0xcu);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 8u, arg1);
        g->eax = sp0 - 0xcu;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x10108539u);
        t22 = cow_call_regs(g, COW_IMG(0x10315aaeu), g->eax, g->ecx, edx, 0, 2, sp0 - 0xcu, COW_IMG(0x1034b694u));
        eax = t22;
    }
L_10108539: ;
    COW_AT(10108539)
    t23 = rd16(eax + 6u) - 8u;
    t24 = eax;
    edi = t24 + 8u;
    eax = 0x55555555u;
    ecx = t23 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t23 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    edi = t24 + 8u;
    eax = 0xcdcdcdcdu;
    ecx = arg1 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg1 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = t24 + 8u;
    return t24 + 8u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10108460(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10108478u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010847fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108487u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1010848fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108498u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x20u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101084f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108507u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108509u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108511u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108515u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10108539u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x1cu;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10108460(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10108460(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
