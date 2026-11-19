/* f_0x101b6810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101b6810(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101b6829u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_101b6829;
    case 0x101b6832u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6832;
    case 0x101b683fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_101b683f;
    case 0x101b6877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6877;
    case 0x101b6884u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6884;
    case 0x101b6892u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6892;
    case 0x101b68a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68a0;
    case 0x101b68afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68af;
    case 0x101b68beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68be;
    case 0x101b68c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68c9;
    case 0x101b68dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68df;
    case 0x101b68ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b68ec;
    case 0x101b690fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b690f;
    case 0x101b6914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6914;
    case 0x101b691fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b691f;
    case 0x101b692cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b692c;
    case 0x101b6949u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6949;
    case 0x101b6960u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6960;
    case 0x101b6986u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6986;
    case 0x101b6990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6990;
    case 0x101b699eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b699e;
    case 0x101b69afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b69af;
    case 0x101b69b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->ebp - 0x8aacu; goto E_101b69b6;
    case 0x101b69d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b69d4;
    case 0x101b69d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b69d8;
    case 0x101b69fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b69fb;
    case 0x101b6a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a05;
    case 0x101b6a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a16;
    case 0x101b6a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a21;
    case 0x101b6a34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a34;
    case 0x101b6a4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a4e;
    case 0x101b6a52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a52;
    case 0x101b6a5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a5e;
    case 0x101b6a6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6a6f;
    case 0x101b6a88u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->ebx - 0x7e30u; goto E_101b6a88;
    case 0x101b6aa1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6aa1;
    case 0x101b6ab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6ab2;
    case 0x101b6acbu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; self = g->ebx - 0x7e30u; goto E_101b6acb;
    case 0x101b6ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6ae4;
    case 0x101b6ae9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101b6ae9;
    default: break;
    }
#endif

    COW_AT(101b6810)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(sp0 + 4u);
    wr8(self + 0xef22u, 0u);
    if ((uint8_t)t1 != 0x20u)
    {
        edx = in_edx;
        ebx = t1;
        goto L_101b683f;
    }
    ebx = t1;
    COW_AT(101b6829)
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_call_regs(g, COW_IMG(0x101b6e90u), in_eax, self, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_101b683f;
    }
    eax = t2;
    COW_AT(101b6832)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b683f: ;
    COW_AT(101b683f)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    wr8(sp0 - 0x10u, (uint8_t)ebx);
    wr8(sp0 - 0xfu, 0u);
    wr8(sp0 - 0x20u, 0u);
    g->ecx = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10311384u), 3, sp0 - 0x10u, sp0 - 0x20u, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    edi = sp0 - 0x20u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = sp0 - 0x30u < sp0 - 0x3cu;
    pf = PARITY((uint8_t)(sp0 - 0x30u));
    af = (sp0 - 0x3cu ^ sp0 - 0x30u) >> 4u & 1u;
    zf = sp0 == 0x30u;
    sf = (int32_t)(sp0 - 0x30u) < 0;
    of = ((sp0 - 0x3cu ^ sp0 - 0x30u) & (sp0 - 0x30u ^ 0xcu)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t6 = ~ecx - 1u;
    wr32(sp0 + 4u, t6);
    if (~ecx != 1u)
    {
        ecx = t6;
        edx = t5;
        edi = t6;
        goto L_101b6884;
    }
    COW_AT(101b6877)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b6884: ;
    COW_AT(101b6884)
    if (rd8(self + 0xf0ecu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0xf0ecu);
        goto L_101b6aa1;
    }
    COW_AT(101b6892)
    if (rd32(self + 0xf10cu) != 0u)
    {
        eax = rd32(self + 0xf10cu);
        goto L_101b6a5e;
    }
    COW_AT(101b68a0)
    if ((uint32_t)(int8_t)ebx - 8u > 0x18u)
    {
        eax = (uint32_t)(int8_t)ebx - 8u;
        goto L_101b6986;
    }
    eax = (uint32_t)(int8_t)ebx - 8u;
    COW_AT(101b68af)
    t7 = rd32(COW_IMG(0x101b6af8u) + rd8(COW_IMG(0x101b6b04u) + eax) * 4u);
    switch (t7 - RD)
    {
    case 0x101b68beu: edx = rd8(COW_IMG(0x101b6b04u) + eax); goto L_101b68be;
    case 0x101b6986u: edx = rd8(COW_IMG(0x101b6b04u) + eax); goto L_101b6986;
    case 0x101b6a52u: goto L_101b6a52;
    default: rt_fatal(g, COW_IMG(0x101b68b7u), "switch");
    }
    return 0;
L_101b68be: ;
    COW_AT(101b68be)
    g->eax = rd32(self);
    g->edx = edx;
    t8 = rd32(self);
    g->esp = sp0 - 0x30u;
    t9 = cow_thiscall(g, rd32(t8 + 0x20u), self, 0);
    t10 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_101b68ec;
    }
    eax = t9;
    edx = t10;
    COW_AT(101b68c9)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, COW_IMG(0x1034f2b8u));
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t11 = cow_thiscall(g, COW_IMG(0x101b6c00u), self, 2, COW_IMG(0x1034f2b8u), 1u);
    if ((int32_t)t11 >= 0) goto L_101b6a52;
    eax = t11;
    COW_AT(101b68df)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b68ec: ;
    COW_AT(101b68ec)
    g->eax = eax;
    g->edx = edx;
    t12 = rd32(self + 0x8c70u);
    g->esp = sp0 - 0x30u;
    t13 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t14 = g->edx;
    if ((int32_t)(t12 + t13 + 1u) > (int32_t)rd32(self + 0xf118u))
    {
        eax = rd32(self + 0xf118u);
        goto L_101b6ae9;
    }
    eax = rd32(self + 0xf118u);
    edx = t14;
    COW_AT(101b690f)
    if ((uint8_t)ebx != 0x20u) goto L_101b692c;
    COW_AT(101b6914)
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t15 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        edx = t16;
        goto L_101b692c;
    }
    eax = t15;
    COW_AT(101b691f)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b692c: ;
    COW_AT(101b692c)
    wr32(sp0 - 0x34u, ebx);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t17 = cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, edx, 1, ebx);
    t18 = g->edx;
    g->edx = t18;
    t19 = cow_call_regs(g, COW_IMG(0x101b6e90u), t17, self, g->edx, 1, 0);
    t20 = g->edx;
    if ((uint8_t)t19 == 0u) goto L_101b6a52;
    edx = t20;
    COW_AT(101b6949)
    t21 = rd32(self + 0x8c70u);
    wr32(sp0 - 0x34u, t21);
    wr32(sp0 - 0x38u, self + 0x8aacu);
    g->eax = t21;
    g->esp = sp0 - 0x30u;
    t22 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, self + 0x8aacu, t21);
    if ((int32_t)t22 < 0) goto L_101b6a52;
    eax = t22;
    COW_AT(101b6960)
    g->eax = eax;
    g->edx = rd32(self);
    t23 = rd32(self);
    g->esp = sp0 - 0x30u;
    t24 = cow_thiscall(g, rd32(t23 + 0x70u), self, 0);
    t25 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, COW_IMG(0x10377cbcu));
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6986: ;
    COW_AT(101b6986)
    if (self + 0x8aacu == 0u) goto L_101b69d8;
    COW_AT(101b6990)
    edi = self + 0x8aacu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (~ecx == 1u) goto L_101b69d4;
    ecx = ~ecx - 1u;
    COW_AT(101b699e)
    edi = self + 0x8aacu;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0xffu);
    af = 0u;
    zf = 0u;
    sf = 1u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (rd8(self + ~ecx + 0x8aaau) != 0x81u) goto L_101b69d4;
    ecx = ~ecx - 1u;
    COW_AT(101b69af)
    if (rd8(sp0 - 0x20u) != 0x40u) goto L_101b69d4;
    COW_AT(101b69b6)
    edi = self + 0x8aacu;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t26 = rd32(sp0 - 0x2cu);
    t27 = rd32(sp0 - 0x30u);
    wr8(self + ~ecx + 0x8aaau, 0x20u);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = t26;
    g->edi = t27;
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
L_101b69d4: ;
    COW_AT(101b69d4)
    edi = rd32(sp0 + 4u);
L_101b69d8: ;
    COW_AT(101b69d8)
    g->eax = eax;
    g->edx = edx;
    t28 = rd32(self + 0x8c70u);
    g->esp = sp0 - 0x30u;
    t29 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t30 = g->edx;
    if ((int32_t)(edi + t28 + t29) > (int32_t)rd32(self + 0xf118u))
    {
        eax = edi + t28 + t29;
        goto L_101b6ae9;
    }
    eax = edi + t28 + t29;
    edx = t30;
    COW_AT(101b69fb)
    if ((int32_t)rd32(sp0 + 4u) <= 0)
    {
        ebx = rd32(sp0 + 4u);
        goto L_101b6a16;
    }
    ebx = rd32(sp0 + 4u);
    edi = 0u;
L_101b6a05: ;
    COW_AT(101b6a05)
    t31 = (eax & 0xffffff00u) | rd8(edi + sp0 - 0x20u);
    wr32(sp0 - 0x34u, t31);
    g->eax = t31;
    g->esp = sp0 - 0x30u;
    t32 = cow_fastcall(g, COW_IMG(0x101b4c20u), self + 0x8aacu, edx, 1, t31);
    t33 = g->edx;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        eax = t32;
        edx = t33;
        edi = edi + 1u;
        goto L_101b6a05;
    }
    eax = t32;
    edx = t33;
L_101b6a16: ;
    COW_AT(101b6a16)
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t34 = cow_call_regs(g, COW_IMG(0x101b6e90u), eax, self, g->edx, 1, 0);
    t35 = g->edx;
    if ((uint8_t)t34 != 0u)
    {
        edx = t35;
    COW_AT(101b6a21)
        t36 = rd32(self + 0x8c70u);
        wr32(sp0 - 0x34u, t36);
        wr32(sp0 - 0x38u, self + 0x8aacu);
        g->eax = t36;
        g->esp = sp0 - 0x30u;
        t37 = cow_thiscall(g, COW_IMG(0x101b6ee0u), self, 2, self + 0x8aacu, t36);
        if ((int32_t)t37 >= 0)
        {
            eax = t37;
    COW_AT(101b6a34)
            g->eax = eax;
            g->edx = rd32(self);
            t38 = rd32(self);
            g->esp = sp0 - 0x30u;
            t39 = cow_thiscall(g, rd32(t38 + 0x70u), self, 0);
            t40 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, COW_IMG(0x10377cbcu));
            g->ebx = ebx;
            cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10377cbcu), 0u, 0u);
        }
    }
    COW_AT(101b6a4e)
    edi = rd32(sp0 + 4u);
L_101b6a52: ;
    COW_AT(101b6a52)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6a5e: ;
    COW_AT(101b6a5e)
    wr32(sp0 - 0x34u, edi);
    t41 = (eax & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
    wr32(sp0 - 0x38u, t41);
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t42 = cow_call_regs(g, COW_IMG(0x101b6d50u), t41, self, g->edx, 0, 2, t41, edi);
    t43 = g->edx;
    if ((uint8_t)t42 == 0u) goto L_101b6a52;
    eax = t42;
    edx = t43;
    COW_AT(101b6a6f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t44 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t45 = g->edx;
    if ((int32_t)(edi + t44) > (int32_t)rd32(self + 0xf118u)) goto L_101b6a52;
    eax = edi + t44;
    edx = t45;
    COW_AT(101b6a88)
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 - 0x20u, edi);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6aa1: ;
    COW_AT(101b6aa1)
    wr32(sp0 - 0x34u, edi);
    t46 = (edx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)ebx;
    wr32(sp0 - 0x38u, t46);
    g->edx = t46;
    g->esp = sp0 - 0x30u;
    t47 = cow_call_regs(g, COW_IMG(0x101b6d50u), eax, self, g->edx, 0, 2, t46, edi);
    t48 = g->edx;
    if ((uint8_t)t47 == 0u) goto L_101b6a52;
    eax = t47;
    edx = t48;
    COW_AT(101b6ab2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t49 = cow_thiscall(g, COW_IMG(0x101ac230u), self + 0x7e30u, 0);
    t50 = g->edx;
    if ((int32_t)(edi + t49) > (int32_t)rd32(self + 0xf118u))
    {
        eax = edi + t49;
        ecx = rd32(self + 0xf118u);
        edx = t50;
        goto L_101b6ae4;
    }
    edx = t50;
    COW_AT(101b6acb)
    wr32(sp0 - 0x34u, edi);
    wr32(sp0 - 0x38u, sp0 - 0x20u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101abc50u), self + 0x7e30u, 2, sp0 - 0x20u, edi);
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return edi;
L_101b6ae4: ;
    COW_AT(101b6ae4)
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t51 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    eax = t51;
L_101b6ae9: ;
    COW_AT(101b6ae9)
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101b6810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101b6829u:
    {
        unsigned af;
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101b6832u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101b683fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6877u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6884u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6892u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b68a0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b68afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b68beu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b68c9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b68dfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b68ecu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b690fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6914u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b691fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b692cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6949u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6960u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6986u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6990u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b699eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b69afu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b69b6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        self = g->ebp - 0x8aacu;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b69d4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b69d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b69fbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a05u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a16u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a21u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        g->ebp = self + 0x8aacu;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a34u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a4eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6a52u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101b6a5eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a6fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6a88u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        self = g->ebx - 0x7e30u;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6aa1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101b6ab2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6acbu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
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
        self = g->ebx - 0x7e30u;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6ae4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101b6ae9u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
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
        ebx = g->ebx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x3cu, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101b6810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101b6810(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
