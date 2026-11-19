/* f_0x1000c850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000c850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000c867u: eax = g->eax; self = g->ecx; edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x10u); goto E_1000c867;
    case 0x1000c884u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1000c884;
    case 0x1000c88eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = g->edi; goto E_1000c88e;
    case 0x1000c8a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8a7;
    case 0x1000c8a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8a9;
    case 0x1000c8afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8af;
    case 0x1000c8b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8b2;
    case 0x1000c8b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8b9;
    case 0x1000c8bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8bd;
    case 0x1000c8c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8c3;
    case 0x1000c8eau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1000c8ea;
    case 0x1000c8f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1000c8f5;
    default: break;
    }
#endif

    COW_AT(1000c850)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        edi = in_edi;
        loc_c = in_ebx;
        loc_10 = in_esi;
        goto L_1000c8f5;
    }
    eax = rd32(COW_IMG(0x104566e8u));
    edx = rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u);
    COW_AT(1000c867)
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0x15u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x10u);
    wr32(sp0 - 0x2cu, 1u);
    t1 = rd32(self + 0xcu);
    wr32(sp0 - 0x30u, t1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t2 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t1, 1u, 0x10u, 1u, 0u, 0x15u, 1u, arg1);
    if ((int32_t)t2 >= 0) goto L_1000c88e;
    eax = t2;
    COW_AT(1000c884)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = in_edi;
    return eax & 0xffffff00u;
L_1000c88e: ;
    COW_AT(1000c88e)
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(arg1));
    g->edx = rd32(rd32(arg1));
    t3 = rd32(rd32(arg1));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t3 + 0x40u), sp0 - 8u, 7, rd32(arg1), 0u, sp0 - 8u, 0u, 0u, in_edi, rd32(sp0 - 0x10u));
    t4 = g->edx;
    ecx = 0u;
    edx = (t4 & 0xffffff00u) | rd8(sp0 + 0xcu);
L_1000c8a9: ;
    COW_AT(1000c8a9)
    if (ecx == 0u) goto L_1000c8b9;
    eax = ecx;
    COW_AT(1000c8af)
    if (eax != 1u) goto L_1000c8c3;
    COW_AT(1000c8b2)
    wr8(sp0 + 0xeu, 0x48u);
L_1000c8bd: ;
    COW_AT(1000c8bd)
    wr8(sp0 + 0xdu, 0u);
    edx = edx & 0xffffff00u;
L_1000c8c3: ;
    COW_AT(1000c8c3)
    t5 = rd32(sp0);
    t6 = rd8(sp0 + 0xdu);
    wr8(arg1 + t5 * ecx + 1u, (uint8_t)t6);
    t7 = rd8(sp0 + 0xeu);
    wr8(arg1 + t5 * ecx, (uint8_t)edx);
    wr8(arg1 + t5 * ecx + 2u, (uint8_t)t7);
    wr8(arg1 + t5 * ecx + 3u, 0x80u);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_1000c8a7;
    }
    ecx = ecx + 1u;
    COW_AT(1000c8ea)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, rd32(arg1));
    g->eax = rd32(arg1);
    t8 = rd32(arg1);
    g->esp = sp0 - 0x14u;
    t9 = cow_thiscall(g, rd32(rd32(t8) + 0x44u), ecx, 0);
    eax = t9;
    edi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = 0u;
L_1000c8f5: ;
    COW_AT(1000c8f5)
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = edi;
    return (eax & 0xffffff00u) | 1u;
L_1000c8a7: ;
    COW_AT(1000c8a7)
    goto L_1000c8a9;
L_1000c8b9: ;
    COW_AT(1000c8b9)
    wr8(sp0 + 0xeu, 0u);
    goto L_1000c8bd;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000c850(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000c867u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000c884u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1000c88eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1000c8a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8a9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8b2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8bdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8c3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->ebx = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1000c8f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c850(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000c850(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
