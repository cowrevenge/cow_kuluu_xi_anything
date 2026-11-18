/* f_0x1026d9d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1026d9d1(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026d9f3u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026d9f3;
    case 0x1026d9fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026d9fa;
    case 0x1026da00u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026da00;
    case 0x1026da09u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026da09;
    case 0x1026da0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026da0f;
    case 0x1026da18u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026da18;
    case 0x1026da1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_1026da1f;
    case 0x1026da49u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_1026da49;
    case 0x1026da61u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_1026da61;
    case 0x1026da89u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1026da89;
    default: break;
    }
#endif

    COW_AT(1026d9d1)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x10u, 0xccccccccu);
    wr32(sp0 - 0xcu, 0xccccccccu);
    wr32(sp0 - 8u, 0xccccccccu);
    if (arg1 != 0u)
    {
    COW_AT(1026d9fa)
        if (arg2 != 0u)
        {
    COW_AT(1026da00)
            wr32(arg1 + 8u, arg2);
        }
    COW_AT(1026da09)
        if (arg3 != 0u)
        {
    COW_AT(1026da18)
            wr32(sp0 - 0x10u, COW_IMG(0x1026be74u));
            loc_10 = COW_IMG(0x1026be74u);
        }
        else
        {
    COW_AT(1026da0f)
            wr32(sp0 - 0x10u, COW_IMG(0x1026a8cdu));
            loc_10 = COW_IMG(0x1026a8cdu);
        }
    COW_AT(1026da1f)
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, arg1);
        wr32(sp0 - 0x24u, loc_10);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0u);
        g->eax = arg1;
        g->ecx = loc_10;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x14u;
        t1 = cow_stdcall(g, rd32(COW_IMG(0x10329100u)), 6, 0u, 0u, loc_10, arg1, 0u, sp0 - 0xcu);   /* kernel32.dll!CreateThread */
        t2 = g->ecx;
        t3 = g->edx;
        g->cf = 0u;
        g->pf = PARITY(0u);
        g->af = 0u;
        g->zf = 1u;
        g->sf = 0u;
        g->of = 0u;
        g->ecx = t2;
        g->edx = t3;
        t4 = cow_stdcall(g, COW_IMG(0x10316dabu), 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 8u, t4);
        if (t4 != 0u)
        {
            loc_8 = t4;
    COW_AT(1026da61)
            t12 = rd32(sp0 - 0xcu);
            wr32(arg1 + 0x14u, t12);
            wr32(arg1 + 0x18u, loc_8);
            wr32(arg1 + 0x10u, 0u);
            eax = rd32(arg1 + 0x14u) != 0u;
            ecx = arg1;
            edx = loc_8;
            loc_4 = rd32(sp0 - 4u);
            loc_14 = rd32(sp0 - 0x14u);
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
    COW_AT(1026da49)
            wr32(sp0 - 0x18u, COW_IMG(0x103b0fdcu));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t7 = cow_stdcall(g, rd32(COW_IMG(0x103291f0u)), 1, COW_IMG(0x103b0fdcu));   /* kernel32.dll!OutputDebugStringA */
            t8 = g->ecx;
            t9 = g->edx;
            g->cf = 0u;
            g->pf = PARITY(0u);
            g->af = 0u;
            g->zf = 1u;
            g->sf = 0u;
            g->of = 0u;
            g->ecx = t8;
            g->edx = t9;
            cow_stdcall(g, COW_IMG(0x10316dabu), 0);
            t10 = g->ecx;
            t11 = g->edx;
            eax = 0u;
            ecx = t10;
            edx = t11;
            loc_4 = rd32(sp0 - 4u);
            loc_14 = rd32(sp0 - 0x14u);
        }
    }
    else
    {
    COW_AT(1026d9f3)
        eax = 0u;
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_14 = in_esi;
    }
    COW_AT(1026da89)
    g->cf = 0u;
    g->pf = PARITY(0u);
    g->af = 0u;
    g->zf = 1u;
    g->sf = 0u;
    g->of = 0u;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x10316dabu), 0);
    g->esi = loc_14;
    g->ebp = rd32(sp0 - 4u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026d9d1(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026d9f3u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026d9fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da00u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da09u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da18u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0xccccccccu);
        (void)sp0;
        return 1;
    }
    case 0x1026da49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1026da61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1026da89u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1026d9d1(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1026d9d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
