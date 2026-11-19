/* f_0x102b3e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102b3e20(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b3e84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102b3e84;
    case 0x102b3e8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102b3e8d;
    case 0x102b3ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102b3ea9;
    default: break;
    }
#endif

    COW_AT(102b3e20)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, arg1 + 0x14u);
    g->eax = arg1 + 0x14u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10292420u), 4, arg1 + 0x14u, 4u, 1u, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 4u);
    wr32(sp0 - 0x30u, arg1 + 0x18u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 4u;
    t4 = cow_cdecl(g, COW_IMG(0x10292420u), 11, arg1 + 0x18u, 4u, 1u, arg2, arg1 + 0x14u, 4u, 1u, arg2, in_edi, in_esi, in_ebp);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x34u, arg2);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 4u);
    wr32(sp0 - 0x40u, arg1 + 0x1cu);
    g->eax = arg1 + 0x1cu;
    g->edx = t6;
    g->esp = sp0 - 0x14u;
    t7 = cow_cdecl(g, COW_IMG(0x10292420u), 11, arg1 + 0x1cu, 4u, 1u, arg2, arg1 + 0x18u, 4u, 1u, arg2, arg1 + 0x14u, 4u, 1u);
    t8 = g->edx;
    wr32(sp0 - 0x44u, arg2);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->esp = sp0 - 0x24u;
    t9 = cow_cdecl(g, COW_IMG(0x10292420u), 11, sp0 + 4u, 4u, 1u, arg2, arg1 + 0x1cu, 4u, 1u, arg2, arg1 + 0x18u, 4u, 1u);
    t10 = g->ecx;
    t11 = rd32(arg1 + 0x18u);
    wr32(sp0 - 0x14u, t11);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = t10;
    g->edx = t11;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x102b3b20u), 6, arg1, t11, in_edi, in_esi, in_ebp, in_ebx);
    t12 = g->ecx;
    t13 = g->edx;
    if (rd32(arg1 + 0x28u) == 0u)
    {
        edi = t1 + t4 + t7 + t9;
    }
    else
    {
        ecx = t12;
        edx = t13;
        edi = t1 + t4 + t7 + t9;
    COW_AT(102b3e84)
        if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_102b3ea9;
        eax = rd32(arg1 + 0x14u);
        ebp = 0u;
L_102b3e8d: ;
    COW_AT(102b3e8d)
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, ebp);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_cdecl(g, COW_IMG(0x102b3be0u), 2, arg1, ebp);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x18u, t14);
        g->edx = t16;
        t17 = cow_thiscall_cdecl(g, rd32(arg1 + 0x28u), t15, 1, t14);
        t18 = g->ecx;
        t19 = g->edx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x14u))
        {
            eax = rd32(arg1 + 0x14u);
            ecx = t18;
            edx = t19;
            ebp = ebp + 1u;
            edi = edi + t17;
            goto L_102b3e8d;
        }
        edi = edi + t17;
    }
L_102b3ea9: ;
    COW_AT(102b3ea9)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b3e20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b3e84u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0x50u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b3e8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        wr32(sp0 - 0x50u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x102b3ea9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x50u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3e20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102b3e20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
