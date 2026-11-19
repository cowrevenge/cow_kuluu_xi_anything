/* f_0x100dda60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100dda60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100dda72u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100dda72;
    case 0x100dda7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100dda7d;
    case 0x100dda89u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100dda89;
    case 0x100dda96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100dda96;
    case 0x100ddaafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddaaf;
    case 0x100ddab3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddab3;
    case 0x100ddab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddab5;
    case 0x100ddabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddabf;
    case 0x100ddacbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddacb;
    case 0x100ddaddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddadd;
    case 0x100ddadfu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddadf;
    case 0x100ddae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddae7;
    case 0x100ddaefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddaef;
    case 0x100ddafdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddafd;
    case 0x100ddaffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddaff;
    case 0x100ddb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb04;
    case 0x100ddb0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb0e;
    case 0x100ddb18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb18;
    case 0x100ddb22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb22;
    case 0x100ddb2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb2c;
    case 0x100ddb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb36;
    case 0x100ddb40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb40;
    case 0x100ddb4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb4a;
    case 0x100ddb54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb54;
    case 0x100ddb5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb5e;
    case 0x100ddb68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb68;
    case 0x100ddb72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb72;
    case 0x100ddb85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb85;
    case 0x100ddb9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100ddb9c;
    default: break;
    }
#endif

    COW_AT(100dda60)
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_100ddb9c;
    }
    COW_AT(100dda72)
    if (rd32(arg1 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_100ddb9c;
    }
    ebp = rd32(arg1 + 4u);
    COW_AT(100dda7d)
    if (arg3 == 0u) goto L_100ddaef;
    COW_AT(100dda89)
    t1 = rd32(arg1 + 0xcu);
    t2 = cow_divs(g, t1, ebp);
    t3 = cow_mods(g, t1, ebp);
    if (t3 == rd32(arg1 + 8u)) goto L_100ddaef;
    ecx = t1;
    edi = 0u;
L_100dda96: ;
    COW_AT(100dda96)
    if ((rd16(ecx * 0x110u + rd32(arg1)) & 0x1ffu) != 0u)
    {
        eax = ecx * 0x110u + rd32(arg1);
        edx = (rd32(arg1) & 0xffff0000u) | rd16(ecx * 0x110u + rd32(arg1));
    }
    else
    {
        eax = ecx * 0x110u + rd32(arg1);
        edx = (rd32(arg1) & 0xffff0000u) | rd16(ecx * 0x110u + rd32(arg1));
    COW_AT(100ddaaf)
        if (edi == 0u)
        {
    COW_AT(100ddab3)
            edi = eax;
        }
    }
    COW_AT(100ddab5)
    if ((edx & 0x1ffu) != arg2) goto L_100ddacb;
    COW_AT(100ddabf)
    if (rd32(eax + 0x104u) == arg3) goto L_100ddadf;
L_100ddacb: ;
    COW_AT(100ddacb)
    t4 = cow_divs(g, ecx + 1u, ebp);
    t5 = cow_mods(g, ecx + 1u, ebp);
    t6 = cow_divs(g, t5, ebp);
    t7 = cow_mods(g, t5, ebp);
    if (t7 != rd32(arg1 + 8u))
    {
        ecx = t5;
        goto L_100dda96;
    }
    edx = t7;
    COW_AT(100ddadd)
L_100ddae7: ;
    COW_AT(100ddae7)
    if (edi != 0u) goto L_100ddb85;
L_100ddaef: ;
    COW_AT(100ddaef)
    t8 = rd32(arg1 + 0xcu);
    if ((int32_t)rd32(arg1 + 8u) < (int32_t)t8)
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        edi = t8;
    }
    else
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        edi = t8;
    COW_AT(100ddafd)
        eax = eax + ebp;
    }
    COW_AT(100ddaff)
    if ((int32_t)rd32(arg1 + 0x14u) <= (int32_t)eax) goto L_100ddb68;
    COW_AT(100ddb04)
    if (rd16(arg1 + 0x18u) == arg2) goto L_100ddb68;
    COW_AT(100ddb0e)
    if (rd16(arg1 + 0x1au) == arg2) goto L_100ddb68;
    COW_AT(100ddb18)
    if (rd16(arg1 + 0x1cu) == arg2) goto L_100ddb68;
    COW_AT(100ddb22)
    if (rd16(arg1 + 0x1eu) == arg2) goto L_100ddb68;
    COW_AT(100ddb2c)
    if (rd16(arg1 + 0x20u) == arg2) goto L_100ddb68;
    COW_AT(100ddb36)
    if (rd16(arg1 + 0x22u) == arg2) goto L_100ddb68;
    COW_AT(100ddb40)
    if (rd16(arg1 + 0x24u) == arg2) goto L_100ddb68;
    COW_AT(100ddb4a)
    if (rd16(arg1 + 0x26u) == arg2) goto L_100ddb68;
    COW_AT(100ddb54)
    if (rd16(arg1 + 0x28u) == arg2) goto L_100ddb68;
    COW_AT(100ddb5e)
    if (rd16(arg1 + 0x2au) != arg2)
    {
        edx = rd16(arg1 + 0x2au);
        goto L_100ddb9c;
    }
L_100ddb68: ;
    COW_AT(100ddb68)
    t9 = cow_divs(g, ecx + 1u, ebp);
    t10 = cow_mods(g, ecx + 1u, ebp);
    if (edi == t10)
    {
        edx = t10;
        goto L_100ddb9c;
    }
    edx = t10;
    COW_AT(100ddb72)
    t11 = rd32(arg1);
    wr32(arg1 + 8u, edx);
    if (ecx * 0x110u + t11 == 0u) goto L_100ddb9c;
    edi = ecx * 0x110u + t11;
L_100ddb85: ;
    COW_AT(100ddb85)
    wr32(edi + 0x10cu, arg1);
    wr32(edi + 0x104u, arg4);
    g->edx = edx;
    return edi;
L_100ddadf: ;
    COW_AT(100ddadf)
    wr16(arg1 + 0x2cu, 1u);
    edx = arg3;
    edi = eax;
    goto L_100ddae7;
L_100ddb9c: ;
    COW_AT(100ddb9c)
    g->edx = edx;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100dda60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100dda72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100dda7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100dda89u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100dda96u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddaafu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddab3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddab5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddabfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddacbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddaddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddadfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddae7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddaefu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddafdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddaffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb04u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb0eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb18u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb22u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb4au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb54u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb5eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb68u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb72u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb85u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100ddb9cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100dda60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100dda60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
