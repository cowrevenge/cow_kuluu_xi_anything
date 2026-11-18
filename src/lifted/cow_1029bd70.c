/* f_0x1029bd70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1029bd70(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d14;
    double d15;
    double d16;
    double d17;
    double d2;
    double d3;
    double d4;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    double loc_18_f;
    uint32_t loc_1c;
    double loc_20_f;
    uint32_t loc_c;
    uint32_t t12;
    uint32_t t13;
    uint32_t t18;
    uint32_t t19;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    double x1;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1029bda0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_18_f = rdf32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x24u); goto E_1029bda0;
    case 0x1029bda9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bda9;
    case 0x1029bdafu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bdaf;
    case 0x1029bddfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bddf;
    case 0x1029bde9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bde9;
    case 0x1029be16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029be16;
    case 0x1029be1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x1 = ST(0); x0 = ST(1); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029be1e;
    case 0x1029be7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029be7c;
    case 0x1029be94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029be94;
    case 0x1029bea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bea7;
    case 0x1029beb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029beb1;
    case 0x1029bec2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bec2;
    case 0x1029becau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029beca;
    case 0x1029beddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bedd;
    case 0x1029bee7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bee7;
    case 0x1029bef8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bef8;
    case 0x1029bf00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf00;
    case 0x1029bf0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf0f;
    case 0x1029bf19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf19;
    case 0x1029bf26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf26;
    case 0x1029bf2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); x0 = ST(0); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf2e;
    case 0x1029bf63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); in_ebx = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x2cu); g->ebx = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x24u); goto E_1029bf63;
    case 0x1029bf66u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); loc_20_f = rdf32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18_f = rdf32(sp0 - 0x18u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0x24u); goto E_1029bf66;
    default: break;
    }
#endif

    COW_AT(1029bd70)
    wr32(sp0 - 0x24u, in_esi);
    d1 = fr(g, (double)rdf32(COW_IMG(0x1033678cu)) / fr(g, (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x18u) + (double)rdf32(COW_IMG(0x10340b88u))));
    wrf32(sp0 - 0x20u, (float)(double)(float)d1);
    d2 = fr(g, d1 * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x18u));
    wrf32(sp0 - 0x18u, (float)(double)(float)d2);
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        esi = rd32(COW_IMG(0x1099d200u));
        loc_20_f = (double)(float)d1;
        loc_18_f = (double)(float)d2;
    COW_AT(1029bda0)
        wr32(sp0 - 0x28u, in_ebx);
        wr32(sp0 - 0x2cu, in_ebp);
        wr32(sp0 - 0x30u, in_edi);
        wr32(sp0 - 0x1cu, eax);
        ecx = self;
        edx = in_edx;
        loc_1c = eax;
L_1029bdaf: ;
    COW_AT(1029bdaf)
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0xcu, 0u);
        d3 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(sp0 + 4u, 4u);
        ebx = esi + 0x350u;
        ebp = esi + 0x854u;
        edi = esi + 0x79cu;
        loc_10 = 0u;
        loc_c = 0u;
        x0 = d3;
L_1029bddf: ;
    COW_AT(1029bddf)
        if (rd32(ebp) != 0u)
        {
    COW_AT(1029bde9)
            d4 = fr(g, fr(g, fr(g, fr(g, fr(g, (double)rdf32(ebx + 4u) * (double)rdf32(rd32(sp0 + 0xcu) + 8u)) + fr(g, (double)rdf32(rd32(sp0 + 0xcu) + 4u) * (double)rdf32(ebx))) + fr(g, (double)rdf32(ebx - 4u) * (double)rdf32(rd32(sp0 + 0xcu)))) * loc_20_f) + loc_18_f);
            if (!(d4 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (rd32(sp0 + 0xcu) & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                x1 = d4;
            }
            else
            {
                eax = (rd32(sp0 + 0xcu) & 0xffff0000u) | (uint16_t)cow_fsw(g, d4, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
                x1 = d4;
    COW_AT(1029be16)
                x1 = (double)rdf32(COW_IMG(0x103295d8u));
            }
    COW_AT(1029be1e)
            g->ecx = ecx;
            g->edx = edx;
            fpush(g, x1);
            g->esp = sp0 - 0x30u;
            t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
            t6 = g->ecx;
            t7 = g->edx;
            wr32(sp0 - 0x14u, t5);
            d8 = fr(g, x1 - (double)(int32_t)t5);
            d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, x1 - (double)(int32_t)t5));
            d10 = fr(g, fr(g, fr(g, fr(g, d8 * (double)rdf32(esi + t5 * 0x10u + 0x2cu)) + fr(g, d9 * (double)rdf32(esi + t5 * 0x10u + 0x1cu))) * (double)rdf32(edi - 8u)) + (double)rdf32(sp0 - 0x10u));
            wrf32(sp0 - 0x10u, (float)(double)(float)d10);
            d11 = fr(g, fr(g, fr(g, fr(g, d8 * (double)rdf32(esi + t5 * 0x10u + 0x30u)) + fr(g, d9 * (double)rdf32(esi + t5 * 0x10u + 0x20u))) * (double)rdf32(edi - 4u)) + (double)rdf32(sp0 - 0xcu));
            wrf32(sp0 - 0xcu, (float)(double)(float)d11);
            ecx = t6;
            edx = t7;
            loc_20_f = (double)rdf32(sp0 - 0x20u);
            loc_18_f = (double)rdf32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            x0 = fr(g, x0 + fr(g, fr(g, fr(g, d8 * (double)rdf32(esi + t5 * 0x10u + 0x34u)) + fr(g, d9 * (double)rdf32(esi + t5 * 0x10u + 0x24u))) * (double)rdf32(edi)));
        }
    COW_AT(1029be7c)
        t12 = rd32(sp0 + 4u) - 1u;
        t13 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t12);
        if (t13 != 1u)
        {
            ebx = ebx + 0x40u;
            ebp = ebp + 4u;
            edi = edi + 0xcu;
            loc_10 = rd32(sp0 - 0x10u);
            loc_c = rd32(sp0 - 0xcu);
            goto L_1029bddf;
        }
        eax = t12;
    COW_AT(1029be94)
        d14 = (double)rdf32(sp0 - 0x10u);
        if ((cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(1029beb1)
            d15 = (double)rdf32(sp0 - 0x10u);
            if (!(d15 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                loc_10 = rd32(sp0 - 0x10u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(1029bec2)
                wr32(sp0 - 0x10u, 0u);
                loc_10 = 0u;
            }
        }
        else
        {
            eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(1029bea7)
            wr32(sp0 - 0x10u, 0x3f800000u);
            loc_10 = 0x3f800000u;
        }
    COW_AT(1029beca)
        d16 = (double)rdf32(sp0 - 0xcu);
        if ((cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(1029bee7)
            d17 = (double)rdf32(sp0 - 0xcu);
            if (!(d17 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d17, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
    COW_AT(1029bef8)
                wr32(sp0 - 0xcu, 0u);
                loc_c = 0u;
            }
        }
        else
        {
            eax = cow_fsw(g, d16, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(1029bedd)
            wr32(sp0 - 0xcu, 0x3f800000u);
            loc_c = 0x3f800000u;
        }
    COW_AT(1029bf00)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032961cu)), 1u) & 0x4100u;
    COW_AT(1029bf19)
            if (x0 < (double)rdf32(COW_IMG(0x103295d8u)))
            {
    COW_AT(1029bf26)
                x0 = (double)rdf32(COW_IMG(0x103295d8u));
            }
        }
        else
        {
    COW_AT(1029bf0f)
            x0 = (double)rdf32(COW_IMG(0x1032961cu));
        }
    COW_AT(1029bf2e)
        t18 = rd32(sp0 + 0x10u);
        wr32(t18, loc_10);
        wr32(t18 + 4u, loc_c);
        wrf32(t18 + 8u, (float)x0);
        t19 = rd32(sp0 + 0xcu);
        wr32(sp0 + 0x10u, t18 + 0x10u);
        wr32(sp0 + 0xcu, t19 + 0xcu);
        wr32(sp0 - 0x1cu, loc_1c - 1u);
        if (loc_1c != 1u)
        {
            ecx = loc_10;
            edx = t19 + 0xcu;
            loc_1c = loc_1c - 1u;
            goto L_1029bda9;
        }
    COW_AT(1029bf63)
    }
    COW_AT(1029bf66)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_1029bda9: ;
    COW_AT(1029bda9)
    esi = rd32(COW_IMG(0x1099d200u));
    goto L_1029bdaf;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1029bd70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1029bda0u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        double loc_18_f;
        double loc_20_f;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1029bda9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bdafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bddfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bde9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029be16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029be1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x1 = ST(0);
        x0 = ST(1);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029be7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029be94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bea7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029beb1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bec2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029becau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029beddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bee7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bef8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        x0 = ST(0);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        in_ebx = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1029bf66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        double loc_18_f;
        uint32_t loc_1c;
        double loc_20_f;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        loc_20_f = rdf32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18_f = rdf32(sp0 - 0x18u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1029bd70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1029bd70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
