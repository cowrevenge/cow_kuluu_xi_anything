/* f_0x1028e9a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1028e9a0(Guest* g)
{
    double d15;
    double d16;
    double d18;
    double d19;
    double d21;
    double d22;
    double d24;
    double d25;
    double d27;
    double d28;
    double d30;
    double d31;
    double d33;
    double d35;
    double d37;
    double d39;
    double d41;
    double d42;
    double d44;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t17;
    uint32_t t2;
    uint32_t t20;
    uint32_t t23;
    uint32_t t26;
    uint32_t t29;
    uint32_t t3;
    uint32_t t32;
    uint32_t t34;
    uint32_t t36;
    uint32_t t38;
    uint32_t t4;
    uint32_t t40;
    uint32_t t43;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 92u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028ea1bu: eax = g->eax; ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x38u); goto E_1028ea1b;
    case 0x1028ea1du: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ea1d;
    case 0x1028ea2eu: eax = g->eax; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ea2e;
    case 0x1028ea30u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ea30;
    case 0x1028ea7du: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ea7d;
    case 0x1028ea87u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ea87;
    case 0x1028ea98u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1028ea98;
    case 0x1028eaa0u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_1028eaa0;
    case 0x1028eaafu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_1028eaaf;
    case 0x1028eab9u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_1028eab9;
    case 0x1028eacau: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_1028eaca;
    case 0x1028ead2u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1028ead2;
    case 0x1028eae1u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1028eae1;
    case 0x1028eaebu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1028eaeb;
    case 0x1028eafcu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_1028eafc;
    case 0x1028eb04u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb04;
    case 0x1028eb13u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb13;
    case 0x1028eb1du: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb1d;
    case 0x1028eb2eu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb2e;
    case 0x1028eb36u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb36;
    case 0x1028eb45u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb45;
    case 0x1028eb4fu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb4f;
    case 0x1028eb60u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb60;
    case 0x1028eb68u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb68;
    case 0x1028eb77u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb77;
    case 0x1028eb81u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb81;
    case 0x1028eb92u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb92;
    case 0x1028eb9au: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028eb9a;
    case 0x1028ebaeu: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ebae;
    case 0x1028ebc5u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ebc5;
    case 0x1028ebc7u: eax = g->eax; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_1028ebc7;
    default: break;
    }
#endif

    COW_AT(1028e9a0)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    t1 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x48u) + 0x28u)) + 0x14u;
    wr32(sp0 - 0x3cu, t1);
    t2 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x48u) + 0x28u) + 4u);
    wr32(sp0 - 0x40u, t2);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x38u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x30u, t2, t1);
    t4 = rd32(rd32(rd32(t3 + 0x48u) + 0x28u)) + 0x20u;
    wr32(sp0 - 0x48u, t4);
    t5 = rd32(rd32(rd32(t3 + 0x48u) + 0x28u) + 4u);
    wr32(sp0 - 0x4cu, t5);
    wr32(sp0 - 0x50u, sp0 - 0xcu);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xcu, t5, t4);
    t6 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x18u, t6);
    wr32(sp0 - 0x24u, t6);
    t7 = rd32(sp0 - 0x2cu);
    wr32(sp0 - 0x14u, t7);
    t8 = rd32(sp0 - 0x28u);
    wr32(sp0 - 0x10u, t8);
    wr32(sp0 - 0x20u, t7);
    wr32(sp0 - 0x1cu, t8);
    t9 = rd32(t3 + 0x44u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t9 <= 0)
    {
        ebp = in_ebp;
        edi = in_edi;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_18 = t6;
        loc_24 = t6;
        loc_14 = t7;
        loc_10 = t8;
        loc_20 = t7;
        loc_1c = t8;
    }
    else
    {
        ebx = t3;
        loc_18 = t6;
        loc_24 = t6;
        loc_14 = t7;
        loc_10 = t8;
        loc_20 = t7;
        loc_1c = t8;
    COW_AT(1028ea1b)
        wr32(sp0 - 0x3cu, in_ebp);
        wr32(sp0 - 0x40u, in_edi);
        esi = 0u;
        loc_34 = in_ebx;
        loc_38 = in_esi;
        loc_3c = in_ebp;
        loc_40 = in_edi;
L_1028ea1d: ;
    COW_AT(1028ea1d)
        if ((int32_t)rd32(esi + rd32(ebx + 0x48u) + 4u) > 0)
        {
            eax = rd32(ebx + 0x48u);
    COW_AT(1028ea2e)
            ebp = 0u;
            edi = 0u;
L_1028ea30: ;
    COW_AT(1028ea30)
            t10 = rd32(edi + rd32(eax + esi + 0x28u)) + 0x14u;
            wr32(sp0 - 0x44u, t10);
            t11 = rd32(edi + rd32(eax + esi + 0x28u) + 4u);
            wr32(sp0 - 0x48u, t11);
            wr32(sp0 - 0x4cu, sp0 - 0x30u);
            g->esp = sp0 - 0x40u;
            cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x30u, t11, t10);
            t12 = rd32(edi + rd32(esi + rd32(ebx + 0x48u) + 0x28u)) + 0x20u;
            wr32(sp0 - 0x50u, t12);
            t13 = rd32(edi + rd32(esi + rd32(ebx + 0x48u) + 0x28u) + 4u);
            wr32(sp0 - 0x54u, t13);
            wr32(sp0 - 0x58u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->esp = sp0 - 0x4cu;
            t14 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0xcu, t13, t12);
            d15 = (double)rdf32(sp0 - 0x30u);
            d16 = (double)rdf32(sp0 - 0x24u);
            if (!(d15 < d16))
            {
                eax = (t14 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 0u);
    COW_AT(1028ea87)
                d18 = (double)rdf32(sp0 - 0x30u);
                d19 = (double)rdf32(sp0 - 0x18u);
                if ((cow_fsw(g, d18, d19, 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_18 = rd32(sp0 - 0x18u);
                }
                else
                {
                    eax = cow_fsw(g, d18, d19, 0u) & 0x4100u;
    COW_AT(1028ea98)
                    t20 = rd32(sp0 - 0x30u);
                    wr32(sp0 - 0x18u, t20);
                    loc_24 = rd32(sp0 - 0x24u);
                    loc_18 = t20;
                }
            }
            else
            {
                eax = (t14 & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, d16, 0u);
    COW_AT(1028ea7d)
                t17 = rd32(sp0 - 0x30u);
                wr32(sp0 - 0x24u, t17);
                loc_24 = t17;
                loc_18 = rd32(sp0 - 0x18u);
            }
    COW_AT(1028eaa0)
            d21 = (double)rdf32(sp0 - 0x2cu);
            d22 = (double)rdf32(sp0 - 0x20u);
            if (!(d21 < d22))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d21, d22, 0u);
    COW_AT(1028eab9)
                d24 = (double)rdf32(sp0 - 0x2cu);
                d25 = (double)rdf32(sp0 - 0x14u);
                if ((cow_fsw(g, d24, d25, 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d24, d25, 0u) & 0x4100u;
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_14 = rd32(sp0 - 0x14u);
                }
                else
                {
                    eax = cow_fsw(g, d24, d25, 0u) & 0x4100u;
    COW_AT(1028eaca)
                    t26 = rd32(sp0 - 0x2cu);
                    wr32(sp0 - 0x14u, t26);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_14 = t26;
                }
            }
            else
            {
    COW_AT(1028eaaf)
                t23 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x20u, t23);
                eax = t23;
                loc_20 = t23;
                loc_14 = rd32(sp0 - 0x14u);
            }
    COW_AT(1028ead2)
            d27 = (double)rdf32(sp0 - 0x28u);
            d28 = (double)rdf32(sp0 - 0x1cu);
            if (!(d27 < d28))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 0u);
    COW_AT(1028eaeb)
                d30 = (double)rdf32(sp0 - 0x28u);
                d31 = (double)rdf32(sp0 - 0x10u);
                if ((cow_fsw(g, d30, d31, 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d30, d31, 0u) & 0x4100u;
                    loc_10 = rd32(sp0 - 0x10u);
                }
                else
                {
    COW_AT(1028eafc)
                    t32 = rd32(sp0 - 0x28u);
                    wr32(sp0 - 0x10u, t32);
                    eax = t32;
                    loc_10 = t32;
                }
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d27, d28, 0u);
    COW_AT(1028eae1)
                t29 = rd32(sp0 - 0x28u);
                wr32(sp0 - 0x24u, t29);
                loc_24 = t29;
                loc_10 = rd32(sp0 - 0x10u);
            }
    COW_AT(1028eb04)
            d33 = (double)rdf32(sp0 - 0xcu);
            if (!(d33 < cow_bits2f(loc_24)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, cow_bits2f(loc_24), 0u);
    COW_AT(1028eb1d)
                d35 = (double)rdf32(sp0 - 0xcu);
                if ((cow_fsw(g, d35, cow_bits2f(loc_18), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d35, cow_bits2f(loc_18), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d35, cow_bits2f(loc_18), 0u) & 0x4100u;
    COW_AT(1028eb2e)
                    t36 = rd32(sp0 - 0xcu);
                    wr32(sp0 - 0x18u, t36);
                    loc_18 = t36;
                }
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, cow_bits2f(loc_24), 0u);
    COW_AT(1028eb13)
                t34 = rd32(sp0 - 0xcu);
                wr32(sp0 - 0x24u, t34);
                loc_24 = t34;
            }
    COW_AT(1028eb36)
            d37 = (double)rdf32(sp0 - 8u);
            if (!(d37 < cow_bits2f(loc_20)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, cow_bits2f(loc_20), 0u);
    COW_AT(1028eb4f)
                d39 = (double)rdf32(sp0 - 8u);
                if ((cow_fsw(g, d39, cow_bits2f(loc_14), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d39, cow_bits2f(loc_14), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d39, cow_bits2f(loc_14), 0u) & 0x4100u;
    COW_AT(1028eb60)
                    t40 = rd32(sp0 - 8u);
                    wr32(sp0 - 0x14u, t40);
                    loc_14 = t40;
                }
            }
            else
            {
    COW_AT(1028eb45)
                t38 = rd32(sp0 - 8u);
                wr32(sp0 - 0x20u, t38);
                eax = t38;
                loc_20 = t38;
            }
    COW_AT(1028eb68)
            d41 = (double)rdf32(sp0 - 4u);
            d42 = (double)rdf32(sp0 - 0x1cu);
            if (!(d41 < d42))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, d42, 0u);
    COW_AT(1028eb81)
                d44 = (double)rdf32(sp0 - 4u);
                if ((cow_fsw(g, d44, cow_bits2f(loc_10), 0u) & 0x4100u) != 0u)
                {
                    loc_1c = rd32(sp0 - 0x1cu);
                }
                else
                {
    COW_AT(1028eb92)
                    t45 = rd32(sp0 - 4u);
                    wr32(sp0 - 0x10u, t45);
                    loc_10 = t45;
                    loc_1c = rd32(sp0 - 0x1cu);
                }
            }
            else
            {
    COW_AT(1028eb77)
                t43 = rd32(sp0 - 4u);
                wr32(sp0 - 0x1cu, t43);
                loc_1c = t43;
            }
    COW_AT(1028eb9a)
            if ((int32_t)(ebp + 1u) < (int32_t)rd32(esi + rd32(ebx + 0x48u) + 4u))
            {
                eax = rd32(ebx + 0x48u);
                ebp = ebp + 1u;
                edi = edi + 0x90u;
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_40 = rd32(sp0 - 0x40u);
                goto L_1028ea30;
            }
            loc_34 = rd32(sp0 - 0x34u);
            loc_38 = rd32(sp0 - 0x38u);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_40 = rd32(sp0 - 0x40u);
        }
    COW_AT(1028ebae)
        t46 = rd32(sp0 + 4u) + 1u;
        t47 = rd32(sp0 + 4u);
        t48 = rd32(ebx + 0x44u);
        wr32(sp0 + 4u, t46);
        if ((int32_t)(t47 + 1u) < (int32_t)t48)
        {
            esi = esi + 0x2cu;
            goto L_1028ea1d;
        }
    COW_AT(1028ebc5)
        ebp = loc_3c;
        edi = loc_40;
    }
    COW_AT(1028ebc7)
    wr32(arg2 + 4u, loc_20);
    wrf32(arg2, (float)cow_bits2f(loc_24));
    wr32(arg2 + 8u, loc_1c);
    wr32(arg2 + 0xcu, loc_18);
    wr32(arg2 + 0x10u, loc_14);
    wr32(arg2 + 0x14u, loc_10);
    g->ebx = loc_34;
    g->esi = loc_38;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = loc_14;
    return arg2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028e9a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1028ea1bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        g->esi = 0u;
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        wr32(sp0 - 0x44u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028ea1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1028ea2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1028ea30u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1028ea7du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028ea87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028ea98u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eaa0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eaafu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eab9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eacau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028ead2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eae1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eaebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eafcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb04u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb13u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb2eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb45u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb60u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb81u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028eb9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1028ebaeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1028ebc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x1028ebc7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028e9a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028e9a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
