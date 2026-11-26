/* f_0x1006d9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1006d9c0(Guest* g)
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1006da89u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006da89;
    case 0x1006da8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006da8c;
    case 0x1006dac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dac2;
    case 0x1006db76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006db76;
    case 0x1006db79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006db79;
    case 0x1006dbadu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dbad;
    case 0x1006dc61u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dc61;
    case 0x1006dc64u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dc64;
    case 0x1006dca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dca3;
    case 0x1006dcaau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006dcaa;
    default: break;
    }
#endif

    COW_AT(1006d9c0)
    if (rd8(COW_IMG(0x1047cc78u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cc78u));
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cc78u));
    COW_AT(1006d9d5)
        wr32(COW_IMG(0x1047cb70u), 0x3f800000u);
        wr8(COW_IMG(0x1047cc78u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047cb74u), 0u);
        wr32(COW_IMG(0x1047cb78u), 0u);
        wr32(COW_IMG(0x1047cb7cu), 0u);
        wr32(COW_IMG(0x1047cb80u), 0u);
        wr32(COW_IMG(0x1047cb84u), 0x3f800000u);
        wr32(COW_IMG(0x1047cb88u), 0u);
        wr32(COW_IMG(0x1047cb8cu), 0u);
        wr32(COW_IMG(0x1047cb90u), 0u);
        wr32(COW_IMG(0x1047cb94u), 0u);
        wr32(COW_IMG(0x1047cb98u), 0x3f800000u);
        wr32(COW_IMG(0x1047cb9cu), 0u);
        wr32(COW_IMG(0x1047cba0u), 0u);
        wr32(COW_IMG(0x1047cba4u), 0u);
        wr32(COW_IMG(0x1047cba8u), 0u);
        wr32(COW_IMG(0x1047cbacu), 0x3f800000u);
        g->eax = (in_eax & 0xffffff00u) | 1u;
        g->ecx = ecx;
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006da89u);
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006dce0u));
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1006da89)
    }
    COW_AT(1006da8c)
    t4 = rd8(COW_IMG(0x1047cc78u));
    d5 = fr(g, sin((double)rdf32(arg2)));
    wrf32(COW_IMG(0x1047cb88u), (float)d5);
    wrf32(COW_IMG(0x1047cb94u), (float)-d5);
    d6 = fr(g, cos((double)rdf32(arg2)));
    wrf32(COW_IMG(0x1047cb98u), (float)d6);
    wrf32(COW_IMG(0x1047cb84u), (float)d6);
    if ((t4 & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    COW_AT(1006dac2)
        wr32(COW_IMG(0x1047cd98u), 0x3f800000u);
        wr8(COW_IMG(0x1047cc78u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047cd9cu), 0u);
        wr32(COW_IMG(0x1047cda0u), 0u);
        wr32(COW_IMG(0x1047cda4u), 0u);
        wr32(COW_IMG(0x1047cda8u), 0u);
        wr32(COW_IMG(0x1047cdacu), 0x3f800000u);
        wr32(COW_IMG(0x1047cdb0u), 0u);
        wr32(COW_IMG(0x1047cdb4u), 0u);
        wr32(COW_IMG(0x1047cdb8u), 0u);
        wr32(COW_IMG(0x1047cdbcu), 0u);
        wr32(COW_IMG(0x1047cdc0u), 0x3f800000u);
        wr32(COW_IMG(0x1047cdc4u), 0u);
        wr32(COW_IMG(0x1047cdc8u), 0u);
        wr32(COW_IMG(0x1047cdccu), 0u);
        wr32(COW_IMG(0x1047cdd0u), 0u);
        wr32(COW_IMG(0x1047cdd4u), 0x3f800000u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006db76u);
        t7 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006dcd0u));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1006db76)
    }
    COW_AT(1006db79)
    t10 = rd8(COW_IMG(0x1047cc78u));
    d11 = fr(g, cos((double)rdf32(arg2 + 4u)));
    wrf32(COW_IMG(0x1047cdc0u), (float)d11);
    wrf32(COW_IMG(0x1047cd98u), (float)d11);
    d12 = fr(g, sin((double)rdf32(arg2 + 4u)));
    wrf32(COW_IMG(0x1047cdb8u), (float)d12);
    wrf32(COW_IMG(0x1047cda0u), (float)-d12);
    if ((t10 & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 4u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 4u;
        ecx = (ecx & 0xffffff00u) | t10;
    COW_AT(1006dbad)
        wr32(COW_IMG(0x1047ce68u), 0x3f800000u);
        wr8(COW_IMG(0x1047cc78u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047ce6cu), 0u);
        wr32(COW_IMG(0x1047ce70u), 0u);
        wr32(COW_IMG(0x1047ce74u), 0u);
        wr32(COW_IMG(0x1047ce78u), 0u);
        wr32(COW_IMG(0x1047ce7cu), 0x3f800000u);
        wr32(COW_IMG(0x1047ce80u), 0u);
        wr32(COW_IMG(0x1047ce84u), 0u);
        wr32(COW_IMG(0x1047ce88u), 0u);
        wr32(COW_IMG(0x1047ce8cu), 0u);
        wr32(COW_IMG(0x1047ce90u), 0x3f800000u);
        wr32(COW_IMG(0x1047ce94u), 0u);
        wr32(COW_IMG(0x1047ce98u), 0u);
        wr32(COW_IMG(0x1047ce9cu), 0u);
        wr32(COW_IMG(0x1047cea0u), 0u);
        wr32(COW_IMG(0x1047cea4u), 0x3f800000u);
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006dc61u);
        t13 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006dcc0u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(1006dc61)
    }
    COW_AT(1006dc64)
    d15 = fr(g, cos((double)rdf32(arg2 + 8u)));
    wrf32(COW_IMG(0x1047ce7cu), (float)d15);
    wrf32(COW_IMG(0x1047ce68u), (float)d15);
    d16 = fr(g, sin((double)rdf32(arg2 + 8u)));
    wrf32(COW_IMG(0x1047ce6cu), (float)d16);
    wrf32(COW_IMG(0x1047ce78u), (float)-d16);
    g->eax = eax;
    g->edx = edx;
    t17 = rd32(self);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1006dca3u);
    t18 = cow_thiscall(g, rd32(t17 + 0x24u), self, 3, arg1, COW_IMG(0x1047ce68u), COW_IMG(0x1047cd98u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    esi = t17;
    COW_AT(1006dca3)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1006dcaau);
    cow_thiscall(g, rd32(esi + 0x24u), self, 3, arg1, eax, COW_IMG(0x1047cb70u));
    t20 = g->edx;
    edx = t20;
    COW_AT(1006dcaa)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006d9c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006da89u:
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
    case 0x1006da8cu:
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
    case 0x1006dac2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006db76u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006db79u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006dbadu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006dc61u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006dc64u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1006dca3u:
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
        wr32(sp0 - 0x10u, COW_IMG(0x1047cb70u));
        (void)sp0;
        return 1;
    }
    case 0x1006dcaau:
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
     1006d9d5: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006d9c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006d9c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
