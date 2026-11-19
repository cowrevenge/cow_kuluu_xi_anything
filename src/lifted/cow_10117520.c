/* f_0x10117520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10117520(Guest* g)
{
    double d26;
    double d30;
    double d35;
    double d55;
    double d62;
    double d69;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t53;
    uint32_t t54;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t7;
    uint32_t t70;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011753au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_1011753a;
    case 0x10117541u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117541;
    case 0x10117558u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117558;
    case 0x1011755bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1011755b;
    case 0x10117562u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117562;
    case 0x1011756eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1011756e;
    case 0x10117579u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117579;
    case 0x10117585u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117585;
    case 0x10117591u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117591;
    case 0x101175a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101175a4;
    case 0x101175b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101175b7;
    case 0x101175d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101175d5;
    case 0x1011761eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1011761e;
    case 0x1011762du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1011762d;
    case 0x10117632u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10117632;
    case 0x10117636u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117636;
    case 0x1011763eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1011763e;
    case 0x10117644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10117644;
    case 0x1011767du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1011767d;
    case 0x1011768cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_1011768c;
    case 0x10117691u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_10117691;
    case 0x10117695u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117695;
    case 0x1011769du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1011769d;
    case 0x101176a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; x0 = ST(0); goto E_101176a3;
    case 0x101176dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101176db;
    case 0x101176e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_101176e2;
    case 0x1011770eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_1011770e;
    case 0x10117736u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117736;
    case 0x10117742u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117742;
    case 0x10117745u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117745;
    case 0x1011774fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1011774f;
    case 0x10117759u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117759;
    case 0x1011775fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1011775f;
    case 0x10117766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117766;
    case 0x10117774u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117774;
    case 0x1011777bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1011777b;
    case 0x10117790u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; goto E_10117790;
    case 0x10117796u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_10117796;
    case 0x1011779bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1011779b;
    case 0x101177a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101177a2;
    case 0x101177b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101177b2;
    case 0x101177b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_101177b9;
    default: break;
    }
#endif

    COW_AT(10117520)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 8u, t1);
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_c = in_esi;
    }
    else
    {
        edx = t3;
        loc_8 = t1;
    COW_AT(1011753a)
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x18u, in_edi);
        ebx = in_ebx;
        ebp = rd32(sp0 - 4u);
        loc_c = in_esi;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_edi;
L_10117541: ;
    COW_AT(10117541)
        wr32(sp0 - 0x1cu, sp0 - 8u);
        g->eax = sp0 - 8u;
        g->ecx = self + 0x14u;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 8u);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint32_t)(int16_t)rd16(t4) == 0u)
        {
            eax = (uint32_t)(int16_t)rd16(t4);
            edx = t6;
            edi = t4;
    COW_AT(101175b7)
            t20 = (edx & 0xffffff00u) | rd8(self + 0x99u);
            wr32(sp0 - 0x1cu, t20);
            g->ebx = ebx;
            g->esp = sp0 - 0x18u;
            cow_fastcall(g, COW_IMG(0x10119550u), edi, t20, 1, t20);
            t21 = g->ecx;
            t22 = g->edx;
            if ((int32_t)rd32(self + 0x94u) < 0)
            {
                eax = rd32(self + 0x94u);
                ecx = t21;
                edx = t22;
                ebp = edi;
    COW_AT(101176db)
                if (eax != 0xfffffc19u)
                {
    COW_AT(101176e2)
                    t44 = rd16(self + 0x8cu);
                    wr16(edi + 0x1au, (uint16_t)t44);
                    t45 = rd16(self + 0x8eu);
                    wr16(edi + 0x1cu, (uint16_t)t45);
                    t46 = rd16(self + 0x90u);
                    wr16(edi + 0x22u, (uint16_t)t46);
                    t47 = rd16(self + 0x92u);
                    wr16(edi + 0x24u, (uint16_t)t47);
                    eax = ((eax | t44) & 0xffff0000u) | t47;
                    ecx = (ecx & 0xffff0000u) | t45;
                    edx = (edx & 0xffff0000u) | t46;
                }
            }
            else
            {
                eax = rd32(self + 0x94u);
                ecx = t21;
                edx = t22;
                ebp = edi;
    COW_AT(101175d5)
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t23 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t24 = g->ecx;
                t25 = g->edx;
                d26 = cow_take_float(g);
                fpush(g, d26);
                t27 = cow_call_regs(g, COW_IMG(0x10311c6cu), t23, g->ecx, g->edx, 1, 0);
                t28 = rd32(self + 0x94u) - (uint32_t)(int16_t)t27;
                wr32(self + 0x94u, t28);
                t29 = (uint32_t)(int16_t)rd16(self + 0x8cu) - (uint32_t)(int16_t)rd16(edi + 0x1au);
                wr32(sp0 - 4u, t29);
                d30 = fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x10331388u)));
                if (!(d30 < (double)rdf32(COW_IMG(0x1032961cu))))
                {
                    eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t28 & 0xffff0000u) | rd16(self + 0x8cu);
                    edx = (uint32_t)(int16_t)rd16(edi + 0x1au);
                    ebx = (ebx & 0xffff0000u) | rd16(edi + 0x1au);
                    x0 = d30;
                }
                else
                {
                    eax = (t29 & 0xffff0000u) | (uint16_t)cow_fsw(g, d30, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t28 & 0xffff0000u) | rd16(self + 0x8cu);
                    edx = (uint32_t)(int16_t)rd16(edi + 0x1au);
                    ebx = (ebx & 0xffff0000u) | rd16(edi + 0x1au);
                    x0 = d30;
    COW_AT(1011761e)
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
    COW_AT(1011762d)
                        if ((uint16_t)ebx != (uint16_t)ecx)
                        {
                            zf = (uint16_t)((uint16_t)ebx - (uint16_t)ecx) == 0u;
                            sf = (int16_t)((uint16_t)ebx - (uint16_t)ecx) < 0;
                            of = (((uint16_t)ebx ^ (uint16_t)ecx) & ((uint16_t)ebx ^ (uint16_t)((uint16_t)ebx - (uint16_t)ecx))) >> 0xfu;
    COW_AT(10117632)
                            if (zf || sf != of)
                            {
    COW_AT(1011763e)
                                x0 = (double)rdf32(COW_IMG(0x1032961cu));
                            }
                            else
                            {
    COW_AT(10117636)
                                x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                            }
                        }
                    }
                }
    COW_AT(10117644)
                g->ecx = ecx;
                fpush(g, x0);
                g->esp = sp0 - 0x18u;
                t31 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t32 = g->ecx;
                t33 = rd16(edi + 0x1cu);
                wr16(edi + 0x1au, (uint16_t)(ebx + t31));
                t34 = (uint32_t)(int16_t)rd16(self + 0x8eu) - (uint32_t)(int16_t)t33;
                wr32(sp0 - 4u, t34);
                d35 = fr(g, (double)(int32_t)t34 * (double)rdf32(COW_IMG(0x10331388u)));
                if (!(d35 < (double)rdf32(COW_IMG(0x1032961cu))))
                {
                    eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t32 & 0xffff0000u) | rd16(self + 0x8eu);
                    edx = (uint32_t)(int16_t)t33;
                    ebx = (ebx & 0xffff0000u) | t33;
                    x0 = d35;
                }
                else
                {
                    eax = (t34 & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, (double)rdf32(COW_IMG(0x1032961cu)), 1u);
                    ecx = (t32 & 0xffff0000u) | rd16(self + 0x8eu);
                    edx = (uint32_t)(int16_t)t33;
                    ebx = (ebx & 0xffff0000u) | t33;
                    x0 = d35;
    COW_AT(1011767d)
                    if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032a3f0u)), 1u) & 0x4100u;
    COW_AT(1011768c)
                        if ((uint16_t)ebx != (uint16_t)ecx)
                        {
                            zf = (uint16_t)((uint16_t)ebx - (uint16_t)ecx) == 0u;
                            sf = (int16_t)((uint16_t)ebx - (uint16_t)ecx) < 0;
                            of = (((uint16_t)ebx ^ (uint16_t)ecx) & ((uint16_t)ebx ^ (uint16_t)((uint16_t)ebx - (uint16_t)ecx))) >> 0xfu;
    COW_AT(10117691)
                            if (zf || sf != of)
                            {
    COW_AT(1011769d)
                                x0 = (double)rdf32(COW_IMG(0x1032961cu));
                            }
                            else
                            {
    COW_AT(10117695)
                                x0 = (double)rdf32(COW_IMG(0x1032a3f0u));
                            }
                        }
                    }
                }
    COW_AT(101176a3)
                g->ecx = ecx;
                g->edx = edx;
                fpush(g, x0);
                g->esp = sp0 - 0x18u;
                t36 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                t37 = g->ecx;
                t38 = g->edx;
                wr16(edi + 0x1cu, (uint16_t)(ebx + t36));
                t39 = rd16(self + 0x8cu);
                t40 = rd16(self + 0x90u);
                t41 = rd16(edi + 0x1au);
                wr16(edi + 0x22u, (uint16_t)(t39 + (uint16_t)(t40 - t41)));
                t42 = rd16(self + 0x8eu);
                t43 = rd16(self + 0x92u);
                wr16(edi + 0x24u, (uint16_t)(t42 + (uint16_t)(t43 - (uint16_t)(ebx + t36))));
                eax = t36;
                ecx = (t37 & 0xffff0000u) | (uint16_t)(t39 + (uint16_t)(t40 - t41));
                edx = (t38 & 0xffff0000u) | (uint16_t)(t42 + (uint16_t)(t43 - (uint16_t)(ebx + t36)));
                ebx = ebx + t36;
            }
    COW_AT(1011770e)
            t48 = rd16(edi + 0x1au);
            wr16(self + 0x3au, (uint16_t)t48);
            t49 = rd16(edi + 0x1cu);
            wr16(self + 0x3cu, (uint16_t)t49);
            wr16(self + 0x3eu, (uint16_t)(rd16(edi + 0x1au) + rd16(edi + 0x22u)));
            t50 = rd16(edi + 0x1cu);
            t51 = rd16(edi + 0x24u);
            wr16(self + 0x40u, (uint16_t)(t50 + t51));
            ecx = ((ecx | t48) & 0xffff0000u) | (uint16_t)(t50 + t51);
            edx = (edx & 0xffff0000u) | t49;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(t4);
            ecx = t5;
            edx = t6;
            edi = t4;
    COW_AT(10117558)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(10117585)
                if (rd32(self + 0x94u) != 0xfffffc19u)
                {
    COW_AT(10117591)
                    wr32(sp0 - 0x1cu, 0u);
                    t12 = (uint32_t)(int16_t)rd16(ebp + 0x1cu);
                    wr32(sp0 - 0x20u, t12);
                    t13 = (uint32_t)(int16_t)rd16(ebp + 0x1au);
                    wr32(sp0 - 0x24u, t13);
                    g->eax = t13;
                    g->esp = sp0 - 0x18u;
                    t14 = cow_fastcall(g, COW_IMG(0x10119ad0u), edi, t12, 3, t13, t12, 0u);
                    t15 = g->ecx;
                    t16 = g->edx;
                    eax = t14;
                    ecx = t15;
                    edx = t16;
                }
    COW_AT(101175a4)
                t17 = (ecx & 0xffffff00u) | rd8(self + 0x99u);
                wr32(sp0 - 0x1cu, t17);
                g->ebp = ebp;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                cow_call_regs(g, COW_IMG(0x10119c00u), eax, edi, g->edx, 0, 1, t17);
                t18 = g->ecx;
                t19 = g->edx;
                ecx = t18;
                edx = t19;
            }
            else
            {
                eax = eax - 1u;
    COW_AT(1011755b)
                if (eax == 1u)
                {
                    eax = eax - 1u;
    COW_AT(10117562)
                    if (rd32(self + 0x94u) != 0xfffffc19u)
                    {
    COW_AT(1011756e)
                        t7 = rd32(self + 8u);
                        wr32(sp0 - 0x1cu, t7);
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x18u;
                        t8 = cow_thiscall(g, COW_IMG(0x10119e30u), edi, 1, t7);
                        t9 = g->edx;
                        eax = t8;
                        edx = t9;
                    }
    COW_AT(10117579)
                    g->edx = edx;
                    g->esp = sp0 - 0x18u;
                    cow_call_regs(g, COW_IMG(0x10119f20u), eax, edi, g->edx, 1, 0);
                    t10 = g->ecx;
                    t11 = g->edx;
                    ecx = t10;
                    edx = t11;
                }
            }
        }
    COW_AT(10117736)
        if (rd32(sp0 - 8u) != 0u)
        {
            loc_c = rd32(sp0 - 0xcu);
            loc_8 = rd32(sp0 - 8u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            goto L_10117541;
        }
    COW_AT(10117742)
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(10117745)
    if ((int32_t)rd32(self + 0x94u) > 0)
    {
        eax = rd32(self + 0x94u);
    }
    else
    {
        eax = rd32(self + 0x94u);
    COW_AT(1011774f)
        wr32(self + 0x94u, 0xfffffc19u);
    }
    COW_AT(10117759)
    if (rd32(self + 0x10u) != 0xeu) goto L_10117774;
    COW_AT(1011775f)
    if ((int16_t)rd16(self + 0x66u) <= 0) goto L_1011779b;
    COW_AT(10117766)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t53 = g->ecx;
    t54 = g->edx;
    d55 = cow_take_float(g);
    g->ecx = t53;
    g->edx = t54;
    fpush(g, d55);
    t56 = cow_call_regs(g, COW_IMG(0x10311c6cu), t52, g->ecx, g->edx, 1, 0);
    t57 = g->ecx;
    t58 = g->edx;
    wr16(self + 0x66u, (uint16_t)(rd16(self + 0x66u) - (uint16_t)t56));
    eax = t56;
    ecx = t57;
    edx = t58;
    loc_c = rd32(sp0 - 0xcu);
L_10117774: ;
    COW_AT(10117774)
    if ((int16_t)rd16(self + 0x5eu) > 0)
    {
    COW_AT(1011777b)
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t66 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t67 = g->ecx;
        t68 = g->edx;
        d69 = cow_take_float(g);
        fpush(g, d69);
        t70 = cow_call_regs(g, COW_IMG(0x10311c6cu), t66, g->ecx, g->edx, 1, 0);
        wr16(self + 0x5eu, (uint16_t)(rd16(self + 0x5eu) - (uint16_t)t70));
        if ((int16_t)rd16(self + 0x5eu) >= 0)
        {
            eax = t70;
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            eax = t70;
    COW_AT(10117790)
            wr16(self + 0x5eu, 0u);
            loc_c = rd32(sp0 - 0xcu);
        }
    }
    COW_AT(10117796)
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
L_1011779b: ;
    COW_AT(1011779b)
    if ((int16_t)rd16(self + 0x64u) <= 0) goto L_101177b2;
    COW_AT(101177a2)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t59 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t60 = g->ecx;
    t61 = g->edx;
    d62 = cow_take_float(g);
    g->ecx = t60;
    g->edx = t61;
    fpush(g, d62);
    t63 = cow_call_regs(g, COW_IMG(0x10311c6cu), t59, g->ecx, g->edx, 1, 0);
    t64 = g->ecx;
    t65 = g->edx;
    wr16(self + 0x64u, (uint16_t)(rd16(self + 0x64u) - (uint16_t)t63));
    eax = t63;
    ecx = t64;
    edx = t65;
    loc_c = rd32(sp0 - 0xcu);
    goto L_10117774;
L_101177b2: ;
    COW_AT(101177b2)
    if (rd8(self + 0x6eu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x6eu);
        goto L_10117774;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x6eu);
    COW_AT(101177b9)
    wr8(self + 0x70u, 1u);
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = edi;
    g->ebp = ebp;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10117520(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011753au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117541u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117558u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1011755bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10117562u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1011756eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10117579u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117585u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10117591u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101175a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101175b7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101175d5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011761eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011762du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117632u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117636u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011763eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011767du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011768cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117691u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117695u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011769du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101176a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        double x0;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        x0 = ST(0);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101176dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101176e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011770eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117736u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117742u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10117745u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011774fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011775fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117766u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117774u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011777bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117790u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10117796u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011779bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101177a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101177b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101177b9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10117520(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10117520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
