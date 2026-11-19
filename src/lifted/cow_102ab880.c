/* f_0x102ab880 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ab880(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    int64_t q9;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102ab8b0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ab8b0;
    case 0x102ab8ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x40u); in_esi = rd32(sp0 - 0x3cu); in_ebp = rd32(sp0 - 0x38u); in_ebx = rd32(sp0 - 0x34u); loc_28 = rd32(sp0 - 0x28u); loc_10 = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x38u); g->ebx = rd32(sp0 - 0x34u); g->edi = rd32(sp0 - 0x40u); g->esi = rd32(sp0 - 0x3cu); goto E_102ab8cc;
    case 0x102ab908u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102ab908;
    case 0x102ab914u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102ab914;
    case 0x102ab922u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_102ab922;
    case 0x102ab928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab928;
    case 0x102ab92cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab92c;
    case 0x102ab93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab93e;
    case 0x102ab954u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab954;
    case 0x102ab964u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab964;
    case 0x102ab96du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab96d;
    case 0x102ab97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab97c;
    case 0x102ab9abu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102ab9ab;
    case 0x102ab9adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab9ad;
    case 0x102ab9c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab9c2;
    case 0x102ab9c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab9c8;
    case 0x102ab9dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab9da;
    case 0x102ab9e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102ab9e9;
    case 0x102aba16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_102aba16;
    case 0x102aba1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba1e;
    case 0x102aba26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba26;
    case 0x102aba49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba49;
    case 0x102aba4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba4f;
    case 0x102aba5au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba5a;
    case 0x102aba62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba62;
    case 0x102aba80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba80;
    case 0x102aba87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba87;
    case 0x102aba8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102aba8c;
    case 0x102abaacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102abaac;
    case 0x102abab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102abab7;
    case 0x102abad3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102abad3;
    case 0x102abad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102abad8;
    default: break;
    }
#endif

    COW_AT(102ab880)
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_ebp);
    wr32(sp0 - 0x3cu, in_esi);
    wr32(sp0 - 0x40u, in_edi);
    wr32(sp0 - 0x20u, 2u);
    t1 = rd32(rd32(arg1 + 0x34u) + 0x14u);
    wr32(sp0 - 0x28u, t1);
    t2 = rd32(arg1 + 0x44u);
    wr32(sp0 - 0x10u, t2);
    if (rd32(arg1 + 0x58u) != 0u)
    {
        eax = t2;
        ecx = rd32(arg1 + 0x58u);
        edx = in_edx;
        ebp = rd32(arg1 + 0x48u);
        edi = t1;
        loc_28 = t1;
        loc_10 = t2;
    }
    else
    {
        eax = t2;
        ecx = rd32(arg1 + 0x58u);
        ebp = rd32(arg1 + 0x48u);
        edi = t1;
        loc_28 = t1;
        loc_10 = t2;
    COW_AT(102ab8b0)
        wr32(sp0 - 0x44u, 0x386u);
        wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x4cu, 0xcu);
        wr32(sp0 - 0x50u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = in_edx;
        g->esp = sp0 - 0x3cu;
        t3 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 0xcu, COW_IMG(0x103be980u), 0x386u, in_edi);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(arg1 + 0x58u, t3);
        eax = rd32(sp0 - 0x10u);
        ecx = t4;
        edx = t5;
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(102ab8cc)
    wr32(sp0 - 0x44u, 0x387u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x4cu, 4u);
    wr32(sp0 - 0x50u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t6 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103be980u), 0x387u, in_edi);
    t7 = g->edx;
    wr32(sp0 - 0x54u, 0x390u);
    wr32(sp0 - 0x58u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x5cu, edi * 4u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x1cu, t6);
    t8 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi * 4u, COW_IMG(0x103be980u), 0x390u, rd32(sp0 - 0x50u), 4u, COW_IMG(0x103be980u), 0x387u, in_edi);
    wr32(sp0 - 0x30u, t8);
    if ((int32_t)edi <= 0)
    {
        edx = t8;
        loc_30 = t8;
    }
    else
    {
        edx = t8;
        loc_30 = t8;
    COW_AT(102ab908)
        edi = edx;
        eax = 0u;
        ecx = edi;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        edi = rd32(sp0 - 0x28u);
    }
    COW_AT(102ab914)
    if (rd32(ebp) != 0u)
    {
        eax = rd32(ebp);
        ebp = ebp + 4u;
    COW_AT(102ab922)
        wr32(sp0 - 0x14u, eax);
        esi = 0u;
        loc_14 = eax;
        loc_20 = rd32(sp0 - 0x20u);
L_102ab92c: ;
    COW_AT(102ab92c)
        wr32(sp0 - 0x2cu, rd32(ebp));
        wr32(sp0 - 0x24u, ebp + 4u);
        if ((int32_t)rd32(ebp) <= 0)
        {
            ecx = rd32(ebp);
            loc_24 = ebp + 4u;
            ebp = ebp + 4u;
            goto L_102ab9ad;
        }
        ecx = rd32(ebp);
        loc_2c = rd32(ebp);
        loc_24 = ebp + 4u;
        ebp = ebp + 4u;
    COW_AT(102ab93e)
        q9 = (int64_t)cow_muls(0x55555556u, ecx);
        if ((int32_t)(cow_qhi(q9) + (cow_qhi(q9) >> 0x1fu)) <= 0) goto L_102aba26;
        edx = cow_qhi(q9) + (cow_qhi(q9) >> 0x1fu);
    COW_AT(102ab954)
        wr32(sp0 - 0x18u, edx);
        ebx = esi * 0xcu;
        edi = ebp;
        ebp = loc_20;
        loc_18 = edx;
L_102ab964: ;
    COW_AT(102ab964)
        wr32(esi * 4u + rd32(sp0 - 0x1cu), ebp);
        eax = 0u;
L_102ab96d: ;
    COW_AT(102ab96d)
        wr32(eax * 4u + sp0 - 0xcu, rd32(edi));
        if ((int32_t)(eax + 1u) < 3)
        {
            eax = eax + 1u;
            edi = edi + 4u;
            goto L_102ab96d;
        }
        edi = edi + 4u;
    COW_AT(102ab97c)
        wr32(sp0 - 0x44u, loc_30);
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        wr32(sp0 - 0x4cu, esi);
        t10 = ebx + rd32(arg1 + 0x58u);
        wr32(sp0 - 0x50u, t10);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102abdc0u), 4, t10, esi, sp0 - 0xcu, loc_30);
        t11 = rd32(sp0 - 0x18u) - 1u;
        t12 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0x18u, t11);
        if (t12 != 1u)
        {
            ebx = ebx + 0xcu;
            ebp = ebp + 3u;
            esi = esi + 1u;
            loc_30 = rd32(sp0 - 0x30u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_24 = rd32(sp0 - 0x24u);
            loc_18 = t11;
            loc_20 = rd32(sp0 - 0x20u);
            goto L_102ab964;
        }
        esi = esi + 1u;
    COW_AT(102ab9ab)
L_102aba16: ;
    COW_AT(102aba16)
        ebp = rd32(sp0 - 0x24u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
L_102aba1e: ;
    COW_AT(102aba1e)
        ecx = loc_2c;
        edi = rd32(sp0 - 0x28u);
L_102aba26: ;
    COW_AT(102aba26)
        t15 = ebp + ecx * 4u;
        wr32(sp0 - 0x24u, t15);
        t16 = ecx + loc_20 + 1u;
        wr32(sp0 - 0x20u, t16);
        wr32(sp0 - 0x14u, loc_14 - 1u);
        if (loc_14 != 1u)
        {
            edx = t15;
            loc_14 = loc_14 - 1u;
            loc_24 = t15;
            loc_20 = t16;
            goto L_102ab928;
        }
    }
    COW_AT(102aba49)
    if ((int32_t)edi <= 0) goto L_102aba8c;
    ebp = 0u;
L_102aba4f: ;
    COW_AT(102aba4f)
    if (rd32(ebp * 4u + loc_30) == 0u) goto L_102aba87;
    esi = rd32(ebp * 4u + loc_30);
L_102aba5a: ;
    COW_AT(102aba5a)
    if (rd32(esi + 4u) != 0xffffffffu)
    {
        eax = rd32(esi + 4u);
    COW_AT(102aba62)
        t17 = rd32(arg1 + 0x48u);
        wr32(sp0 - 0x44u, t17);
        t18 = rd32(arg1 + 0x58u);
        wr32(sp0 - 0x48u, t18);
        t19 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x4cu, t19);
        wr32(sp0 - 0x50u, eax);
        wr32(sp0 - 0x54u, rd32(esi));
        t20 = rd32(esi + 8u);
        wr32(sp0 - 0x58u, t20);
        wr32(sp0 - 0x5cu, ebp);
        g->esp = sp0 - 0x40u;
        cow_cdecl(g, COW_IMG(0x102abcf0u), 7, ebp, t20, rd32(esi), eax, t19, t18, t17);
        loc_30 = rd32(sp0 - 0x30u);
    }
    COW_AT(102aba80)
    if (rd32(esi + 0xcu) != 0u)
    {
        esi = rd32(esi + 0xcu);
        goto L_102aba5a;
    }
L_102aba87: ;
    COW_AT(102aba87)
    if ((int32_t)(ebp + 1u) < (int32_t)edi)
    {
        ebp = ebp + 1u;
        goto L_102aba4f;
    }
L_102aba8c: ;
    COW_AT(102aba8c)
    t21 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x44u, t21);
    t22 = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x48u, t22);
    t23 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x4cu, t23);
    t24 = rd32(arg1 + 0x48u);
    wr32(sp0 - 0x50u, t24);
    g->ebp = t23;
    g->eax = t24;
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x40u;
    t25 = cow_cdecl(g, COW_IMG(0x102abb10u), 4, t24, t23, t22, t21);
    t26 = g->ecx;
    t27 = g->edx;
    if ((int32_t)edi <= 0)
    {
        eax = t25;
        ecx = t26;
        ebp = t23;
        goto L_102abad8;
    }
    edx = t27;
    ebx = 0u;
    ebp = t23;
L_102abaac: ;
    COW_AT(102abaac)
    if (rd32(ebx * 4u + rd32(sp0 - 0x30u)) == 0u)
    {
        eax = rd32(ebx * 4u + rd32(sp0 - 0x30u));
        ecx = rd32(sp0 - 0x30u);
        goto L_102abad3;
    }
    eax = rd32(ebx * 4u + rd32(sp0 - 0x30u));
    ecx = rd32(sp0 - 0x30u);
L_102abab7: ;
    COW_AT(102abab7)
    wr32(sp0 - 0x44u, 0x3c1u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x4cu, eax);
    g->ecx = ecx;
    g->edx = edx;
    t28 = rd32(eax + 0xcu);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x3c1u);
    t29 = g->ecx;
    t30 = g->edx;
    if (t28 != 0u)
    {
        eax = t28;
        ecx = t29;
        edx = t30;
        goto L_102abab7;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
L_102abad3: ;
    COW_AT(102abad3)
    if ((int32_t)(ebx + 1u) < (int32_t)edi)
    {
        ebx = ebx + 1u;
        goto L_102abaac;
    }
L_102abad8: ;
    COW_AT(102abad8)
    wr32(sp0 - 0x44u, 0x3c5u);
    wr32(sp0 - 0x48u, COW_IMG(0x103be980u));
    t31 = rd32(sp0 - 0x30u);
    wr32(sp0 - 0x4cu, t31);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t31;
    g->esp = sp0 - 0x40u;
    t32 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t31, COW_IMG(0x103be980u), 0x3c5u);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x50u, 0x3c6u);
    wr32(sp0 - 0x54u, COW_IMG(0x103be980u));
    wr32(sp0 - 0x58u, ebp);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, ebp, COW_IMG(0x103be980u), 0x3c6u);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x3cu);
    g->edi = rd32(sp0 - 0x40u);
    g->ebp = rd32(sp0 - 0x38u);
    return;
L_102ab928: ;
    COW_AT(102ab928)
    ebp = loc_24;
    goto L_102ab92c;
L_102ab9ad: ;
    COW_AT(102ab9ad)
    wr32(sp0 - 0x2cu, -ecx);
    t13 = -ecx - 2u;
    wr32(sp0 - 0x18u, t13);
    if ((int32_t)(-ecx - 2u) <= 0)
    {
        loc_2c = -ecx;
        goto L_102aba1e;
    }
    loc_2c = -ecx;
    loc_18 = t13;
    COW_AT(102ab9c2)
    ebx = esi * 0xcu;
    edi = 0u;
L_102ab9c8: ;
    COW_AT(102ab9c8)
    wr32(esi * 4u + rd32(sp0 - 0x1cu), edi + loc_20);
    eax = 0u;
    ecx = ebp;
L_102ab9da: ;
    COW_AT(102ab9da)
    wr32(eax * 4u + sp0 - 0xcu, rd32(ecx));
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_102ab9da;
    }
    COW_AT(102ab9e9)
    wr32(sp0 - 0x44u, loc_30);
    wr32(sp0 - 0x48u, sp0 - 0xcu);
    wr32(sp0 - 0x4cu, esi);
    t14 = ebx + rd32(arg1 + 0x58u);
    wr32(sp0 - 0x50u, t14);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102abdc0u), 4, t14, esi, sp0 - 0xcu, loc_30);
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x18u))
    {
        ebx = ebx + 0xcu;
        ebp = ebp + 4u;
        esi = esi + 1u;
        edi = edi + 1u;
        loc_30 = rd32(sp0 - 0x30u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_20 = rd32(sp0 - 0x20u);
        goto L_102ab9c8;
    }
    esi = esi + 1u;
    goto L_102aba16;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102ab880(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102ab8b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102ab8ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x40u);
        in_esi = rd32(sp0 - 0x3cu);
        in_ebp = rd32(sp0 - 0x38u);
        in_ebx = rd32(sp0 - 0x34u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        g->esi = 0u;
        wr32(sp0 - 0x20u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x102ab908u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ab914u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ab922u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ab928u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ab92cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ab93eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ab954u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab964u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab96du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab97cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab9abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102ab9adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102ab9c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102ab9c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab9dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102ab9e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102aba16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x40u;
        wr32(sp0 - 0x48u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102aba1eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba26u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba49u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba5au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba62u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba80u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba87u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aba8cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x40u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102abaacu:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102abab7u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102abad3u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    case 0x102abad8u:
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
        g->esp = sp0 - 0x40u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102ab880(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102ab880(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
