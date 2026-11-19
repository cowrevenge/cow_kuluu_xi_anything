/* f_0x10024020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_10024020(Guest* g)
{
    double d19;
    double d29;
    double d32;
    double d33;
    double d34;
    double d35;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
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
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 104u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002403fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_1002403f;
    case 0x10024076u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10024076;
    case 0x100240b0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_100240b0;
    case 0x100240bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100240bb;
    case 0x100240ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); goto E_100240dd;
    case 0x100240f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_100240f8;
    case 0x10024100u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10024100;
    case 0x10024110u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_10024110;
    case 0x1002411au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_1002411a;
    case 0x10024128u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024128;
    case 0x1002412fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); goto E_1002412f;
    case 0x10024144u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024144;
    case 0x1002414cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002414c;
    case 0x10024155u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024155;
    case 0x10024158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024158;
    case 0x1002415bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002415b;
    case 0x1002415eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002415e;
    case 0x10024166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024166;
    case 0x10024171u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024171;
    case 0x10024174u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024174;
    case 0x1002417cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002417c;
    case 0x10024184u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024184;
    case 0x1002418cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002418c;
    case 0x10024194u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10024194;
    case 0x1002419cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002419c;
    case 0x100241a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); goto E_100241a2;
    case 0x100241a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241a7;
    case 0x100241aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241aa;
    case 0x100241c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241c2;
    case 0x100241cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241cd;
    case 0x100241d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241d2;
    case 0x100241f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100241f7;
    case 0x1002420eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_58 = rd32(sp0 - 0x58u); loc_54 = rd32(sp0 - 0x54u); goto E_1002420e;
    default: break;
    }
#endif

    COW_AT(10024020)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    t1 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    wr32(sp0 - 0x34u, self);
    wr32(sp0 - 0x3cu, t1 & 0x8000u);
    if ((t1 & 0x8000u) == 0u)
    {
        eax = t1;
        loc_3c = t1 & 0x8000u;
    COW_AT(10024076)
        wr32(sp0 - 0x50u, sp0 + 0x10u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        t4 = (eax & 0x7fffu) * 0x3cu + rd32(sp0 + 8u) + 0xcu;
        wr32(sp0 - 0x58u, t4);
        t5 = (arg3 & 0x7fffu) * 0x3cu + rd32(sp0 + 8u) + 0xcu;
        wr32(sp0 - 0x5cu, t5);
        t6 = (eax & 0x7fffu) * 0x3cu + rd32(sp0 + 8u) + 0x18u;
        wr32(sp0 - 0x60u, t6);
        eax = (arg3 & 0x7fffu) * 0x3cu + rd32(sp0 + 8u);
        esi = t4;
        edi = t5;
        loc_58 = t4;
        loc_5c = t5;
        loc_60 = t6;
    }
    else
    {
        eax = t1;
        loc_3c = t1 & 0x8000u;
    COW_AT(1002403f)
        wr32(sp0 - 0x50u, sp0 + 0x10u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        t2 = (eax & 0x7fffu) * 0x3cu + rd32(sp0 + 8u) + 0xcu;
        wr32(sp0 - 0x58u, t2);
        t3 = (arg3 & 0x7fffu) * 0x3cu + rd32(sp0 + 8u) + 0xcu;
        wr32(sp0 - 0x5cu, t3);
        wr32(sp0 - 0x60u, t2);
        eax = (arg3 & 0x7fffu) * 0x3cu + rd32(sp0 + 8u);
        esi = t2;
        edi = t3;
        loc_58 = t2;
        loc_5c = t3;
        loc_60 = t2;
    }
    COW_AT(100240b0)
    wr32(sp0 - 0x64u, eax + 0x18u);
    g->esp = sp0 - 0x4cu;
    cow_stdcall(g, COW_IMG(0x10024220u), 6, eax + 0x18u, loc_60, loc_5c, loc_58, sp0 - 0x18u, sp0 + 0x10u);
    COW_AT(100240bb)
    wr32(sp0 - 0x50u, sp0 - 0x38u);
    wr32(sp0 - 0x54u, sp0 - 0xcu);
    t7 = rd32(rd32(sp0 + 0x1cu));
    wr32(sp0 - 0x58u, t7);
    t8 = rd32(sp0 + 0x18u);
    wr32(sp0 - 0x5cu, t8);
    t9 = rd32(sp0 + 0x14u);
    wr32(sp0 - 0x60u, t9);
    g->esp = sp0 - 0x4cu;
    cow_stdcall(g, COW_IMG(0x10024330u), 5, t9, t8, t7, sp0 - 0xcu, sp0 - 0x38u);
    ebx = t9;
    COW_AT(100240dd)
    wr32(sp0 - 0x50u, sp0 - 0x18u);
    t10 = rd32(sp0 + 0x10u);
    wr32(sp0 - 0x54u, t10);
    wr32(sp0 - 0x58u, sp0 - 0xcu);
    t11 = rd32(sp0 - 0x38u);
    wr32(sp0 - 0x5cu, t11);
    g->eax = t10;
    g->edx = t11;
    g->esp = sp0 - 0x4cu;
    t12 = cow_stdcall(g, COW_IMG(0x100243c0u), 4, t11, sp0 - 0xcu, t10, sp0 - 0x18u);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(100240f8)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(10024100)
        wr32(sp0 - 0x50u, ebx);
        t14 = rd32(sp0 + 0x18u);
        wr32(sp0 - 0x54u, t14);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        g->eax = t14;
        g->ecx = sp0 - 0x30u;
        g->esp = sp0 - 0x4cu;
        t15 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x30u, t14, ebx);
        t16 = g->ecx;
        eax = t15;
        ecx = t16;
    COW_AT(10024110)
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        g->ecx = ecx;
        g->edx = sp0 - 0x30u;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x30u);
        t17 = g->ecx;
        t18 = g->edx;
        d19 = cow_take_float(g);
        ecx = t17;
        edx = t18;
        x0 = d19;
    COW_AT(1002411a)
        wrf32(sp0 + 8u, (float)x0);
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        g->esp = sp0 - 0x5cu;
        t20 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x30u, g->ecx, g->edx, 1, 1, sp0 - 0x30u);
        eax = t20;
    COW_AT(10024128)
        ebp = rd32(sp0 + 0x1cu);
L_1002412f: ;
    COW_AT(1002412f)
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, esi);
        wr32(sp0 - 0x58u, edi);
        wr32(sp0 - 0x5cu, ebx);
        wr32(sp0 - 0x60u, rd32(ebp));
        g->eax = eax;
        g->ecx = rd32(sp0 - 0x34u);
        g->edx = rd32(ebp);
        t21 = rd32(sp0 - 0x34u);
        t22 = rd32(ebp);
        g->esp = sp0 - 0x4cu;
        t23 = cow_stdcall(g, COW_IMG(0x10024410u), 5, t22, ebx, edi, esi, sp0 - 0x24u);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(10024144)
        if (eax == 0u) goto L_1002420e;
    COW_AT(1002414c)
        if (eax == 4u) goto L_1002420e;
    COW_AT(10024155)
        if (eax == 1u) goto L_10024194;
        eax = eax - 1u;
    COW_AT(10024158)
        if (eax == 1u) goto L_10024184;
        eax = eax - 1u;
    COW_AT(1002415b)
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_100241aa;
        }
    COW_AT(1002415e)
        if (rd32(sp0 - 0x3cu) == 0u)
        {
    COW_AT(10024166)
            wr32(sp0 - 0x50u, sp0 - 0x24u);
            wr32(sp0 - 0x54u, esi);
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, esi, sp0 - 0x24u);
            t26 = g->edx;
            edx = t26;
    COW_AT(10024171)
        }
    COW_AT(10024174)
        if ((int8_t)(arg3 >> 8u) < 0)
        {
            eax = arg3;
            goto L_100241aa;
        }
    COW_AT(1002417c)
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, edi);
        eax = arg3;
        ecx = sp0 - 0x24u;
        loc_54 = edi;
L_100241a2: ;
    COW_AT(100241a2)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t27 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, loc_54, sp0 - 0x24u);
        t28 = g->edx;
        eax = t27;
        edx = t28;
    COW_AT(100241a7)
L_100241aa: ;
    COW_AT(100241aa)
        d29 = fr(g, (double)rdf32(sp0 + 8u) - (double)rdf32(ebp));
        wrf32(sp0 + 8u, (float)d29);
        if (!(d29 < (double)rdf32(COW_IMG(0x1032a42cu))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    COW_AT(100241d2)
            d32 = fr(g, fr(g, (double)rdf32(sp0 - 0x30u) * (double)rdf32(ebp)) + (double)rdf32(ebx));
            wrf32(ebx, (float)d32);
            d33 = fr(g, fr(g, (double)rdf32(sp0 - 0x2cu) * (double)rdf32(ebp)) + (double)rdf32(ebx + 4u));
            wrf32(ebx + 4u, (float)d33);
            d34 = fr(g, fr(g, (double)rdf32(sp0 - 0x28u) * (double)rdf32(ebp)) + (double)rdf32(ebx + 8u));
            wrf32(ebx + 8u, (float)d34);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x1032a42cu)), 0u);
    COW_AT(100241c2)
            t30 = rd32(sp0 + 0x18u);
            wr32(sp0 - 0x50u, t30);
            wr32(sp0 - 0x54u, ebx);
            g->eax = eax;
            g->esp = sp0 - 0x4cu;
            t31 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebx, t30);
            eax = t31;
    COW_AT(100241cd)
        }
    COW_AT(100241f7)
        d35 = (double)rdf32(sp0 + 8u);
        if ((cow_fsw(g, d35, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
        {
            eax = cow_fsw(g, d35, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
            goto L_1002412f;
        }
    }
L_1002420e: ;
    COW_AT(1002420e)
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = rd32(sp0 - 0x44u);
    return;
L_10024184: ;
    COW_AT(10024184)
    if ((int8_t)(arg3 >> 8u) < 0)
    {
        eax = arg3;
        goto L_100241aa;
    }
    COW_AT(1002418c)
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    wr32(sp0 - 0x54u, edi);
    eax = arg3;
    edx = sp0 - 0x24u;
    loc_54 = edi;
    goto L_100241a2;
L_10024194: ;
    COW_AT(10024194)
    if (rd32(sp0 - 0x3cu) != 0u)
    {
        eax = rd32(sp0 - 0x3cu);
        goto L_100241aa;
    }
    COW_AT(1002419c)
    wr32(sp0 - 0x50u, sp0 - 0x24u);
    wr32(sp0 - 0x54u, esi);
    eax = sp0 - 0x24u;
    loc_54 = esi;
    goto L_100241a2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10024020(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002403fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x34u, self);
        (void)sp0;
        return 1;
    }
    case 0x10024076u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x34u, self);
        (void)sp0;
        return 1;
    }
    case 0x100240b0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_3c;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x60u;
        g->edx = sp0 - 0x18u;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x50u, sp0 + 0x10u);
        wr32(sp0 - 0x34u, self);
        (void)sp0;
        return 1;
    }
    case 0x100240bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        wr32(sp0 - 0x50u, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100240ddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        wr32(sp0 - 0x50u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100240f8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x50u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10024100u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x50u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10024110u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1002411au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10024128u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x30u);
        wr32(sp0 - 0x5cu, sp0 - 0x30u);
        wr32(sp0 - 0x58u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1002412fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10024144u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002414cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024155u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024158u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002415bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002415eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024166u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024171u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024174u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002417cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->eax = arg3;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024184u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002418cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        g->eax = arg3;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10024194u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x1002419cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241a2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241a7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x100241d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x50u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100241f7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1002420eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_54;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        loc_54 = rd32(sp0 - 0x54u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10024020(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10024020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
