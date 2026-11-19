/* f_0x10235e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10235e00(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10235e1fu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235e1f;
    case 0x10235e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235e2e;
    case 0x10235e3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235e3b;
    case 0x10235e4fu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235e4f;
    case 0x10235e59u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235e59;
    case 0x10235e63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235e63;
    case 0x10235e70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235e70;
    case 0x10235ebdu: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235ebd;
    case 0x10235ec2u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235ec2;
    case 0x10235eccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235ecc;
    case 0x10235ed9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235ed9;
    case 0x10235efeu: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235efe;
    case 0x10235f07u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235f07;
    case 0x10235f11u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235f11;
    case 0x10235f1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235f1e;
    case 0x10235fa9u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235fa9;
    case 0x10235fb2u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10235fb2;
    case 0x10235fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235fbc;
    case 0x10235fc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10235fc9;
    case 0x10236022u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10236022;
    case 0x10236054u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10236054;
    case 0x10236059u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10236059;
    case 0x10236063u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10236063;
    case 0x10236070u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_10236070;
    case 0x102360c2u: edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebx = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x20u); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102360c2;
    case 0x102360ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102360cc;
    case 0x102360d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_102360d9;
    case 0x1023615fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023615f;
    default: break;
    }
#endif

    COW_AT(10235e00)
    wr32(sp0 - 0x20u, in_ebx);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_stdcall(g, COW_IMG(0x102361b0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_fastcall(g, COW_IMG(0x103149e0u), t2, t3, 0);
    wr32(sp0 - 0x2cu, 0u);
    t5 = cow_divs(g, t4, 0x64u);
    t6 = cow_mods(g, t4, 0x64u);
    if ((int32_t)t6 >= 40)
    {
        edx = t6;
        goto L_10235e4f;
    }
    eax = t5;
    COW_AT(10235e1f)
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, sp0 - 0x1cu, 1, 2, sp0 - 0x1cu, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    eax = 0u;
    ecx = t7;
    edx = t8;
L_10235e2e: ;
    COW_AT(10235e2e)
    t9 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_10235e2e;
    }
    ecx = (ecx & 0xffffff00u) | t9;
    COW_AT(10235e3b)
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, ecx, edx, 1, 2, sp0 - 0x1cu, 2u);
    t10 = g->ecx;
    ecx = t10;
L_10236022: ;
    COW_AT(10236022)
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t37 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t37;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
L_1023615f: ;
    COW_AT(1023615f)
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x2cu, 0xfu);
    t52 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t52;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x30u, sp0 - 0x14u);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x34u, arg1);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10312090u), sp0 - 0x14u, g->ecx, g->edx, 1, 3, arg1, sp0 - 0x14u, 0xfu);
    wr8(arg1 + 0xfu, 0u);
    g->ebx = rd32(sp0 - 0x20u);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    return;
L_10235e4f: ;
    COW_AT(10235e4f)
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    if ((int32_t)edx >= 80) goto L_10235ebd;
    COW_AT(10235e59)
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    eax = 0u;
    ecx = t11;
    edx = t12;
L_10235e63: ;
    COW_AT(10235e63)
    t13 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        goto L_10235e63;
    }
    eax = eax + 1u;
    COW_AT(10235e70)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 1u);
    t14 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, 2u);
    t15 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t15;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 2u);
    t16 = g->ecx;
    ecx = t16;
    goto L_10236022;
L_10235ebd: ;
    COW_AT(10235ebd)
    if ((int32_t)edx >= 85) goto L_10235efe;
    COW_AT(10235ec2)
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    eax = 0u;
    ecx = t17;
    edx = t18;
L_10235ecc: ;
    COW_AT(10235ecc)
    t19 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t19);
    if ((uint8_t)t19 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t19;
        goto L_10235ecc;
    }
    eax = eax + 1u;
    COW_AT(10235ed9)
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 2u);
    t20 = g->ecx;
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->ecx = t20;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x14u, g->ecx, sp0 - 0x1cu, 1, 3, sp0 - 0x14u, sp0 - 0x1cu, 1u);
    t21 = g->ecx;
    ecx = t21;
    goto L_10236022;
L_10235efe: ;
    COW_AT(10235efe)
    if ((int32_t)edx >= 90) goto L_10235fa9;
    COW_AT(10235f07)
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = 0u;
    ecx = t22;
    edx = t23;
L_10235f11: ;
    COW_AT(10235f11)
    t24 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t24);
    if ((uint8_t)t24 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t24;
        goto L_10235f11;
    }
    eax = eax + 1u;
    COW_AT(10235f1e)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 1u);
    t25 = g->ecx;
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    wr32(sp0 - 0x3cu, sp0 - 0x14u);
    g->ecx = t25;
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x14u, g->ecx, sp0 - 0x1cu, 1, 3, sp0 - 0x14u, sp0 - 0x1cu, 1u);
    t26 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x40u, 2u);
    t27 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t27;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x44u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 2u);
    t28 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x28u < sp0 - 0x44u;
    pf = PARITY((uint8_t)(sp0 - 0x28u));
    af = (sp0 - 0x44u ^ 0x1cu ^ sp0 - 0x28u) >> 4u & 1u;
    zf = sp0 == 0x28u;
    sf = (int32_t)(sp0 - 0x28u) < 0;
    of = ((sp0 - 0x44u ^ sp0 - 0x28u) & (sp0 - 0x28u ^ 0x1cu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t29 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t29;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    goto L_1023615f;
L_10235fa9: ;
    COW_AT(10235fa9)
    if ((int32_t)edx >= 95) goto L_10236054;
    COW_AT(10235fb2)
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
    t30 = g->ecx;
    t31 = g->edx;
    eax = 0u;
    ecx = t30;
    edx = t31;
L_10235fbc: ;
    COW_AT(10235fbc)
    t32 = rd8(eax + sp0 - 0x1cu);
    wr8(eax + sp0 - 0x14u, (uint8_t)t32);
    if ((uint8_t)t32 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t32;
        goto L_10235fbc;
    }
    eax = eax + 1u;
    COW_AT(10235fc9)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 1u);
    t33 = g->ecx;
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x34u, 2u);
    t34 = edi - ~ecx;
    edi = sp0 - 0x14u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    esi = t34;
    edi = edi - 1u;
    ecx = ~ecx >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    ecx = ~ecx & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->eax = sp0 - 0x1cu;
    g->esp = sp0 - 0x30u;
    t35 = cow_call_regs(g, COW_IMG(0x10236220u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x1cu);
    wr32(sp0 - 0x44u, sp0 - 0x14u);
    g->ecx = sp0 - 0x1cu;
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10313560u), t35, g->ecx, sp0 - 0x14u, 1, 3, sp0 - 0x14u, sp0 - 0x1cu, 1u);
    t36 = g->ecx;
    ecx = t36;
    goto L_10236022;
L_10236054: ;
    COW_AT(10236054)
    if ((int32_t)edx >= 98)
    {
    COW_AT(102360c2)
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
        t44 = g->ecx;
        t45 = g->edx;
        eax = 0u;
        ecx = t44;
        edx = t45;
L_102360cc: ;
    COW_AT(102360cc)
        t46 = rd8(eax + sp0 - 0x1cu);
        wr8(eax + sp0 - 0x14u, (uint8_t)t46);
        if ((uint8_t)t46 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t46;
            goto L_102360cc;
        }
        eax = eax + 1u;
    COW_AT(102360d9)
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 1u);
        t47 = g->ecx;
        edi = sp0 - 0x1cu;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x34u, 2u);
        t48 = edi - ~ecx;
        edi = sp0 - 0x14u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t48;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10236220u), g->eax, ecx, sp0 - 0x14u, 1, 2, sp0 - 0x1cu, 2u);
        t49 = g->ecx;
        edi = sp0 - 0x1cu;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x3cu, 1u);
        t50 = edi - ~ecx;
        edi = sp0 - 0x14u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t50;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x40u, sp0 - 0x1cu);
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x44u, sp0 - 0x14u);
        g->ecx = sp0 - 0x14u;
        g->esp = sp0 - 0x38u;
        cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x1cu, g->ecx, sp0 - 0x14u, 1, 3, sp0 - 0x14u, sp0 - 0x1cu, 1u);
        t51 = g->ecx;
        ecx = t51;
    }
    else
    {
    COW_AT(10236059)
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10236220u), g->eax, 0x64u, edx, 1, 2, sp0 - 0x1cu, 0u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = 0u;
        ecx = t38;
        edx = t39;
L_10236063: ;
    COW_AT(10236063)
        t40 = rd8(eax + sp0 - 0x1cu);
        wr8(eax + sp0 - 0x14u, (uint8_t)t40);
        if ((uint8_t)t40 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t40;
            goto L_10236063;
        }
        eax = eax + 1u;
    COW_AT(10236070)
        wr32(sp0 - 0x2cu, 2u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        cow_call_regs(g, COW_IMG(0x10236220u), g->eax, sp0 - 0x1cu, edx, 1, 2, sp0 - 0x1cu, 2u);
        t41 = g->ecx;
        edi = sp0 - 0x1cu;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0x34u, 1u);
        t42 = edi - ~ecx;
        edi = sp0 - 0x14u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t42;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x38u, sp0 - 0x1cu);
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        wr32(sp0 - 0x3cu, sp0 - 0x14u);
        g->ecx = sp0 - 0x14u;
        g->esp = sp0 - 0x30u;
        cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x1cu, g->ecx, sp0 - 0x14u, 1, 3, sp0 - 0x14u, sp0 - 0x1cu, 1u);
        t43 = g->ecx;
        ecx = t43;
    }
    goto L_1023615f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10235e00(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10235e1fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235e2eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235e3bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235e4fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x2cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235e59u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235e63u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235e70u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235ebdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235ec2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235eccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235ed9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235efeu:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235f07u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235f11u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235f1eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235fa9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235fb2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10235fbcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10235fc9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10236022u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10236054u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10236059u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10236063u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10236070u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102360c2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebx = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x30u;
        g->eax = sp0 - 0x1cu;
        g->ecx = 0x64u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        wr32(sp0 - 0x2cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102360ccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x102360d9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1023615fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10235e00(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10235e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
