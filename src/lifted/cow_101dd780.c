/* f_0x101dd780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101dd780(Guest* g)
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
    uint32_t loc_c0;
    uint32_t loc_c4;
    uint32_t loc_c8;
    uint32_t loc_d4;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 236u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dd7b5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); goto E_101dd7b5;
    case 0x101dd7c5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd7c5;
    case 0x101dd7ceu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd7ce;
    case 0x101dd7d6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd7d6;
    case 0x101dd7f1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd7f1;
    case 0x101dd7ffu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd7ff;
    case 0x101dd803u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd803;
    case 0x101dd81du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd81d;
    case 0x101dd835u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd835;
    case 0x101dd864u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dd864;
    case 0x101dd87fu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dd87f;
    case 0x101dd8c6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd8c6;
    case 0x101dd8cau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd8ca;
    case 0x101dd8e4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd8e4;
    case 0x101dd8fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd8fc;
    case 0x101dd90bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dd90b;
    case 0x101dd923u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dd923;
    case 0x101dd94eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xccu); in_edi = rd32(sp0 - 0xc8u); in_ebp = rd32(sp0 - 0xc4u); in_ebx = rd32(sp0 - 0xc0u); g->ebp = rd32(sp0 - 0xc4u); g->ebx = rd32(sp0 - 0xc0u); g->edi = rd32(sp0 - 0xc8u); g->esi = rd32(sp0 - 0xccu); goto E_101dd94e;
    case 0x101dd960u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd960;
    case 0x101dd97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd97b;
    case 0x101dd98du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd98d;
    case 0x101dd994u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd994;
    case 0x101dd997u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dd997;
    case 0x101dda0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101dda0b;
    case 0x101dda1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dda1d;
    case 0x101dda60u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); goto E_101dda60;
    case 0x101dda61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_d4 = rd32(sp0 - 0xd4u); loc_c8 = rd32(sp0 - 0xc8u); loc_c4 = rd32(sp0 - 0xc4u); loc_c0 = rd32(sp0 - 0xc0u); goto E_101dda61;
    default: break;
    }
#endif

    COW_AT(101dd780)
    wr32(sp0 - 0xc0u, in_ebx);
    wr32(sp0 - 0xc4u, in_ebp);
    wr32(sp0 - 0xc8u, in_edi);
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr8(sp0 - 0xbcu, 0xccu);
    wr8(sp0 - 0xbbu, 3u);
    wr8(sp0 - 0xbau, 0u);
    if (~ecx == 1u)
    {
        esi = in_esi;
        loc_c0 = in_ebx;
        loc_c4 = in_ebp;
        loc_c8 = in_edi;
    }
    else
    {
        ecx = ~ecx - 1u;
    COW_AT(101dd7b5)
        wr32(sp0 - 0xccu, in_esi);
        if (arg2 == 0u) goto L_101dd94e;
    COW_AT(101dd7c5)
        if ((rd8(arg2) & 0x40u) == 0u) goto L_101dd94e;
    COW_AT(101dd7ce)
        if ((rd32(arg2 + 0x30u) >> 8u & 0x40u) == 0u)
        {
            eax = rd32(arg2 + 0x30u);
    COW_AT(101dd7f1)
            if (rd8(arg2 + 0x21u) == 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + 0x25u);
    COW_AT(101dd8c6)
                if (!(eax & 1u))
                {
    COW_AT(101dd8e4)
                    t28 = rd8(arg2 + 0x22u);
                    wr32(sp0 - 0xd0u, t28);
                    wr32(sp0 - 0xd4u, 0x59u);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = t28;
                    g->edx = in_edx;
                    g->esp = sp0 - 0xd0u;
                    t29 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t30 = g->edx;
                    wr32(sp0 - 0xd4u, t29);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t29;
                    ecx = sp0 - 0xb8u;
                    edx = t30;
                    loc_d4 = t29;
                }
                else
                {
    COW_AT(101dd8ca)
                    t25 = rd8(arg2 + 0x24u);
                    wr32(sp0 - 0xd0u, t25);
                    wr32(sp0 - 0xd4u, 0x7au);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = eax;
                    g->ecx = t25;
                    g->esp = sp0 - 0xd0u;
                    t26 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x7au);
                    t27 = g->ecx;
                    wr32(sp0 - 0xd4u, t26);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t26;
                    ecx = t27;
                    edx = sp0 - 0xb8u;
                    loc_d4 = t26;
                }
    COW_AT(101dd8fc)
                g->ebx = 3u;
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0xc4u;
                t31 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb8u, loc_d4, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t32 = g->ecx;
                t33 = g->edx;
                if (rd8(arg2 + 0x20u) != 0x17u)
                {
                    eax = (t31 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t32;
                    edx = t33;
    COW_AT(101dd923)
                    wr32(sp0 - 0xd0u, (uint8_t)eax);
                    wr32(sp0 - 0xd4u, 0x12u);
                    g->eax = (uint8_t)eax;
                    g->edx = edx;
                    g->esp = sp0 - 0xccu;
                    t35 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, (uint8_t)eax);
                    t36 = g->edx;
                    wr32(sp0 - 0xd8u, t35);
                    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
                    wr32(sp0 - 0xe0u, arg2 + 4u);
                    wr32(sp0 - 0xe4u, COW_IMG(0x1037f14cu));
                    wr32(sp0 - 0xe8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = t36;
                    g->esp = sp0 - 0xd4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f14cu), arg2 + 4u, sp0 - 0xb8u, t35);
                    t37 = g->edx;
                    edx = t37;
                }
                else
                {
                    eax = (t31 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t32;
    COW_AT(101dd90b)
                    wr32(sp0 - 0xd0u, arg2 + 4u);
                    wr32(sp0 - 0xd4u, COW_IMG(0x1037f16cu));
                    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = sp0 - 0xa8u;
                    g->esp = sp0 - 0xc4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f16cu), arg2 + 4u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                    t34 = g->edx;
                    edx = t34;
                }
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(arg2 + 0x25u);
    COW_AT(101dd7ff)
                if (!(eax & 1u))
                {
    COW_AT(101dd81d)
                    t5 = rd8(arg2 + 0x22u);
                    wr32(sp0 - 0xd0u, t5);
                    wr32(sp0 - 0xd4u, 0x59u);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = t5;
                    g->edx = in_edx;
                    g->esp = sp0 - 0xd0u;
                    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                    t7 = g->edx;
                    wr32(sp0 - 0xd4u, t6);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t6;
                    ecx = sp0 - 0xb8u;
                    edx = t7;
                    loc_d4 = t6;
                }
                else
                {
    COW_AT(101dd803)
                    t2 = rd8(arg2 + 0x24u);
                    wr32(sp0 - 0xd0u, t2);
                    wr32(sp0 - 0xd4u, 0x7au);
                    wr32(sp0 - 0xd8u, 0xau);
                    g->eax = eax;
                    g->ecx = t2;
                    g->esp = sp0 - 0xd0u;
                    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x7au);
                    t4 = g->ecx;
                    wr32(sp0 - 0xd4u, t3);
                    wr32(sp0 - 0xd8u, sp0 - 0xb8u);
                    eax = t3;
                    ecx = t4;
                    edx = sp0 - 0xb8u;
                    loc_d4 = t3;
                }
    COW_AT(101dd835)
                g->ebx = 3u;
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0xc4u;
                t8 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb8u, loc_d4, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t9 = g->ecx;
                t10 = rd8(arg2 + 0x23u);
                wr32(sp0 - 0xd0u, t10);
                wr32(sp0 - 0xd4u, 0x59u);
                wr32(sp0 - 0xd8u, 0xau);
                g->ecx = t9;
                g->edx = t10;
                g->esp = sp0 - 0xd0u;
                t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
                t12 = g->ecx;
                t13 = g->edx;
                wr32(sp0 - 0xd4u, t11);
                wr32(sp0 - 0xd8u, sp0 - 0xb0u);
                g->ebx = 3u;
                g->eax = sp0 - 0xb0u;
                g->ecx = t12;
                g->edx = t13;
                g->esp = sp0 - 0xc4u;
                t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xb0u, t11, rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                t15 = g->ecx;
                t16 = g->edx;
                if (rd8(arg2 + 0x20u) != 0x17u)
                {
                    eax = (t14 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    ecx = t15;
    COW_AT(101dd87f)
                    t18 = rd8(arg2 + 0x21u);
                    wr32(sp0 - 0xd0u, t18);
                    wr32(sp0 - 0xd4u, 0x12u);
                    g->eax = eax;
                    g->edx = t18;
                    g->esp = sp0 - 0xccu;
                    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, t18);
                    t20 = g->edx;
                    wr32(sp0 - 0xd0u, t19);
                    wr32(sp0 - 0xd4u, sp0 - 0xb0u);
                    t21 = rd8(arg2 + 0x20u);
                    wr32(sp0 - 0xd8u, t21);
                    wr32(sp0 - 0xdcu, 0x12u);
                    g->eax = sp0 - 0xb0u;
                    g->ecx = t21;
                    g->esp = sp0 - 0xd4u;
                    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x12u, t21);
                    t23 = g->ecx;
                    wr32(sp0 - 0xd8u, t22);
                    wr32(sp0 - 0xdcu, sp0 - 0xb8u);
                    wr32(sp0 - 0xe0u, arg2 + 4u);
                    wr32(sp0 - 0xe4u, COW_IMG(0x1037f158u));
                    wr32(sp0 - 0xe8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = sp0 - 0xb8u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f158u), arg2 + 4u, sp0 - 0xb8u, t22);
                    t24 = g->edx;
                    edx = t24;
                }
                else
                {
                    eax = (t14 & 0xffffff00u) | rd8(arg2 + 0x20u);
                    edx = t16;
    COW_AT(101dd864)
                    wr32(sp0 - 0xd0u, arg2 + 4u);
                    wr32(sp0 - 0xd4u, COW_IMG(0x1037f16cu));
                    wr32(sp0 - 0xd8u, sp0 - 0xa8u);
                    g->ebx = 3u;
                    g->edx = edx;
                    g->esp = sp0 - 0xc4u;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f16cu), arg2 + 4u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u));
                    t17 = g->edx;
                    edx = t17;
                }
            }
        }
        else
        {
    COW_AT(101dd7d6)
            wr32(sp0 - 0xd0u, arg2 + 4u);
            wr32(sp0 - 0xd4u, COW_IMG(0x1037f174u));
            wr32(sp0 - 0xd8u, sp0 - 0xa8u);
            g->ebx = 3u;
            g->edx = in_edx;
            g->esp = sp0 - 0xc4u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f174u), arg2 + 4u, in_esi, in_edi);
            t1 = g->edx;
            edx = t1;
        }
L_101dd960: ;
    COW_AT(101dd960)
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        wr32(sp0 - 0xe0u, sp0 - 0xa8u);
        g->ebx = 3u;
        g->esp = sp0 - 0xccu;
        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0xa8u, sp0 - 0xbcu, 0u, 1u, 0u);
        ebx = 3u;
        ebp = arg1;
L_101dd97b: ;
    COW_AT(101dd97b)
        esi = ebp;
        edi = sp0 - 0xa8u;
        ecx = 0xau;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        eax = 0x27u;
L_101dd98d: ;
    COW_AT(101dd98d)
        if (rd8(eax + sp0 - 0xa8u) != 0x20u) goto L_101dd997;
    COW_AT(101dd994)
        if ((int32_t)(eax - 1u) >= 0)
        {
            eax = eax - 1u;
            goto L_101dd98d;
        }
        eax = eax - 1u;
L_101dd997: ;
    COW_AT(101dd997)
        wr8(eax + sp0 - 0xa7u, 0u);
        edi = sp0 - 0xa8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 0x52u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        t39 = ~ecx - 1u;
        wr32(sp0 - 0xe0u, t39);
        wr32(sp0 - 0xe4u, sp0 - 0xa8u);
        g->eax = sp0 - 0xa8u;
        g->edx = sp0 - 0x54u;
        g->esp = sp0 - 0xccu;
        t40 = cow_thiscall(g, COW_IMG(0x101b7280u), rd32(COW_IMG(0x10662d40u)), 6, sp0 - 0xa8u, t39, sp0 - 0x54u, 0x52u, 1u, 0u);
        t41 = g->edx;
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        t42 = cow_thiscall_cdecl(g, COW_IMG(0x101c8f40u), sp0 - 0x54u, 1, sp0 - 0x54u);
        t43 = g->ecx;
        wr32(sp0 - 0xd4u, sp0 - 0x54u);
        g->ecx = t43;
        g->edx = sp0 - 0x54u;
        g->esp = sp0 - 0xd0u;
        cow_call_regs(g, COW_IMG(0x101ba200u), t42, g->ecx, g->edx, 1, 1, sp0 - 0x54u);
        t44 = g->ecx;
        t45 = g->edx;
        wr32(sp0 - 0xd8u, 0u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        wr32(sp0 - 0xe0u, 0x14fu);
        g->eax = sp0 - 0x54u;
        g->esp = sp0 - 0xb8u;
        t46 = cow_thiscall_cdecl(g, COW_IMG(0x101ca570u), t44, 10, 0x14fu, sp0 - 0x54u, 0u, sp0 - 0x54u, sp0 - 0x54u, rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu));
        t47 = g->ecx;
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = sp0 - 0xccu < sp0 - 0xe0u;
        pf = PARITY((uint8_t)(sp0 - 0xccu));
        af = (sp0 - 0xe0u ^ 0x14u ^ sp0 - 0xccu) >> 4u & 1u;
        zf = sp0 == 0xccu;
        sf = (int32_t)(sp0 - 0xccu) < 0;
        of = ((sp0 - 0xe0u ^ sp0 - 0xccu) & (sp0 - 0xccu ^ 0x14u)) >> 0x1fu;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        if (t46 == ~ecx - 1u)
        {
            ecx = ~ecx - 1u;
        }
        else
        {
            edx = t46;
    COW_AT(101dda0b)
            wr32(sp0 - 0xd0u, COW_IMG(0x1036c9a4u));
            t48 = edx + sp0 - 0x54u;
            wr32(sp0 - 0xd4u, t48);
            g->ebx = ebx;
            g->ecx = t48;
            g->esp = sp0 - 0xc0u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, t48, COW_IMG(0x1036c9a4u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u));
            t49 = g->ecx;
            ecx = t49;
        }
    COW_AT(101dda1d)
        wr32(sp0 - 0xd0u, 0x52u);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t50 = ~ecx - 1u;
        wr32(sp0 - 0xd4u, t50);
        wr32(sp0 - 0xd8u, sp0 - 0x54u);
        g->esp = sp0 - 0xccu;
        cow_call_regs(g, COW_IMG(0x10190140u), g->eax, g->ecx, sp0 - 0x54u, 1, 3, sp0 - 0x54u, t50, 0x52u);
        t51 = g->edx;
        wr32(sp0 - 0xd0u, 0u);
        wr32(sp0 - 0xd4u, 1u);
        wr32(sp0 - 0xd8u, 1u);
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        wr32(sp0 - 0xe0u, sp0 - 0x54u);
        g->ebx = ebx;
        cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x54u, sp0 - 0xbcu, 1u, 1u, 0u);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            ebp = ebp + 0x28u;
            goto L_101dd97b;
        }
    COW_AT(101dda60)
        esi = rd32(sp0 - 0xccu);
        loc_c0 = rd32(sp0 - 0xc0u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c8 = rd32(sp0 - 0xc8u);
    }
    COW_AT(101dda61)
    g->ebx = loc_c0;
    g->esi = esi;
    g->edi = loc_c8;
    g->ebp = loc_c4;
    return;
L_101dd94e: ;
    COW_AT(101dd94e)
    wr32(sp0 - 0xd0u, COW_IMG(0x1037f144u));
    wr32(sp0 - 0xd4u, sp0 - 0xa8u);
    g->ebx = 3u;
    g->edx = sp0 - 0xa8u;
    g->esp = sp0 - 0xc0u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0xa8u, COW_IMG(0x1037f144u), in_esi, in_edi, in_ebp);
    t38 = g->edx;
    edx = t38;
    goto L_101dd960;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dd780(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dd7b5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xc8u;
        g->ebx = 3u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101dd7c5u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd7ceu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd7d6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd7f1u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd7ffu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd803u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd81du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd835u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xd8u;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x101dd864u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x101dd87fu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x101dd8c6u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd8cau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd8e4u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101dd8fcu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d4;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xd8u;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x101dd90bu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x101dd923u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        g->esi = arg2;
        wr32(sp0 - 0xd8u, sp0 - 0xb8u);
        (void)sp0;
        return 1;
    }
    case 0x101dd94eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xccu);
        in_edi = rd32(sp0 - 0xc8u);
        in_ebp = rd32(sp0 - 0xc4u);
        in_ebx = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101dd960u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        g->ebx = 3u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101dd97bu:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101dd98du:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101dd994u:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101dd997u:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101dda0bu:
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
        wr32(sp0 - 0xe4u, sp0 - 0xa8u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        wr32(sp0 - 0xd4u, sp0 - 0x54u);
        wr32(sp0 - 0xd0u, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x101dda1du:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa8u);
        wr32(sp0 - 0xdcu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x101dda60u:
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
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xccu;
        wr32(sp0 - 0xe4u, sp0 - 0xa8u);
        wr32(sp0 - 0xe0u, sp0 - 0x54u);
        wr32(sp0 - 0xdcu, sp0 - 0xbcu);
        (void)sp0;
        return 1;
    }
    case 0x101dda61u:
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
        uint32_t loc_c0;
        uint32_t loc_c4;
        uint32_t loc_c8;
        uint32_t loc_d4;
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
        loc_d4 = rd32(sp0 - 0xd4u);
        loc_c8 = rd32(sp0 - 0xc8u);
        loc_c4 = rd32(sp0 - 0xc4u);
        loc_c0 = rd32(sp0 - 0xc0u);
        g->esp = sp0 - 0xc8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dd780(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101dd780(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
