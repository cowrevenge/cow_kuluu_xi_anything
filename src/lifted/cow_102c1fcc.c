/* f_0x102c1fcc - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102c1fcc(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102c1fe3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c1fe3;
    case 0x102c1fe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c1fe9;
    case 0x102c1fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c1fef;
    case 0x102c1ff9u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c1ff9;
    case 0x102c2001u: eax = g->eax; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2001;
    case 0x102c2034u: eax = g->eax; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2034;
    case 0x102c2037u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2037;
    case 0x102c2056u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2056;
    case 0x102c205bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c205b;
    case 0x102c2061u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2061;
    case 0x102c2067u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2067;
    case 0x102c2071u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2071;
    case 0x102c2079u: eax = g->eax; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c2079;
    case 0x102c20adu: eax = g->eax; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20ad;
    case 0x102c20afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20af;
    case 0x102c20b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20b4;
    case 0x102c20bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20bb;
    case 0x102c20c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20c1;
    case 0x102c20c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20c8;
    case 0x102c20d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_102c20d4;
    default: break;
    }
#endif

    COW_AT(102c1fcc)
    t1 = rd32(rd32(sp0 + 4u));
    if (rd8(rd32(sp0 + 4u) + 8u) != 2u)
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
        edi = rd32(sp0 + 4u);
        loc_8 = t1;
        goto L_102c2056;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | rd8(rd32(sp0 + 4u) + 8u);
    edi = rd32(sp0 + 4u);
    loc_8 = t1;
    COW_AT(102c1fe3)
    if (arg3 == 0u) goto L_102c2056;
    COW_AT(102c1fe9)
    t2 = rd8(edi + 9u);
    if ((uint8_t)t2 != 8u) goto L_102c2056;
    COW_AT(102c1fef)
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t3);
    if (eax == 0u) goto L_102c2037;
    edx = t3;
    COW_AT(102c1ff9)
    wr32(sp0 + 4u, eax);
L_102c2001: ;
    COW_AT(102c2001)
    t4 = rd32(sp0 + 8u);
    t5 = rd8(edx);
    t6 = rd8(edx + 1u);
    t7 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t8 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t4 + 1u);
    t9 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t9 - 1u);
    wr8(t8, (uint8_t)t7);
    if (t9 != 1u)
    {
        edx = edx + 3u;
        goto L_102c2001;
    }
L_102c2034: ;
    COW_AT(102c2034)
    eax = loc_8;
    ecx = 0xf8u;
L_102c2037: ;
    COW_AT(102c2037)
    t18 = rd8(edi + 9u);
    wr8(edi + 8u, 3u);
    wr8(edi + 0xbu, (uint8_t)t18);
    wr8(edi + 0xau, 1u);
    t19 = ((uint8_t)t18 * eax + 7u) >> 3u;
    wr32(edi + 4u, t19);
L_102c20d4: ;
    COW_AT(102c20d4)
    return;
L_102c2056: ;
    COW_AT(102c2056)
    if ((uint8_t)ecx != 6u) goto L_102c20af;
    COW_AT(102c205b)
    if (arg3 == 0u) goto L_102c20af;
    COW_AT(102c2061)
    t10 = rd8(edi + 9u);
    if ((uint8_t)t10 != 8u) goto L_102c20af;
    COW_AT(102c2067)
    t11 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t11);
    if (eax == 0u) goto L_102c2037;
    edx = t11;
    COW_AT(102c2071)
    wr32(sp0 + 4u, eax);
L_102c2079: ;
    COW_AT(102c2079)
    t12 = rd32(sp0 + 8u);
    t13 = rd8(edx);
    t14 = rd8(edx + 1u);
    t15 = rd8(arg3 + (((rd8(edx) & 0xf8u) << 5u | (rd8(edx + 1u) & 0xf8u)) << 2u | ((uint32_t)((int32_t)rd8(edx + 2u) >> 3u) & 0x1fu)));
    t16 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t12 + 1u);
    t17 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t17 - 1u);
    wr8(t16, (uint8_t)t15);
    if (t17 != 1u)
    {
        edx = edx + 4u;
        goto L_102c2079;
    }
    COW_AT(102c20ad)
    goto L_102c2034;
L_102c20af: ;
    COW_AT(102c20af)
    if ((uint8_t)ecx == 3u)
    {
    COW_AT(102c20b4)
        if (arg4 != 0u)
        {
    COW_AT(102c20bb)
            t20 = rd8(edi + 9u);
            if ((uint8_t)t20 == 8u)
            {
    COW_AT(102c20c1)
                if (eax == 0u) goto L_102c20d4;
                ecx = rd32(sp0 + 8u);
L_102c20c8: ;
    COW_AT(102c20c8)
                wr8(ecx, rd8(arg4 + rd8(ecx)));
                if (eax != 1u)
                {
                    eax = eax - 1u;
                    ecx = ecx + 1u;
                    goto L_102c20c8;
                }
            }
        }
    }
    goto L_102c20d4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102c1fcc(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102c1fe3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c1fe9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c1fefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c1ff9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2001u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xf8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2034u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xf8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2037u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2056u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c205bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2061u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2067u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c2079u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xf8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c20adu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0xf8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c20afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c20b4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c20bbu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102c20c1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102c20c8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x102c20d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
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
void cow_adapter_102c1fcc(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102c1fcc(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
