/* f_0x100157e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100157e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t t95;
    uint32_t t96;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10015824u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015824;
    case 0x1001587au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001587a;
    case 0x100158aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100158aa;
    case 0x100158b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100158b1;
    case 0x100158b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100158b6;
    case 0x100158cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100158cb;
    case 0x100158d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100158d8;
    case 0x10015919u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015919;
    case 0x10015926u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015926;
    case 0x1001593au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001593a;
    case 0x10015941u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015941;
    case 0x1001594au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001594a;
    case 0x10015963u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015963;
    case 0x1001596au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1001596a;
    case 0x10015973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015973;
    case 0x10015978u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015978;
    case 0x100159b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100159b1;
    case 0x100159deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100159de;
    case 0x100159fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_100159fa;
    case 0x10015a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015a03;
    case 0x10015a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015a0c;
    case 0x10015a15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015a15;
    case 0x10015a2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015a2d;
    case 0x10015a3au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_10015a3a;
    case 0x10015a3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_10015a3f;
    case 0x10015a4du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_10015a4d;
    case 0x10015a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_c = rd32(sp0 - 0xcu); goto E_10015a57;
    case 0x10015a95u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_10015a95;
    default: break;
    }
#endif

    COW_AT(100157e0)
    t1 = rd32(COW_IMG(0x104569b4u));
    t2 = rd32(COW_IMG(0x104569b0u));
    wr32(COW_IMG(0x10662dccu), 0u);
    wr32(COW_IMG(0x10456a28u), COW_IMG(0x10456984u));
    wr32(COW_IMG(0x10456a2cu), t1);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t3 = cow_call_regs(g, COW_IMG(0x10001e00u), t1, t2, g->edx, 1, 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        ecx = t4;
        edx = t5;
        loc_c = 0x88770000u;
    }
    else
    {
    COW_AT(10015824)
        t6 = rd32(COW_IMG(0x104569d0u));
        wr32(rd32(COW_IMG(0x10456a28u)) + 8u, t6);
        t7 = rd32(COW_IMG(0x10456a28u));
        t8 = rd32(COW_IMG(0x104569d4u));
        wr32(t7 + 4u, t8);
        g->eax = t6;
        g->esp = sp0 - 0x1cu;
        t9 = cow_stdcall(g, COW_IMG(0x103107beu), 0);
        wr32(rd32(COW_IMG(0x10456a28u)) + 0xcu, t9);
        t10 = ((rd32(COW_IMG(0x104569f4u)) << 7u ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u)) & 0x80u) ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        t11 = rd32(COW_IMG(0x10456a28u));
        t12 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        wr32(t11 + 0x18u, t10);
        g->eax = t11;
        g->ecx = t12;
        g->edx = t10;
        t13 = cow_stdcall(g, COW_IMG(0x10002b20u), 0);
        t14 = g->ecx;
        t15 = g->edx;
        if ((uint8_t)t13 == 0u)
        {
            ecx = t14;
            edx = t15;
            loc_c = 0x88770000u;
        }
        else
        {
    COW_AT(1001587a)
            t16 = ((rd32(COW_IMG(0x104569f4u)) << 7u ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u)) & 0x80u) ^ rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            t17 = rd32(rd32(COW_IMG(0x10456a28u)) + 0x18u);
            wr32(rd32(COW_IMG(0x10456a28u)) + 0x18u, t16);
            g->eax = rd32(COW_IMG(0x104569d4u));
            g->ecx = t17;
            t18 = rd32(COW_IMG(0x104569d4u));
            g->esp = sp0 - 0x1cu;
            t19 = cow_call_regs(g, COW_IMG(0x100160c0u), g->eax, g->ecx, t16, 1, 1, t18);
            t20 = g->ecx;
            t21 = g->edx;
            if ((uint8_t)t19 != 0u)
            {
                eax = t19;
                ecx = t20;
                edx = t21;
    COW_AT(100158b1)
                loc_20 = COW_IMG(0x1035055eu);
            }
            else
            {
                eax = t19;
                ecx = t20;
                edx = t21;
    COW_AT(100158aa)
                loc_20 = COW_IMG(0x1035055cu);
            }
    COW_AT(100158b6)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t22 = cow_cdecl(g, COW_IMG(0x10016490u), 1, loc_20);
            t23 = g->ecx;
            t24 = g->edx;
            g->edx = t24;
            t25 = cow_thiscall(g, COW_IMG(0x10015cb0u), t23, 0);
            t26 = g->ecx;
            t27 = g->edx;
            if ((uint8_t)t25 == 0u)
            {
                ecx = t26;
                edx = t27;
                loc_c = 0x88770000u;
            }
            else
            {
                eax = t25;
                ecx = t26;
                edx = t27;
    COW_AT(100158cb)
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x1cu;
                t28 = cow_call_regs(g, COW_IMG(0x10015f80u), g->eax, g->ecx, edx, 1, 0);
                t29 = g->ecx;
                t30 = g->edx;
                if ((uint8_t)t28 == 0u)
                {
                    ecx = t29;
                    edx = t30;
                    loc_c = 0x88770000u;
                }
                else
                {
    COW_AT(100158d8)
                    g->eax = rd32(COW_IMG(0x10456a7cu));
                    t31 = rd32(COW_IMG(0x10456a7cu));
                    t32 = rd32(COW_IMG(0x104569b8u));
                    t33 = rd32(COW_IMG(0x104569acu));
                    t34 = rd32(COW_IMG(0x10456a58u));
                    t35 = rd32(COW_IMG(0x10456c08u));
                    g->esp = sp0 - 0x1cu;
                    t36 = cow_call_regs(g, COW_IMG(0x100165b0u), g->eax, t32, t33, 1, 7, COW_IMG(0x10350450u), COW_IMG(0x10350350u), t33, t32, t31, t34, t35);
                    t37 = g->ecx;
                    t38 = g->edx;
                    wr32(COW_IMG(0x104569a8u), t36);
                    if (t36 == 0u)
                    {
                        ecx = t37;
                        edx = t38;
                        loc_c = 0x88770000u;
                    }
                    else
                    {
                        eax = t36;
                        ecx = t37;
                        edx = t38;
                        esi = t34;
                        edi = t35;
    COW_AT(10015919)
                        if (rd8(COW_IMG(0x104569ecu)) != 1u)
                        {
                            ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x104569ecu));
                            ebp = eax;
                        }
                        else
                        {
                            ebp = eax;
    COW_AT(10015926)
                            g->eax = eax;
                            t39 = rd32(COW_IMG(0x104569b8u));
                            g->esp = sp0 - 0x1cu;
                            t40 = cow_thiscall_cdecl(g, COW_IMG(0x10016e40u), t39, 2, eax, t39);
                            t41 = g->ecx;
                            if ((uint8_t)t40 != 0u)
                            {
                                ecx = t41;
    COW_AT(10015941)
                                if (rd8(COW_IMG(0x104569ecu)) == 1u)
                                {
    COW_AT(1001594a)
                                    g->eax = rd32(COW_IMG(0x104569a8u));
                                    g->edx = rd32(COW_IMG(0x104569b8u));
                                    t42 = rd32(COW_IMG(0x104569a8u));
                                    t43 = rd32(COW_IMG(0x104569b8u));
                                    g->esp = sp0 - 0x1cu;
                                    t44 = cow_thiscall_cdecl(g, COW_IMG(0x10016f60u), ecx, 2, t42, t43);
                                    t45 = g->ecx;
                                    t46 = g->edx;
                                    if ((uint8_t)t44 != 0u)
                                    {
                                        eax = t44;
                                        ecx = t45;
                                        edx = t46;
    COW_AT(1001596a)
                                        if (rd8(COW_IMG(0x104569ecu)) == 1u)
                                        {
    COW_AT(10015973)
                                            g->esp = sp0 - 0x1cu;
                                            cow_fastcall(g, COW_IMG(0x10016f40u), ecx, edx, 0);
                                            t47 = g->ecx;
                                            ecx = t47;
                                        }
                                    }
                                    else
                                    {
                                        eax = t44;
                                        ecx = t45;
    COW_AT(10015963)
                                        wr8(COW_IMG(0x104569ecu), (uint8_t)eax);
                                    }
                                }
                            }
                            else
                            {
                                eax = t40;
                                ecx = t41;
    COW_AT(1001593a)
                                wr8(COW_IMG(0x104569ecu), (uint8_t)eax);
                            }
                        }
    COW_AT(10015978)
                        t48 = (rd32(sp0 - 8u) & 0xffffff00u) | rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x58u) != 0u;
                        t49 = (rd32(sp0 - 4u) & 0xffffff00u) | rd32(COW_IMG(0x10456a7cu)) == 0u;
                        g->eax = (rd32(COW_IMG(0x10456a7cu)) & 0xffffff00u) | rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x58u) != 0u;
                        g->edx = rd32(COW_IMG(0x103d3cb8u));
                        t50 = rd32(COW_IMG(0x10456a7cu));
                        t51 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x58u);
                        t52 = rd32(COW_IMG(0x103d3cb8u));
                        g->esp = sp0 - 0x1cu;
                        t53 = cow_thiscall_cdecl(g, COW_IMG(0x10002f20u), t48, 5, ebp, esi, edi, t49, t48);
                        t54 = g->ecx;
                        t55 = g->edx;
                        if ((uint8_t)t53 != 0u)
                        {
                            ecx = t54;
                            edx = t55;
                            ebx = t49;
                            goto L_10015a03;
                        }
                        eax = t53;
                        ecx = t54;
                        edx = t55;
                        ebx = t49;
    COW_AT(100159b1)
                        g->eax = eax;
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t56 = cow_stdcall(g, COW_IMG(0x10003040u), 0);
                        t57 = g->ecx;
                        t58 = g->edx;
                        g->edx = t58;
                        cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0u);
                        t59 = g->edx;
                        g->eax = rd32(COW_IMG(0x10456a58u));
                        g->edx = t59;
                        t60 = rd32(COW_IMG(0x10456a58u));
                        t61 = rd32(COW_IMG(0x10456c08u));
                        g->esp = sp0 - 0x20u;
                        t62 = cow_thiscall_cdecl(g, COW_IMG(0x10002f20u), t61, 5, ebp, t60, t61, ebx, 1u);
                        t63 = g->ecx;
                        t64 = g->edx;
                        if ((uint8_t)t62 == 0u)
                        {
                            ecx = t63;
                            edx = t64;
                            loc_c = 0x88770000u;
                            goto L_10015a2d;
                        }
                        ecx = t63;
    COW_AT(100159de)
                        t65 = rd32(COW_IMG(0x103d3cb8u));
                        wr32(t65 + 0x58u, 1u);
                        if (rd8(rd32(COW_IMG(0x103d3cbcu)) + 0x474u) == 0u)
                        {
                            eax = rd32(COW_IMG(0x103d3cbcu));
                            ecx = (ecx & 0xffffff00u) | rd8(rd32(COW_IMG(0x103d3cbcu)) + 0x474u);
                            edx = t65;
                            goto L_10015a95;
                        }
                        edx = t65;
    COW_AT(100159fa)
                        t66 = rd32(COW_IMG(0x103d3cb8u));
                        wr32(t66 + 0x5cu, 1u);
                        ecx = t66;
L_10015a03: ;
    COW_AT(10015a03)
                        if (rd32(COW_IMG(0x10456a88u)) == 0u)
                        {
                            eax = rd32(COW_IMG(0x10456a88u));
                            goto L_10015a15;
                        }
                        eax = rd32(COW_IMG(0x10456a88u));
    COW_AT(10015a0c)
                        g->eax = eax;
                        g->esp = sp0 - 0x1cu;
                        t69 = cow_fastcall(g, COW_IMG(0x10016150u), ecx, edx, 0);
                        t70 = g->ecx;
                        t71 = g->edx;
                        if ((uint8_t)t69 == 0u)
                        {
                            ecx = t70;
                            edx = t71;
                            loc_c = 0x88770000u;
                            goto L_10015a2d;
                        }
                        eax = t69;
                        ecx = t70;
                        edx = t71;
L_10015a15: ;
    COW_AT(10015a15)
                        g->ebx = ebx;
                        g->ecx = ecx;
                        g->esp = sp0 - 0x1cu;
                        cow_stdcall(g, COW_IMG(0x10002460u), 0);
                        t72 = g->ecx;
                        g->eax = arg1;
                        t73 = cow_fastcall(g, COW_IMG(0x10015ab0u), t72, arg2, 2, arg1, arg2);
                        t74 = g->ecx;
                        t75 = g->edx;
                        ecx = t74;
                        edx = t75;
                        loc_c = t73;
                    }
                }
            }
        }
    }
L_10015a2d: ;
    COW_AT(10015a2d)
    if (rd32(COW_IMG(0x10456a88u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a88u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a88u));
    COW_AT(10015a3a)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t76 = cow_stdcall(g, COW_IMG(0x100161a0u), 0);
        t77 = g->ecx;
        t78 = g->edx;
        eax = t76;
        ecx = t77;
        edx = t78;
    }
    COW_AT(10015a3f)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t79 = cow_stdcall(g, COW_IMG(0x10003040u), 0);
    t80 = g->ecx;
    t81 = g->edx;
    if (rd8(COW_IMG(0x104569ecu)) != 1u)
    {
        eax = t79;
    }
    else
    {
        eax = t79;
        ecx = t80;
        edx = t81;
    COW_AT(10015a4d)
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t82 = cow_fastcall(g, COW_IMG(0x10016f10u), ecx, edx, 0);
        t83 = g->ecx;
        t84 = g->edx;
        t85 = cow_fastcall(g, COW_IMG(0x10016ff0u), t83, t84, 0);
        eax = t85;
    }
    COW_AT(10015a57)
    g->eax = eax;
    t86 = rd32(COW_IMG(0x104569a8u));
    t87 = rd32(COW_IMG(0x104569acu));
    g->esp = sp0 - 0xcu;
    t88 = cow_call_regs(g, COW_IMG(0x10016820u), g->eax, t86, t87, 1, 4, COW_IMG(0x10350450u), COW_IMG(0x10350350u), t87, t86);
    t89 = g->ecx;
    t90 = g->edx;
    wr32(COW_IMG(0x104569a8u), 0u);
    g->ecx = t89;
    g->esp = sp0 - 0x1cu;
    t91 = cow_call_regs(g, COW_IMG(0x10015f50u), g->eax, g->ecx, t90, 1, 0);
    t92 = g->ecx;
    t93 = g->edx;
    g->ecx = t92;
    t94 = cow_call_regs(g, COW_IMG(0x10002bc0u), g->eax, g->ecx, t93, 1, 0);
    t95 = g->ecx;
    t96 = g->edx;
    cow_fastcall(g, COW_IMG(0x10001e10u), t95, t96, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return loc_c;
L_10015a95: ;
    COW_AT(10015a95)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x100164c0u), 1, 0x7d1u);
    t67 = g->ecx;
    t68 = g->edx;
    ecx = t67;
    edx = t68;
    loc_c = 0x88770000u;
    goto L_10015a2d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100157e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10015824u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x1001587au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100158aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100158b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100158b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100158cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100158d8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015919u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015926u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x1001593au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015941u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x1001594au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x1001596au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015973u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015978u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100159b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100159deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->esi = 1u;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x100159fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->esi = 1u;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015a03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015a0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    case 0x10015a15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10015a2du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x10015a3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10015a3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10015a4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10015a57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10015a95u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0xcu, 0x88770000u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100157e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100157e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
