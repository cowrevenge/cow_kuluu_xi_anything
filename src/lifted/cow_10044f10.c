/* f_0x10044f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10044f10(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d26;
    double d27;
    double d28;
    double d29;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10044f30u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f30;
    case 0x10044f3au: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f3a;
    case 0x10044f62u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f62;
    case 0x10044f6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f6a;
    case 0x10044f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f6e;
    case 0x10044f72u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f72;
    case 0x10044f74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f74;
    case 0x10044f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f80;
    case 0x10044f97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044f97;
    case 0x10044fa6u: eax = g->eax; ecx = g->ecx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044fa6;
    case 0x10044fcbu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044fcb;
    case 0x10044fd6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044fd6;
    case 0x10044fe0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044fe0;
    case 0x10044fe4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10044fe4;
    case 0x1004500du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1004500d;
    case 0x1004504fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1004504f;
    case 0x1004505bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1004505b;
    case 0x10045082u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10045082;
    case 0x1004509du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1004509d;
    case 0x100450cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100450cf;
    case 0x100450dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100450df;
    case 0x100450e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100450e7;
    case 0x100450f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100450f0;
    case 0x100450fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_100450fa;
    case 0x10045113u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); goto E_10045113;
    case 0x10045115u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); goto E_10045115;
    case 0x10045124u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10045124;
    case 0x10045132u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10045132;
    case 0x10045138u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); goto E_10045138;
    case 0x1004513eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); x0 = ST(0); goto E_1004513e;
    case 0x10045152u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10045152;
    case 0x10045170u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10045170;
    default: break;
    }
#endif

    COW_AT(10044f10)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t1 = rd32(self + 0x10cu);
    if (!(t1 >> 2u & 1u))
    {
        eax = t1;
    COW_AT(10044fcb)
        if (!(eax >> 0x11u & 1u))
        {
    COW_AT(1004509d)
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->edx = rd32(COW_IMG(0x1047cf7cu));
            t20 = rd32(COW_IMG(0x1047cf7cu));
            t21 = rd32(rd32(COW_IMG(0x1047cf7cu)));
            t22 = rd32(COW_IMG(0x1047bfa8u));
            g->esp = sp0 - 0x1cu;
            t23 = cow_thiscall(g, COW_IMG(0x10044c40u), self, 1, sp0 - 0xcu);
            t24 = g->edx;
            wr32(sp0 - 0x20u, t23);
            wr32(sp0 - 0x24u, t22 + 0xb50u);
            wr32(sp0 - 0x28u, self + 0x188u);
            cow_thiscall(g, rd32(t21 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t22 + 0xb50u, t23);
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
    COW_AT(10044fd6)
            if (rd32(self + 0xfcu) == 0u) goto L_1004500d;
            eax = rd32(self + 0xfcu);
    COW_AT(10044fe0)
            if (rd32(eax) == 0u) goto L_1004500d;
    COW_AT(10044fe4)
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            t7 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            t8 = g->edx;
            if (t7 == 0u) goto L_1004500d;
            eax = t7;
            edx = t8;
    COW_AT(10044fef)
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t9 = cow_thiscall(g, COW_IMG(0x100473f0u), self, 0);
            t10 = rd32(t9 + 0x30u);
            wr32(sp0 - 0xcu, t10);
            t11 = rd32(t9 + 0x34u);
            wr32(sp0 - 8u, t11);
            t12 = rd32(t9 + 0x38u);
            wr32(sp0 - 4u, t12);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
L_10045025: ;
    COW_AT(10045025)
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            t13 = rd32(COW_IMG(0x1047bfa8u)) + 0xb50u;
            wr32(sp0 - 0x24u, t13);
            wr32(sp0 - 0x28u, self + 0x188u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t13, sp0 - 0xcu);
            if (!(rd8(self + 0x10cu) & 1u)) goto L_10045082;
    COW_AT(1004504f)
            if ((rd32(self + 0x10cu) & 0x1c0u) != 0u) goto L_10045082;
    COW_AT(1004505b)
            d14 = fr(g, (double)rdf32(self + 0x54u) + (double)rdf32(self + 0x188u));
            wrf32(self + 0x188u, (float)d14);
            d15 = fr(g, (double)rdf32(self + 0x18cu) - (double)rdf32(self + 0x58u));
            wrf32(self + 0x18cu, (float)d15);
            d16 = fr(g, (double)rdf32(self + 0x5cu) + (double)rdf32(self + 0x190u));
            wrf32(self + 0x190u, (float)d16);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
        }
    }
    else
    {
        eax = t1;
    COW_AT(10044f30)
        if (!(eax >> 3u & 1u))
        {
    COW_AT(10044fa6)
            wr32(sp0 - 0x20u, self + 0x54u);
            t6 = rd32(COW_IMG(0x1047bfa8u)) + 0xb90u;
            wr32(sp0 - 0x24u, t6);
            wr32(sp0 - 0x28u, self + 0x188u);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1047cf7cu))) + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, self + 0x188u, t6, self + 0x54u);
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
    COW_AT(10044f3a)
            t2 = rd32(self + 0x54u);
            wr32(self + 0x188u, t2);
            t3 = rd32(self + 0x58u);
            t4 = rd32(self + 0x5cu);
            wr32(self + 0x18cu, t3);
            wr32(self + 0x190u, t4);
            if (rd32(self + 0xfcu) == 0u)
            {
                loc_10 = in_ebx;
                loc_14 = in_ebp;
                loc_18 = in_esi;
                loc_1c = in_edi;
            }
            else
            {
                eax = rd32(self + 0xfcu);
    COW_AT(10044f62)
                if (rd32(eax) == 0u)
                {
                    loc_10 = in_ebx;
                    loc_14 = in_ebp;
                    loc_18 = in_esi;
                    loc_1c = in_edi;
                }
                else
                {
    COW_AT(10044f6a)
                    if (eax == 0u)
                    {
    COW_AT(10044f72)
                        eax = 0u;
                    }
                    else
                    {
    COW_AT(10044f6e)
                        eax = rd32(eax);
                    }
    COW_AT(10044f74)
                    if (!(rd8(eax + 0xdfu) & 1u))
                    {
                        loc_10 = in_ebx;
                        loc_14 = in_ebp;
                        loc_18 = in_esi;
                        loc_1c = in_edi;
                    }
                    else
                    {
    COW_AT(10044f80)
                        d5 = (double)rdf32(self + 0x190u);
                        if (!(d5 < (double)rdf32(COW_IMG(0x10329a30u))))
                        {
                            loc_10 = in_ebx;
                            loc_14 = in_ebp;
                            loc_18 = in_esi;
                            loc_1c = in_edi;
                        }
                        else
                        {
    COW_AT(10044f97)
                            wr32(self + 0x190u, 0x3f19999au);
                            loc_10 = in_ebx;
                            loc_14 = in_ebp;
                            loc_18 = in_esi;
                            loc_1c = in_edi;
                        }
                    }
                }
            }
        }
    }
L_100450cf: ;
    COW_AT(100450cf)
    t25 = rd32(self + 0x10cu);
    if (!(t25 >> 0x16u & 1u))
    {
        ecx = t25;
        edx = t25 >> 0x16u;
    COW_AT(100450e7)
        if (!(ecx >> 2u & 1u)) goto L_10045132;
        eax = ecx >> 2u;
    COW_AT(100450f0)
        if (!(ecx >> 3u & 1u))
        {
            edx = ecx >> 3u;
            goto L_10045132;
        }
        edx = ecx >> 3u;
    COW_AT(100450fa)
        d26 = (double)rdf32(self + 0x128u);
        if (!(d26 < (double)rdf32(COW_IMG(0x103295d8u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x128u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            x0 = (double)rdf32(self + 0x128u);
    COW_AT(10045113)
            x0 = -x0;
        }
    COW_AT(10045115)
        if ((cow_fsw(g, x0, (double)rdf32(COW_IMG(0x1032b078u)), 0u) & 0x4100u) != 0u) goto L_10045132;
    COW_AT(10045124)
        x0 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(self + 0x128u));
L_10045138: ;
    COW_AT(10045138)
        x0 = fr(g, x0 - (double)rdf32(self + 0x190u));
    }
    else
    {
        ecx = t25;
        edx = t25 >> 0x16u;
    COW_AT(100450df)
        x0 = (double)rdf32(self + 0x128u);
    }
    COW_AT(1004513e)
    wrf32(self + 0x12cu, (float)x0);
    wr32(self + 0x130u, 0u);
    if (ecx >> 0x1bu & 1u)
    {
    COW_AT(10045152)
        d27 = fr(g, (double)rdf32(self + 0x128u) - (double)rdf32(self + 0x190u));
        wr32(self + 0x130u, 0u);
        d28 = fr(g, d27 + (double)rdf32(COW_IMG(0x1032b074u)));
        wrf32(self + 0x12cu, (float)d28);
    }
    COW_AT(10045170)
    d29 = (double)rdf32(self + 0x190u);
    wrf32(self + 0x13cu, (float)d29);
    g->ebx = loc_10;
    g->esi = loc_18;
    g->edi = loc_1c;
    g->ebp = loc_14;
    g->edx = edx;
    return;
L_1004500d: ;
    COW_AT(1004500d)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    goto L_10045025;
L_10045082: ;
    COW_AT(10045082)
    d17 = fr(g, (double)rdf32(self + 0x54u) + (double)rdf32(self + 0x188u));
    wrf32(self + 0x188u, (float)d17);
    d18 = fr(g, (double)rdf32(self + 0x58u) + (double)rdf32(self + 0x18cu));
    wrf32(self + 0x18cu, (float)d18);
    d19 = fr(g, (double)rdf32(self + 0x5cu) + (double)rdf32(self + 0x190u));
    wrf32(self + 0x190u, (float)d19);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_100450cf;
L_10045132: ;
    COW_AT(10045132)
    x0 = (double)rdf32(self + 0x128u);
    goto L_10045138;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10044f10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10044f30u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edx = self + 0x54u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f80u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044f97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044fa6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edx = self + 0x54u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044fcbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044fd6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044fe0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10044fe4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004500du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004504fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = self + 0x188u;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1004505bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = self + 0x188u;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10045082u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        g->edi = self + 0x188u;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1004509du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100450cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100450dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100450e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100450f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100450fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045113u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045115u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045132u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045138u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1004513eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045152u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10045170u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     10044fef: holds in_ebx, which no location here says
     10045025: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10044f10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10044f10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
