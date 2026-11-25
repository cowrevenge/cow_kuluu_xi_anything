/* f_0x1002a3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002a3b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002a3c8u: eax = g->eax; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1002a3c8;
    case 0x1002a3d7u: eax = g->eax; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1002a3d7;
    case 0x1002a3dbu: eax = g->eax; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1002a3db;
    case 0x1002a3ddu: eax = g->eax; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_1002a3dd;
    case 0x1002a3f0u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a3f0;
    case 0x1002a3f6u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_4 = rd32(sp0 - 4u); goto E_1002a3f6;
    case 0x1002a414u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a414;
    case 0x1002a41bu: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a41b;
    case 0x1002a420u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a420;
    case 0x1002a42du: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a42d;
    case 0x1002a439u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a439;
    case 0x1002a444u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a444;
    case 0x1002a44eu: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a44e;
    case 0x1002a45au: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a45a;
    case 0x1002a473u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a473;
    case 0x1002a47au: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a47a;
    case 0x1002a48cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a48c;
    case 0x1002a494u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a494;
    case 0x1002a49eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a49e;
    case 0x1002a4a9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a4a9;
    case 0x1002a4b4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a4b4;
    case 0x1002a4beu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a4be;
    case 0x1002a4e4u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a4e4;
    case 0x1002a4ecu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a4ec;
    case 0x1002a4f6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a4f6;
    case 0x1002a51cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a51c;
    case 0x1002a524u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a524;
    case 0x1002a52bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a52b;
    case 0x1002a52fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a52f;
    case 0x1002a531u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a531;
    case 0x1002a53bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a53b;
    case 0x1002a545u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a545;
    case 0x1002a56bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a56b;
    case 0x1002a56fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a56f;
    case 0x1002a57du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a57d;
    case 0x1002a5a3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a5a3;
    case 0x1002a5abu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a5ab;
    case 0x1002a5b6u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5b6;
    case 0x1002a5c0u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5c0;
    case 0x1002a5ccu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a5cc;
    case 0x1002a5d2u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5d2;
    case 0x1002a5d7u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5d7;
    case 0x1002a5e3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a5e3;
    case 0x1002a5e9u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5e9;
    case 0x1002a5f3u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a5f3;
    case 0x1002a5ffu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a5ff;
    case 0x1002a605u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a605;
    case 0x1002a60fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a60f;
    case 0x1002a61bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a61b;
    case 0x1002a621u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a621;
    case 0x1002a62fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_10 = rd32(sp0 - 0x10u); goto E_1002a62f;
    case 0x1002a632u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002a632;
    case 0x1002a649u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_1002a649;
    case 0x1002a64du: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a64d;
    case 0x1002a665u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a665;
    case 0x1002a66du: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a66d;
    case 0x1002a674u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a674;
    case 0x1002a67bu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1002a67b;
    case 0x1002a67fu: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1002a67f;
    case 0x1002a6a7u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1002a6a7;
    case 0x1002a6c4u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a6c4;
    case 0x1002a6cfu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a6cf;
    case 0x1002a6d1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1002a6d1;
    case 0x1002a6e5u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a6e5;
    case 0x1002a6ebu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_1002a6eb;
    default: break;
    }
#endif

    COW_AT(1002a3b0)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 4u, self);
    if (rd32(self + 0xc4u) != 0xffffffffu)
    {
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
        loc_4 = self;
    }
    else
    {
    COW_AT(1002a3c8)
        if (rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u) == 0u)
        {
    COW_AT(1002a3db)
            eax = 0u;
        }
        else
        {
            eax = rd32(rd32(COW_IMG(0x1047d128u)) + 0x40008u);
    COW_AT(1002a3d7)
            eax = rd32(eax);
        }
    COW_AT(1002a3dd)
        wr32(sp0 - 0x24u, eax);
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x10351514u)));
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t1 = cow_thiscall(g, COW_IMG(0x1003af10u), rd32(COW_IMG(0x1047b970u)), 2, rd32(COW_IMG(0x10351514u)), eax);
        eax = t1;
    COW_AT(1002a3f0)
        wr32(self + 0xc4u, eax);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(1002a3f6)
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x104571d8u)));
    wr32(sp0 - 0x28u, 0x8bu);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    g->edx = rd32(COW_IMG(0x104571d8u));
    t3 = rd32(COW_IMG(0x104571d8u));
    g->esp = sp0 - 0x20u;
    t4 = cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t2, 0x8bu, t3);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(1002a414)
    esi = 0u;
    edi = COW_IMG(0x104572b8u);
L_1002a41b: ;
    COW_AT(1002a41b)
    t6 = rd32(edi);
    if (t6 == 0u)
    {
    COW_AT(1002a439)
        wr32(sp0 - 0x24u, 0u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        edx = rd32(COW_IMG(0x1045666cu));
        loc_24 = 0u;
    }
    else
    {
    COW_AT(1002a420)
        wr32(sp0 - 0x24u, edi);
        wr32(sp0 - 0x28u, esi);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x1000bf30u), rd32(COW_IMG(0x1045666cu)), 2, esi, edi);
        t7 = g->edx;
        edx = t7;
    COW_AT(1002a42d)
        wr32(sp0 - 0x24u, 1u);
        eax = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        loc_24 = 1u;
    }
    COW_AT(1002a444)
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t8 = cow_thiscall(g, rd32(rd32(eax) + 0xb8u), rd32(eax), 3, eax, esi, loc_24);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    COW_AT(1002a44e)
    if ((int32_t)(edi + 0x68u) < (int32_t)COW_IMG(0x10457388u))
    {
        esi = esi + 1u;
        edi = edi + 0x68u;
        goto L_1002a41b;
    }
    COW_AT(1002a45a)
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x89u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t10);
    g->eax = t10;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t11 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x20u;
    t12 = cow_thiscall(g, rd32(rd32(t10) + 0xc8u), rd32(t10), 3, t10, 0x89u, 1u);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(1002a473)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t14 = cow_thiscall(g, COW_IMG(0x10029e70u), self, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1002a47a)
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0xcu, eax);
    if (rd32(eax) == 0u) goto L_1002a64d;
    ebp = rd32(eax);
    loc_8 = eax;
    loc_c = eax;
L_1002a48c: ;
    COW_AT(1002a48c)
    g->eax = eax;
    g->edx = rd32(ebp);
    t16 = rd32(ebp);
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, rd32(t16 + 0x2cu), ebp, 0);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(1002a494)
    if (eax != 0u)
    {
        esi = eax;
    COW_AT(1002a49e)
        if (rd32(esi + 0x58u) != 0u)
        {
            ebx = rd32(esi + 0x58u);
    COW_AT(1002a4a9)
            if (rd32(ebp + 0x14u) == 0u)
            {
    COW_AT(1002a4b4)
                if (rd32(ebp + 0x1cu) != 0u) goto L_1002a4ec;
                eax = ebp + 0x1cu;
    COW_AT(1002a4be)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t19 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t19);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t19;
                t20 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t21 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t19, 0x208u, 0u, t20, eax, 0u);
                t22 = g->edx;
                eax = t21;
                edx = t22;
    COW_AT(1002a4e4)
                if ((int32_t)eax < 0) goto L_1002a5ab;
L_1002a4ec: ;
    COW_AT(1002a4ec)
                if (rd32(ebp + 0x24u) != 0u) goto L_1002a524;
                eax = ebp + 0x24u;
    COW_AT(1002a4f6)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t23 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t23);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t23;
                t24 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t25 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t23, 0x208u, 0u, t24, eax, 0u);
                t26 = g->edx;
                eax = t25;
                edx = t26;
    COW_AT(1002a51c)
                if ((int32_t)eax < 0) goto L_1002a5ab;
L_1002a524: ;
    COW_AT(1002a524)
                if (rd32(esi + 0x34u) == 0u)
                {
    COW_AT(1002a52f)
                    eax = 0u;
                }
                else
                {
                    eax = rd32(esi + 0x34u);
    COW_AT(1002a52b)
                    eax = rd32(eax);
                }
    COW_AT(1002a531)
                t27 = rd8(eax + 0x34u);
                if (!(t27 & 1u)) goto L_1002a62f;
    COW_AT(1002a53b)
                if (rd32(ebp + 0x2cu) != 0u) goto L_1002a56f;
                eax = ebp + 0x2cu;
    COW_AT(1002a545)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t28 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t28);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t28;
                t29 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t30 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t28, 0x208u, 0u, t29, eax, 0u);
                t31 = g->edx;
                eax = t30;
                edx = t31;
    COW_AT(1002a56b)
                if ((int32_t)eax < 0) goto L_1002a5ab;
L_1002a56f: ;
    COW_AT(1002a56f)
                if (rd32(ebp + 0x34u) != 0u) goto L_1002a62f;
                eax = ebp + 0x34u;
    COW_AT(1002a57d)
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, eax);
                wr32(sp0 - 0x2cu, rd32(COW_IMG(0x10457540u)));
                wr32(sp0 - 0x30u, 0u);
                wr32(sp0 - 0x34u, 0x208u);
                t32 = ebx * 0xcu + 4u;
                wr32(sp0 - 0x38u, t32);
                g->eax = rd32(COW_IMG(0x10457540u));
                g->edx = t32;
                t33 = rd32(COW_IMG(0x10457540u));
                g->esp = sp0 - 0x20u;
                t34 = cow_thiscall(g, COW_IMG(0x1003b210u), rd32(COW_IMG(0x1047b974u)), 6, t32, 0x208u, 0u, t33, eax, 0u);
                t35 = g->edx;
                eax = t34;
                edx = t35;
    COW_AT(1002a5a3)
                if ((int32_t)eax >= 0) goto L_1002a62f;
L_1002a5ab: ;
    COW_AT(1002a5ab)
                wr32(sp0 - 0x10u, 2u);
                esi = ebp + 0x24u;
                loc_10 = 2u;
L_1002a5b6: ;
    COW_AT(1002a5b6)
                if (rd32(esi - 8u) == 0u)
                {
                    eax = rd32(esi - 8u);
                }
                else
                {
                    eax = rd32(esi - 8u);
                    edi = esi - 8u;
    COW_AT(1002a5c0)
                    wr32(sp0 - 0x24u, edi);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t36 = cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t37 = g->edx;
                    eax = t36;
                    edx = t37;
    COW_AT(1002a5cc)
                    wr32(edi, 0u);
                    loc_10 = rd32(sp0 - 0x10u);
                }
    COW_AT(1002a5d2)
                t38 = rd32(esi);
                if (t38 != 0u)
                {
    COW_AT(1002a5d7)
                    wr32(sp0 - 0x24u, esi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, esi);
                    t39 = g->edx;
                    edx = t39;
    COW_AT(1002a5e3)
                    wr32(esi, 0u);
                    loc_10 = rd32(sp0 - 0x10u);
                }
    COW_AT(1002a5e9)
                if (rd32(esi + 8u) != 0u)
                {
                    eax = rd32(esi + 8u);
                    edi = esi + 8u;
    COW_AT(1002a5f3)
                    wr32(sp0 - 0x24u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t40 = g->edx;
                    edx = t40;
    COW_AT(1002a5ff)
                    wr32(edi, 0u);
                    loc_10 = rd32(sp0 - 0x10u);
                }
    COW_AT(1002a605)
                if (rd32(esi + 0x10u) != 0u)
                {
                    eax = rd32(esi + 0x10u);
                    edi = esi + 0x10u;
    COW_AT(1002a60f)
                    wr32(sp0 - 0x24u, edi);
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    cow_stdcall(g, COW_IMG(0x1003b3c0u), 1, edi);
                    t41 = g->edx;
                    edx = t41;
    COW_AT(1002a61b)
                    wr32(edi, 0u);
                    loc_10 = rd32(sp0 - 0x10u);
                }
    COW_AT(1002a621)
                wr32(sp0 - 0x10u, loc_10 - 1u);
                if (loc_10 != 1u)
                {
                    esi = esi + 4u;
                    loc_10 = loc_10 - 1u;
                    goto L_1002a5b6;
                }
L_1002a62f: ;
    COW_AT(1002a62f)
                wr32(ebp + 0x14u, ebx);
            }
        }
    }
    COW_AT(1002a632)
    t42 = rd32(rd32(sp0 - 0xcu)) + 4u;
    wr32(sp0 - 0xcu, t42);
    if (rd32(t42) != 0u)
    {
        eax = t42;
        ebp = rd32(t42);
        loc_8 = rd32(sp0 - 8u);
        loc_c = t42;
        goto L_1002a48c;
    }
    COW_AT(1002a649)
    eax = rd32(sp0 - 8u);
L_1002a64d: ;
    COW_AT(1002a64d)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    if (rd32(eax) != 0u)
    {
        esi = rd32(eax);
        edi = eax;
    COW_AT(1002a665)
L_1002a66d: ;
    COW_AT(1002a66d)
        if (rd32(esi + 0xcu) == 0u)
        {
            eax = rd32(esi + 0xcu);
    COW_AT(1002a674)
            g->eax = eax;
            g->esp = sp0 - 0x20u;
            t43 = cow_thiscall(g, rd32(rd32(esi) + 0x2cu), esi, 0);
            eax = t43;
    COW_AT(1002a67b)
            if (eax != 0u)
            {
    COW_AT(1002a67f)
                t44 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x1cu);
                wr32(eax + 0x44u, t44);
                t45 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x24u);
                wr32(eax + 0x48u, t45);
                t46 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x2cu);
                wr32(eax + 0x50u, t46);
                t47 = rd32(esi + rd32(esi + 0x18u) * 4u + 0x34u);
                wr32(eax + 0x54u, t47);
            }
    COW_AT(1002a6a7)
            wr32(sp0 - 0x24u, sp0 - 8u);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            wr32(sp0 - 0x2cu, arg3);
            t48 = rd32(sp0 - 4u);
            wr32(sp0 - 0x30u, t48);
            wr32(sp0 - 0x34u, arg2);
            wr32(sp0 - 0x38u, arg1);
            g->edx = arg1;
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(rd32(rd32(edi)) + 0x1cu), rd32(edi), 6, arg1, arg2, t48, arg3, sp0 - 0xcu, sp0 - 8u);
            t49 = g->edx;
            edx = t49;
        }
    COW_AT(1002a6c4)
        if (rd32(rd32(edi) + 4u) != 0u)
        {
            esi = rd32(rd32(edi) + 4u);
            edi = rd32(edi) + 4u;
            goto L_1002a66d;
        }
    }
    COW_AT(1002a6cf)
    esi = 0u;
L_1002a6d1: ;
    COW_AT(1002a6d1)
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, esi);
    t50 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x2cu, t50);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(t50) + 0xb8u), rd32(t50), 3, t50, esi, 0u);
    t51 = g->edx;
    edx = t51;
    COW_AT(1002a6e5)
    if ((int32_t)(esi + 1u) < 4)
    {
        esi = esi + 1u;
        goto L_1002a6d1;
    }
    COW_AT(1002a6eb)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002a3b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002a3c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002a3d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002a3dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002a3ddu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002a3f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a3f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a414u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a41bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a420u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a42du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a439u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a444u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x1002a44eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a45au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a473u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a47au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a48cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a494u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a49eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4a9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4e4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a4f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a51cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a524u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a52bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a52fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a53bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a545u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a56bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a56fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a57du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5a3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5abu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5c0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5ccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5d7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a5ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a605u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a60fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a621u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a62fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a632u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a649u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a64du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a665u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a66du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a674u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a67bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a67fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a6a7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a6c4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        g->ebx = arg2;
        g->ebp = arg3;
        (void)sp0;
        return 1;
    }
    case 0x1002a6cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a6d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a6e5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x1002a6ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a3b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002a3b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
