/* f_0x1031cd7a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1031cd7a(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t loc_8;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031cda2u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cda2;
    case 0x1031cdb4u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdb4;
    case 0x1031cdb6u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdb6;
    case 0x1031cdc6u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdc6;
    case 0x1031cdc9u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdc9;
    case 0x1031cdcdu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdcd;
    case 0x1031cdd2u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdd2;
    case 0x1031cdd5u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdd5;
    case 0x1031cdd7u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdd7;
    case 0x1031cdd9u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdd9;
    case 0x1031cde4u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cde4;
    case 0x1031cde8u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cde8;
    case 0x1031cdf2u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdf2;
    case 0x1031cdfau: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031cdfa;
    case 0x1031ce01u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ce01;
    case 0x1031ce06u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ce06;
    case 0x1031ce0fu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ce0f;
    case 0x1031ce14u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ce14;
    case 0x1031ce1bu: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; zf = g->zf; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1031ce1b;
    default: break;
    }
#endif

    COW_AT(1031cd7a)
    if (rd8(arg3) <= arg4)
    {
        ecx = rd8(arg3);
        edi = arg1 + (uint32_t)((int32_t)(arg2 - rd32(arg1 + 0x10u)) >> 0xcu) * 8u + 0x18u;
        cf = rd8(arg3) < arg4;
        goto L_1031cdb4;
    }
    ecx = rd8(arg3);
    edi = arg1 + (uint32_t)((int32_t)(arg2 - rd32(arg1 + 0x10u)) >> 0xcu) * 8u + 0x18u;
    COW_AT(1031cda2)
    wr8(arg3, (uint8_t)arg4);
    wr32(edi, ecx + rd32(edi) - arg4);
    wr32(edi + 4u, 0xf1u);
L_1031ce14: ;
    COW_AT(1031ce14)
    loc_8 = 1u;
L_1031ce1b: ;
    COW_AT(1031ce1b)
    g->edx = arg3;
    return loc_8;
L_1031cdb4: ;
    COW_AT(1031cdb4)
    if (!cf)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    COW_AT(1031cdb6)
    if (arg4 + arg3 > arg2 + 0xf8u)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    COW_AT(1031cdc6)
    eax = arg3 + ecx;
L_1031cdc9: ;
    COW_AT(1031cdc9)
    if (eax >= arg4 + arg3)
    {
        zf = eax == arg4 + arg3;
        goto L_1031cdd7;
    }
    COW_AT(1031cdcd)
    if (rd8(eax) != 0u) goto L_1031cdd5;
    COW_AT(1031cdd2)
    eax = eax + 1u;
    goto L_1031cdc9;
L_1031cdd5: ;
    COW_AT(1031cdd5)
    zf = eax == arg4 + arg3;
L_1031cdd7: ;
    COW_AT(1031cdd7)
    if (!zf)
    {
        loc_8 = 0u;
        goto L_1031ce1b;
    }
    COW_AT(1031cdd9)
    wr8(arg3, (uint8_t)arg4);
    if (arg3 <= rd32(arg2))
    {
        eax = rd32(arg2);
    COW_AT(1031cde4)
        if (arg4 + arg3 > eax)
        {
    COW_AT(1031cde8)
            if (arg4 + arg3 >= arg2 + 0xf8u)
            {
    COW_AT(1031ce06)
                wr32(arg2 + 4u, 0u);
                wr32(arg2, arg2 + 8u);
            }
            else
            {
    COW_AT(1031cdf2)
                wr32(arg2, arg4 + arg3);
                if (rd8(arg4 + arg3) != 0u)
                {
                    eax = 0u;
                    goto L_1031ce01;
                }
                eax = 0u;
L_1031cdfa: ;
    COW_AT(1031cdfa)
                if (rd8(arg4 + arg3 + eax + 1u) == 0u)
                {
                    eax = eax + 1u;
                    goto L_1031cdfa;
                }
                eax = eax + 1u;
L_1031ce01: ;
    COW_AT(1031ce01)
                wr32(arg2 + 4u, eax);
            }
        }
    }
    COW_AT(1031ce0f)
    wr32(edi, ecx + rd32(edi) - arg4);
    goto L_1031ce14;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031cd7a(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031cda2u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031cdb4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdc6u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdc9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdcdu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdd2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdd5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdd7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1031cdd9u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        (void)sp0;
        return 1;
    }
    case 0x1031cde4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        (void)sp0;
        return 1;
    }
    case 0x1031cde8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        (void)sp0;
        return 1;
    }
    case 0x1031cdf2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        (void)sp0;
        return 1;
    }
    case 0x1031cdfau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg4 + arg3;
        (void)sp0;
        return 1;
    }
    case 0x1031ce01u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ce06u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ce0fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ce14u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031ce1bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        zf = g->zf;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cd7a(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1031cd7a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
