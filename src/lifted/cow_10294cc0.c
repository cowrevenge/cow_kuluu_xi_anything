/* f_0x10294cc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10294cc0(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d1;
    double d17;
    double d19;
    double d2;
    double d23;
    double d27;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_b4;
    uint32_t loc_bc;
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_cc;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 248u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10294ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10294ce2;
    case 0x10294cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10294cfb;
    case 0x10294d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10294d05;
    case 0x10294d0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10294d0a;
    case 0x10294d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d18;
    case 0x10294d35u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d35;
    case 0x10294d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d59;
    case 0x10294d5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d5f;
    case 0x10294d65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d65;
    case 0x10294d6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d6a;
    case 0x10294d72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_b4 = rd32(sp0 - 0xb4u); goto E_10294d72;
    case 0x10294d9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294d9d;
    case 0x10294ddeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294dde;
    case 0x10294deeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294dee;
    case 0x10294df6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294df6;
    case 0x10294e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e07;
    case 0x10294e0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e0e;
    case 0x10294e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e1c;
    case 0x10294e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e22;
    case 0x10294e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e3b;
    case 0x10294e44u: ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294e44;
    case 0x10294e6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xccu); in_esi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xccu); g->esi = rd32(sp0 - 0xc8u); goto E_10294e6e;
    case 0x10294e75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e75;
    case 0x10294e82u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e82;
    case 0x10294e90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294e90;
    case 0x10294ea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294ea1;
    case 0x10294ec3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294ec3;
    case 0x10294ec9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294ec9;
    case 0x10294edau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294eda;
    case 0x10294eeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294eea;
    case 0x10294ef5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294ef5;
    case 0x10294f1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294f1c;
    case 0x10294f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10294f78;
    case 0x10294f94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294f94;
    case 0x10294fa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_cc = rd32(sp0 - 0xccu); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); loc_bc = rd32(sp0 - 0xbcu); loc_b4 = rd32(sp0 - 0xb4u); goto E_10294fa1;
    default: break;
    }
#endif

    COW_AT(10294cc0)
    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_esi);
    wr32(sp0 - 0xccu, in_edi);
    wr32(sp0 - 0xb4u, 0u);
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        eax = in_eax;
        edx = rd32(arg1 + 0x1cu);
        goto L_10294d0a;
    }
    ecx = 0u;
    edx = rd32(arg1 + 0x1cu);
    esi = 0u;
L_10294ce2: ;
    COW_AT(10294ce2)
    d1 = fabs((double)rdf32(arg3 + ecx * 4u));
    if (d1 < rdf64(COW_IMG(0x10340b18u)))
    {
        eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x10340b18u)), 0u);
        goto L_10294d05;
    }
    eax = (arg3 & 0xffff0000u) | (uint16_t)cow_fsw(g, d1, rdf64(COW_IMG(0x10340b18u)), 0u);
    COW_AT(10294cfb)
    if (esi + 1u == 0x10u) goto L_10294e6e;
    esi = esi + 1u;
L_10294d05: ;
    COW_AT(10294d05)
    if ((int32_t)(ecx + 1u) < (int32_t)edx)
    {
        ecx = ecx + 1u;
        goto L_10294ce2;
    }
L_10294d0a: ;
    COW_AT(10294d0a)
    wr32(sp0 - 0xbcu, 0u);
    if ((int32_t)edx <= 0)
    {
        loc_c0 = in_ebx;
        loc_c4 = in_ebp;
        loc_c8 = in_esi;
        loc_cc = in_edi;
        goto L_10294fa1;
    }
    ecx = 0u;
    ebx = 0u;
    loc_c0 = in_ebx;
    loc_c4 = in_ebp;
    loc_c8 = in_esi;
    loc_cc = in_edi;
    loc_b4 = 0u;
    loc_bc = 0u;
L_10294d18: ;
    COW_AT(10294d18)
    d2 = fabs((double)rdf32(arg3 + ecx * 4u));
    if (d2 < rdf64(COW_IMG(0x10340b18u))) goto L_10294dde;
    COW_AT(10294d35)
    t3 = rd32(ecx * 4u + rd32(arg1 + 0x20u));
    wr32(sp0 - 0xd0u, t3);
    g->eax = rd32(arg1 + 0x20u);
    t4 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 0xd0u;
    t5 = cow_stdcall(g, COW_IMG(0x1028d990u), 0);
    wr32(sp0 - 0xb4u, t5);
    if (t5 == 0u)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_10294e75;
    }
    esi = t5;
    loc_b4 = t5;
    COW_AT(10294d59)
    if ((int32_t)arg2 <= 0)
    {
        eax = 0u;
        goto L_10294d6a;
    }
    eax = 0u;
L_10294d5f: ;
    COW_AT(10294d5f)
    if (rd32(eax * 4u + esi) == 1u) goto L_10294d6a;
    COW_AT(10294d65)
    if ((int32_t)(eax + 1u) < (int32_t)arg2)
    {
        eax = eax + 1u;
        goto L_10294d5f;
    }
    eax = eax + 1u;
L_10294d6a: ;
    COW_AT(10294d6a)
    if (eax == arg2)
    {
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_cc = rd32(sp0 - 0xccu);
        goto L_10294e75;
    }
    COW_AT(10294d72)
    wr32(sp0 - 0xb8u, arg2 * 4u);
    t6 = rd32(rd32(arg1 + 0x20u));
    wr32(sp0 - 0xd0u, t6);
    g->eax = arg2 * 4u;
    g->esp = sp0 - 0xd0u;
    t7 = cow_stdcall(g, COW_IMG(0x1028d990u), 0);
    edi = t7;
    ecx = arg2 * 4u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_10294e44;
    COW_AT(10294d9d)
    wr32(sp0 - 0xd0u, arg4);
    t8 = rd32(rd32(arg1 + 0x20u) + rd32(sp0 - 0xbcu) * 4u);
    wr32(sp0 - 0xd4u, t8);
    g->eax = t8;
    t9 = rd32(sp0 - 0xbcu);
    g->esp = sp0 - 0xd4u;
    t10 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
    wr32(ebx * 4u + sp0 - 0x80u, t10);
    t11 = rd32(arg3 + t9 * 4u);
    wr32(ebx * 4u + sp0 - 0x40u, t11);
    ecx = t9;
    ebx = ebx + 1u;
    loc_c0 = rd32(sp0 - 0xc0u);
    loc_c4 = rd32(sp0 - 0xc4u);
    loc_c8 = rd32(sp0 - 0xc8u);
    loc_cc = rd32(sp0 - 0xccu);
    loc_b4 = rd32(sp0 - 0xb4u);
L_10294dde: ;
    COW_AT(10294dde)
    wr32(sp0 - 0xbcu, ecx + 1u);
    if ((int32_t)(ecx + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        eax = rd32(arg1 + 0x1cu);
        loc_bc = ecx + 1u;
        ecx = ecx + 1u;
        goto L_10294d18;
    }
    ecx = ecx + 1u;
    COW_AT(10294dee)
    if (ebx != 0u)
    {
    COW_AT(10294df6)
        if ((int32_t)arg2 > 0)
        {
    COW_AT(10294e07)
            ebp = arg5;
            esi = 0u;
L_10294e0e: ;
    COW_AT(10294e0e)
            if (rd32(esi * 4u + loc_b4) == 1u)
            {
    COW_AT(10294ef5)
                wr32(sp0 - 0xd0u, esi);
                t20 = rd32(sp0 - 0x80u);
                wr32(sp0 - 0xd4u, t20);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0xb0u, t20, esi);
                t21 = rd32(sp0 - 0x40u);
                wr32(sp0 - 0xbcu, t21);
                if ((int32_t)ebx <= 1)
                {
                    ecx = t21;
                    goto L_10294f78;
                }
                ecx = t21;
                edi = 1u;
L_10294f1c: ;
    COW_AT(10294f1c)
                wr32(sp0 - 0xd0u, esi);
                t22 = rd32(edi * 4u + sp0 - 0x80u);
                wr32(sp0 - 0xd4u, t22);
                wr32(sp0 - 0xd8u, sp0 - 0x90u);
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x90u, t22, esi);
                d23 = (double)(float)(double)rdf32(edi * 4u + sp0 - 0x40u);
                wrf32(sp0 - 0xb8u, (float)d23);
                wr32(sp0 - 0xdcu, cow_f2bits(d23));
                t24 = rd32(sp0 - 0xbcu);
                wr32(sp0 - 0xe0u, t24);
                wr32(sp0 - 0xe4u, sp0 - 0x90u);
                wr32(sp0 - 0xe8u, sp0 - 0xb0u);
                wr32(sp0 - 0xecu, sp0 - 0xa0u);
                g->edx = sp0 - 0xa0u;
                g->esp = sp0 - 0xd0u;
                cow_call_regs(g, COW_IMG(0x10294fb0u), sp0 - 0x90u, sp0 - 0xb0u, g->edx, 1, 7, sp0 - 0xa0u, sp0 - 0xb0u, sp0 - 0x90u, t24, cow_f2bits(d23), sp0 - 0x90u, rd32(sp0 - 0xd4u));
                t25 = g->edx;
                wr32(sp0 - 0xf0u, sp0 - 0xa0u);
                wr32(sp0 - 0xf4u, sp0 - 0xb0u);
                g->ecx = sp0 - 0xb0u;
                g->esp = sp0 - 0xecu;
                cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0xb0u, sp0 - 0xa0u);
                t26 = g->ecx;
                d27 = fr(g, (double)rdf32(sp0 - 0xb8u) + (double)rdf32(sp0 - 0xbcu));
                wrf32(sp0 - 0xbcu, (float)(double)(float)d27);
                if ((int32_t)(edi + 1u) < (int32_t)ebx)
                {
                    ecx = t26;
                    edi = edi + 1u;
                    goto L_10294f1c;
                }
                ecx = t26;
L_10294f78: ;
    COW_AT(10294f78)
                wr32(sp0 - 0xd0u, esi);
                wr32(sp0 - 0xd4u, arg5);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->ecx = ecx;
                g->esp = sp0 - 0xccu;
                cow_cdecl(g, COW_IMG(0x1027d0a0u), 3, sp0 - 0xb0u, arg5, esi);
                t28 = g->ecx;
                ecx = t28;
                ebp = ebp + 0x10u;
                esi = esi + 4u;
                loc_c0 = rd32(sp0 - 0xc0u);
                loc_c4 = rd32(sp0 - 0xc4u);
                loc_c8 = rd32(sp0 - 0xc8u);
                loc_cc = rd32(sp0 - 0xccu);
                loc_b4 = rd32(sp0 - 0xb4u);
            }
            else
            {
    COW_AT(10294e1c)
                if ((int32_t)ebx <= 0) goto L_10294e3b;
                eax = 0u;
L_10294e22: ;
    COW_AT(10294e22)
                t18 = rd32(eax * 4u + sp0 - 0x80u);
                d19 = fr(g, fr(g, (double)rdf32(esi * 4u + rd32(eax * 4u + sp0 - 0x80u)) * (double)rdf32(eax * 4u + sp0 - 0x40u)) + (double)rdf32(ebp));
                wrf32(ebp, (float)d19);
                if ((int32_t)(eax + 1u) < (int32_t)ebx)
                {
                    eax = eax + 1u;
                    goto L_10294e22;
                }
                ecx = t18;
L_10294e3b: ;
    COW_AT(10294e3b)
                ebp = ebp + 4u;
                esi = esi + 1u;
            }
    COW_AT(10294f94)
            if ((int32_t)esi < (int32_t)arg2) goto L_10294e0e;
        }
    }
L_10294fa1: ;
    COW_AT(10294fa1)
    g->ebx = loc_c0;
    g->esi = loc_c8;
    g->edi = loc_cc;
    g->ebp = loc_c4;
    return;
L_10294e44: ;
    COW_AT(10294e44)
    wr32(sp0 - 0xd0u, 0x116u);
    wr32(sp0 - 0xd4u, COW_IMG(0x103bb674u));
    wr32(sp0 - 0xd8u, COW_IMG(0x103b379cu));
    g->ebx = ebx;
    g->eax = arg2 * 4u;
    g->ecx = ecx;
    g->edx = 0u;
    g->esp = sp0 - 0xd0u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb674u));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0xdcu, COW_IMG(0x103bb7c8u));
    g->ebx = ebx;
    g->esp = sp0 - 0xd4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb7c8u), COW_IMG(0x103b379cu));
    loc_c0 = rd32(sp0 - 0xc0u);
    loc_c4 = rd32(sp0 - 0xc4u);
    loc_c8 = rd32(sp0 - 0xc8u);
    loc_cc = rd32(sp0 - 0xccu);
L_10294e75: ;
    COW_AT(10294e75)
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0) goto L_10294fa1;
    eax = rd32(arg1 + 0x1cu);
    COW_AT(10294e82)
    ebx = 0u;
    esi = arg3;
L_10294e90: ;
    COW_AT(10294e90)
    if (fabs((double)rdf32(esi)) < rdf64(COW_IMG(0x10340b18u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, fabs((double)rdf32(esi)), rdf64(COW_IMG(0x10340b18u)), 0u);
    }
    else
    {
    COW_AT(10294ea1)
        wr32(sp0 - 0xd0u, arg4);
        t15 = rd32(ebx * 4u + rd32(arg1 + 0x20u));
        wr32(sp0 - 0xd4u, t15);
        g->eax = t15;
        g->esp = sp0 - 0xd4u;
        t16 = cow_stdcall(g, COW_IMG(0x1028d910u), 0);
        if ((int32_t)arg2 <= 0)
        {
            eax = t16;
            loc_c0 = rd32(sp0 - 0xc0u);
            loc_c4 = rd32(sp0 - 0xc4u);
            loc_c8 = rd32(sp0 - 0xc8u);
            loc_cc = rd32(sp0 - 0xccu);
        }
        else
        {
            eax = t16;
    COW_AT(10294ec3)
            eax = eax - arg5;
            ecx = arg5;
            edx = arg2;
L_10294ec9: ;
    COW_AT(10294ec9)
            d17 = fr(g, fr(g, (double)rdf32(eax + ecx) * (double)rdf32(esi)) + (double)rdf32(ecx));
            wrf32(ecx, (float)d17);
            if (edx != 1u)
            {
                ecx = ecx + 4u;
                edx = edx - 1u;
                goto L_10294ec9;
            }
            loc_c0 = rd32(sp0 - 0xc0u);
            loc_c4 = rd32(sp0 - 0xc4u);
            loc_c8 = rd32(sp0 - 0xc8u);
            loc_cc = rd32(sp0 - 0xccu);
        }
    }
    COW_AT(10294eda)
    if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 0x1cu))
    {
        ebx = ebx + 1u;
        esi = esi + 4u;
        goto L_10294e90;
    }
    COW_AT(10294eea)
    g->ebx = loc_c0;
    g->esi = loc_c8;
    g->edi = loc_cc;
    g->ebp = loc_c4;
    return;
L_10294e6e: ;
    COW_AT(10294e6e)
    loc_c0 = in_ebx;
    loc_c4 = in_ebp;
    loc_c8 = in_esi;
    loc_cc = in_edi;
    goto L_10294e75;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10294cc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10294ce2u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10294cfbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10294d05u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10294d0au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->edi = arg1;
        wr32(sp0 - 0xb4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10294d18u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d35u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d59u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d5fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d65u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d6au:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d72u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294d9du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294ddeu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294deeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294df6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294e07u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10294e0eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294e1cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294e22u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294e3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294e44u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->eax = arg2 * 4u;
        g->edx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10294e6eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_b4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xccu);
        in_esi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294e75u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10294e82u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebx = 0u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10294e90u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10294ea1u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10294ec3u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10294ec9u:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10294edau:
    {
        unsigned af;
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        g->ebp = arg2;
        g->edi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x10294eeau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294ef5u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294f1cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294f78u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294f94u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    case 0x10294fa1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_b4;
        uint32_t loc_bc;
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_cc;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_cc = rd32(sp0 - 0xccu);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_bc = rd32(sp0 - 0xbcu);
        loc_b4 = rd32(sp0 - 0xb4u);
        g->esp = sp0 - 0xccu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10294cc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10294cc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
