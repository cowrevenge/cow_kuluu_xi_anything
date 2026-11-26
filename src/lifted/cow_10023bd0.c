/* f_0x10023bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10023bd0(Guest* g)
{
    double d14;
    double d15;
    double d16;
    double d27;
    double d32;
    double d33;
    double d34;
    double d43;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
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
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t7;
    uint32_t t8;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 108u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10023be5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10023be5;
    case 0x10023bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_30 = rd32(sp0 - 0x30u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10023bf6;
    case 0x10023c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023c1b;
    case 0x10023c3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10023c3b;
    case 0x10023c52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023c52;
    case 0x10023c5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023c5a;
    case 0x10023c6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023c6c;
    case 0x10023c8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023c8f;
    case 0x10023c9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023c9e;
    case 0x10023cbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023cbc;
    case 0x10023cc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023cc4;
    case 0x10023cd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023cd2;
    case 0x10023cd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023cd6;
    case 0x10023ceau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023cea;
    case 0x10023d1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023d1e;
    case 0x10023d3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10023d3d;
    case 0x10023d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023d54;
    case 0x10023d5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023d5c;
    case 0x10023d6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023d6e;
    case 0x10023d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023d91;
    case 0x10023da0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023da0;
    case 0x10023dbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023dbe;
    case 0x10023dc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023dc7;
    case 0x10023dd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023dd9;
    case 0x10023dddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023ddd;
    case 0x10023df1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023df1;
    case 0x10023e07u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); goto E_10023e07;
    case 0x10023e16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023e16;
    case 0x10023e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e22;
    case 0x10023e38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e38;
    case 0x10023e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e4a;
    case 0x10023e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e73;
    case 0x10023e85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e85;
    case 0x10023e8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023e8c;
    case 0x10023eb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023eb5;
    case 0x10023ebdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023ebd;
    case 0x10023ee5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023ee5;
    case 0x10023ef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023ef9;
    case 0x10023f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023f2d;
    case 0x10023f3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023f3d;
    case 0x10023f44u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023f44;
    case 0x10023f6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023f6d;
    case 0x10023f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023f75;
    case 0x10023f99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023f99;
    case 0x10023f9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023f9d;
    case 0x10023fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10023fad;
    case 0x10023fbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10023fbc;
    case 0x10023fe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); goto E_10023fe0;
    default: break;
    }
#endif

    COW_AT(10023bd0)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    g->eax = rd32(sp0 + 8u);
    t1 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x4cu;
    COW_RET(0x10023be5u);
    t2 = cow_thiscall(g, COW_IMG(0x10035290u), t1 + 8u, 0);
    eax = t2;
    COW_AT(10023be5)
    wr32(sp0 - 0x30u, eax);
    if (rd8(COW_IMG(0x10456e3cu)) == 0u)
    {
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_30 = eax;
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456e3cu));
    }
    else
    {
        loc_30 = eax;
    COW_AT(10023bf6)
        wr8(COW_IMG(0x10456e3cu), 0u);
        t3 = rd32(self + 0x5eu);
        wr32(sp0 - 0x38u, t3);
        t4 = rd16(self + 0x64u) >> 2u;
        wr32(sp0 - 0x34u, t4);
        if ((int32_t)(rd16(self + 0x64u) >> 2u) <= 0)
        {
            edi = 0u;
            loc_40 = in_ebx;
            loc_44 = in_ebp;
            loc_48 = in_esi;
            loc_4c = in_edi;
            goto L_10023cea;
        }
        ecx = t4;
        edi = 0u;
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_38 = t3;
        loc_34 = t4;
L_10023c1b: ;
    COW_AT(10023c1b)
        wr8(edi + rd32(COW_IMG(0x10456e38u)), 0xffu);
        t5 = rd16(self + 0x80u);
        if ((uint16_t)t5 != 0u)
        {
            eax = (loc_38 & 0xffff0000u) | rd16(loc_38);
    COW_AT(10023c3b)
            t6 = (eax & 0x7fffu) * 0x3cu + rd32(sp0 + 0xcu) + 0xcu;
            wr32(sp0 - 0x2cu, t6);
            eax = t6;
            edx = rd32(sp0 + 0xcu);
            ebp = 0u;
            loc_2c = t6;
L_10023c52: ;
    COW_AT(10023c52)
            wr32(sp0 - 0x50u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023c5au);
            t7 = cow_thiscall(g, COW_IMG(0x10023ff0u), self, 1, ebp);
            t8 = g->edx;
            eax = t7;
            edx = t8;
    COW_AT(10023c5a)
            wr32(sp0 - 0x50u, sp0 - 0x10u);
            wr32(sp0 - 0x54u, (uint32_t)(int16_t)eax);
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023c6cu);
            cow_thiscall(g, COW_IMG(0x1002b390u), rd32(sp0 + 8u), 2, (uint32_t)(int16_t)eax, sp0 - 0x10u);
            ebx = (uint32_t)(int16_t)eax;
    COW_AT(10023c6c)
            wr32(sp0 - 0x50u, sp0 - 0x10u);
            d9 = (double)(float)(double)rdf32(ebx * 0x12u + rd32(sp0 - 0x30u) + 2u);
            wrf32(sp0 - 0x3cu, (float)d9);
            t10 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x54u, t10);
            wr32(sp0 - 0x58u, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023c8fu);
            t11 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x28u, t10, sp0 - 0x10u);
            eax = t11;
    COW_AT(10023c8f)
            wr32(sp0 - 0x5cu, sp0 - 0x28u);
            wr32(sp0 - 0x60u, sp0 - 0x28u);
            g->eax = eax;
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x58u;
            COW_RET(0x10023c9eu);
            t12 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x28u, sp0 - 0x28u);
            t13 = g->edx;
            d14 = cow_take_float(g);
            eax = t12;
            edx = t13;
            x0 = d14;
    COW_AT(10023c9e)
            d15 = (double)rdf32(sp0 - 0x3cu);
            d16 = fr(g, fr(g, d15 * d15) * (double)rdf32(COW_IMG(0x1032a3acu)));
            if ((cow_fsw(g, x0, d16, 0u) & 0x4100u) == 0u)
            {
                eax = cow_fsw(g, x0, d16, 0u) & 0x4100u;
            }
            else
            {
    COW_AT(10023cbc)
                t17 = rd32(COW_IMG(0x10456e38u));
                wr8(edi + t17, (uint8_t)ebx);
                eax = t17;
            }
    COW_AT(10023cc4)
            if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x80u))
            {
                ebp = ebp + 1u;
                loc_2c = rd32(sp0 - 0x2cu);
                goto L_10023c52;
            }
    COW_AT(10023cd2)
            ecx = rd32(sp0 - 0x34u);
        }
    COW_AT(10023cd6)
        t18 = rd32(sp0 - 0x38u) + 8u;
        wr32(sp0 - 0x38u, t18);
        if ((int32_t)(edi + 1u) < (int32_t)ecx)
        {
            edi = edi + 1u;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_38 = t18;
            loc_34 = rd32(sp0 - 0x34u);
            goto L_10023c1b;
        }
        edi = edi + 1u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_30 = rd32(sp0 - 0x30u);
L_10023cea: ;
    COW_AT(10023cea)
        t19 = rd16(self + 0x64u);
        t20 = (t19 >> 2u) * 8u + rd32(self + 0x5eu);
        wr32(sp0 - 0x38u, t20);
        t21 = t19 + rd16(self + 0x66u) + ((uint32_t)((int32_t)(t19 + rd16(self + 0x66u)) >> 0x1fu) & 3u);
        wr32(sp0 - 0x34u, (uint32_t)((int32_t)t21 >> 2u));
        if ((int32_t)edi >= (int32_t)(uint32_t)((int32_t)t21 >> 2u))
        {
            eax = t21;
            goto L_10023df1;
        }
        ecx = (uint32_t)((int32_t)t21 >> 2u);
        loc_38 = t20;
        loc_34 = (uint32_t)((int32_t)t21 >> 2u);
L_10023d1e: ;
    COW_AT(10023d1e)
        t22 = rd32(COW_IMG(0x10456e38u));
        wr8(edi + t22, 0xffu);
        t23 = rd16(self + 0x80u);
        if ((uint16_t)t23 == 0u)
        {
            eax = (t22 & 0xffff0000u) | rd16(loc_38);
        }
        else
        {
            eax = (t22 & 0xffff0000u) | rd16(loc_38);
    COW_AT(10023d3d)
            t24 = (eax & 0x7fffu) * 0x3cu + rd32(sp0 + 0xcu) + 0xcu;
            wr32(sp0 - 0x2cu, t24);
            eax = (eax & 0x7fffu) * 0xfu;
            edx = t24;
            ebp = 0u;
            loc_2c = t24;
L_10023d54: ;
    COW_AT(10023d54)
            wr32(sp0 - 0x50u, ebp);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023d5cu);
            t25 = cow_thiscall(g, COW_IMG(0x10023ff0u), self, 1, ebp);
            t26 = g->edx;
            eax = t25;
            edx = t26;
    COW_AT(10023d5c)
            wr32(sp0 - 0x50u, sp0 - 0x10u);
            wr32(sp0 - 0x54u, (uint32_t)(int16_t)eax);
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023d6eu);
            cow_thiscall(g, COW_IMG(0x1002b390u), rd32(sp0 + 8u), 2, (uint32_t)(int16_t)eax, sp0 - 0x10u);
            ebx = (uint32_t)(int16_t)eax;
    COW_AT(10023d6e)
            wr32(sp0 - 0x50u, sp0 - 0x10u);
            d27 = (double)(float)(double)rdf32(ebx * 0x12u + rd32(sp0 - 0x30u) + 2u);
            wrf32(sp0 - 0x3cu, (float)d27);
            t28 = rd32(sp0 - 0x2cu);
            wr32(sp0 - 0x54u, t28);
            wr32(sp0 - 0x58u, sp0 - 0x28u);
            g->edx = sp0 - 0x28u;
            g->esp = sp0 - 0x4cu;
            COW_RET(0x10023d91u);
            cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x28u, t28, sp0 - 0x10u);
            t29 = g->edx;
            edx = t29;
    COW_AT(10023d91)
            wr32(sp0 - 0x5cu, sp0 - 0x28u);
            wr32(sp0 - 0x60u, sp0 - 0x28u);
            g->eax = sp0 - 0x28u;
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            COW_RET(0x10023da0u);
            t30 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x28u, sp0 - 0x28u);
            t31 = g->edx;
            d32 = cow_take_float(g);
            eax = t30;
            edx = t31;
            x0 = d32;
    COW_AT(10023da0)
            d33 = (double)rdf32(sp0 - 0x3cu);
            d34 = fr(g, fr(g, d33 * d33) * (double)rdf32(COW_IMG(0x1032a3acu)));
            if ((cow_fsw(g, x0, d34, 0u) & 0x4100u) != 0u)
            {
    COW_AT(10023dbe)
                t35 = rd32(COW_IMG(0x10456e38u));
                wr8(edi + t35, (uint8_t)ebx);
                edx = t35;
            }
    COW_AT(10023dc7)
            if ((int32_t)(ebp + 1u) < (int32_t)rd16(self + 0x80u))
            {
                eax = rd16(self + 0x80u);
                ebp = ebp + 1u;
                loc_2c = rd32(sp0 - 0x2cu);
                goto L_10023d54;
            }
            eax = rd16(self + 0x80u);
    COW_AT(10023dd9)
            ecx = rd32(sp0 - 0x34u);
        }
    COW_AT(10023ddd)
        t36 = rd32(sp0 - 0x38u) + 8u;
        wr32(sp0 - 0x38u, t36);
        if ((int32_t)(edi + 1u) < (int32_t)ecx)
        {
            edi = edi + 1u;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_38 = t36;
            loc_34 = rd32(sp0 - 0x34u);
            goto L_10023d1e;
        }
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
L_10023df1: ;
    COW_AT(10023df1)
    t37 = rd16(self + 0x80u);
    wr32(sp0 - 0x34u, 0u);
    if ((uint16_t)t37 != 0u)
    {
    COW_AT(10023e07)
        t38 = rd32(sp0 + 0x10u) + 0x48u;
        wr32(sp0 - 0x38u, t38);
        ebx = rd32(sp0 + 4u);
        loc_38 = t38;
        loc_34 = 0u;
L_10023e16: ;
    COW_AT(10023e16)
        wr32(sp0 - 0x50u, loc_34);
        g->eax = eax;
        g->edx = loc_34;
        g->esp = sp0 - 0x4cu;
        COW_RET(0x10023e22u);
        t39 = cow_thiscall(g, COW_IMG(0x10023ff0u), self, 1, loc_34);
        t40 = g->edx;
        eax = t39;
        edx = t40;
    COW_AT(10023e22)
        t41 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x50u, t41);
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        wr32(sp0 + 4u, (uint32_t)(int16_t)eax);
        g->eax = t41;
        g->esp = sp0 - 0x4cu;
        COW_RET(0x10023e38u);
        t42 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x1cu, t41);
        edi = (uint32_t)(int16_t)eax;
        eax = t42;
    COW_AT(10023e38)
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        wr32(sp0 - 0x54u, edi);
        g->esp = sp0 - 0x4cu;
        COW_RET(0x10023e4au);
        cow_thiscall(g, COW_IMG(0x1002b390u), rd32(sp0 + 8u), 2, edi, sp0 - 0x10u);
    COW_AT(10023e4a)
        d43 = (double)(float)(double)rdf32(edi * 0x12u + rd32(sp0 - 0x30u) + 2u);
        wrf32(sp0 - 0x3cu, (float)d43);
        t44 = rd16(self + 0x64u);
        t45 = rd32(self + 0x5eu);
        wr32(sp0 + 0x10u, 0u);
        if ((int32_t)(t44 >> 2u) <= 0) goto L_10023ef9;
        eax = 0u;
        ebp = t44 >> 2u;
        edi = t45;
L_10023e73: ;
    COW_AT(10023e73)
        if (rd32(sp0 + 4u) == (uint32_t)(int8_t)rd8(eax + rd32(COW_IMG(0x10456e38u))))
        {
            eax = (uint32_t)(int8_t)rd8(eax + rd32(COW_IMG(0x10456e38u)));
    COW_AT(10023e85)
            if ((int8_t)(rd16(edi) >> 8u) >= 0)
            {
                eax = (eax & 0xffff0000u) | rd16(edi);
    COW_AT(10023e8c)
                wr32(sp0 - 0x50u, sp0 - 0x3cu);
                wr32(sp0 - 0x54u, sp0 - 0x10u);
                wr32(sp0 - 0x58u, sp0 - 0x1cu);
                t46 = rd16(edi + 2u);
                wr32(sp0 - 0x5cu, t46);
                wr32(sp0 - 0x60u, (uint16_t)eax);
                t47 = rd32(sp0 + 0xcu);
                wr32(sp0 - 0x64u, t47);
                wr32(sp0 - 0x68u, ebx);
                g->eax = t47;
                g->esp = sp0 - 0x4cu;
                COW_RET(0x10023eb5u);
                t48 = cow_thiscall(g, COW_IMG(0x10024020u), self, 7, ebx, t47, (uint16_t)eax, t46, sp0 - 0x1cu, sp0 - 0x10u, sp0 - 0x3cu);
                eax = t48;
    COW_AT(10023eb5)
                if ((int8_t)(rd16(edi + 2u) >> 8u) >= 0)
                {
                    eax = (eax & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(10023ebd)
                    wr32(sp0 - 0x50u, sp0 - 0x3cu);
                    wr32(sp0 - 0x54u, sp0 - 0x10u);
                    wr32(sp0 - 0x58u, sp0 - 0x1cu);
                    wr32(sp0 - 0x5cu, rd16(edi));
                    wr32(sp0 - 0x60u, (uint16_t)eax);
                    t49 = rd32(sp0 + 0xcu);
                    wr32(sp0 - 0x64u, t49);
                    wr32(sp0 - 0x68u, ebx);
                    g->esp = sp0 - 0x4cu;
                    COW_RET(0x10023ee5u);
                    cow_thiscall(g, COW_IMG(0x10024020u), self, 7, ebx, t49, (uint16_t)eax, rd16(edi), sp0 - 0x1cu, sp0 - 0x10u, sp0 - 0x3cu);
                }
            }
        }
    COW_AT(10023ee5)
        t50 = rd32(sp0 + 0x10u) + 1u;
        t51 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t50);
        if ((int32_t)(t51 + 1u) < (int32_t)ebp)
        {
            eax = t50;
            edi = edi + 8u;
            goto L_10023e73;
        }
L_10023ef9: ;
    COW_AT(10023ef9)
        t52 = rd16(self + 0x64u);
        t53 = t52 + rd16(self + 0x66u) + ((uint32_t)((int32_t)(t52 + rd16(self + 0x66u)) >> 0x1fu) & 3u);
        wr32(sp0 - 0x2cu, (uint32_t)((int32_t)t53 >> 2u));
        if ((int32_t)rd32(sp0 + 0x10u) >= (int32_t)(uint32_t)((int32_t)t53 >> 2u))
        {
            ecx = (uint32_t)((int32_t)t53 >> 2u);
            edx = (uint32_t)((int32_t)(t52 + rd16(self + 0x66u)) >> 0x1fu) & 3u;
            goto L_10023fad;
        }
        eax = rd32(sp0 + 0x10u);
        ecx = (uint32_t)((int32_t)t53 >> 2u);
        edi = (t52 >> 2u) * 8u + rd32(self + 0x5eu);
        loc_2c = (uint32_t)((int32_t)t53 >> 2u);
L_10023f2d: ;
    COW_AT(10023f2d)
        t54 = rd32(sp0 + 4u);
        if (t54 != (uint32_t)(int8_t)rd8(eax + rd32(COW_IMG(0x10456e38u))))
        {
            edx = rd32(COW_IMG(0x10456e38u));
        }
        else
        {
            eax = (uint32_t)(int8_t)rd8(eax + rd32(COW_IMG(0x10456e38u)));
            edx = rd32(COW_IMG(0x10456e38u));
    COW_AT(10023f3d)
            if ((int8_t)(rd16(edi) >> 8u) >= 0)
            {
                eax = (eax & 0xffff0000u) | rd16(edi);
    COW_AT(10023f44)
                wr32(sp0 - 0x50u, sp0 - 0x3cu);
                wr32(sp0 - 0x54u, sp0 - 0x10u);
                wr32(sp0 - 0x58u, sp0 - 0x1cu);
                t55 = rd16(edi + 2u);
                wr32(sp0 - 0x5cu, t55);
                wr32(sp0 - 0x60u, (uint16_t)eax);
                t56 = rd32(sp0 + 0xcu);
                wr32(sp0 - 0x64u, t56);
                wr32(sp0 - 0x68u, ebx);
                g->eax = (uint16_t)eax;
                g->edx = t55;
                g->esp = sp0 - 0x4cu;
                COW_RET(0x10023f6du);
                t57 = cow_thiscall(g, COW_IMG(0x10024020u), self, 7, ebx, t56, (uint16_t)eax, t55, sp0 - 0x1cu, sp0 - 0x10u, sp0 - 0x3cu);
                t58 = g->edx;
                eax = t57;
                edx = t58;
                ebp = t56;
    COW_AT(10023f6d)
                if ((int8_t)(rd16(edi + 2u) >> 8u) >= 0)
                {
                    eax = (eax & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(10023f75)
                    wr32(sp0 - 0x50u, sp0 - 0x3cu);
                    wr32(sp0 - 0x54u, sp0 - 0x10u);
                    wr32(sp0 - 0x58u, sp0 - 0x1cu);
                    wr32(sp0 - 0x5cu, rd16(edi));
                    wr32(sp0 - 0x60u, (uint16_t)eax);
                    wr32(sp0 - 0x64u, ebp);
                    wr32(sp0 - 0x68u, ebx);
                    g->edx = rd16(edi);
                    t59 = rd16(edi);
                    g->esp = sp0 - 0x4cu;
                    COW_RET(0x10023f99u);
                    cow_thiscall(g, COW_IMG(0x10024020u), self, 7, ebx, ebp, (uint16_t)eax, t59, sp0 - 0x1cu, sp0 - 0x10u, sp0 - 0x3cu);
                    t60 = g->edx;
                    edx = t60;
                }
    COW_AT(10023f99)
                ecx = rd32(sp0 - 0x2cu);
                loc_2c = rd32(sp0 - 0x2cu);
            }
        }
    COW_AT(10023f9d)
        t61 = rd32(sp0 + 0x10u) + 1u;
        t62 = rd32(sp0 + 0x10u);
        wr32(sp0 + 0x10u, t61);
        if ((int32_t)(t62 + 1u) < (int32_t)ecx)
        {
            eax = t61;
            edi = edi + 8u;
            goto L_10023f2d;
        }
L_10023fad: ;
    COW_AT(10023fad)
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        t63 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x54u, t63);
        g->esp = sp0 - 0x4cu;
        COW_RET(0x10023fbcu);
        cow_cdecl(g, COW_IMG(0x10026eb0u), 2, t63, sp0 - 0x10u);
        edi = t63;
    COW_AT(10023fbc)
        t64 = rd32(sp0 - 0x34u) + 1u;
        t65 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x34u, t64);
        wr32(sp0 - 0x38u, edi + 0xcu);
        if ((int32_t)(t65 + 1u) < (int32_t)rd16(self + 0x80u))
        {
            eax = t64;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_30 = rd32(sp0 - 0x30u);
            loc_38 = edi + 0xcu;
            loc_34 = t64;
            goto L_10023e16;
        }
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    COW_AT(10023fe0)
    g->ebx = loc_40;
    g->esi = loc_48;
    g->edi = loc_4c;
    g->ebp = loc_44;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10023bd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10023be5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023bf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023c1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023c3bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10023c52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023c5au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023c6cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023c8fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023c9eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x28u);
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023cbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x28u);
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023cc4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023cd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023cd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023ceau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023d1eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023d3du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10023d54u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023d5cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023d6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023d91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023da0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x28u);
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023dbeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x28u);
        wr32(sp0 - 0x5cu, sp0 - 0x28u);
        wr32(sp0 - 0x58u, sp0 - 0x28u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023dc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023dd9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023dddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023df1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023e07u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10023e16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023e22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023e38u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x54u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x10023e4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023e73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023e85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023e8cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023eb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x1cu);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10023ebdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x1cu);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10023ee5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023ef9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023f2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023f3du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023f44u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023f6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x1cu);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10023f75u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x1cu);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10023f99u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0x1cu);
        wr32(sp0 - 0x54u, sp0 - 0x10u);
        wr32(sp0 - 0x50u, sp0 - 0x3cu);
        (void)sp0;
        return 1;
    }
    case 0x10023f9du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023fadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023fbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10023fe0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10023bd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10023bd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
