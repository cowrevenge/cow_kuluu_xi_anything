/* f_0x1006dcf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1006dcf0(Guest* g)
{
    double d11;
    double d12;
    double d15;
    double d16;
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006ddb9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006ddb9;
    case 0x1006ddbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006ddbc;
    case 0x1006ddf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006ddf2;
    case 0x1006dea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dea6;
    case 0x1006dea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dea9;
    case 0x1006dedfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dedf;
    case 0x1006df93u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006df93;
    case 0x1006df96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006df96;
    case 0x1006dfd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dfd7;
    case 0x1006dfdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dfde;
    default: break;
    }
#endif

    COW_AT(1006dcf0)
    if (rd8(COW_IMG(0x1047ccc0u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047ccc0u));
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047ccc0u));
    COW_AT(1006dd05)
        wr32(COW_IMG(0x1047cbb0u), 0x3f800000u);
        wr8(COW_IMG(0x1047ccc0u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047cbb4u), 0u);
        wr32(COW_IMG(0x1047cbb8u), 0u);
        wr32(COW_IMG(0x1047cbbcu), 0u);
        wr32(COW_IMG(0x1047cbc0u), 0u);
        wr32(COW_IMG(0x1047cbc4u), 0x3f800000u);
        wr32(COW_IMG(0x1047cbc8u), 0u);
        wr32(COW_IMG(0x1047cbccu), 0u);
        wr32(COW_IMG(0x1047cbd0u), 0u);
        wr32(COW_IMG(0x1047cbd4u), 0u);
        wr32(COW_IMG(0x1047cbd8u), 0x3f800000u);
        wr32(COW_IMG(0x1047cbdcu), 0u);
        wr32(COW_IMG(0x1047cbe0u), 0u);
        wr32(COW_IMG(0x1047cbe4u), 0u);
        wr32(COW_IMG(0x1047cbe8u), 0u);
        wr32(COW_IMG(0x1047cbecu), 0x3f800000u);
        g->eax = (in_eax & 0xffffff00u) | 1u;
        g->ecx = ecx;
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006ddb9u);
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e010u));
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1006ddb9)
    }
    COW_AT(1006ddbc)
    t4 = rd8(COW_IMG(0x1047ccc0u));
    d5 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cbc8u), (float)d5);
    wrf32(COW_IMG(0x1047cbd4u), (float)-d5);
    d6 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cbd8u), (float)d6);
    wrf32(COW_IMG(0x1047cbc4u), (float)d6);
    if ((t4 & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    COW_AT(1006ddf2)
        wr32(COW_IMG(0x1047ce20u), 0x3f800000u);
        wr8(COW_IMG(0x1047ccc0u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047ce24u), 0u);
        wr32(COW_IMG(0x1047ce28u), 0u);
        wr32(COW_IMG(0x1047ce2cu), 0u);
        wr32(COW_IMG(0x1047ce30u), 0u);
        wr32(COW_IMG(0x1047ce34u), 0x3f800000u);
        wr32(COW_IMG(0x1047ce38u), 0u);
        wr32(COW_IMG(0x1047ce3cu), 0u);
        wr32(COW_IMG(0x1047ce40u), 0u);
        wr32(COW_IMG(0x1047ce44u), 0u);
        wr32(COW_IMG(0x1047ce48u), 0x3f800000u);
        wr32(COW_IMG(0x1047ce4cu), 0u);
        wr32(COW_IMG(0x1047ce50u), 0u);
        wr32(COW_IMG(0x1047ce54u), 0u);
        wr32(COW_IMG(0x1047ce58u), 0u);
        wr32(COW_IMG(0x1047ce5cu), 0x3f800000u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006dea6u);
        t7 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e000u));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1006dea6)
    }
    COW_AT(1006dea9)
    t10 = rd8(COW_IMG(0x1047ccc0u));
    d11 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(COW_IMG(0x1047ce48u), (float)d11);
    wrf32(COW_IMG(0x1047ce20u), (float)d11);
    d12 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(COW_IMG(0x1047ce40u), (float)d12);
    wrf32(COW_IMG(0x1047ce28u), (float)-d12);
    if ((t10 & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 4u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 4u;
        ecx = (ecx & 0xffffff00u) | t10;
    COW_AT(1006dedf)
        wr32(COW_IMG(0x1047cbf0u), 0x3f800000u);
        wr8(COW_IMG(0x1047ccc0u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047cbf4u), 0u);
        wr32(COW_IMG(0x1047cbf8u), 0u);
        wr32(COW_IMG(0x1047cbfcu), 0u);
        wr32(COW_IMG(0x1047cc00u), 0u);
        wr32(COW_IMG(0x1047cc04u), 0x3f800000u);
        wr32(COW_IMG(0x1047cc08u), 0u);
        wr32(COW_IMG(0x1047cc0cu), 0u);
        wr32(COW_IMG(0x1047cc10u), 0u);
        wr32(COW_IMG(0x1047cc14u), 0u);
        wr32(COW_IMG(0x1047cc18u), 0x3f800000u);
        wr32(COW_IMG(0x1047cc1cu), 0u);
        wr32(COW_IMG(0x1047cc20u), 0u);
        wr32(COW_IMG(0x1047cc24u), 0u);
        wr32(COW_IMG(0x1047cc28u), 0u);
        wr32(COW_IMG(0x1047cc2cu), 0x3f800000u);
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006df93u);
        t13 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006dff0u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(1006df93)
    }
    COW_AT(1006df96)
    d15 = fr(g, cos((double)rdf32(sp0 + 0x10u)));
    wrf32(COW_IMG(0x1047cc04u), (float)d15);
    wrf32(COW_IMG(0x1047cbf0u), (float)d15);
    d16 = fr(g, sin((double)rdf32(sp0 + 0x10u)));
    wrf32(COW_IMG(0x1047cbf4u), (float)d16);
    wrf32(COW_IMG(0x1047cc00u), (float)-d16);
    g->eax = eax;
    g->edx = edx;
    t17 = rd32(self);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1006dfd7u);
    t18 = cow_thiscall(g, rd32(t17 + 0x24u), self, 3, arg1, COW_IMG(0x1047cbf0u), COW_IMG(0x1047ce20u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    esi = t17;
    COW_AT(1006dfd7)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1006dfdeu);
    cow_thiscall(g, rd32(esi + 0x24u), self, 3, arg1, eax, COW_IMG(0x1047cbb0u));
    t20 = g->edx;
    edx = t20;
    COW_AT(1006dfde)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006dcf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006ddb9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1006ddbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006ddf2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006dea6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1006dea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006dedfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006df93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1006df96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1006dfd7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 0x10u, COW_IMG(0x1047cbb0u));
        (void)sp0;
        return 1;
    }
    case 0x1006dfdeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1006dd05: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006dcf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006dcf0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
