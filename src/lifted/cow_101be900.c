/* f_0x101be900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be900(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_204;
    uint32_t loc_208;
    uint32_t loc_20c;
    uint32_t loc_210;
    uint32_t loc_214;
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
    cow_frame(g, sp0, 552u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101be91au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x214u); in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->edi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x210u); goto E_101be91a;
    case 0x101be923u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x214u); in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->edi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x210u); goto E_101be923;
    case 0x101be925u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x214u); in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->edi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x210u); goto E_101be925;
    case 0x101be92fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_edi = rd32(sp0 - 0x214u); in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->edi = rd32(sp0 - 0x214u); g->esi = rd32(sp0 - 0x210u); goto E_101be92f;
    case 0x101be942u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be942;
    case 0x101be94eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be94e;
    case 0x101be951u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be951;
    case 0x101be958u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be958;
    case 0x101be981u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be981;
    case 0x101be98bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be98b;
    case 0x101be992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be992;
    case 0x101be99au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_101be99a;
    case 0x101be9aau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9aa;
    case 0x101be9d3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9d3;
    case 0x101be9ddu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9dd;
    case 0x101be9e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9e6;
    case 0x101be9f3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9f3;
    case 0x101be9fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101be9fd;
    case 0x101bea0au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101bea0a;
    case 0x101bea14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_101bea14;
    case 0x101bea48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101bea48;
    case 0x101bea5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101bea5c;
    case 0x101bea64u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101bea64;
    case 0x101bea78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101bea78;
    case 0x101beab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beab0;
    case 0x101beab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beab8;
    case 0x101beabfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beabf;
    case 0x101beaccu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beacc;
    case 0x101bead6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101bead6;
    case 0x101beae3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beae3;
    case 0x101beaedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beaed;
    case 0x101beb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb04;
    case 0x101beb16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb16;
    case 0x101beb23u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb23;
    case 0x101beb2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb2d;
    case 0x101beb3au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb3a;
    case 0x101beb44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb44;
    case 0x101beb5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_204 = rd32(sp0 - 0x204u); goto E_101beb5b;
    default: break;
    }
#endif

    COW_AT(101be900)
    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_ebp);
    wr32(sp0 - 0x210u, in_esi);
    wr32(sp0 - 0x214u, in_edi);
    wr32(sp0 - 0x218u, 0xcu);
    g->esp = sp0 - 0x20cu;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
    COW_AT(101be923)
        eax = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(101be91a)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x214u;
        t3 = cow_thiscall(g, COW_IMG(0x1019f6f0u), eax, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    COW_AT(101be925)
    wr32(self + 0x1f0u, eax);
    if (eax == 0u)
    {
        loc_208 = in_ebx;
        loc_20c = in_ebp;
        loc_210 = in_esi;
        loc_214 = in_edi;
        goto L_101be99a;
    }
    COW_AT(101be92f)
    wr32(sp0 - 0x218u, arg2);
    g->eax = eax;
    g->esp = sp0 - 0x214u;
    t5 = cow_thiscall(g, COW_IMG(0x1019f740u), eax, 1, arg2);
    t6 = g->ecx;
    if ((int32_t)t5 < 0)
    {
        eax = t5;
        loc_208 = in_ebx;
        loc_20c = in_ebp;
        loc_210 = in_esi;
        loc_214 = in_edi;
        goto L_101be99a;
    }
    ecx = t6;
    COW_AT(101be942)
    if (rd32(self + 4u) == 0u) goto L_101be9e6;
    eax = rd32(self + 4u);
    COW_AT(101be94e)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101be9aa;
    }
    eax = eax - 1u;
    COW_AT(101be951)
    if (eax != 1u) goto L_101beab0;
    COW_AT(101be958)
    wr32(sp0 - 0x218u, arg1);
    wr32(sp0 - 0x21cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x220u, self + 0xd0u);
    g->ecx = ecx;
    g->esp = sp0 - 0x20cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0xd0u, COW_IMG(0x1034f7e0u), arg1, rd32(sp0 - 0x214u), rd32(sp0 - 0x210u));
    t7 = g->ecx;
    eax = COW_IMG(0x1037cb8cu);
    ecx = t7;
L_101be981: ;
    COW_AT(101be981)
    t8 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb8cu) + 0x1d0u, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101be981;
    }
    eax = eax + 1u;
    COW_AT(101be98b)
    g->eax = eax;
    g->esp = sp0 - 0x214u;
    t9 = cow_thiscall(g, COW_IMG(0x101c3900u), self, 0);
    t10 = g->ecx;
    eax = t9;
    ecx = t10;
L_101be992: ;
    COW_AT(101be992)
    if ((int32_t)eax >= 0) goto L_101beab0;
    loc_208 = rd32(sp0 - 0x208u);
    loc_20c = rd32(sp0 - 0x20cu);
    loc_210 = rd32(sp0 - 0x210u);
    loc_214 = rd32(sp0 - 0x214u);
L_101be99a: ;
    COW_AT(101be99a)
    g->ebx = loc_208;
    g->esi = loc_210;
    g->edi = loc_214;
    g->ebp = loc_20c;
    return 0xffffffffu;
L_101be9aa: ;
    COW_AT(101be9aa)
    wr32(sp0 - 0x218u, arg1);
    wr32(sp0 - 0x21cu, COW_IMG(0x1034f7e0u));
    wr32(sp0 - 0x220u, self + 0xd0u);
    g->ecx = arg1;
    g->esp = sp0 - 0x20cu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0xd0u, COW_IMG(0x1034f7e0u), arg1, rd32(sp0 - 0x214u), rd32(sp0 - 0x210u));
    t11 = g->ecx;
    eax = COW_IMG(0x1037cb8cu);
    ecx = t11;
L_101be9d3: ;
    COW_AT(101be9d3)
    t12 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb8cu) + 0x1d0u, (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        goto L_101be9d3;
    }
    eax = eax + 1u;
    COW_AT(101be9dd)
    g->eax = eax;
    g->esp = sp0 - 0x214u;
    t13 = cow_thiscall(g, COW_IMG(0x101c3400u), self, 0);
    t14 = g->ecx;
    eax = t13;
    ecx = t14;
    goto L_101be992;
L_101be9e6: ;
    COW_AT(101be9e6)
    eax = COW_IMG(0x103d3c84u);
L_101be9f3: ;
    COW_AT(101be9f3)
    t15 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0xd0u, (uint8_t)t15);
    if ((uint8_t)t15 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t15;
        goto L_101be9f3;
    }
    ecx = (ecx & 0xffffff00u) | t15;
    COW_AT(101be9fd)
    eax = COW_IMG(0x1037cb8cu);
L_101bea0a: ;
    COW_AT(101bea0a)
    t16 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb8cu) + 0x1d0u, (uint8_t)t16);
    if ((uint8_t)t16 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t16;
        goto L_101bea0a;
    }
    ecx = (ecx & 0xffffff00u) | t16;
    COW_AT(101bea14)
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
    t17 = ~ecx - 1u;
    wr32(sp0 - 0x218u, t17);
    wr32(sp0 - 0x21cu, arg1);
    wr32(sp0 - 0x220u, 0x200u);
    wr32(sp0 - 0x224u, sp0 - 0x200u);
    wr32(sp0 - 0x204u, 0u);
    g->eax = sp0 - 0x200u;
    g->ecx = self;
    g->esp = sp0 - 0x214u;
    t18 = cow_call_regs(g, COW_IMG(0x101c4340u), g->eax, g->ecx, arg1, 0, 4, sp0 - 0x200u, 0x200u, arg1, t17);
    t19 = g->ecx;
    if ((int32_t)t18 <= 0)
    {
        ecx = t19;
        goto L_101beab0;
    }
    ebx = t18;
    loc_204 = 0u;
L_101bea48: ;
    COW_AT(101bea48)
    esi = sp0 - 0x200u;
    edi = COW_IMG(0x10350678u);
    ecx = 5u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf) goto L_101bea64;
    COW_AT(101bea5c)
    wr32(self + 0x80u, rd32(self + 0x80u) + 1u);
L_101bea78: ;
    COW_AT(101bea78)
    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = ebx + loc_204 < loc_204;
    pf = PARITY((uint8_t)(ebx + loc_204));
    af = (loc_204 ^ ebx ^ ebx + loc_204) >> 4u & 1u;
    zf = ebx + loc_204 == 0u;
    sf = (int32_t)(ebx + loc_204) < 0;
    of = ((loc_204 ^ ebx + loc_204) & (ebx ^ ebx + loc_204)) >> 0x1fu;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    wr32(sp0 - 0x204u, ebx + loc_204);
    t22 = ~ecx - 1u;
    wr32(sp0 - 0x218u, t22);
    t23 = arg1 + ebx + loc_204;
    wr32(sp0 - 0x21cu, t23);
    wr32(sp0 - 0x220u, 0x200u);
    wr32(sp0 - 0x224u, sp0 - 0x200u);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x214u;
    t24 = cow_call_regs(g, COW_IMG(0x101c4340u), g->eax, g->ecx, t23, 0, 4, sp0 - 0x200u, 0x200u, t23, t22);
    t25 = g->ecx;
    if ((int32_t)t24 > 0)
    {
        ebx = t24;
        loc_204 = rd32(sp0 - 0x204u);
        goto L_101bea48;
    }
    ecx = t25;
L_101beab0: ;
    COW_AT(101beab0)
    if (rd32(self + 4u) == 0u) goto L_101beb16;
    eax = rd32(self + 4u);
    COW_AT(101beab8)
    if (eax != 1u) goto L_101beb5b;
    COW_AT(101beabf)
    eax = COW_IMG(0x1037cb84u);
L_101beacc: ;
    COW_AT(101beacc)
    t26 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb84u) + 0x1f4u, (uint8_t)t26);
    if ((uint8_t)t26 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t26;
        goto L_101beacc;
    }
    ecx = (ecx & 0xffffff00u) | t26;
    COW_AT(101bead6)
    eax = COW_IMG(0x1037cb7cu);
L_101beae3: ;
    COW_AT(101beae3)
    t27 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb7cu) + 0x2f4u, (uint8_t)t27);
    if ((uint8_t)t27 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t27;
        goto L_101beae3;
    }
    ecx = (ecx & 0xffffff00u) | t27;
    COW_AT(101beaed)
    eax = COW_IMG(0x1037cb78u);
L_101beafa: ;
    COW_AT(101beafa)
    t28 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb78u) + 0x3f4u, (uint8_t)t28);
    if ((uint8_t)t28 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t28;
        goto L_101beafa;
    }
    COW_AT(101beb04)
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = rd32(sp0 - 0x210u);
    g->edi = rd32(sp0 - 0x214u);
    g->ebp = rd32(sp0 - 0x20cu);
    return 1u;
L_101bea64: ;
    COW_AT(101bea64)
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    g->eax = sp0 - 0x200u;
    g->esp = sp0 - 0x214u;
    t20 = cow_thiscall(g, COW_IMG(0x101c43a0u), self, 1, sp0 - 0x200u);
    t21 = g->ecx;
    if ((int32_t)t20 < 0)
    {
        eax = t20;
        loc_208 = rd32(sp0 - 0x208u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_210 = rd32(sp0 - 0x210u);
        loc_214 = rd32(sp0 - 0x214u);
        goto L_101be99a;
    }
    ecx = t21;
    loc_204 = rd32(sp0 - 0x204u);
    goto L_101bea78;
L_101beb16: ;
    COW_AT(101beb16)
    eax = COW_IMG(0x1037cb60u);
L_101beb23: ;
    COW_AT(101beb23)
    t29 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb60u) + 0x1f4u, (uint8_t)t29);
    if ((uint8_t)t29 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t29;
        goto L_101beb23;
    }
    ecx = (ecx & 0xffffff00u) | t29;
    COW_AT(101beb2d)
    eax = COW_IMG(0x1037cb4cu);
L_101beb3a: ;
    COW_AT(101beb3a)
    t30 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb4cu) + 0x2f4u, (uint8_t)t30);
    if ((uint8_t)t30 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t30;
        goto L_101beb3a;
    }
    ecx = (ecx & 0xffffff00u) | t30;
    COW_AT(101beb44)
    eax = COW_IMG(0x1037cb3cu);
L_101beb51: ;
    COW_AT(101beb51)
    t31 = rd8(eax);
    wr8(eax + self - COW_IMG(0x1037cb3cu) + 0x3f4u, (uint8_t)t31);
    if ((uint8_t)t31 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t31;
        goto L_101beb51;
    }
L_101beb5b: ;
    COW_AT(101beb5b)
    g->ebx = rd32(sp0 - 0x208u);
    g->esi = rd32(sp0 - 0x210u);
    g->edi = rd32(sp0 - 0x214u);
    g->ebp = rd32(sp0 - 0x20cu);
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101be900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101be91au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x214u);
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101be923u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x214u);
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101be925u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x214u);
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101be92fu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
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
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_edi = rd32(sp0 - 0x214u);
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x101be942u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be94eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be951u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be958u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be981u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1d0u - COW_IMG(0x1037cb8cu);
        (void)sp0;
        return 1;
    }
    case 0x101be98bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1d0u - COW_IMG(0x1037cb8cu);
        (void)sp0;
        return 1;
    }
    case 0x101be992u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be99au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be9aau:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be9d3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1d0u - COW_IMG(0x1037cb8cu);
        (void)sp0;
        return 1;
    }
    case 0x101be9ddu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1d0u - COW_IMG(0x1037cb8cu);
        (void)sp0;
        return 1;
    }
    case 0x101be9e6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101be9f3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0xd0u - COW_IMG(0x103d3c84u);
        (void)sp0;
        return 1;
    }
    case 0x101be9fdu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101bea0au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1d0u - COW_IMG(0x1037cb8cu);
        (void)sp0;
        return 1;
    }
    case 0x101bea14u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101bea48u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101bea5cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101bea64u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        g->edx = 0u;
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101bea78u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        wr32(sp0 - 0x224u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x101beab0u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beab8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beabfu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beaccu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1f4u - COW_IMG(0x1037cb84u);
        (void)sp0;
        return 1;
    }
    case 0x101bead6u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beae3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x2f4u - COW_IMG(0x1037cb7cu);
        (void)sp0;
        return 1;
    }
    case 0x101beaedu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beb04u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beb16u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beb23u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x1f4u - COW_IMG(0x1037cb60u);
        (void)sp0;
        return 1;
    }
    case 0x101beb2du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beb3au:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        g->edx = self + 0x2f4u - COW_IMG(0x1037cb4cu);
        (void)sp0;
        return 1;
    }
    case 0x101beb44u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    case 0x101beb5bu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_204;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x214u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101beafa: holds self, which no location here says
     101beb51: holds self, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101be900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101be900(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
