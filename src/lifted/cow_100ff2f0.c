/* f_0x100ff2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ff2f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100ff318u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff318;
    case 0x100ff31du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff31d;
    case 0x100ff33au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff33a;
    case 0x100ff344u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff344;
    case 0x100ff3ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff3cc;
    case 0x100ff3d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff3d5;
    case 0x100ff3f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff3f0;
    case 0x100ff3f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff3f9;
    case 0x100ff414u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff414;
    case 0x100ff41du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff41d;
    case 0x100ff438u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff438;
    case 0x100ff441u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff441;
    case 0x100ff45cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_100ff45c;
    case 0x100ff493u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff493;
    case 0x100ff4b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff4b8;
    case 0x100ff4bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff4ba;
    case 0x100ff4e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff4e0;
    case 0x100ff5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff5cf;
    case 0x100ff5f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff5f6;
    case 0x100ff600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff600;
    case 0x100ff606u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff606;
    case 0x100ff630u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff630;
    case 0x100ff63bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff63b;
    case 0x100ff640u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff640;
    case 0x100ff68au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff68a;
    case 0x100ff690u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff690;
    case 0x100ff6ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff6ff;
    case 0x100ff71bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100ff71b;
    case 0x100ff71eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100ff71e;
    case 0x100ff733u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100ff733;
    case 0x100ff746u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_100ff746;
    case 0x100ff74fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff74f;
    case 0x100ff751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff751;
    case 0x100ff779u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff779;
    case 0x100ff78fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff78f;
    case 0x100ff795u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff795;
    case 0x100ff7a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff7a7;
    case 0x100ff7b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff7b6;
    case 0x100ff7d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff7d6;
    case 0x100ff7f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff7f6;
    case 0x100ff819u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff819;
    case 0x100ff83au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff83a;
    case 0x100ff84fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff84f;
    case 0x100ff858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff858;
    case 0x100ff861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_100ff861;
    case 0x100ff867u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff867;
    case 0x100ff87au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_100ff87a;
    case 0x100ff894u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff894;
    case 0x100ff89du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff89d;
    case 0x100ff8a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff8a4;
    case 0x100ff8c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_24 = rd32(sp0 - 0x24u); loc_1c = rd32(sp0 - 0x1cu); goto E_100ff8c5;
    default: break;
    }
#endif

    COW_AT(100ff2f0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, 5u);
    wr32(sp0 - 8u, 0u);
    if ((int32_t)rd32(rd32(sp0 + 8u) + 0x20cu) < 1)
    {
        eax = rd32(rd32(sp0 + 8u) + 0x20cu);
        edi = rd32(sp0 + 8u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 8u) + 0x20cu);
        edi = rd32(sp0 + 8u);
    COW_AT(100ff318)
        if ((int32_t)eax <= 16)
        {
    COW_AT(100ff31d)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, eax + 0x67eu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->eax = sp0 - 4u;
            g->esp = sp0 - 0x14u;
            t1 = cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, eax + 0x67eu, 1u, 1u, in_edi);
            eax = t1;
        }
    }
    COW_AT(100ff33a)
    if (rd16(edi + 2u) != 0u)
    {
    COW_AT(100ff3cc)
        if (rd16(edi + 0xau) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xau);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xau);
    COW_AT(100ff3d5)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x24u, 0x1eu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->eax = sp0 - 4u;
            g->esp = sp0 - 0x14u;
            t7 = cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x1eu, (uint32_t)(int16_t)eax, 1u, in_edi);
            eax = t7;
        }
    COW_AT(100ff3f0)
        if (rd16(edi + 0xcu) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xcu);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xcu);
    COW_AT(100ff3f9)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x24u, 0x1eu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->eax = sp0 - 4u;
            g->esp = sp0 - 0x14u;
            t8 = cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x1eu, (uint32_t)(int16_t)eax, 1u, in_edi);
            eax = t8;
        }
    COW_AT(100ff414)
        if (rd16(edi + 0xeu) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xeu);
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0xeu);
    COW_AT(100ff41d)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x24u, 0x2eu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->eax = sp0 - 4u;
            g->esp = sp0 - 0x14u;
            t9 = cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x2eu, (uint32_t)(int16_t)eax, 1u, in_edi);
            eax = t9;
        }
    COW_AT(100ff438)
        if (rd16(edi + 0x10u) != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(edi + 0x10u);
    COW_AT(100ff441)
            wr32(sp0 - 0x1cu, 1u);
            wr32(sp0 - 0x20u, (uint32_t)(int16_t)eax);
            wr32(sp0 - 0x24u, 0x2eu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x2eu, (uint32_t)(int16_t)eax, 1u, in_edi);
        }
    }
    else
    {
    COW_AT(100ff344)
        wr32(sp0 - 0x1cu, 1u);
        t2 = (uint32_t)(int16_t)rd16(edi + 0xau);
        wr32(sp0 - 0x20u, t2);
        wr32(sp0 - 0x24u, 0x1eu);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x30u, arg1);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x1eu, t2, 1u, in_edi);
        wr32(sp0 - 0x34u, 1u);
        t3 = (uint32_t)(int16_t)rd16(edi + 0xcu);
        wr32(sp0 - 0x38u, t3);
        wr32(sp0 - 0x3cu, 0x1eu);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x48u, arg1);
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x1eu, t3, 1u, arg1);
        wr32(sp0 - 0x4cu, 1u);
        t4 = (uint32_t)(int16_t)rd16(edi + 0xeu);
        wr32(sp0 - 0x50u, t4);
        wr32(sp0 - 0x54u, 0x2eu);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x60u, arg1);
        g->esp = sp0 - 0x44u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x2eu, t4, 1u, arg1);
        wr32(sp0 - 0x1cu, 1u);
        t5 = (uint32_t)(int16_t)rd16(edi + 0x12u);
        wr32(sp0 - 0x20u, t5);
        wr32(sp0 - 0x24u, 0x1fu);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x30u, arg1);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x1fu, t5, 1u, in_edi);
        wr32(sp0 - 0x34u, 1u);
        t6 = (uint32_t)(int16_t)rd16(edi + 0x10u);
        wr32(sp0 - 0x38u, t6);
        wr32(sp0 - 0x3cu, 0x2eu);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x48u, arg1);
        g->esp = sp0 - 0x2cu;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x2eu, t6, 1u, arg1);
    }
    COW_AT(100ff45c)
    wr32(sp0 - 0x1cu, 1u);
    t10 = (uint32_t)(int16_t)rd16(edi + 0x14u);
    wr32(sp0 - 0x20u, t10);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 9u, t10, 1u, in_edi);
    wr32(sp0 - 0x34u, 1u);
    t11 = (uint32_t)(int16_t)rd16(edi + 0x16u);
    wr32(sp0 - 0x38u, t11);
    wr32(sp0 - 0x3cu, 0xau);
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0xau, t11, 1u, arg1);
    ebx = 0u;
L_100ff493: ;
    COW_AT(100ff493)
    wr32(sp0 - 0x1cu, 1u);
    t12 = (uint32_t)(int8_t)rd8(ebx + edi + 0x18u);
    wr32(sp0 - 0x20u, t12);
    wr32(sp0 - 0x24u, ebx + 0xbu);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, ebx + 0xbu, t12, 1u, rd32(sp0 - 0x18u));
    if ((int32_t)(ebx + 1u) < 7)
    {
        ebx = ebx + 1u;
        goto L_100ff493;
    }
    COW_AT(100ff4b8)
    eax = 0u;
L_100ff4ba: ;
    COW_AT(100ff4ba)
    wr32(sp0 - 0x1cu, 1u);
    t13 = (uint32_t)(int8_t)rd8(eax + edi + 0x20u);
    wr32(sp0 - 0x20u, t13);
    wr32(sp0 - 0x24u, eax + 1u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, eax + 1u, t13, 1u, rd32(sp0 - 0x18u));
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        goto L_100ff4ba;
    }
    COW_AT(100ff4e0)
    wr32(sp0 - 0x1cu, 1u);
    t14 = (uint32_t)(int8_t)rd8(edi + 0x28u);
    wr32(sp0 - 0x20u, t14);
    wr32(sp0 - 0x24u, 0x12u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x12u, t14, 1u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 1u);
    t15 = (uint32_t)(int8_t)rd8(edi + 0x2bu);
    wr32(sp0 - 0x38u, t15);
    wr32(sp0 - 0x3cu, 0x13u);
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x13u, t15, 1u, arg1);
    wr32(sp0 - 0x4cu, 3u);
    t16 = (uint32_t)(int8_t)rd8(edi + 0x2au);
    wr32(sp0 - 0x50u, t16);
    wr32(sp0 - 0x54u, 0x14u);
    wr32(sp0 - 0x58u, sp0 - 4u);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    wr32(sp0 - 0x60u, arg1);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x14u, t16, 3u, arg1);
    wr32(sp0 - 0x1cu, 3u);
    t17 = (uint32_t)(int8_t)rd8(edi + 0x2du);
    wr32(sp0 - 0x20u, t17);
    wr32(sp0 - 0x24u, 0x15u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x15u, t17, 3u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 1u);
    t18 = (uint32_t)(int16_t)rd16(edi + 0x2eu);
    wr32(sp0 - 0x38u, t18);
    wr32(sp0 - 0x3cu, 0x16u);
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x16u, t18, 1u, arg1);
    wr32(sp0 - 0x4cu, 1u);
    t19 = (uint32_t)(int16_t)rd16(edi + 0x30u);
    wr32(sp0 - 0x50u, t19);
    wr32(sp0 - 0x54u, 0x17u);
    wr32(sp0 - 0x58u, sp0 - 4u);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    wr32(sp0 - 0x60u, arg1);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x17u, t19, 1u, arg1);
    wr32(sp0 - 0x1cu, 3u);
    t20 = (uint32_t)(int8_t)rd8(edi + 0x35u);
    wr32(sp0 - 0x20u, t20);
    wr32(sp0 - 0x24u, 0x18u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x18u, t20, 3u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 1u);
    t21 = (uint32_t)(int16_t)rd16(edi + 0x32u);
    wr32(sp0 - 0x38u, t21);
    wr32(sp0 - 0x3cu, 0x19u);
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x19u, t21, 1u, arg1);
    wr32(sp0 - 0x4cu, 1u);
    t22 = (uint32_t)(int8_t)rd8(edi + 0x34u);
    wr32(sp0 - 0x50u, t22);
    wr32(sp0 - 0x54u, 0x20u);
    wr32(sp0 - 0x58u, sp0 - 4u);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    wr32(sp0 - 0x60u, arg1);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x20u, t22, 1u, arg1);
    ebx = 0x80u;
L_100ff5cf: ;
    COW_AT(100ff5cf)
    wr32(sp0 - 0x1cu, 5u);
    t23 = (uint32_t)(int8_t)rd8(ebx + edi - 0x48u);
    wr32(sp0 - 0x20u, t23);
    wr32(sp0 - 0x24u, ebx);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->ecx = sp0 - 4u;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, ebx, t23, 5u, rd32(sp0 - 0x18u));
    t24 = g->ecx;
    if ((int32_t)(ebx - 0x7fu) < 128)
    {
        ebx = ebx + 1u;
        goto L_100ff5cf;
    }
    ecx = t24;
    COW_AT(100ff5f6)
    if ((int32_t)rd32(edi + 0xc0u) > 0)
    {
    COW_AT(100ff600)
        ebx = edi + 0xc4u;
        ebp = 0u;
L_100ff606: ;
    COW_AT(100ff606)
        wr32(sp0 - 0x1cu, 5u);
        t25 = rd32(ebx + 4u);
        wr32(sp0 - 0x20u, t25);
        wr32(sp0 - 0x24u, rd32(ebx));
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x30u, arg1);
        g->ecx = sp0 - 8u;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, rd32(ebx), t25, 5u, rd32(sp0 - 0x18u));
        t26 = g->ecx;
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(edi + 0xc0u))
        {
            ebx = ebx + 8u;
            ebp = ebp + 1u;
            goto L_100ff606;
        }
        ecx = t26;
    }
    COW_AT(100ff630)
    ebx = edi + 0x1ccu;
    ebp = 5u;
L_100ff63b: ;
    COW_AT(100ff63b)
    if (rd32(ebx) != 0u)
    {
    COW_AT(100ff640)
        wr32(sp0 - 0x1cu, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x24u, arg1);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x100ff980u), 3, arg1, sp0 - 8u, sp0 - 4u);
        wr32(sp0 - 0x28u, 2u);
        wr32(sp0 - 0x2cu, 1u);
        t27 = rd32(ebx - 4u) + 0x280u;
        wr32(sp0 - 0x30u, t27);
        wr32(sp0 - 0x34u, sp0 - 4u);
        wr32(sp0 - 0x38u, sp0 - 8u);
        wr32(sp0 - 0x3cu, arg1);
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, t27, 1u, 2u, arg1);
        wr32(sp0 - 0x40u, 2u);
        t28 = rd32(ebx + 4u);
        wr32(sp0 - 0x44u, t28);
        wr32(sp0 - 0x48u, rd32(ebx));
        wr32(sp0 - 0x4cu, sp0 - 4u);
        wr32(sp0 - 0x50u, sp0 - 8u);
        wr32(sp0 - 0x54u, arg1);
        g->ecx = sp0 - 8u;
        g->esp = sp0 - 0x38u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, rd32(ebx), t28, 2u, arg1);
        t29 = g->ecx;
        ecx = t29;
    }
    COW_AT(100ff68a)
    if (ebp != 1u)
    {
        ebx = ebx + 0xcu;
        ebp = ebp - 1u;
        goto L_100ff63b;
    }
    COW_AT(100ff690)
    wr32(sp0 - 0x1cu, 2u);
    t30 = (uint32_t)(int8_t)rd8(edi + 0x36u);
    wr32(sp0 - 0x20u, t30);
    wr32(sp0 - 0x24u, 0x500u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x500u, t30, 2u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 3u);
    t31 = (uint32_t)(int8_t)rd8(edi + 0x37u);
    wr32(sp0 - 0x38u, t31);
    wr32(sp0 - 0x3cu, 0x501u);
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x501u, t31, 3u, arg1);
    wr32(sp0 - 0x4cu, 5u);
    t32 = rd16(edi + 0x1c6u);
    wr32(sp0 - 0x50u, t32);
    t33 = rd16(edi + 0x1c4u);
    wr32(sp0 - 0x54u, t33);
    wr32(sp0 - 0x58u, sp0 - 4u);
    wr32(sp0 - 0x5cu, sp0 - 8u);
    wr32(sp0 - 0x60u, arg1);
    g->ecx = sp0 - 4u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, t33, t32, 5u, arg1);
    t34 = g->ecx;
    t35 = g->edx;
    if (rd32(edi + 0x204u) == 0u)
    {
        ecx = t34;
        goto L_100ff894;
    }
    edx = t35;
    COW_AT(100ff6ff)
    wr32(sp0 - 0x1cu, sp0 - 4u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, arg1);
    g->ecx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x100ff980u), 3, arg1, sp0 - 8u, sp0 - 4u);
    t36 = g->ecx;
    if (rd32(edi + 0x204u) == 1u)
    {
        eax = rd32(edi + 0x204u) - 1u;
        goto L_100ff733;
    }
    eax = rd32(edi + 0x204u) - 1u;
    ecx = t36;
    COW_AT(100ff71b)
    if (eax != 1u) goto L_100ff74f;
    COW_AT(100ff71e)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x87u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    eax = sp0 - 8u;
    edx = sp0 - 4u;
    loc_24 = 0x87u;
L_100ff746: ;
    COW_AT(100ff746)
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, loc_24, 1u, 1u, rd32(sp0 - 0x18u));
L_100ff74f: ;
    COW_AT(100ff74f)
    ebx = 0u;
L_100ff751: ;
    COW_AT(100ff751)
    wr32(sp0 - 0x1cu, 1u);
    t37 = (uint32_t)(int8_t)rd8(ebx + edi + 0xb8u);
    wr32(sp0 - 0x20u, t37);
    wr32(sp0 - 0x24u, ebx + 0xbu);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->ecx = ebx + 0xbu;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, ebx + 0xbu, t37, 1u, rd32(sp0 - 0x18u));
    t38 = g->ecx;
    if ((int32_t)(ebx + 1u) < 7)
    {
        ebx = ebx + 1u;
        goto L_100ff751;
    }
    ecx = t38;
    COW_AT(100ff779)
    t39 = rd32(edi + 0x208u);
    wr32(sp0 + 8u, 0u);
    if ((int32_t)t39 <= 0) goto L_100ff894;
    COW_AT(100ff78f)
    ebx = edi + 0x214u;
L_100ff795: ;
    COW_AT(100ff795)
    if (rd32(ebx - 4u) - 0x81u > 0x2cu)
    {
        eax = rd32(ebx - 4u);
        goto L_100ff861;
    }
    eax = rd32(ebx - 4u);
    ebp = rd32(ebx - 4u) - 0x81u;
    COW_AT(100ff7a7)
    t40 = rd32(COW_IMG(0x100ff8d4u) + rd8(COW_IMG(0x100ff8f0u) + ebp) * 4u);
    switch (t40 - RD)
    {
    case 0x100ff7b6u: goto L_100ff7b6;
    case 0x100ff7d6u: goto L_100ff7d6;
    case 0x100ff7f6u: goto L_100ff7f6;
    case 0x100ff819u: goto L_100ff819;
    case 0x100ff84fu: goto L_100ff84f;
    case 0x100ff858u: goto L_100ff858;
    case 0x100ff861u: goto L_100ff861;
    default: rt_fatal(g, COW_IMG(0x100ff7afu), "switch");
    }
    return 0;
L_100ff733: ;
    COW_AT(100ff733)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 0x80u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    ecx = sp0 - 4u;
    edx = sp0 - 8u;
    loc_24 = 0x80u;
    goto L_100ff746;
L_100ff7b6: ;
    COW_AT(100ff7b6)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x12u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x12u, rd32(ebx), 2u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, rd32(ebx));
    wr32(sp0 - 0x3cu, 0x14u);
    edx = rd32(ebx);
    loc_34 = 2u;
    loc_38 = rd32(ebx);
    loc_3c = 0x14u;
L_100ff83a: ;
    COW_AT(100ff83a)
    wr32(sp0 - 0x40u, sp0 - 4u);
    wr32(sp0 - 0x44u, sp0 - 8u);
    wr32(sp0 - 0x48u, arg1);
    g->esp = sp0 - 0x2cu;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, loc_3c, loc_38, loc_34, rd32(sp0 - 0x30u));
L_100ff87a: ;
    COW_AT(100ff87a)
    t41 = rd32(sp0 + 8u) + 1u;
    t42 = rd32(edi + 0x208u);
    t43 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t41);
    if ((int32_t)(t43 + 1u) < (int32_t)t42)
    {
        ebx = ebx + 8u;
        goto L_100ff795;
    }
    ecx = t42;
L_100ff894: ;
    COW_AT(100ff894)
    if (rd16(edi + 2u) != 0u)
    {
        edi = (edi & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(100ff89d)
        if ((uint16_t)edi < 0x8000u)
        {
    COW_AT(100ff8a4)
            wr32(sp0 - 0x1cu, 5u);
            wr32(sp0 - 0x20u, (uint16_t)edi);
            wr32(sp0 - 0x24u, 0x7ffu);
            wr32(sp0 - 0x28u, sp0 - 4u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            wr32(sp0 - 0x30u, arg1);
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x7ffu, (uint16_t)edi, 5u, rd32(sp0 - 0x18u));
        }
    }
    COW_AT(100ff8c5)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return rd32(sp0 - 8u);
L_100ff7d6: ;
    COW_AT(100ff7d6)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x13u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x13u, rd32(ebx), 2u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, rd32(ebx));
    wr32(sp0 - 0x3cu, 0x15u);
    edx = rd32(ebx);
    loc_34 = 2u;
    loc_38 = rd32(ebx);
    loc_3c = 0x15u;
    goto L_100ff83a;
L_100ff7f6: ;
    COW_AT(100ff7f6)
    wr32(sp0 - 0x1cu, 4u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x18u);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x18u, rd32(ebx), 4u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 4u);
    wr32(sp0 - 0x38u, rd32(ebx));
    wr32(sp0 - 0x3cu, 0x85u);
    edx = rd32(ebx);
    loc_34 = 4u;
    loc_38 = rd32(ebx);
    loc_3c = 0x85u;
    goto L_100ff83a;
L_100ff819: ;
    COW_AT(100ff819)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x8fu);
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x8fu, rd32(ebx), 2u, rd32(sp0 - 0x18u));
    wr32(sp0 - 0x34u, 2u);
    wr32(sp0 - 0x38u, rd32(ebx));
    wr32(sp0 - 0x3cu, 0x1au);
    edx = rd32(ebx);
    loc_34 = 2u;
    loc_38 = rd32(ebx);
    loc_3c = 0x1au;
    goto L_100ff83a;
L_100ff84f: ;
    COW_AT(100ff84f)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x34u);
    edx = rd32(ebx);
    loc_1c = 2u;
    loc_20 = rd32(ebx);
    loc_24 = 0x34u;
L_100ff867: ;
    COW_AT(100ff867)
    wr32(sp0 - 0x28u, sp0 - 4u);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x30u, arg1);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, loc_24, loc_20, loc_1c, rd32(sp0 - 0x18u));
    goto L_100ff87a;
L_100ff858: ;
    COW_AT(100ff858)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, 0x35u);
    edx = rd32(ebx);
    loc_1c = 2u;
    loc_20 = rd32(ebx);
    loc_24 = 0x35u;
    goto L_100ff867;
L_100ff861: ;
    COW_AT(100ff861)
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x20u, rd32(ebx));
    wr32(sp0 - 0x24u, eax);
    edx = rd32(ebx);
    loc_1c = 5u;
    loc_20 = rd32(ebx);
    loc_24 = eax;
    goto L_100ff867;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100ff2f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100ff318u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff31du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff33au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff344u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff3ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff3d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff3f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff3f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff414u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff41du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff438u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff441u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff45cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100ff493u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff4b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff4bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff4e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff5cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff5f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff600u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = 0u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff606u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff630u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff63bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff640u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff68au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff690u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff6ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff71bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff71eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff733u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff746u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x1cu, 1u);
        (void)sp0;
        return 1;
    }
    case 0x100ff74fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff751u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff779u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff78fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff795u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff7a7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff7b6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff7d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff7f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff819u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff83au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x3cu;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff84fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff858u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff861u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff867u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff87au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff894u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff89du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff8a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->esi = arg1;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100ff8c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        uint32_t loc_24;
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x5cu, sp0 - 8u);
        wr32(sp0 - 0x58u, sp0 - 4u);
        wr32(sp0 - 0x44u, sp0 - 8u);
        wr32(sp0 - 0x40u, sp0 - 4u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x28u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100ff2f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100ff2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
