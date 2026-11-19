/* f_0x100ed650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ed650(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ed666u: self = g->ecx; edx = g->edx; ebx = g->ebx; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed666;
    case 0x100ed66cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed66c;
    case 0x100ed672u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed672;
    case 0x100ed687u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed687;
    case 0x100ed68cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed68c;
    case 0x100ed691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed691;
    case 0x100ed69cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed69c;
    case 0x100ed6afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6af;
    case 0x100ed6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6b8;
    case 0x100ed6bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6bc;
    case 0x100ed6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6c2;
    case 0x100ed6c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6c6;
    case 0x100ed6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6cd;
    case 0x100ed6d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6d1;
    case 0x100ed6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6d8;
    case 0x100ed6dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6dc;
    case 0x100ed6e6u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6e6;
    case 0x100ed6f2u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6f2;
    case 0x100ed6f6u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed6f6;
    case 0x100ed702u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ed702;
    default: break;
    }
#endif

    COW_AT(100ed650)
    if ((int32_t)arg2 <= 0)
    {
        esi = 0u;
    }
    else
    {
    COW_AT(100ed666)
        ecx = self;
        ebx = 0u;
        esi = 0u;
L_100ed66c: ;
    COW_AT(100ed66c)
        if (rd8(arg3) == 0u) goto L_100ed6e6;
    COW_AT(100ed672)
        if ((int32_t)(ebx & 0x80000007u) >= 0)
        {
            eax = (uint32_t)((int32_t)(ebx + ((uint32_t)((int32_t)ebx >> 0x1fu) & 7u)) >> 3u);
            edx = ebx & 0x80000007u;
        }
        else
        {
            eax = (uint32_t)((int32_t)(ebx + ((uint32_t)((int32_t)ebx >> 0x1fu) & 7u)) >> 3u);
            edx = ebx & 0x80000007u;
    COW_AT(100ed687)
            edx = (edx - 1u | 0xfffffff8u) + 1u;
        }
    COW_AT(100ed68c)
        if ((int32_t)edx > 2)
        {
    COW_AT(100ed69c)
            ecx = (uint32_t)rd8(arg3 + eax) << 8u | (uint8_t)(0xau - (uint8_t)edx);
            eax = (eax & 0xffff0000u) | (uint16_t)((0xau - (uint8_t)edx & 0x1fu) != 0u ? ((uint32_t)rd8(arg3 + eax) << 8u | rd8(arg3 + eax + 1u)) >> (0xau - (uint8_t)edx & 0x1fu) : (uint32_t)rd8(arg3 + eax) << 8u | rd8(arg3 + eax + 1u));
        }
        else
        {
    COW_AT(100ed691)
            eax = (eax & 0xffffff00u) | (uint8_t)((2u - (uint8_t)edx & 0x1fu) != 0u ? rd8(arg3 + eax) >> (2u - (uint8_t)edx & 0x1fu) : rd8(arg3 + eax));
            ecx = (ecx & 0xffffff00u) | (uint8_t)(2u - (uint8_t)edx);
        }
    COW_AT(100ed6af)
        wr8(arg1 + esi, eax & 0x3fu);
        if ((eax & 0x3fu) == 0x3fu) goto L_100ed6d8;
        eax = (eax & 0xffffff00u) | (eax & 0x3fu);
    COW_AT(100ed6b8)
        if ((uint8_t)eax != 0x3eu) goto L_100ed6c2;
    COW_AT(100ed6bc)
        wr8(arg1 + esi, 0x20u);
L_100ed6dc: ;
    COW_AT(100ed6dc)
        if (rd8(arg1 + esi) == 0u) goto L_100ed6f2;
L_100ed6e6: ;
    COW_AT(100ed6e6)
        if ((int32_t)(esi + 1u) < (int32_t)arg2)
        {
            ebx = ebx + 6u;
            esi = esi + 1u;
            goto L_100ed66c;
        }
        esi = esi + 1u;
    }
L_100ed6f2: ;
    COW_AT(100ed6f2)
    if (esi != arg2) goto L_100ed702;
    COW_AT(100ed6f6)
    wr8(arg1 + arg2 - 1u, 0u);
    return 0u;
L_100ed6c2: ;
    COW_AT(100ed6c2)
    if ((int8_t)eax >= 27) goto L_100ed6cd;
    COW_AT(100ed6c6)
    wr8(arg1 + esi, (uint8_t)((uint8_t)eax + 0x60u));
    goto L_100ed6dc;
L_100ed6cd: ;
    COW_AT(100ed6cd)
    if ((int8_t)eax >= 53) goto L_100ed6d8;
    COW_AT(100ed6d1)
    wr8(arg1 + esi, (uint8_t)((uint8_t)eax + 0x26u));
    goto L_100ed6dc;
L_100ed6d8: ;
    COW_AT(100ed6d8)
    wr8(arg1 + esi, 0u);
    goto L_100ed6dc;
L_100ed702: ;
    COW_AT(100ed702)
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ed650(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ed666u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed66cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed672u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed687u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed68cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed691u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed69cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6afu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6c2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6c6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6d1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6d8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->ebp = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed6f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ed702u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ed650(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ed650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
