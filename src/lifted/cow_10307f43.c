/* f_0x10307f43 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307f43(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10307f73u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_10307f73;
    case 0x10307f84u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307f84;
    case 0x10307f8du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307f8d;
    case 0x10307f90u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307f90;
    case 0x10307fbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307fbd;
    case 0x10307fc3u: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307fc3;
    case 0x10307fcbu: ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10307fcb;
    case 0x10307fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_10307fce;
    default: break;
    }
#endif

    COW_AT(10307f43)
    t1 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u));
    t2 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 4u);
    t3 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 8u);
    t4 = rd32(rd32(sp0 + 4u) + 0x5cu);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        ecx = rd32(sp0 + 0x10u);
        edx = t4;
        loc_8 = t1;
        loc_c = t2;
        loc_10 = t3;
        loc_14 = t4;
    COW_AT(10307f73)
        wr32(sp0 + 0x10u, ecx);
        edi = arg3;
L_10307f84: ;
    COW_AT(10307f84)
        if (edx != 0u)
        {
            ecx = rd32(arg2 + edi - arg3);
            esi = rd32(edi);
    COW_AT(10307f8d)
            wr32(sp0 + 4u, edx);
L_10307f90: ;
    COW_AT(10307f90)
            wr8(esi, (uint8_t)(rd8(loc_8 + rd8(ecx)) + rd8(loc_10 + rd8(ecx + 2u)) + rd8(loc_c + rd8(ecx + 1u))));
            t5 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t5 - 1u);
            if (t5 != 1u)
            {
                ecx = ecx + 3u;
                esi = esi + 1u;
                goto L_10307f90;
            }
    COW_AT(10307fbd)
            edx = loc_14;
        }
    COW_AT(10307fc3)
        t6 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t6 - 1u);
        if (t6 != 1u)
        {
            edi = edi + 4u;
            goto L_10307f84;
        }
    COW_AT(10307fcb)
        eax = arg2 - arg3;
    }
    COW_AT(10307fce)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10307f43(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10307f73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10307f84u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2 - arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, arg2 - arg3);
        (void)sp0;
        return 1;
    }
    case 0x10307f8du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, arg2 - arg3);
        (void)sp0;
        return 1;
    }
    case 0x10307f90u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, arg2 - arg3);
        (void)sp0;
        return 1;
    }
    case 0x10307fbdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, arg2 - arg3);
        (void)sp0;
        return 1;
    }
    case 0x10307fc3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2 - arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x18u, arg2 - arg3);
        (void)sp0;
        return 1;
    }
    case 0x10307fcbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x24u;
        g->eax = arg2 - arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10307fceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10307f43(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10307f43(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
