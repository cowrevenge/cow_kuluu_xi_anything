/* f_0x1006e380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_1006e380(Guest* g)
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
    case 0x1006e449u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e449;
    case 0x1006e44cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e44c;
    case 0x1006e482u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e482;
    case 0x1006e536u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e536;
    case 0x1006e539u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e539;
    case 0x1006e56fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e56f;
    case 0x1006e623u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e623;
    case 0x1006e626u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e626;
    case 0x1006e667u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e667;
    case 0x1006e66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_1006e66e;
    default: break;
    }
#endif

    COW_AT(1006e380)
    if (rd8(COW_IMG(0x1047cd08u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | 1u;
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cd08u));
        edx = in_edx;
    }
    else
    {
        ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x1047cd08u));
    COW_AT(1006e395)
        wr32(COW_IMG(0x1047cf38u), 0x3f800000u);
        wr8(COW_IMG(0x1047cd08u), (uint8_t)(ecx | 1u));
        wr32(COW_IMG(0x1047cf3cu), 0u);
        wr32(COW_IMG(0x1047cf40u), 0u);
        wr32(COW_IMG(0x1047cf44u), 0u);
        wr32(COW_IMG(0x1047cf48u), 0u);
        wr32(COW_IMG(0x1047cf4cu), 0x3f800000u);
        wr32(COW_IMG(0x1047cf50u), 0u);
        wr32(COW_IMG(0x1047cf54u), 0u);
        wr32(COW_IMG(0x1047cf58u), 0u);
        wr32(COW_IMG(0x1047cf5cu), 0u);
        wr32(COW_IMG(0x1047cf60u), 0x3f800000u);
        wr32(COW_IMG(0x1047cf64u), 0u);
        wr32(COW_IMG(0x1047cf68u), 0u);
        wr32(COW_IMG(0x1047cf6cu), 0u);
        wr32(COW_IMG(0x1047cf70u), 0u);
        wr32(COW_IMG(0x1047cf74u), 0x3f800000u);
        g->eax = (in_eax & 0xffffff00u) | 1u;
        g->ecx = ecx;
        g->edx = (in_edx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006e449u);
        t1 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e6a0u));
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(1006e449)
    }
    COW_AT(1006e44c)
    t4 = rd8(COW_IMG(0x1047cd08u));
    d5 = fr(g, sin((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cf50u), (float)d5);
    wrf32(COW_IMG(0x1047cf5cu), (float)-d5);
    d6 = fr(g, cos((double)rdf32(sp0 + 8u)));
    wrf32(COW_IMG(0x1047cf60u), (float)d6);
    wrf32(COW_IMG(0x1047cf4cu), (float)d6);
    if ((t4 & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 2u;
        ecx = (ecx & 0xffffff00u) | t4;
    COW_AT(1006e482)
        wr32(COW_IMG(0x1047cea8u), 0x3f800000u);
        wr8(COW_IMG(0x1047cd08u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047ceacu), 0u);
        wr32(COW_IMG(0x1047ceb0u), 0u);
        wr32(COW_IMG(0x1047ceb4u), 0u);
        wr32(COW_IMG(0x1047ceb8u), 0u);
        wr32(COW_IMG(0x1047cebcu), 0x3f800000u);
        wr32(COW_IMG(0x1047cec0u), 0u);
        wr32(COW_IMG(0x1047cec4u), 0u);
        wr32(COW_IMG(0x1047cec8u), 0u);
        wr32(COW_IMG(0x1047ceccu), 0u);
        wr32(COW_IMG(0x1047ced0u), 0x3f800000u);
        wr32(COW_IMG(0x1047ced4u), 0u);
        wr32(COW_IMG(0x1047ced8u), 0u);
        wr32(COW_IMG(0x1047cedcu), 0u);
        wr32(COW_IMG(0x1047cee0u), 0u);
        wr32(COW_IMG(0x1047cee4u), 0x3f800000u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006e536u);
        t7 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e690u));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1006e536)
    }
    COW_AT(1006e539)
    t10 = rd8(COW_IMG(0x1047cd08u));
    d11 = fr(g, cos((double)rdf32(sp0 + 0xcu)));
    wrf32(COW_IMG(0x1047ced0u), (float)d11);
    wrf32(COW_IMG(0x1047cea8u), (float)d11);
    d12 = fr(g, sin((double)rdf32(sp0 + 0xcu)));
    wrf32(COW_IMG(0x1047cec8u), (float)d12);
    wrf32(COW_IMG(0x1047ceb0u), (float)-d12);
    if ((t10 & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 4u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 4u;
        ecx = (ecx & 0xffffff00u) | t10;
    COW_AT(1006e56f)
        wr32(COW_IMG(0x1047ccc8u), 0x3f800000u);
        wr8(COW_IMG(0x1047cd08u), (uint8_t)(ecx | eax));
        wr32(COW_IMG(0x1047ccccu), 0u);
        wr32(COW_IMG(0x1047ccd0u), 0u);
        wr32(COW_IMG(0x1047ccd4u), 0u);
        wr32(COW_IMG(0x1047ccd8u), 0u);
        wr32(COW_IMG(0x1047ccdcu), 0x3f800000u);
        wr32(COW_IMG(0x1047cce0u), 0u);
        wr32(COW_IMG(0x1047cce4u), 0u);
        wr32(COW_IMG(0x1047cce8u), 0u);
        wr32(COW_IMG(0x1047ccecu), 0u);
        wr32(COW_IMG(0x1047ccf0u), 0x3f800000u);
        wr32(COW_IMG(0x1047ccf4u), 0u);
        wr32(COW_IMG(0x1047ccf8u), 0u);
        wr32(COW_IMG(0x1047ccfcu), 0u);
        wr32(COW_IMG(0x1047cd00u), 0u);
        wr32(COW_IMG(0x1047cd04u), 0x3f800000u);
        g->eax = eax;
        g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
        g->esp = sp0 - 0xcu;
        COW_RET(0x1006e623u);
        t13 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x1006e680u));
        t14 = g->edx;
        eax = t13;
        edx = t14;
    COW_AT(1006e623)
    }
    COW_AT(1006e626)
    d15 = fr(g, cos((double)rdf32(sp0 + 0x10u)));
    wrf32(COW_IMG(0x1047ccdcu), (float)d15);
    wrf32(COW_IMG(0x1047ccc8u), (float)d15);
    d16 = fr(g, sin((double)rdf32(sp0 + 0x10u)));
    wrf32(COW_IMG(0x1047ccccu), (float)d16);
    wrf32(COW_IMG(0x1047ccd8u), (float)-d16);
    g->eax = eax;
    g->edx = edx;
    t17 = rd32(self);
    g->esp = sp0 - 0x10u;
    COW_RET(0x1006e667u);
    t18 = cow_thiscall(g, rd32(t17 + 0x24u), self, 3, arg1, COW_IMG(0x1047cf38u), COW_IMG(0x1047cea8u));
    t19 = g->edx;
    eax = t18;
    edx = t19;
    esi = t17;
    COW_AT(1006e667)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    COW_RET(0x1006e66eu);
    cow_thiscall(g, rd32(esi + 0x24u), self, 3, arg1, eax, COW_IMG(0x1047ccc8u));
    t20 = g->edx;
    edx = t20;
    COW_AT(1006e66e)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1006e380(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1006e449u:
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
    case 0x1006e44cu:
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
    case 0x1006e482u:
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
    case 0x1006e536u:
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
    case 0x1006e539u:
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
    case 0x1006e56fu:
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
    case 0x1006e623u:
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
    case 0x1006e626u:
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
    case 0x1006e667u:
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
        wr32(sp0 - 0x10u, COW_IMG(0x1047ccc8u));
        (void)sp0;
        return 1;
    }
    case 0x1006e66eu:
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
     1006e395: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e380(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1006e380(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
