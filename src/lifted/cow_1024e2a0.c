/* f_0x1024e2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024e2a0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d21;
    double d22;
    double d23;
    double d24;
    double d26;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d4;
    double d40;
    double d41;
    double d42;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d58;
    double d59;
    double d60;
    double d62;
    double d63;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_18_f;
    double loc_1c_f;
    double loc_24_f;
    double loc_28_f;
    uint32_t t1;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t25;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t43;
    uint32_t t5;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t6;
    uint32_t t61;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024e2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x3cu); in_esi = rd32(sp0 - 0x38u); in_ebp = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); x0 = ST(0); g->top = (g->top + 1u) & 7u; g->ebp = rd32(sp0 - 0x34u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x3cu); g->esi = rd32(sp0 - 0x38u); goto E_1024e2d0;
    case 0x1024e2ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e2dd;
    case 0x1024e31du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e31d;
    case 0x1024e324u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e324;
    case 0x1024e337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e337;
    case 0x1024e33eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e33e;
    case 0x1024e34au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e34a;
    case 0x1024e376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e376;
    case 0x1024e379u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e379;
    case 0x1024e380u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e380;
    case 0x1024e393u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e393;
    case 0x1024e3a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e3a6;
    case 0x1024e3bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e3bb;
    case 0x1024e3bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_28_f = rdf32(sp0 - 0x28u); loc_24_f = rdf32(sp0 - 0x24u); loc_18_f = rdf32(sp0 - 0x18u); goto E_1024e3bd;
    case 0x1024e3e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_1024e3e2;
    case 0x1024e3e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e3e9;
    case 0x1024e3eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e3ee;
    case 0x1024e3f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e3f4;
    case 0x1024e3fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e3fb;
    case 0x1024e410u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e410;
    case 0x1024e427u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e427;
    case 0x1024e459u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e459;
    case 0x1024e461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e461;
    case 0x1024e47eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e47e;
    case 0x1024e4b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e4b2;
    case 0x1024e4d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024e4d7;
    case 0x1024e4ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024e4eb;
    case 0x1024e4f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e4f8;
    case 0x1024e509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e509;
    case 0x1024e50fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e50f;
    case 0x1024e513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e513;
    case 0x1024e522u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e522;
    case 0x1024e536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e536;
    case 0x1024e543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e543;
    case 0x1024e549u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e549;
    case 0x1024e557u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e557;
    case 0x1024e559u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_1024e559;
    case 0x1024e55du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_1024e55d;
    case 0x1024e567u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_1024e567;
    case 0x1024e57au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_1024e57a;
    case 0x1024e597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); goto E_1024e597;
    case 0x1024e59bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c_f = rdf32(sp0 - 0x1cu); x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e59b;
    case 0x1024e5d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e5d8;
    case 0x1024e60bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e60b;
    case 0x1024e63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e63c;
    case 0x1024e656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1024e656;
    case 0x1024e658u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e658;
    case 0x1024e666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e666;
    case 0x1024e669u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e669;
    case 0x1024e66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e66f;
    case 0x1024e680u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e680;
    case 0x1024e688u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e688;
    case 0x1024e68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e68f;
    case 0x1024e6a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e6a0;
    case 0x1024e6d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024e6d2;
    case 0x1024e6e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x1 = ST(0); x0 = ST(1); g->top = (g->top + 2u) & 7u; goto E_1024e6e5;
    case 0x1024e6fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e6fa;
    case 0x1024e711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e711;
    case 0x1024e718u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e718;
    case 0x1024e71cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e71c;
    case 0x1024e72du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e72d;
    case 0x1024e730u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1024e730;
    default: break;
    }
#endif

    COW_AT(1024e2a0)
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_ebp);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    wr32(sp0 - 0x40u, 4u);
    wr32(sp0 - 0x44u, 0x3fu);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), self, 4, 0x3fu, 4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    d4 = cow_take_float(g);
    eax = t1;
    ecx = t2;
    edx = t3;
    x0 = d4;
    COW_AT(1024e2d0)
    wrf32(sp0 - 0x20u, (float)(double)(float)x0);
    wr32(sp0 - 0x48u, 5u);
    wr32(sp0 - 0x4cu, 0x3fu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10123970u), ecx, 4, 0x3fu, 5u, 0x3fu, 4u);
    t6 = g->ecx;
    t7 = g->edx;
    d8 = cow_take_float(g);
    eax = t5;
    ecx = t6;
    edx = t7;
    x0 = d8;
    COW_AT(1024e2dd)
    wrf32(sp0 - 0x24u, (float)(double)(float)x0);
    d9 = (double)rdf32(sp0 - 0x20u);
    d10 = (double)(float)fr(g, sqrt(fr(g, fr(g, x0 * (double)(float)x0) + fr(g, d9 * d9))));
    wrf32(sp0 - 0x28u, (float)d10);
    d11 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / d10);
    wrf32(sp0 - 0x18u, (float)(double)(float)d11);
    if ((cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032c9a4u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d10, (double)rdf32(COW_IMG(0x1032c9a4u)), 0u) & 0x4100u;
        esi = rd32(sp0 + 4u);
        loc_24_f = (double)(float)x0;
        loc_28_f = d10;
        loc_18_f = (double)(float)d11;
        goto L_1024e324;
    }
    esi = rd32(sp0 + 4u);
    loc_24_f = (double)(float)x0;
    loc_28_f = d10;
    loc_18_f = (double)(float)d11;
    COW_AT(1024e31d)
    ebx = 1u;
L_1024e379: ;
    COW_AT(1024e379)
    if ((rd32(esi) >> 8u & 0x10u) != 0u)
    {
        eax = rd32(esi);
    COW_AT(1024e380)
        if ((cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u;
    COW_AT(1024e393)
            if ((cow_fsw(g, loc_24_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, loc_24_f, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    COW_AT(1024e3a6)
                d12 = fabs((double)rdf32(sp0 - 0x20u));
                if (d12 < fabs(loc_24_f))
                {
    COW_AT(1024e3bb)
                    ebx = 0u;
                }
            }
        }
    }
L_1024e3bd: ;
    COW_AT(1024e3bd)
    wr32(sp0 - 0x40u, sp0 - 0x14u);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, esi + 0x280u);
    d13 = (double)(float)(double)rdf32(COW_IMG(0x10389438u) + ebx * 4u + rd32(esi + 8u) * 0x10u);
    wrf32(sp0 - 0x28u, (float)d13);
    g->eax = sp0 - 0x14u;
    g->ecx = rd32(esi + 8u);
    g->edx = ebx + rd32(esi + 8u) * 4u;
    t14 = rd32(esi + 8u);
    g->esp = sp0 - 0x3cu;
    t15 = cow_cdecl(g, COW_IMG(0x10273d80u), 3, esi + 0x280u, 0u, sp0 - 0x14u);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    ebp = esi + 0x280u;
    COW_AT(1024e3e2)
    if (eax != 0u)
    {
        edi = 0u;
    }
    else
    {
    COW_AT(1024e3e9)
        edi = 1u;
    }
    COW_AT(1024e3ee)
    wr32(sp0 - 0x40u, esi);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t18 = cow_cdecl(g, COW_IMG(0x1024e780u), 1, esi);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1024e3f4)
    if (edi != 0u) goto L_1024e410;
    COW_AT(1024e3fb)
    d21 = (double)rdf32(sp0 - 0x28u);
    if (d21 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1024e669;
    }
L_1024e410: ;
    COW_AT(1024e410)
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0xcu, 0u);
    if ((rd32(esi) >> 8u & 0x10u) == 0u)
    {
    COW_AT(1024e461)
        d26 = (double)(float)-(double)rdf32(sp0 - 0x24u);
        wrf32(sp0 - 0x10u, (float)d26);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, esi);
        t27 = rd32(sp0 - 0x20u);
        wr32(sp0 - 8u, t27);
        g->eax = sp0 - 0x10u;
        g->edx = t27;
        g->esp = sp0 - 0x3cu;
        t28 = cow_cdecl(g, COW_IMG(0x1024f070u), 2, esi, sp0 - 0x10u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    COW_AT(1024e47e)
        d30 = fr(g, (double)rdf32(esi + 0x9cu) - (double)rdf32(COW_IMG(0x10331360u)));
        d31 = fr(g, atan2((double)rdf32(sp0 - 8u), -(double)rdf32(sp0 - 0x10u)));
        wrf32(sp0 - 0x1cu, (float)(double)(float)d30);
        d32 = (double)rdf32(sp0 - 0x28u);
        if (d32 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = d31;
    COW_AT(1024e557)
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            loc_1c_f = (double)(float)d30;
            x0 = d31;
    COW_AT(1024e4b2)
            d33 = fr(g, (double)(int32_t)arg2 * (double)rdf32(COW_IMG(0x1033cd64u)));
            wrf32(sp0 + 4u, (float)d33);
            d34 = fabs(fr(g, loc_1c_f - x0));
            if ((cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032df98u)), 2u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032df98u)), 2u) & 0x4100u;
                x1 = d34;
            }
            else
            {
                eax = cow_fsw(g, d34, (double)rdf32(COW_IMG(0x1032df98u)), 2u) & 0x4100u;
                x1 = d34;
    COW_AT(1024e4d7)
                d35 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a3f0u)));
                d36 = fr(g, (double)rdf32(COW_IMG(0x1032df90u)) - x1);
                wrf32(sp0 + 4u, (float)d35);
                x1 = d36;
            }
    COW_AT(1024e4eb)
            d37 = (double)rdf32(sp0 + 4u);
            if ((cow_fsw(g, x1, d37, 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x1, d37, 1u) & 0x4100u;
                goto L_1024e549;
            }
            eax = cow_fsw(g, x1, d37, 1u) & 0x4100u;
    COW_AT(1024e4f8)
            if (!(loc_1c_f < x0))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, x0, 1u);
                x0 = loc_1c_f;
    COW_AT(1024e50f)
                x0 = fr(g, x0 - (double)rdf32(sp0 + 4u));
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, x0, 1u);
                x0 = loc_1c_f;
    COW_AT(1024e509)
                x0 = fr(g, x0 + (double)rdf32(sp0 + 4u));
            }
    COW_AT(1024e513)
            if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
                goto L_1024e536;
            }
            eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032df98u)), 1u) & 0x4100u;
    COW_AT(1024e522)
            d38 = fr(g, fr(g, x0 - (double)rdf32(COW_IMG(0x1032df90u))) + (double)rdf32(COW_IMG(0x10331360u)));
            wrf32(esi + 0x9cu, (float)d38);
        }
L_1024e559: ;
    COW_AT(1024e559)
        if (edi == 0u) goto L_1024e597;
    COW_AT(1024e55d)
        if ((int32_t)rd32(esi + 0x294u) < 0)
        {
            eax = rd32(esi + 0x294u);
            goto L_1024e597;
        }
        eax = rd32(esi + 0x294u);
    COW_AT(1024e567)
        if (eax * 0xd8u + rd32(esi + 0x2a0u) == 0u)
        {
            eax = eax * 0xd8u + rd32(esi + 0x2a0u);
            edx = rd32(esi + 0x2a0u);
            goto L_1024e597;
        }
        eax = eax * 0xd8u + rd32(esi + 0x2a0u);
    COW_AT(1024e57a)
        edx = rd32(eax);
        x0 = fr(g, (double)rdf32(COW_IMG(0x10389438u) + rd32(eax) * 4u + rd32(esi + 8u) * 0x10u) + fr(g, fr(g, (double)rdf32(sp0 - 0x28u) - (double)rdf32(COW_IMG(0x10389438u) + rd32(eax) * 4u + rd32(esi + 8u) * 0x10u)) * (double)rdf32(sp0 - 0x14u)));
        eax = rd32(eax) + rd32(esi + 8u) * 4u;
L_1024e59b: ;
    COW_AT(1024e59b)
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0x44u, esi);
        wr32(sp0 - 4u, 0x3f800000u);
        d40 = fr(g, (double)rdf32(sp0 - 0x24u) * fr(g, fr(g, fr(g, x0 * (double)(int32_t)arg2) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)));
        d41 = fr(g, fr(g, fr(g, x0 * (double)(int32_t)arg2) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u));
        wrf32(sp0 - 0x10u, (float)(double)(float)-d40);
        d42 = fr(g, d41 * (double)rdf32(sp0 - 0x20u));
        wrf32(sp0 - 8u, (float)(double)(float)d42);
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t43 = cow_cdecl(g, COW_IMG(0x1024f070u), 2, esi, sp0 - 0x10u);
        eax = t43;
    COW_AT(1024e5d8)
        d44 = fr(g, (double)rdf32(sp0 - 0x10u) + (double)rdf32(esi + 0x88u));
        wrf32(esi + 0x88u, (float)d44);
        d45 = fr(g, cow_bits2f(0u) + (double)rdf32(esi + 0x8cu));
        wrf32(esi + 0x8cu, (float)d45);
        d46 = fr(g, (double)rdf32(sp0 - 8u) + (double)rdf32(esi + 0x90u));
        wrf32(esi + 0x90u, (float)d46);
    }
    else
    {
        eax = rd32(esi);
    COW_AT(1024e427)
        wr32(sp0 - 0x40u, ebx);
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        wr32(sp0 - 0x48u, esi);
        d22 = fr(g, (double)rdf32(sp0 - 0x24u) * fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 - 0x28u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u)));
        d23 = fr(g, fr(g, fr(g, (double)(int32_t)arg2 * (double)rdf32(sp0 - 0x28u)) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(sp0 - 0x18u));
        wrf32(sp0 - 0x10u, (float)(double)(float)-d22);
        d24 = fr(g, d23 * (double)rdf32(sp0 - 0x20u));
        wrf32(sp0 - 8u, (float)(double)(float)d24);
        g->eax = eax;
        g->esp = sp0 - 0x3cu;
        t25 = cow_thiscall_cdecl(g, COW_IMG(0x1024f0d0u), sp0 - 0x10u, 3, esi, sp0 - 0x10u, ebx);
        eax = t25;
    COW_AT(1024e459)
    }
    COW_AT(1024e60b)
    d47 = (double)rdf32(esi + 0x90u);
    d48 = (double)rdf32(esi + 0x88u);
    d49 = fr(g, sqrt(fr(g, fr(g, d47 * d47) + fr(g, d48 * d48))));
    if ((cow_fsw(g, d49, (double)rdf32(COW_IMG(0x1032b074u)), 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d49, (double)rdf32(COW_IMG(0x1032b074u)), 1u) & 0x4100u;
        ecx = esi + 0x88u;
        x0 = d49;
    COW_AT(1024e656)
    }
    else
    {
        eax = cow_fsw(g, d49, (double)rdf32(COW_IMG(0x1032b074u)), 1u) & 0x4100u;
        ecx = esi + 0x88u;
        x0 = d49;
    COW_AT(1024e63c)
        d50 = fr(g, (double)rdf32(COW_IMG(0x1032b074u)) / x0);
        d51 = fr(g, d50 * (double)rdf32(ecx));
        wrf32(ecx, (float)d51);
        d52 = fr(g, d50 * (double)rdf32(esi + 0x90u));
        wrf32(esi + 0x90u, (float)d52);
    }
    COW_AT(1024e658)
    wr32(sp0 - 0x40u, esi + 0x98u);
    wr32(sp0 - 0x44u, ecx);
    wr32(sp0 - 0x48u, esi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = esi + 0x98u;
    g->esp = sp0 - 0x28u;
    t53 = cow_cdecl(g, COW_IMG(0x1024e740u), 8, esi, ecx, esi + 0x98u, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    t54 = g->ecx;
    t55 = g->edx;
    eax = t53;
    ecx = t54;
    edx = t55;
    COW_AT(1024e666)
L_1024e669: ;
    COW_AT(1024e669)
    wr32(sp0 - 0x40u, esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_cdecl(g, COW_IMG(0x1024f2e0u), 1, esi);
    t56 = g->ecx;
    t57 = g->edx;
    ecx = t56;
    edx = t57;
    COW_AT(1024e66f)
    if ((int32_t)rd32(esi + 0x284u) >= 0)
    {
        eax = rd32(esi + 0x284u);
    COW_AT(1024e680)
        if (eax != ebx)
        {
    COW_AT(1024e688)
            wr32(sp0 - 0x40u, ebx);
            wr32(sp0 - 0x44u, ebp);
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10274210u), 7, ebp, ebx, rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    COW_AT(1024e68f)
            if ((int32_t)rd32(esi + 0x294u) >= 0)
            {
                eax = rd32(esi + 0x294u);
    COW_AT(1024e6a0)
                d58 = (double)rdf32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x80u);
                d59 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                if ((cow_fsw(g, d58, d59, 2u) & 0x4100u) != 0u)
                {
                    ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                    edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                    x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                    x0 = d58;
                    goto L_1024e6e5;
                }
                ecx = eax * 0xd8u + rd32(esi + 0x2a0u) + 0x70u;
                edx = rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u));
                x1 = (double)rdf32(rd32(rd32(rd32(rd32(eax * 0xd8u + rd32(esi + 0x2a0u) + 0x8cu) + 0x2cu) + 0x20u)) + 0x24u);
                eax = cow_fsw(g, d58, d59, 2u) & 0x4100u;
                x0 = d58;
L_1024e6d2: ;
    COW_AT(1024e6d2)
                d60 = fr(g, x0 - x1);
                if ((cow_fsw(g, d60, x1, 2u) & 0x4100u) == 0u)
                {
                    eax = cow_fsw(g, d60, x1, 2u) & 0x4100u;
                    x0 = d60;
                    goto L_1024e6d2;
                }
                x0 = d60;
L_1024e6e5: ;
    COW_AT(1024e6e5)
                t61 = rd32(ecx + 0x14u);
                d62 = fr(g, x0 - (double)rdf32(edx + 0x20u));
                wr32(sp0 - 0x40u, t61);
                d63 = fr(g, d62 / (double)rdf32(edx + 0x24u));
                wrf32(sp0 + 4u, (float)d63);
                g->esp = sp0 - 0x3cu;
                t64 = cow_call_regs(g, COW_IMG(0x1027df90u), t61, g->ecx, g->edx, 1, 1, t61);
                eax = t64;
    COW_AT(1024e6fa)
                wr32(sp0 - 0x44u, sp0 - 0x14u);
                wr32(sp0 - 0x48u, sp0 - 0x29u);
                wr32(sp0 - 0x4cu, eax);
                t65 = rd32(sp0 + 4u);
                wr32(sp0 - 0x50u, t65);
                g->ecx = sp0 - 0x14u;
                g->edx = sp0 - 0x29u;
                g->esp = sp0 - 0x3cu;
                t66 = cow_call_regs(g, COW_IMG(0x1027d130u), t65, g->ecx, g->edx, 1, 5, t65, eax, sp0 - 0x29u, sp0 - 0x14u, rd32(sp0 - 0x40u));
                t67 = g->ecx;
                t68 = g->edx;
                ecx = t67;
                edx = t68;
                edi = eax;
                eax = t66;
    COW_AT(1024e711)
                if ((int32_t)eax >= 0)
                {
    COW_AT(1024e718)
                    if ((int32_t)eax < (int32_t)edi)
                    {
    COW_AT(1024e71c)
                        wr32(sp0 - 0x40u, eax);
                        wr32(sp0 - 0x44u, ebx + 2u);
                        wr32(sp0 - 0x48u, esi + 0x240u);
                        g->esp = sp0 - 0x3cu;
                        cow_cdecl(g, COW_IMG(0x10252ec0u), 3, esi + 0x240u, ebx + 2u, eax);
    COW_AT(1024e72d)
                    }
                }
            }
        }
    }
    COW_AT(1024e730)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 0x34u);
    return;
L_1024e324: ;
    COW_AT(1024e324)
    if ((cow_fsw(g, loc_28_f, (double)rdf32(COW_IMG(0x1032a3e0u)), 0u) & 0x4100u) != 0u) goto L_1024e33e;
    COW_AT(1024e337)
    ebx = 3u;
    goto L_1024e379;
L_1024e33e: ;
    COW_AT(1024e33e)
    if ((rd32(esi) >> 8u & 0x10u) == 0u)
    {
        ebx = 2u;
        goto L_1024e3bd;
    }
    COW_AT(1024e34a)
    wr32(sp0 - 0x40u, 2u);
    wr32(sp0 - 0x44u, sp0 - 0x10u);
    wr32(sp0 - 0x48u, esi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, COW_IMG(0x1024f0d0u), ecx, 3, esi, sp0 - 0x10u, 2u);
    COW_AT(1024e376)
    ebx = 2u;
    loc_24_f = (double)rdf32(sp0 - 0x24u);
    loc_28_f = (double)rdf32(sp0 - 0x28u);
    loc_18_f = (double)rdf32(sp0 - 0x18u);
    goto L_1024e379;
L_1024e536: ;
    COW_AT(1024e536)
    if (!(x0 < (double)rdf32(COW_IMG(0x1033bf74u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 1u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1033bf74u)), 1u);
    COW_AT(1024e543)
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x1032df90u)));
    }
L_1024e549: ;
    COW_AT(1024e549)
    d39 = fr(g, x0 + (double)rdf32(COW_IMG(0x10331360u)));
    wrf32(esi + 0x9cu, (float)d39);
    goto L_1024e559;
L_1024e597: ;
    COW_AT(1024e597)
    x0 = (double)rdf32(sp0 - 0x28u);
    goto L_1024e59b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024e2a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024e2d0u:
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
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x3cu);
        in_esi = rd32(sp0 - 0x38u);
        in_ebp = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x44u, 0x3fu);
        wr32(sp0 - 0x40u, 4u);
        (void)sp0;
        return 1;
    }
    case 0x1024e2ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e31du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e324u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e337u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e33eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e34au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        g->ebx = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1024e376u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        g->ebx = 2u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e379u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e380u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e393u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e3a6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e3bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e3bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_18_f;
        double loc_24_f;
        double loc_28_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_28_f = rdf32(sp0 - 0x28u);
        loc_24_f = rdf32(sp0 - 0x24u);
        loc_18_f = rdf32(sp0 - 0x18u);
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e3e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x48u;
        g->edi = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e3e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e3eeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e3f4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1024e3fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e410u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e427u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e459u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        wr32(sp0 - 0x44u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e461u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e47eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e4b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e4d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e4ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e4f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e509u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e50fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e513u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e522u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e536u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e543u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e549u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e557u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e559u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e55du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e567u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e57au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e597u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e59bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_1c_f;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c_f = rdf32(sp0 - 0x1cu);
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1024e5d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1024e60bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e63cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e656u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e658u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e666u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1024e669u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e66fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1024e680u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e688u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e68fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x44u;
        (void)sp0;
        return 1;
    }
    case 0x1024e6a0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e6d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e6e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        double x1;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x1 = ST(0);
        x0 = ST(1);
        g->top = (g->top + 2u) & 7u;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    case 0x1024e6fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1024e711u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x50u;
        wr32(sp0 - 0x48u, sp0 - 0x29u);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e718u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 - 0x29u);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e71cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        wr32(sp0 - 0x48u, sp0 - 0x29u);
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x1024e72du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x48u;
        (void)sp0;
        return 1;
    }
    case 0x1024e730u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x3cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024e2a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1024e2a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
