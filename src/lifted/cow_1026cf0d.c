/* f_0x1026cf0d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026cf0d(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026cf3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_1026cf3b;
    case 0x1026cf42u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_1026cf42;
    case 0x1026cf55u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026cf55;
    case 0x1026cf6au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026cf6a;
    case 0x1026cf82u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cf82;
    case 0x1026cf89u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cf89;
    case 0x1026cfa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1026cfa7;
    case 0x1026cfaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1cu); goto E_1026cfae;
    case 0x1026cfb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_4 = rd32(sp0 - 4u); goto E_1026cfb1;
    case 0x1026cfbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1026cfbc;
    default: break;
    }
#endif

    COW_AT(1026cf0d)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x18u, 0xccccccccu);
    wr32(sp0 - 0x14u, 0xccccccccu);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    wr32(sp0 - 0x20u, sp0 - 0x14u);
    wr32(sp0 - 0x24u, arg1 + 0x4034u);
    g->eax = sp0 - 0x14u;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026d0eau), arg1 + 0x4034u, 3, arg1 + 0x4034u, sp0 - 0x14u, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1026cf3b)
    if ((int32_t)eax < 0)
    {
    COW_AT(1026cfae)
        eax = 0xffffffffu;
        loc_4 = in_ebp;
        loc_1c = in_esi;
    }
    else
    {
    COW_AT(1026cf42)
        t4 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x18u, t4);
        wr32(sp0 - 0x20u, 0x10u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, t4);
        g->eax = t4;
        g->esp = sp0 - 0x1cu;
        t5 = cow_cdecl(g, COW_IMG(0x10316dd0u), 3, t4, 0u, 0x10u);
        eax = t5;
    COW_AT(1026cf55)
        wr32(sp0 - 0x20u, 4u);
        wr32(sp0 - 0x24u, sp0 + 8u);
        t6 = rd32(sp0 - 0x18u) + 4u;
        wr32(sp0 - 0x28u, t6);
        g->ecx = sp0 + 8u;
        g->edx = t6;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, t6, sp0 + 8u, 4u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    COW_AT(1026cf6a)
        t9 = rd32(sp0 - 0x18u);
        wr16(t9, 2u);
        t10 = (ecx & 0xffff0000u) | rd16(sp0 + 0xcu);
        wr32(sp0 - 0x20u, t10);
        g->eax = t9;
        g->ecx = t10;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t11 = cow_stdcall(g, rd32(COW_IMG(0x10329480u)), 1, t10);   /* ws2_32.dll!htons */
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    COW_AT(1026cf82)
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t14 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        eax = t14;
    COW_AT(1026cf89)
        t15 = rd32(sp0 - 0x18u);
        wr16(t15 + 2u, (uint16_t)eax);
        wr32(sp0 - 0xcu, 1u);
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        wr32(sp0 - 0x24u, arg1 + 0x2cu);
        g->edx = t15;
        g->esp = sp0 - 0x18u;
        cow_thiscall_cdecl(g, COW_IMG(0x1026d1d4u), arg1 + 0x2cu, 3, arg1 + 0x2cu, sp0 - 0x14u, rd32(sp0 - 0x1cu));
        t16 = g->ecx;
        t17 = g->edx;
        ecx = t16;
        edx = t17;
    COW_AT(1026cfa7)
        eax = 0u;
        loc_4 = rd32(sp0 - 4u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    COW_AT(1026cfb1)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    esi = loc_1c;
    COW_AT(1026cfbc)
    g->esi = esi;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026cf0d(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026cf3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cf42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cf55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026cf6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x28u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x1026cf82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1026cf89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x1026cfa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cfaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cfb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1026cfbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x20u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026cf0d(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026cf0d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
