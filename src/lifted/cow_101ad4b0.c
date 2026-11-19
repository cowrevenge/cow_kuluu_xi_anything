/* f_0x101ad4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ad4b0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1f4;
    uint32_t loc_1f8;
    uint32_t loc_1fc;
    uint32_t loc_200;
    uint32_t loc_208;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
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
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 540u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101ad4cbu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad4cb;
    case 0x101ad4dau: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad4da;
    case 0x101ad4e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad4e8;
    case 0x101ad4f6u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad4f6;
    case 0x101ad500u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad500;
    case 0x101ad50du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad50d;
    case 0x101ad513u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad513;
    case 0x101ad519u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad519;
    case 0x101ad51eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad51e;
    case 0x101ad522u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad522;
    case 0x101ad530u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad530;
    case 0x101ad53au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad53a;
    case 0x101ad547u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x200u); in_esi = rd32(sp0 - 0x1fcu); in_ebp = rd32(sp0 - 0x1f8u); in_ebx = rd32(sp0 - 0x1f4u); g->ebp = rd32(sp0 - 0x1f8u); g->ebx = rd32(sp0 - 0x1f4u); g->edi = rd32(sp0 - 0x200u); g->esi = rd32(sp0 - 0x1fcu); goto E_101ad547;
    case 0x101ad56eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad56e;
    case 0x101ad576u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad576;
    case 0x101ad589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad589;
    case 0x101ad5bau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad5ba;
    case 0x101ad5d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101ad5d4;
    case 0x101ad5e8u: eax = g->eax; ecx = g->ecx; self = g->ebp; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad5e8;
    case 0x101ad625u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101ad625;
    case 0x101ad637u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101ad637;
    case 0x101ad646u: eax = g->eax; ecx = g->ecx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101ad646;
    case 0x101ad650u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_208 = rd32(sp0 - 0x208u); goto E_101ad650;
    case 0x101ad658u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_200 = rd32(sp0 - 0x200u); loc_1fc = rd32(sp0 - 0x1fcu); loc_1f8 = rd32(sp0 - 0x1f8u); loc_1f4 = rd32(sp0 - 0x1f4u); goto E_101ad658;
    default: break;
    }
#endif

    COW_AT(101ad4b0)
    wr32(sp0 - 0x1f4u, in_ebx);
    wr32(sp0 - 0x1f8u, in_ebp);
    wr32(sp0 - 0x1fcu, in_esi);
    wr32(sp0 - 0x200u, in_edi);
    if (arg1 == 0u)
    {
        loc_1f4 = in_ebx;
        loc_1f8 = in_ebp;
        loc_1fc = in_esi;
        loc_200 = in_edi;
        goto L_101ad658;
    }
    COW_AT(101ad4cb)
    if ((int32_t)arg3 <= 0)
    {
        loc_1f4 = in_ebx;
        loc_1f8 = in_ebp;
        loc_1fc = in_esi;
        loc_200 = in_edi;
        goto L_101ad658;
    }
    COW_AT(101ad4da)
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
    if (~ecx != 1u)
    {
        ecx = ~ecx - 1u;
        goto L_101ad50d;
    }
    ecx = ~ecx - 1u;
    COW_AT(101ad4e8)
    eax = COW_IMG(0x103d3c84u);
L_101ad4f6: ;
    COW_AT(101ad4f6)
    t1 = rd8(eax);
    wr8(arg2 + eax - COW_IMG(0x103d3c84u), (uint8_t)t1);
    if ((uint8_t)t1 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t1;
        goto L_101ad4f6;
    }
    COW_AT(101ad500)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101ad50d: ;
    COW_AT(101ad50d)
    if ((int32_t)ecx <= 0)
    {
        eax = 0u;
        goto L_101ad51e;
    }
    eax = 0u;
L_101ad513: ;
    COW_AT(101ad513)
    if (rd8(arg1 + eax) != 0x20u) goto L_101ad51e;
    COW_AT(101ad519)
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_101ad513;
    }
    eax = eax + 1u;
L_101ad51e: ;
    COW_AT(101ad51e)
    if (eax != ecx) goto L_101ad547;
    COW_AT(101ad522)
    eax = COW_IMG(0x103d3c84u);
L_101ad530: ;
    COW_AT(101ad530)
    t2 = rd8(eax);
    wr8(arg2 + eax - COW_IMG(0x103d3c84u), (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_101ad530;
    }
    COW_AT(101ad53a)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101ad547: ;
    COW_AT(101ad547)
    wr32(sp0 - 0x204u, 0xf8u);
    wr32(sp0 - 0x208u, sp0 - 0xf8u);
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
    t3 = ~ecx - 1u;
    wr32(sp0 - 0x20cu, t3);
    wr32(sp0 - 0x210u, arg1);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x200u;
    t4 = cow_thiscall(g, COW_IMG(0x101b72b0u), rd32(self + 4u), 4, arg1, t3, sp0 - 0xf8u, 0xf8u);
    t5 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
    COW_AT(101ad56e)
        wr8(sp0 - 0xf8u, 0u);
    }
    COW_AT(101ad576)
    wr32(sp0 - 0x204u, sp0 - 0xf8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    t6 = cow_stdcall(g, COW_IMG(0x101adbc0u), 1, sp0 - 0xf8u);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        eax = t6;
    COW_AT(101ad5ba)
        wr32(sp0 - 0x204u, 0xf8u);
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, sp0 - 0x1f0u, sp0 - 0xf8u, 0xf8u);
        t13 = g->edx;
        edx = t13;
    }
    else
    {
        eax = t6;
        edx = t7;
    COW_AT(101ad589)
        wr32(sp0 - 0x204u, 0x80u);
        g->eax = eax;
        g->esp = sp0 - 0x204u;
        t8 = cow_thiscall(g, COW_IMG(0x101ad820u), self, 0);
        t9 = g->ecx;
        wr32(sp0 - 0x208u, t8);
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        g->ecx = t9;
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_call_regs(g, COW_IMG(0x10312090u), t8, g->ecx, g->edx, 1, 3, sp0 - 0x1f0u, t8, 0x80u);
        t10 = g->ecx;
        t11 = g->edx;
        wr32(sp0 - 0x210u, 0x78u);
        wr32(sp0 - 0x214u, arg1);
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        g->esp = sp0 - 0x20cu;
        cow_call_regs(g, COW_IMG(0x10313560u), sp0 - 0x1f0u, g->ecx, t11, 1, 3, sp0 - 0x1f0u, arg1, 0x78u);
        t12 = g->edx;
        wr8(sp0 - 0xf9u, 0u);
        edx = t12;
    }
    COW_AT(101ad5d4)
    wr32(sp0 - 0x204u, sp0 - 0x1f0u);
    g->eax = sp0 - 0x1f0u;
    g->esp = sp0 - 0x200u;
    t14 = cow_thiscall(g, COW_IMG(0x101adbd0u), self, 1, sp0 - 0x1f0u);
    t15 = g->ecx;
    if ((uint8_t)t14 == 0u)
    {
        ecx = t15;
    COW_AT(101ad646)
        wr32(sp0 - 0x204u, arg3);
        wr32(sp0 - 0x208u, sp0 - 0x1f0u);
        wr32(sp0 - 0x20cu, arg2);
        eax = arg2;
        edx = sp0 - 0x1f0u;
        loc_208 = sp0 - 0x1f0u;
    }
    else
    {
    COW_AT(101ad5e8)
        wr32(sp0 - 0x204u, 0u);
        wr32(sp0 - 0x208u, 0u);
        wr32(sp0 - 0x20cu, 0xf8u);
        wr32(sp0 - 0x210u, sp0 - 0xf8u);
        edi = sp0 - 0x1f0u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t16 = ~ecx - 1u;
        wr32(sp0 - 0x214u, t16);
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        g->edx = sp0 - 0x1f0u;
        g->esp = sp0 - 0x200u;
        cow_thiscall(g, COW_IMG(0x101b7280u), rd32(self + 4u), 6, sp0 - 0x1f0u, t16, sp0 - 0xf8u, 0xf8u, 0u, 0u);
        t17 = g->edx;
        wr32(sp0 - 0x204u, sp0 - 0xf8u);
        g->eax = sp0 - 0xf8u;
        g->edx = t17;
        t18 = cow_thiscall(g, COW_IMG(0x101adbe0u), self, 1, sp0 - 0xf8u);
        t19 = g->edx;
        wr32(sp0 - 0x204u, arg3);
        if ((uint8_t)t18 != 0u)
        {
            edx = t19;
    COW_AT(101ad637)
            wr32(sp0 - 0x208u, sp0 - 0x1f0u);
            wr32(sp0 - 0x20cu, arg2);
            eax = sp0 - 0x1f0u;
            ecx = arg2;
            loc_208 = sp0 - 0x1f0u;
        }
        else
        {
            eax = t18;
    COW_AT(101ad625)
            wr32(sp0 - 0x208u, sp0 - 0xf8u);
            wr32(sp0 - 0x20cu, arg2);
            ecx = sp0 - 0xf8u;
            edx = arg2;
            loc_208 = sp0 - 0xf8u;
        }
    }
    COW_AT(101ad650)
    g->esp = sp0 - 0x200u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg2, loc_208, arg3);
    loc_1f4 = rd32(sp0 - 0x1f4u);
    loc_1f8 = rd32(sp0 - 0x1f8u);
    loc_1fc = rd32(sp0 - 0x1fcu);
    loc_200 = rd32(sp0 - 0x200u);
L_101ad658: ;
    COW_AT(101ad658)
    g->ebx = loc_1f4;
    g->esi = loc_1fc;
    g->edi = loc_200;
    g->ebp = loc_1f8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101ad4b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101ad4cbu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
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
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebp = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad4dau:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t edi;
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
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->ebp = self;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad4e8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x101ad4f6u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->edx = arg2 - COW_IMG(0x103d3c84u);
        (void)sp0;
        return 1;
    }
    case 0x101ad500u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x101ad50du:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad513u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad519u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad51eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad522u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x101ad530u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->edx = arg2 - COW_IMG(0x103d3c84u);
        (void)sp0;
        return 1;
    }
    case 0x101ad53au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
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
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x101ad547u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
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
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x200u);
        in_esi = rd32(sp0 - 0x1fcu);
        in_ebp = rd32(sp0 - 0x1f8u);
        in_ebx = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101ad56eu:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101ad576u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101ad589u:
    {
        unsigned af;
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        g->esi = arg1;
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        wr32(sp0 - 0x204u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101ad5bau:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
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
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        wr32(sp0 - 0x208u, sp0 - 0xf8u);
        wr32(sp0 - 0x204u, sp0 - 0xf8u);
        (void)sp0;
        return 1;
    }
    case 0x101ad5d4u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_208;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x200u;
        g->ebx = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        (void)sp0;
        return 1;
    }
    case 0x101ad5e8u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebp;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f0u;
        g->ebx = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        wr32(sp0 - 0x204u, sp0 - 0x1f0u);
        (void)sp0;
        return 1;
    }
    case 0x101ad625u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        wr32(sp0 - 0x210u, sp0 - 0xf8u);
        wr32(sp0 - 0x204u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x101ad637u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x204u;
        wr32(sp0 - 0x218u, sp0 - 0x1f0u);
        wr32(sp0 - 0x210u, sp0 - 0xf8u);
        wr32(sp0 - 0x204u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x101ad646u:
    {
        unsigned af;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x200u;
        g->edx = sp0 - 0x1f0u;
        g->ebx = arg3;
        wr32(sp0 - 0x20cu, sp0 - 0x1f0u);
        wr32(sp0 - 0x204u, sp0 - 0x1f0u);
        (void)sp0;
        return 1;
    }
    case 0x101ad650u:
    {
        unsigned af;
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_208;
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
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x20cu;
        wr32(sp0 - 0x20cu, arg2);
        wr32(sp0 - 0x204u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x101ad658u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1f4;
        uint32_t loc_1f8;
        uint32_t loc_1fc;
        uint32_t loc_200;
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
        loc_200 = rd32(sp0 - 0x200u);
        loc_1fc = rd32(sp0 - 0x1fcu);
        loc_1f8 = rd32(sp0 - 0x1f8u);
        loc_1f4 = rd32(sp0 - 0x1f4u);
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad4b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101ad4b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
