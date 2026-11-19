/* f_0x101db220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101db220(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101db24eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db24e;
    case 0x101db252u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db252;
    case 0x101db258u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db258;
    case 0x101db25au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db25a;
    case 0x101db25fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db25f;
    case 0x101db268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db268;
    case 0x101db27au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db27a;
    case 0x101db289u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebp = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_101db289;
    case 0x101db29fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db29f;
    case 0x101db2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2b0;
    case 0x101db2b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2b8;
    case 0x101db2c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2c5;
    case 0x101db2c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2c9;
    case 0x101db2d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2d3;
    case 0x101db2d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2d9;
    case 0x101db2ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2eb;
    case 0x101db2f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2f0;
    case 0x101db2f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db2f9;
    case 0x101db302u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db302;
    case 0x101db30bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db30b;
    case 0x101db314u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db314;
    case 0x101db31du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db31d;
    case 0x101db326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db326;
    case 0x101db32fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db32f;
    case 0x101db338u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db338;
    case 0x101db33du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db33d;
    case 0x101db342u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db342;
    case 0x101db358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db358;
    case 0x101db35du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db35d;
    case 0x101db371u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db371;
    case 0x101db376u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db376;
    case 0x101db37fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db37f;
    case 0x101db38fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db38f;
    case 0x101db394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db394;
    case 0x101db39du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db39d;
    case 0x101db3a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db3a3;
    case 0x101db3c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db3c8;
    case 0x101db3d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db3d7;
    case 0x101db3d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db3d9;
    case 0x101db3dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_101db3db;
    case 0x101db3eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db3ea;
    case 0x101db3feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db3fe;
    case 0x101db411u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db411;
    case 0x101db422u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db422;
    case 0x101db42bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db42b;
    case 0x101db43au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db43a;
    case 0x101db44fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db44f;
    case 0x101db453u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db453;
    case 0x101db45cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db45c;
    case 0x101db461u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db461;
    case 0x101db46au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db46a;
    case 0x101db484u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db484;
    case 0x101db491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db491;
    case 0x101db4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db4a3;
    case 0x101db4c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db4c1;
    case 0x101db4ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db4cc;
    case 0x101db4dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db4da;
    case 0x101db4e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db4e9;
    case 0x101db504u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db504;
    case 0x101db523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db523;
    case 0x101db527u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db527;
    case 0x101db52cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db52c;
    case 0x101db531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db531;
    case 0x101db536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db536;
    case 0x101db544u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db544;
    case 0x101db54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db54e;
    case 0x101db55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db55c;
    case 0x101db566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db566;
    case 0x101db56du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db56d;
    case 0x101db581u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db581;
    case 0x101db58au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db58a;
    case 0x101db593u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db593;
    case 0x101db5a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db5a0;
    case 0x101db5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db5a8;
    case 0x101db5b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5b7;
    case 0x101db5cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5cf;
    case 0x101db5d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5d3;
    case 0x101db5dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5db;
    case 0x101db5e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5e4;
    case 0x101db5edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; goto E_101db5ed;
    case 0x101db5f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db5f2;
    case 0x101db5fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db5fa;
    case 0x101db609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db609;
    case 0x101db614u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db614;
    case 0x101db61eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db61e;
    case 0x101db62du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_101db62d;
    default: break;
    }
#endif

    COW_AT(101db220)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, self);
    g->eax = rd32(self);
    t1 = rd32(self);
    g->esp = sp0 - 0x18u;
    t2 = cow_thiscall(g, rd32(t1 + 0x64u), self, 0);
    g->eax = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    g->edx = rd32(COW_IMG(0x10663468u));
    t3 = rd32(rd32(rd32(COW_IMG(0x10663468u)) + 0x58u));
    t4 = rd32(COW_IMG(0x10663468u));
    t5 = rd32(rd32(COW_IMG(0x10663740u)) + 0x64u);
    t6 = cow_thiscall(g, rd32(t3 + 0x54u), rd32(t4 + 0x58u), 0);
    t7 = g->edx;
    if (t2 != 1u)
    {
        eax = t6;
        edx = t7;
        esi = t5;
        edi = t2;
        goto L_101db252;
    }
    eax = t6;
    edx = t7;
    esi = t5;
    edi = t2;
    COW_AT(101db24e)
    ebx = esi;
L_101db258: ;
    COW_AT(101db258)
    esi = eax;
L_101db25a: ;
    COW_AT(101db25a)
    if (edi != 1u) goto L_101db289;
    COW_AT(101db25f)
    if (eax == 0x11u)
    {
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_101db3db;
    }
    COW_AT(101db268)
    g->edx = edx;
    t8 = rd32(rd32(COW_IMG(0x10663468u)) + 0x5cu);
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, t8, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int8_t)t9 >= 0)
    {
        ecx = t10;
        edx = t11;
        goto L_101db29f;
    }
    edx = t11;
    COW_AT(101db27a)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80404040u;
L_101db252: ;
    COW_AT(101db252)
    if (eax != esi)
    {
        ebx = eax;
        goto L_101db25a;
    }
    ebx = eax;
    goto L_101db258;
L_101db289: ;
    COW_AT(101db289)
    g->edx = rd32(COW_IMG(0x10663740u));
    t12 = rd32(rd32(COW_IMG(0x10663740u)) + 0x60u);
    t13 = rd32(COW_IMG(0x10663740u));
    g->esp = sp0 - 0x18u;
    t14 = cow_call_regs(g, COW_IMG(0x1021cc60u), eax, t12, g->edx, 1, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int8_t)t14 < 0)
    {
        edx = t16;
        loc_c = in_ebx;
        loc_10 = in_ebp;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_101db3db;
    }
    ecx = t15;
    edx = t16;
L_101db29f: ;
    COW_AT(101db29f)
    if (ebx != 0x11u) goto L_101db358;
    COW_AT(101db2b0)
    if (arg1 == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    COW_AT(101db2b8)
    if (rd16(arg1) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = (ecx & 0xffff0000u) | rd16(arg1);
    COW_AT(101db2c5)
    if (arg2 == 0u) goto L_101db2eb;
    COW_AT(101db2c9)
    if (rd32(arg2 + 0x14bcu) == 0u) goto L_101db2eb;
    eax = rd32(arg2 + 0x14bcu);
    COW_AT(101db2d3)
    if ((int8_t)(rd32(eax) >> 8u) >= 0)
    {
        edx = rd32(eax);
        goto L_101db2eb;
    }
    edx = rd32(eax);
    COW_AT(101db2d9)
    wr32(sp0 - 0x1cu, ecx);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    t17 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x18u;
    t18 = cow_thiscall(g, COW_IMG(0x101dbad0u), t17, 1, ecx);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        edx = t20;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t19;
    edx = t20;
L_101db2eb: ;
    COW_AT(101db2eb)
    if (esi == 0xbu) goto L_101db35d;
    COW_AT(101db2f0)
    if (ebx == 0xcu) goto L_101db411;
    COW_AT(101db2f9)
    if (esi == 0xcu) goto L_101db411;
    COW_AT(101db302)
    if (ebx == 0xdu) goto L_101db3fe;
    COW_AT(101db30b)
    if (esi == 0xdu) goto L_101db3fe;
    COW_AT(101db314)
    if (ebx == 0xeu) goto L_101db3ea;
    COW_AT(101db31d)
    if (esi == 0xeu) goto L_101db3ea;
    COW_AT(101db326)
    if (ebx == 0xfu) goto L_101db3c8;
    COW_AT(101db32f)
    if (esi == 0xfu) goto L_101db3c8;
    COW_AT(101db338)
    if (ebx == 0x10u) goto L_101db342;
    COW_AT(101db33d)
    if (esi != 0x10u) goto L_101db371;
L_101db342: ;
    COW_AT(101db342)
    ecx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 7u & 1u);
L_101db3d9: ;
    COW_AT(101db3d9)
    if (!zf) goto L_101db371;
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_101db3db: ;
    COW_AT(101db3db)
    g->ebx = loc_c;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = loc_10;
    g->edx = edx;
    return 0x80404040u;
L_101db358: ;
    COW_AT(101db358)
    if (ebx != 0xbu) goto L_101db2eb;
L_101db35d: ;
    COW_AT(101db35d)
    if (!(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u & 1u))
    {
        edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = rd32(COW_IMG(0x103601bcu));
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 2u;
L_101db371: ;
    COW_AT(101db371)
    if (ebx == 1u) goto L_101db37f;
    eax = ebx - 1u;
    COW_AT(101db376)
    if (eax != 8u) goto L_101db422;
L_101db37f: ;
    COW_AT(101db37f)
    if (rd16(rd32(arg2 + 0x14b4u)) == 0xau)
    {
        eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
        ecx = rd32(arg2 + 0x14b4u);
        goto L_101db39d;
    }
    eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
    ecx = rd32(arg2 + 0x14b4u);
    COW_AT(101db38f)
    if (eax == 2u)
    {
        eax = eax - 2u;
        goto L_101db39d;
    }
    eax = eax - 2u;
    COW_AT(101db394)
    if (eax != 2u) goto L_101db422;
    eax = eax - 2u;
L_101db39d: ;
    COW_AT(101db39d)
    if ((rd8(arg1 + 0x11u) & 0x40u) == 0u) goto L_101db422;
    COW_AT(101db3a3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t21 = cow_stdcall(g, COW_IMG(0x100f1080u), 0);
    t22 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = rd8(arg1 + 0x11u) & 3u;
    return (-(t21 != (rd8(arg1 + 0x11u) & 3u)) & 0x1fdfe0u) - 0x7fbfbfc0u;
L_101db3c8: ;
    COW_AT(101db3c8)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 6u;
    edx = rd32(COW_IMG(0x103601bcu));
L_101db3d7: ;
    COW_AT(101db3d7)
    zf = !(eax & 1u);
    goto L_101db3d9;
L_101db3ea: ;
    COW_AT(101db3ea)
    ecx = rd32(COW_IMG(0x103601bcu));
    edx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 5u & 1u);
    goto L_101db3d9;
L_101db3fe: ;
    COW_AT(101db3fe)
    ecx = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u;
    zf = !(rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 4u & 1u);
    goto L_101db3d9;
L_101db411: ;
    COW_AT(101db411)
    eax = rd32(rd32(COW_IMG(0x103601bcu)) + 0xb4u) >> 3u;
    edx = rd32(COW_IMG(0x103601bcu));
    goto L_101db3d7;
L_101db422: ;
    COW_AT(101db422)
    if (ebx > 0x10u) goto L_101db5d3;
    COW_AT(101db42b)
    t23 = rd32(COW_IMG(0x101db63cu) + rd8(COW_IMG(0x101db64cu) + ebx) * 4u);
    switch (t23 - RD)
    {
    case 0x101db43au: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db43a;
    case 0x101db4e9u: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db4e9;
    case 0x101db5b7u: eax = rd8(COW_IMG(0x101db64cu) + ebx); goto L_101db5b7;
    case 0x101db5d3u: goto L_101db5d3;
    default: rt_fatal(g, COW_IMG(0x101db433u), "switch");
    }
    return 0;
L_101db43a: ;
    COW_AT(101db43a)
    wr32(sp0 - 0x1cu, 0u);
    t39 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x20u, t39);
    g->ebx = ebx;
    g->eax = eax;
    t40 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x18u;
    t41 = cow_fastcall(g, COW_IMG(0x10131f10u), t40, edx, 2, t39, 0u);
    t42 = g->ecx;
    t43 = g->edx;
    if ((uint8_t)t41 != 0u)
    {
        edx = t43;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t42;
    edx = t43;
    COW_AT(101db44f)
L_101db453: ;
    COW_AT(101db453)
    if (esi == 8u) goto L_101db536;
    COW_AT(101db45c)
    if ((int32_t)esi <= 9) goto L_101db46a;
    COW_AT(101db461)
    if ((int32_t)esi <= 16) goto L_101db527;
L_101db46a: ;
    COW_AT(101db46a)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    wr32(sp0 - 0x28u, 0u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t44 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 8u, 4, 0u, sp0 + 8u, sp0 - 8u, 1u);
    t45 = g->ecx;
    t46 = g->edx;
    if ((uint8_t)t44 == 0u)
    {
        ecx = t45;
        goto L_101db4a3;
    }
    ecx = t45;
    edx = t46;
    COW_AT(101db484)
    if ((uint8_t)arg2 != rd8(arg1 + 2u)) goto L_101db4a3;
    edx = (edx & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101db491)
    if ((uint8_t)rd32(sp0 - 8u) == ebx)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = (uint8_t)rd32(sp0 - 8u);
L_101db4a3: ;
    COW_AT(101db4a3)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, sp0 + 8u);
    wr32(sp0 - 0x28u, 0u);
    g->eax = sp0 + 8u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x18u;
    t47 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 + 8u, sp0 - 8u, 2u);
    t48 = g->ecx;
    t49 = g->edx;
    if ((uint8_t)t47 == 0u)
    {
        ecx = t48;
        edx = t49;
        goto L_101db527;
    }
    eax = t47;
    ecx = t48;
    edx = t49;
    COW_AT(101db4c1)
    if ((uint8_t)arg2 != rd8(arg1 + 2u))
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
        goto L_101db527;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101db4cc)
    if ((uint8_t)rd32(sp0 - 8u) != ebx)
    {
        edx = (uint8_t)rd32(sp0 - 8u);
        goto L_101db527;
    }
    edx = (uint8_t)rd32(sp0 - 8u);
    COW_AT(101db4da)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80404040u;
L_101db4e9: ;
    COW_AT(101db4e9)
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0xffffffffu);
    t29 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x24u, t29);
    g->edx = t29;
    t30 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 0x18u;
    t31 = cow_call_regs(g, COW_IMG(0x101334c0u), eax, t30, g->edx, 0, 3, t29, 0xffffffffu, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint8_t)t31 != 0u)
    {
        edx = t33;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t32;
    edx = t33;
    COW_AT(101db504)
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x20u, 0xffffffffu);
    t34 = (ecx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x24u, t34);
    g->edx = edx;
    t35 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 0x18u;
    t36 = cow_call_regs(g, COW_IMG(0x101334c0u), arg1, t35, g->edx, 0, 3, t34, 0xffffffffu, 9u);
    t37 = g->ecx;
    t38 = g->edx;
    if ((uint8_t)t36 != 0u)
    {
        edx = t38;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t37;
    edx = t38;
    COW_AT(101db523)
L_101db527: ;
    COW_AT(101db527)
    if (esi == 8u) goto L_101db536;
    COW_AT(101db52c)
    if ((int32_t)esi <= 9) goto L_101db566;
    COW_AT(101db531)
    if ((int32_t)esi > 16) goto L_101db566;
L_101db536: ;
    COW_AT(101db536)
    if (rd32(arg2 + 0x14d0u) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd32(arg2 + 0x14d0u);
    COW_AT(101db544)
    if (rd16(eax) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    COW_AT(101db54e)
    if (rd32(arg2 + 0x14d8u) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd32(arg2 + 0x14d8u);
    COW_AT(101db55c)
    if (rd16(eax) == 0u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
L_101db566: ;
    COW_AT(101db566)
    if (esi != 2u)
    {
        eax = esi - 2u;
        goto L_101db593;
    }
    COW_AT(101db56d)
    if (rd16(rd32(arg2 + 0x14b4u)) == 0xau)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = rd16(rd32(arg2 + 0x14b4u)) - 0xau;
    ecx = rd32(arg2 + 0x14b4u);
    COW_AT(101db581)
    if (eax == 2u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = eax - 2u;
    COW_AT(101db58a)
    if (eax == 2u)
    {
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    eax = eax - 2u;
L_101db593: ;
    COW_AT(101db593)
    if (rd8(rd32(COW_IMG(0x10663468u)) + 0x70u) != 0u)
    {
        edx = rd32(COW_IMG(0x10663468u));
        goto L_101db609;
    }
    edx = rd32(COW_IMG(0x10663468u));
    COW_AT(101db5a0)
    if (ebx - 1u > 8u) goto L_101db5f2;
    eax = ebx - 1u;
    COW_AT(101db5a8)
    t50 = rd32(COW_IMG(0x101db660u) + rd8(COW_IMG(0x101db668u) + eax) * 4u);
    switch (t50 - RD)
    {
    case 0x101db3dbu: loc_c = rd32(sp0 - 0xcu); loc_10 = rd32(sp0 - 0x10u); loc_14 = rd32(sp0 - 0x14u); loc_18 = rd32(sp0 - 0x18u); goto L_101db3db;
    case 0x101db5f2u: ecx = rd8(COW_IMG(0x101db668u) + eax); goto L_101db5f2;
    default: rt_fatal(g, COW_IMG(0x101db5b0u), "switch");
    }
    return 0;
L_101db5b7: ;
    COW_AT(101db5b7)
    wr32(sp0 - 0x1cu, ebx);
    t24 = (edx & 0xffffff00u) | rd8(arg1 + 2u);
    wr32(sp0 - 0x20u, t24);
    g->ebx = ebx;
    g->eax = eax;
    t25 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x18u;
    t26 = cow_fastcall(g, COW_IMG(0x10131f10u), t25, t24, 2, t24, ebx);
    t27 = g->ecx;
    t28 = g->edx;
    if ((uint8_t)t26 != 0u)
    {
        edx = t28;
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_101db3db;
    }
    ecx = t27;
    edx = t28;
    COW_AT(101db5cf)
L_101db5d3: ;
    COW_AT(101db5d3)
    if (ebx == 0u) goto L_101db453;
    COW_AT(101db5db)
    if ((int32_t)ebx <= 4) goto L_101db527;
    COW_AT(101db5e4)
    if ((int32_t)ebx > 7) goto L_101db527;
    COW_AT(101db5ed)
    goto L_101db453;
L_101db5f2: ;
    COW_AT(101db5f2)
    if (esi - 1u > 8u) goto L_101db609;
    eax = esi - 1u;
    COW_AT(101db5fa)
    t51 = rd32(COW_IMG(0x101db674u) + rd8(COW_IMG(0x101db67cu) + eax) * 4u);
    switch (t51 - RD)
    {
    case 0x101db3dbu: edx = rd8(COW_IMG(0x101db67cu) + eax); loc_c = rd32(sp0 - 0xcu); loc_10 = rd32(sp0 - 0x10u); loc_14 = rd32(sp0 - 0x14u); loc_18 = rd32(sp0 - 0x18u); goto L_101db3db;
    case 0x101db609u: edx = rd8(COW_IMG(0x101db67cu) + eax); goto L_101db609;
    default: rt_fatal(g, COW_IMG(0x101db602u), "switch");
    }
    return 0;
L_101db609: ;
    COW_AT(101db609)
    if (rd8(rd32(sp0 - 4u) + 4u) == 0u) goto L_101db62d;
    eax = rd32(sp0 - 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 - 4u) + 4u);
    COW_AT(101db614)
    if (rd8(eax + 5u) != rd8(arg1 + 2u)) goto L_101db62d;
    COW_AT(101db61e)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80804020u;
L_101db62d: ;
    COW_AT(101db62d)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0x80808080u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101db220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101db24eu:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db252u:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db258u:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db25au:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db25fu:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db268u:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db27au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db289u:
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
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebp = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db29fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db2b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2c5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2c9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db2f9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db302u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db30bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db314u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db31du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db326u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db32fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db338u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db33du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db342u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db358u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db35du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db371u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db376u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db37fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db38fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db394u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db39du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db3a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db3c8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db3d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db3d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db3dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db3eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db3feu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db411u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db422u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db42bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db43au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db44fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db453u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db45cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db461u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db46au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db484u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db491u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db4a3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db4c1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db4ccu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db4dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x24u, sp0 + 8u);
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101db4e9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db504u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db523u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db527u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db52cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db531u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db536u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db544u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db54eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db55cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db566u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db56du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db581u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db58au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db593u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db5a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db5a8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db5b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5edu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101db5f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db5fau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db609u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db614u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101db61eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101db62du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101db220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101db220(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
