/* f_0x1023c560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023c560(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 548u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023c578u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x210u); goto E_1023c578;
    case 0x1023c582u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); g->ebp = rd32(sp0 - 0x20cu); g->esi = rd32(sp0 - 0x210u); goto E_1023c582;
    case 0x1023c599u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); g->ebp = rd32(sp0 - 0x20cu); g->ebx = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x210u); goto E_1023c599;
    case 0x1023c5a3u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); g->ebp = rd32(sp0 - 0x20cu); g->ebx = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x210u); goto E_1023c5a3;
    case 0x1023c5b4u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x210u); in_ebp = rd32(sp0 - 0x20cu); in_ebx = rd32(sp0 - 0x208u); g->ebp = rd32(sp0 - 0x20cu); g->ebx = rd32(sp0 - 0x208u); g->esi = rd32(sp0 - 0x210u); goto E_1023c5b4;
    case 0x1023c612u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c612;
    case 0x1023c61cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c61c;
    case 0x1023c62cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c62c;
    case 0x1023c634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c634;
    case 0x1023c63cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c63c;
    case 0x1023c648u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c648;
    case 0x1023c654u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); loc_204 = rd32(sp0 - 0x204u); goto E_1023c654;
    case 0x1023c65eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c65e;
    case 0x1023c660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c660;
    case 0x1023c674u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c674;
    case 0x1023c693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c693;
    case 0x1023c69du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c69d;
    case 0x1023c6a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c6a1;
    case 0x1023c6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c6b1;
    case 0x1023c6c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c6c4;
    case 0x1023c6d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_1023c6d8;
    case 0x1023c6e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_1023c6e1;
    case 0x1023c6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_1023c6eb;
    case 0x1023c6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); goto E_1023c6f2;
    case 0x1023c6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c6fc;
    case 0x1023c703u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_214 = rd32(sp0 - 0x214u); loc_204 = rd32(sp0 - 0x204u); goto E_1023c703;
    case 0x1023c711u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c711;
    case 0x1023c721u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; goto E_1023c721;
    case 0x1023c737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; cf = g->cf; pf = g->pf; af = g->af; zf = g->zf; sf = g->sf; of = g->of; loc_210 = rd32(sp0 - 0x210u); loc_20c = rd32(sp0 - 0x20cu); loc_208 = rd32(sp0 - 0x208u); goto E_1023c737;
    default: break;
    }
#endif

    COW_AT(1023c560)
    wr32(sp0 - 0x208u, in_ebx);
    wr32(sp0 - 0x20cu, in_ebp);
    wr32(sp0 - 0x210u, in_esi);
    t1 = rd8(self + 0xa5e0u);
    if ((uint8_t)t1 != 1u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_208 = in_ebx;
        loc_20c = in_ebp;
        loc_210 = in_esi;
    }
    else
    {
    COW_AT(1023c578)
        t2 = rd32(self + 0x30u);
        if (t2 == 1u)
        {
            eax = in_eax;
            edx = in_edx;
            loc_208 = in_ebx;
            loc_20c = in_ebp;
            loc_210 = in_esi;
        }
        else
        {
    COW_AT(1023c582)
            if (rd32(self + 0xa644u) != 0xffffffffu)
            {
                edx = in_edx;
                ebx = in_ebx & 0xffffff00u;
                loc_208 = in_ebx;
                loc_20c = in_ebp;
                loc_210 = in_esi;
            }
            else
            {
    COW_AT(1023c599)
                if ((int32_t)rd32(self + 0xa640u) >= 0)
                {
                    eax = rd32(self + 0xa640u);
    COW_AT(1023c5b4)
                    wr32(sp0 - 0x214u, eax);
                    g->eax = eax;
                    g->ecx = self;
                    g->edx = in_edx;
                    g->esp = sp0 - 0x214u;
                    t5 = cow_stdcall(g, COW_IMG(0x10310934u), 0);
                    t6 = g->ecx;
                    t7 = g->edx;
                    eax = t5;
                    ecx = t6;
                    edx = t7;
    COW_AT(1023c5ba)
                    if ((int32_t)eax < 0)
                    {
    COW_AT(1023c5c1)
                        wr32(self + 0xa640u, eax);
                    }
    COW_AT(1023c5c7)
                    if ((int32_t)eax >= 100)
                    {
                        zf = eax == 0x64u;
    COW_AT(1023c5e5)
                        if (!zf)
                        {
                            ebx = in_ebx & 0xffffff00u;
                        }
                        else
                        {
    COW_AT(1023c5e7)
                            t9 = rd32(self + 0xa644u);
                            if (t9 != 0u)
                            {
    COW_AT(1023c5fa)
                                wr32(sp0 - 0x214u, self + 0xa654u);
                                wr32(sp0 - 0x218u, self + 0xa754u);
                                ecx = self + 0xa654u;
                                edx = self + 0xa754u;
                                loc_214 = self + 0xa654u;
                            }
                            else
                            {
    COW_AT(1023c5ec)
                                wr32(sp0 - 0x214u, COW_IMG(0x1037cb94u));
                                wr32(sp0 - 0x218u, self + 0xa754u);
                                eax = self + 0xa754u;
                                loc_214 = COW_IMG(0x1037cb94u);
                            }
    COW_AT(1023c608)
                            g->ebx = in_ebx & 0xffffff00u;
                            g->edx = edx;
                            g->esp = sp0 - 0x204u;
                            cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0xa754u, loc_214, rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u));
                            t10 = g->edx;
                            edx = t10;
    COW_AT(1023c60d)
                            ebx = (in_ebx & 0xffffff00u) | 1u;
                        }
    COW_AT(1023c612)
                        wr32(self + 0xa640u, 0xffffffffu);
                        loc_208 = rd32(sp0 - 0x208u);
                        loc_20c = rd32(sp0 - 0x20cu);
                        loc_210 = rd32(sp0 - 0x210u);
                    }
                    else
                    {
    COW_AT(1023c5cc)
                        eax = COW_IMG(0x10376470u);
L_1023c5d9: ;
    COW_AT(1023c5d9)
                        t8 = rd8(eax);
                        wr8(eax + self - COW_IMG(0x10376470u) + 0xa754u, (uint8_t)t8);
                        if ((uint8_t)t8 != 0u)
                        {
                            eax = eax + 1u;
                            ecx = (ecx & 0xffffff00u) | t8;
                            goto L_1023c5d9;
                        }
    COW_AT(1023c5e3)
                        edx = self + 0xa754u - COW_IMG(0x10376470u);
                        ebx = in_ebx & 0xffffff00u;
                        loc_208 = rd32(sp0 - 0x208u);
                        loc_20c = rd32(sp0 - 0x20cu);
                        loc_210 = rd32(sp0 - 0x210u);
                    }
                }
                else
                {
                    eax = rd32(self + 0xa640u);
    COW_AT(1023c5a3)
                    wr32(sp0 - 0x214u, self + 0xa644u);
                    g->eax = eax;
                    g->edx = in_edx;
                    g->esp = sp0 - 0x214u;
                    t3 = cow_stdcall(g, COW_IMG(0x10310929u), 0);
                    t4 = g->edx;
                    eax = t3;
                    edx = t4;
    COW_AT(1023c5a9)
                    wr32(self + 0xa640u, eax);
                    ebx = in_ebx & 0xffffff00u;
                    loc_208 = rd32(sp0 - 0x208u);
                    loc_20c = rd32(sp0 - 0x20cu);
                    loc_210 = rd32(sp0 - 0x210u);
                }
            }
    COW_AT(1023c61c)
            if (rd32(self + 0xa5e4u) != rd32(self + 0xa5d8u))
            {
                eax = rd32(self + 0xa5d8u);
                ecx = rd32(self + 0xa5e4u);
                goto L_1023c63c;
            }
            eax = rd32(self + 0xa5d8u);
            ecx = rd32(self + 0xa5e4u);
    COW_AT(1023c62c)
            if (eax != 0u) goto L_1023c737;
    COW_AT(1023c634)
            if ((uint8_t)ebx == 0u) goto L_1023c737;
L_1023c63c: ;
    COW_AT(1023c63c)
            wr32(sp0 - 0x204u, 0u);
            if (eax != 0u)
            {
    COW_AT(1023c660)
                wr32(sp0 - 0x214u, eax - 1u);
                wr32(sp0 - 0x218u, COW_IMG(0x10388378u));
                wr32(sp0 - 0x21cu, sp0 - 0x100u);
                g->ebx = ebx;
                g->eax = sp0 - 0x100u;
                g->esp = sp0 - 0x208u;
                t12 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x10388378u), eax - 1u, loc_210, loc_20c);
                eax = t12;
    COW_AT(1023c674)
                wr32(sp0 - 0x214u, 0u);
                wr32(sp0 - 0x218u, 0u);
                wr32(sp0 - 0x21cu, sp0 - 0x200u);
                wr32(sp0 - 0x220u, sp0 - 0x100u);
                g->eax = eax;
                t13 = rd32(COW_IMG(0x10662dccu));
                g->esp = sp0 - 0x210u;
                t14 = cow_thiscall(g, COW_IMG(0x101c4800u), t13, 4, sp0 - 0x100u, sp0 - 0x200u, 0u, 0u);
                t15 = g->ecx;
                eax = t14;
                ecx = t15;
            }
            else
            {
    COW_AT(1023c648)
                eax = self + 0xa754u;
                loc_204 = 0u;
L_1023c654: ;
    COW_AT(1023c654)
                t11 = rd8(eax);
                wr8(eax + sp0 - self - 0xa954u, (uint8_t)t11);
                if ((uint8_t)t11 != 0u)
                {
                    eax = eax + 1u;
                    ecx = (ecx & 0xffffff00u) | t11;
                    loc_208 = rd32(sp0 - 0x208u);
                    loc_20c = rd32(sp0 - 0x20cu);
                    loc_210 = rd32(sp0 - 0x210u);
                    loc_204 = rd32(sp0 - 0x204u);
                    goto L_1023c654;
                }
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t11;
    COW_AT(1023c65e)
            }
    COW_AT(1023c693)
            if (rd8(sp0 - 0x200u) == 0x2du)
            {
                edx = 0u;
                goto L_1023c6b1;
            }
            eax = (eax & 0xffffff00u) | rd8(sp0 - 0x200u);
            edx = 0u;
L_1023c69d: ;
    COW_AT(1023c69d)
            if ((uint8_t)eax == 0u) goto L_1023c6b1;
    COW_AT(1023c6a1)
            wr8(edx + self + 0xa5e8u, (uint8_t)eax);
            if (rd8(edx + sp0 - 0x1ffu) != 0x2du)
            {
                eax = (eax & 0xffffff00u) | rd8(edx + sp0 - 0x1ffu);
                edx = edx + 1u;
                goto L_1023c69d;
            }
            edx = edx + 1u;
L_1023c6b1: ;
    COW_AT(1023c6b1)
            wr8(edx + self + 0xa5e8u, 0u);
            t16 = rd8(self + 0xa5e8u);
            if ((uint8_t)t16 == 0x2au) goto L_1023c6d8;
    COW_AT(1023c6c4)
            wr32(sp0 - 0x214u, in_edi);
            esi = self + 0xa5e8u;
            edi = COW_IMG(0x1038836cu);
            ecx = 9u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                eax = 0u;
                goto L_1023c6eb;
            }
L_1023c6d8: ;
    COW_AT(1023c6d8)
            eax = COW_IMG(0x1038541cu);
L_1023c6e1: ;
    COW_AT(1023c6e1)
            t17 = rd8(eax);
            wr8(eax + self - COW_IMG(0x1038541cu) + 0xa5e8u, (uint8_t)t17);
            if ((uint8_t)t17 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t17;
                goto L_1023c6e1;
            }
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t17;
L_1023c6eb: ;
    COW_AT(1023c6eb)
            t18 = rd8(edx + sp0 - 0x200u);
            if ((uint8_t)t18 != 0x2du)
            {
                loc_204 = rd32(sp0 - 0x204u);
            }
            else
            {
    COW_AT(1023c6f2)
                t19 = edx + sp0 - 0x1ffu;
                wr32(sp0 - 0x214u, t19);
                g->eax = eax;
                g->esp = sp0 - 0x210u;
                t20 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), t19, 1, t19);
                t21 = g->ecx;
                eax = t20;
                ecx = t21;
    COW_AT(1023c6fc)
                wr32(sp0 - 0x204u, eax);
                loc_204 = eax;
            }
    COW_AT(1023c703)
            wr32(sp0 - 0x214u, 0x40u);
            wr32(sp0 - 0x218u, 1u);
            wr32(sp0 - 0x21cu, loc_204);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = loc_204;
            g->esp = sp0 - 0x214u;
            t22 = cow_cdecl(g, COW_IMG(0x101c8fd0u), 2, loc_204, 1u);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
    COW_AT(1023c711)
            wr32(sp0 - 0x218u, eax);
            wr32(sp0 - 0x21cu, self + 0xa600u);
            g->edx = edx;
            g->esp = sp0 - 0x210u;
            t25 = cow_call_regs(g, COW_IMG(0x10312090u), self + 0xa600u, g->ecx, g->edx, 1, 3, self + 0xa600u, eax, rd32(sp0 - 0x214u));
            t26 = g->edx;
            eax = t25;
            edx = t26;
    COW_AT(1023c721)
            t27 = rd32(self + 0xa5d8u);
            wr8(self + 0xa63fu, 0u);
            wr32(self + 0xa5e4u, t27);
            loc_208 = rd32(sp0 - 0x208u);
            loc_20c = rd32(sp0 - 0x20cu);
            loc_210 = rd32(sp0 - 0x210u);
        }
    }
L_1023c737: ;
    COW_AT(1023c737)
    g->ebx = loc_208;
    g->esi = loc_210;
    g->edi = in_edi;
    g->ebp = loc_20c;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023c560(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023c578u:
    {
        unsigned af;
        unsigned cf;
        uint32_t esi;
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
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        g->ebp = self;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1023c582u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t esi;
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
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        g->esp = sp0 - 0x210u;
        g->ebp = self;
        wr32(sp0 - 0x208u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1023c599u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = self;
        g->esi = self + 0xa644u;
        (void)sp0;
        return 1;
    }
    case 0x1023c5a3u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = self;
        g->esi = self + 0xa644u;
        (void)sp0;
        return 1;
    }
    case 0x1023c5b4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x210u);
        in_ebp = rd32(sp0 - 0x20cu);
        in_ebx = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = self;
        g->esi = self + 0xa644u;
        (void)sp0;
        return 1;
    }
    case 0x1023c612u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c61cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c62cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c634u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c63cu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c648u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x204u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023c654u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_204;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        g->edx = sp0 - 0x200u - (self + 0xa754u);
        (void)sp0;
        return 1;
    }
    case 0x1023c65eu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c660u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        wr32(sp0 - 0x204u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1023c674u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x1023c693u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c69du:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6a1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6b1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6c4u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x210u;
        g->ebx = self + 0xa5e8u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6d8u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x210u;
        g->ebx = self + 0xa5e8u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6e1u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_214;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x210u;
        g->esi = self + 0xa5e8u - COW_IMG(0x1038541cu);
        (void)sp0;
        return 1;
    }
    case 0x1023c6ebu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_214;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6f2u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_214;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c6fcu:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
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
    case 0x1023c703u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_204;
        uint32_t loc_214;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_214 = rd32(sp0 - 0x214u);
        loc_204 = rd32(sp0 - 0x204u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    case 0x1023c711u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x1023c721u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
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
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x21cu;
        (void)sp0;
        return 1;
    }
    case 0x1023c737u:
    {
        unsigned af;
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_208;
        uint32_t loc_20c;
        uint32_t loc_210;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        cf = g->cf;
        pf = g->pf;
        af = g->af;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_210 = rd32(sp0 - 0x210u);
        loc_20c = rd32(sp0 - 0x20cu);
        loc_208 = rd32(sp0 - 0x208u);
        g->esp = sp0 - 0x210u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1023c5a9: holds in_ebx, which no location here says
     1023c5ba: holds in_ebx, which no location here says
     1023c5c1: holds in_ebx, which no location here says
     1023c5c7: holds in_ebx, which no location here says
     1023c5cc: holds in_ebx, which no location here says
     1023c5d9: holds in_ebx, which no location here says
     1023c5e3: holds in_ebx, which no location here says
     1023c5e5: holds in_ebx, which no location here says
     1023c5e7: holds in_ebx, which no location here says
     1023c5ec: holds in_ebx, which no location here says
     1023c5fa: holds in_ebx, which no location here says
     1023c608: holds in_ebx, which no location here says
     1023c60d: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1023c560(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023c560(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
