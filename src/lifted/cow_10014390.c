/* f_0x10014390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10014390(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t t1;
    uint32_t t10;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t110;
    uint32_t t111;
    uint32_t t112;
    uint32_t t113;
    uint32_t t114;
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
    uint32_t t8;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 136u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100143abu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143ab;
    case 0x100143b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143b5;
    case 0x100143cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143cf;
    case 0x100143deu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143de;
    case 0x100143e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143e3;
    case 0x100143edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_100143ed;
    case 0x10014407u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_10014407;
    case 0x10014434u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_10014434;
    case 0x10014439u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_10014439;
    case 0x10014443u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_10014443;
    case 0x1001445du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_1001445d;
    case 0x1001448au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->esi = rd32(sp0 - 0x6cu); goto E_1001448a;
    case 0x1001449bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_1001449b;
    case 0x100144a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; in_ebx = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebp = rd32(sp0 - 0x68u); g->ebp = rd32(sp0 - 0x68u); g->ebx = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_100144a9;
    case 0x1001451bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1001451b;
    case 0x10014540u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10014540;
    case 0x1001454du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_1001454d;
    case 0x1001455eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_1001455e;
    case 0x10014568u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10014568;
    case 0x1001456fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_1001456f;
    case 0x10014583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_10014583;
    case 0x100145acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100145ac;
    case 0x100145c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_100145c2;
    case 0x100145d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100145d3;
    case 0x100145e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100145e1;
    case 0x100145ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100145eb;
    case 0x100146c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100146c3;
    case 0x100146e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100146e5;
    case 0x10014725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014725;
    case 0x1001472fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001472f;
    case 0x1001473eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001473e;
    case 0x10014748u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014748;
    case 0x1001475au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_1001475a;
    case 0x10014766u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014766;
    case 0x10014776u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014776;
    case 0x10014782u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014782;
    case 0x10014794u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10014794;
    case 0x100147a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100147a0;
    case 0x100147b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100147b0;
    case 0x100147bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100147bc;
    case 0x1001482cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001482c;
    case 0x1001484eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001484e;
    case 0x1001485au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001485a;
    case 0x1001486au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001486a;
    case 0x10014876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10014876;
    case 0x1001488bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001488b;
    case 0x1001489du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001489d;
    case 0x100148b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100148b0;
    case 0x100148c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100148c2;
    case 0x100148d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100148d7;
    case 0x100148e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100148e9;
    case 0x10014900u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10014900;
    case 0x10014912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10014912;
    case 0x10014936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10014936;
    case 0x10014962u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10014962;
    case 0x1001496du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1001496d;
    case 0x10014995u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); loc_64 = rd32(sp0 - 0x64u); goto E_10014995;
    case 0x1001499eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1001499e;
    default: break;
    }
#endif

    COW_AT(10014390)
    wr32(sp0 - 0x68u, in_ebp);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x64u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x6cu;
    t1 = cow_thiscall(g, COW_IMG(0x100db140u), rd32(COW_IMG(0x103601bcu)), 0);
    t2 = g->edx;
    if (t1 != 0xau)
    {
        eax = t1;
        edx = t2;
        goto L_100143de;
    }
    eax = t1;
    edx = t2;
    COW_AT(100143ab)
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
    COW_AT(100143b5)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t3 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(sp0 - 0x70u, esi);
        t6 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t6;
    }
    COW_AT(100143cf)
    wr32(self + 0x44u, 0xcu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_100143de: ;
    COW_AT(100143de)
    if (eax != 0xbu) goto L_10014434;
    COW_AT(100143e3)
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
    COW_AT(100143ed)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t7 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x70u, esi);
        cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
    }
    COW_AT(10014407)
    wr8(sp0 - 0x62u, 0u);
    wr8(sp0 - 0x63u, 0u);
    wr8(sp0 - 0x64u, 0u);
    wr8(sp0 - 0x61u, 0u);
    t10 = rd32(sp0 - 0x64u);
    wr32(self + 0x44u, 0xdu);
    wr32(self + 0x334u, t10);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (t10 & 0xffffff00u) | 1u;
L_10014434: ;
    COW_AT(10014434)
    if (eax != 0xeu) goto L_1001448a;
    COW_AT(10014439)
    if (rd32(COW_IMG(0x106631d4u)) != 0u)
    {
        esi = rd32(COW_IMG(0x106631d4u));
    COW_AT(10014443)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x6cu;
        t11 = cow_thiscall(g, COW_IMG(0x101d2f00u), esi, 0);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x70u, esi);
        t14 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        wr32(COW_IMG(0x106631d4u), 0u);
        eax = t14;
    }
    COW_AT(1001445d)
    wr8(sp0 - 0x62u, 0u);
    wr8(sp0 - 0x63u, 0u);
    wr8(sp0 - 0x64u, 0u);
    wr8(sp0 - 0x61u, 0u);
    t15 = rd32(sp0 - 0x64u);
    wr32(self + 0x44u, 0xbu);
    wr32(self + 0x334u, t15);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
L_1001448a: ;
    COW_AT(1001448a)
    wr32(sp0 - 0x70u, in_ebx);
    if (rd32(self + 0x50u) == 0u)
    {
        eax = rd32(self + 0x50u);
        loc_68 = in_ebp;
        loc_6c = in_esi;
        loc_64 = self;
        loc_70 = in_ebx;
    }
    else
    {
        eax = rd32(self + 0x50u);
    COW_AT(1001449b)
        if (rd32(COW_IMG(0x10631f24u)) == 0u)
        {
            loc_68 = in_ebp;
            loc_6c = in_esi;
            loc_64 = self;
            loc_70 = in_ebx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x10631f24u));
    COW_AT(100144a9)
            wr32(sp0 - 0x74u, eax + 0x44u);
            wr32(sp0 - 0x78u, sp0 - 0x60u);
            g->esp = sp0 - 0x70u;
            cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x60u, eax + 0x44u);
            wr32(sp0 - 0x74u, sp0 - 0x4cu);
            wr32(sp0 - 0x78u, 0x42c80000u);
            t16 = rd32(sp0 - 0x58u);
            wr32(sp0 - 0x7cu, t16);
            t17 = rd32(sp0 - 0x5cu);
            wr32(sp0 - 0x80u, t17);
            t18 = rd32(sp0 - 0x60u);
            wr32(sp0 - 0x84u, t18);
            g->eax = t18;
            g->edx = t17;
            t19 = cow_thiscall(g, COW_IMG(0x101813f0u), rd32(COW_IMG(0x10631f24u)), 5, t18, t17, t16, 0x42c80000u, sp0 - 0x4cu);
            t20 = g->edx;
            g->edx = t20;
            t21 = cow_thiscall(g, COW_IMG(0x10179390u), rd32(COW_IMG(0x10631f24u)), 0);
            t22 = g->edx;
            g->edx = t22;
            t23 = cow_thiscall(g, COW_IMG(0x10179420u), rd32(COW_IMG(0x10631f24u)), 0);
            t24 = g->edx;
            wr32(sp0 - 0x74u, t23);
            g->ebx = 1u;
            g->ebp = self;
            t25 = cow_fastcall(g, COW_IMG(0x1018b5e0u), rd32(COW_IMG(0x1065cb04u)), t24, 1, t23);
            t26 = g->edx;
            g->edx = t26;
            t27 = cow_thiscall(g, COW_IMG(0x10179410u), rd32(COW_IMG(0x10631f24u)), 0);
            t28 = g->edx;
            g->edx = t28;
            t29 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
            t30 = g->edx;
            if (t29 == 0u)
            {
                eax = t29;
                edx = t30;
                loc_68 = in_ebp;
                loc_6c = in_esi;
                loc_64 = self;
                loc_70 = in_ebx;
            }
            else
            {
                eax = t29;
                esi = t29;
    COW_AT(1001451b)
                g->eax = eax;
                g->edx = rd32(esi);
                t31 = rd32(esi);
                g->esp = sp0 - 0x70u;
                t32 = cow_thiscall(g, rd32(t31 + 0x1bcu), esi, 0);
                t33 = g->edx;
                wr32(sp0 - 0x74u, t32);
                g->eax = rd32(esi);
                g->edx = t33;
                t34 = rd32(esi);
                g->esp = sp0 - 0x74u;
                t35 = cow_thiscall(g, rd32(t34 + 0x1bcu), esi, 0);
                t36 = g->edx;
                wr32(sp0 - 0x78u, t35);
                g->edx = t36;
                g->esp = sp0 - 0x70u;
                t37 = cow_thiscall(g, COW_IMG(0x10181540u), rd32(COW_IMG(0x10631f24u)), 2, t35, rd32(sp0 - 0x74u));
                t38 = g->edx;
                if ((int32_t)t37 < 0)
                {
                    eax = t37;
                    edx = t38;
                    loc_68 = rd32(sp0 - 0x68u);
                    loc_6c = rd32(sp0 - 0x6cu);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_70 = rd32(sp0 - 0x70u);
                }
                else
                {
                    eax = t37;
                    edx = t38;
    COW_AT(10014540)
                    wr32(sp0 - 0x74u, eax);
                    wr32(sp0 - 0x78u, 1u);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x70u;
                    t39 = cow_thiscall(g, COW_IMG(0x10178a20u), rd32(COW_IMG(0x10631f24u)), 2, 1u, eax);
                    t40 = g->edx;
                    eax = t39;
                    edx = t40;
                    loc_68 = rd32(sp0 - 0x68u);
                    loc_6c = rd32(sp0 - 0x6cu);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_70 = rd32(sp0 - 0x70u);
                }
            }
        }
    }
    COW_AT(1001454d)
    if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        edi = in_edi;
        goto L_10014995;
    }
    ecx = rd32(COW_IMG(0x104568fcu));
    COW_AT(1001455e)
    if (rd32(COW_IMG(0x1045697cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1045697cu));
        goto L_100145c2;
    }
    eax = rd32(COW_IMG(0x1045697cu));
    COW_AT(10014568)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edi = in_edi;
        goto L_10014995;
    }
    eax = eax - 1u;
    COW_AT(1001456f)
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t41 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t41 == 0u)
    {
        eax = t41;
        edi = in_edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10014995;
    }
    eax = t41;
    esi = t41;
    COW_AT(10014583)
    g->eax = eax;
    g->edx = rd32(esi);
    t42 = rd32(esi);
    g->esp = sp0 - 0x70u;
    t43 = cow_thiscall(g, rd32(t42 + 0x1bcu), esi, 0);
    t44 = g->edx;
    wr32(sp0 - 0x74u, t43);
    g->eax = rd32(esi);
    g->edx = t44;
    t45 = rd32(esi);
    g->esp = sp0 - 0x74u;
    t46 = cow_thiscall(g, rd32(t45 + 0x1bcu), esi, 0);
    t47 = g->edx;
    wr32(sp0 - 0x78u, t46);
    g->edx = t47;
    g->esp = sp0 - 0x70u;
    t48 = cow_thiscall(g, COW_IMG(0x10181540u), rd32(COW_IMG(0x10631f24u)), 2, t46, rd32(sp0 - 0x74u));
    t49 = g->edx;
    if ((int32_t)t48 < 0)
    {
        eax = t48;
        edi = in_edi;
        loc_68 = rd32(sp0 - 0x68u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        goto L_10014995;
    }
    eax = t48;
    edx = t49;
    COW_AT(100145ac)
    wr32(sp0 - 0x74u, eax);
    wr32(sp0 - 0x78u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    t50 = cow_thiscall(g, COW_IMG(0x10178a20u), rd32(COW_IMG(0x10631f24u)), 2, 1u, eax);
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = in_edi;
    g->ebp = rd32(sp0 - 0x68u);
    return t50 & 0xffffff00u;
L_100145c2: ;
    COW_AT(100145c2)
    wr32(sp0 - 0x74u, 0x2acu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x70u;
    t51 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x2acu);
    t52 = g->edx;
    if (t51 == 0u)
    {
        eax = t51;
    COW_AT(100145e1)
        wr32(COW_IMG(0x10480af0u), 0u);
    }
    else
    {
        eax = t51;
        edx = t52;
    COW_AT(100145d3)
        g->eax = eax;
        g->esp = sp0 - 0x70u;
        t53 = cow_thiscall(g, COW_IMG(0x1008a120u), eax, 0);
        wr32(COW_IMG(0x10480af0u), t53);
        eax = t53;
    }
    COW_AT(100145eb)
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x74u, sp0 - 0x40u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x78u, COW_IMG(0x1035032cu));
    wr32(sp0 - 0x38u, 0u);
    wr16(sp0 - 0x40u, 1u);
    wr32(sp0 - 0x34u, 0u);
    wr16(sp0 - 0x3eu, 1u);
    wr32(sp0 - 0x30u, 0u);
    wr16(sp0 - 0x3cu, 1u);
    wr16(sp0 - 0x2cu, 0u);
    wr16(sp0 - 0x3au, 1u);
    wr16(sp0 - 0x38u, 1u);
    wr16(sp0 - 0x36u, 1u);
    wr16(sp0 - 0x34u, 1u);
    wr16(sp0 - 0x32u, 1u);
    g->esp = sp0 - 0x70u;
    cow_thiscall(g, COW_IMG(0x100abc20u), sp0 - 0x28u, 2, COW_IMG(0x1035032cu), sp0 - 0x40u);
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x5cu, 0x3fc90fdbu);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0xc2c80000u);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    t54 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x40u);
    wr32(sp0 - 0x50u, t54);
    t55 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x44u);
    wr32(sp0 - 0x4cu, t55);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 4u);
    wr32(sp0 - 0x7cu, 0xcb8u);
    t56 = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x48u);
    wr32(sp0 - 0x48u, t56);
    g->eax = t56;
    g->edx = t55;
    g->esp = sp0 - 0x74u;
    t57 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xcb8u, 4u);
    t58 = g->edx;
    g->esp = sp0 - 0x70u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t57, t58, 0);
    t59 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t57 == 0u)
    {
        edx = t59;
    COW_AT(1001499e)
        ebp = self;
        esi = 0u;
        edi = in_edi;
    }
    else
    {
        esi = t57;
    COW_AT(100146c3)
        wr32(sp0 - 0x74u, 0u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        g->ebx = 1u;
        g->eax = sp0 - 0x50u;
        g->edx = sp0 - 0x60u;
        g->esp = sp0 - 0x70u;
        t60 = cow_thiscall(g, COW_IMG(0x100ab700u), esi, 4, sp0 - 0x50u, sp0 - 0x60u, sp0 - 0x28u, 0u);
        t61 = g->edx;
        if (t60 == 0u)
        {
            edx = t61;
            ebp = self;
            esi = t60;
            edi = in_edi;
        }
        else
        {
            eax = t60;
            esi = t60;
    COW_AT(100146e5)
            wr32(sp0 - 0x74u, in_edi);
            g->eax = eax;
            g->edx = rd32(esi);
            t62 = rd32(esi);
            g->esp = sp0 - 0x74u;
            t63 = cow_thiscall(g, rd32(t62 + 0x1bcu), esi, 0);
            t64 = g->ecx;
            t65 = g->edx;
            wr32(sp0 - 0x78u, t63);
            wr32(sp0 - 0x7cu, esi + 0x34u);
            g->edx = t65;
            cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x34u, t63);
            t66 = g->edx;
            g->eax = rd32(esi);
            g->edx = t66;
            t67 = rd32(esi);
            t68 = cow_thiscall(g, rd32(t67 + 0x1c0u), esi, 0);
            t69 = g->ecx;
            t70 = g->edx;
            wr32(sp0 - 0x78u, t68);
            wr32(sp0 - 0x7cu, esi + 0x44u);
            t71 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x44u, t68);
            d72 = (double)rdf32(esi + 0x44u);
            if ((cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = esi + 0x34u;
                edi = esi + 0x44u;
            }
            else
            {
                eax = cow_fsw(g, d72, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebx = esi + 0x34u;
                edi = esi + 0x44u;
    COW_AT(10014725)
                d73 = fr(g, (double)rdf32(edi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d73);
            }
    COW_AT(1001472f)
            if (!((double)rdf32(edi) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(1001473e)
                d74 = fr(g, (double)rdf32(edi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(edi, (float)d74);
            }
    COW_AT(10014748)
            d75 = (double)rdf32(esi + 0x48u);
            if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(1001475a)
                d76 = fr(g, (double)rdf32(esi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d76);
            }
    COW_AT(10014766)
            d77 = (double)rdf32(esi + 0x48u);
            if (!(d77 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d77, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10014776)
                d78 = fr(g, (double)rdf32(esi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x48u, (float)d78);
            }
    COW_AT(10014782)
            d79 = (double)rdf32(esi + 0x4cu);
            if ((cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d79, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10014794)
                d80 = fr(g, (double)rdf32(esi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d80);
            }
    COW_AT(100147a0)
            d81 = (double)rdf32(esi + 0x4cu);
            if (d81 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
    COW_AT(100147b0)
                d82 = fr(g, (double)rdf32(esi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(esi + 0x4cu, (float)d82);
            }
    COW_AT(100147bc)
            wr32(sp0 - 0x78u, ebx);
            wr32(esi + 0xe4u, rd32(edi));
            t83 = rd32(edi + 4u);
            wr32(esi + 0xe8u, t83);
            t84 = rd32(edi + 8u);
            wr32(esi + 0xecu, t84);
            t85 = rd32(edi + 0xcu);
            wr32(esi + 0xf0u, t85);
            g->esp = sp0 - 0x74u;
            cow_thiscall(g, COW_IMG(0x100a57c0u), esi, 1, ebx);
            wr32(sp0 - 0x78u, ebx);
            wr32(esi + 0xe4u, rd32(edi));
            t86 = rd32(edi + 4u);
            wr32(esi + 0xe8u, t86);
            t87 = rd32(edi + 8u);
            wr32(esi + 0xecu, t87);
            t88 = rd32(edi + 0xcu);
            wr32(esi + 0xf0u, t88);
            wr32(sp0 - 0x7cu, esi + 0x5c4u);
            g->eax = esi + 0x5c4u;
            t89 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5c4u, ebx);
            g->edx = rd32(esi);
            t90 = rd32(esi);
            t91 = cow_thiscall(g, rd32(t90 + 0x318u), esi, 0);
            t92 = g->ecx;
            t93 = g->edx;
            if (t91 != 0u)
            {
                ecx = t92;
                edx = t93;
                ebp = self;
            }
            else
            {
                eax = t91;
                ecx = t92;
                edx = t93;
    COW_AT(1001482c)
                wr32(sp0 - 0x78u, edi);
                wr32(sp0 - 0x7cu, esi + 0x61cu);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x74u;
                t94 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x61cu, edi);
                t95 = g->ecx;
                t96 = g->edx;
                d97 = (double)rdf32(esi + 0x61cu);
                if ((cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t95;
                    edx = t96;
                    ebp = esi + 0x61cu;
                }
                else
                {
                    eax = cow_fsw(g, d97, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    ecx = t95;
                    edx = t96;
                    ebp = esi + 0x61cu;
    COW_AT(1001484e)
                    d98 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d98);
                }
    COW_AT(1001485a)
                if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(1001486a)
                    d99 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebp, (float)d99);
                }
    COW_AT(10014876)
                d100 = (double)rdf32(esi + 0x620u);
                if ((cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d100, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(1001488b)
                    d101 = fr(g, (double)rdf32(esi + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x620u, (float)d101);
                }
    COW_AT(1001489d)
                d102 = (double)rdf32(esi + 0x620u);
                if (!(d102 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d102, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d102, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100148b0)
                    d103 = fr(g, (double)rdf32(esi + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x620u, (float)d103);
                }
    COW_AT(100148c2)
                d104 = (double)rdf32(esi + 0x624u);
                if ((cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d104, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100148d7)
                    d105 = fr(g, (double)rdf32(esi + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x624u, (float)d105);
                }
    COW_AT(100148e9)
                d106 = (double)rdf32(esi + 0x624u);
                if (!(d106 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    ebp = rd32(sp0 - 0x64u);
                }
                else
                {
                    ebp = rd32(sp0 - 0x64u);
    COW_AT(10014900)
                    d107 = fr(g, (double)rdf32(esi + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi + 0x624u, (float)d107);
                }
            }
    COW_AT(10014912)
            wr32(sp0 - 0x78u, ebx);
            wr32(sp0 - 0x7cu, esi + 0x5fcu);
            g->eax = esi + 0x5fcu;
            g->edx = edx;
            g->esp = sp0 - 0x74u;
            t108 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi + 0x5fcu, ebx);
            t109 = g->edx;
            wr32(esi + 0x608u, 0x3f800000u);
            wr32(sp0 - 0x78u, 4u);
            g->edx = t109;
            cow_thiscall(g, COW_IMG(0x100749b0u), esi, 1, 4u);
            t110 = g->edx;
            edx = t110;
            edi = rd32(sp0 - 0x74u);
        }
    }
    COW_AT(10014936)
    t111 = rd32(rd32(COW_IMG(0x10480af0u)) + 0x120u) & 0xffefffffu;
    t112 = rd32(COW_IMG(0x10480af0u));
    wr32(t112 + 0x120u, t111);
    wr32(rd32(COW_IMG(0x10480af0u)) + 0xa0u, esi);
    if (rd8(COW_IMG(0x10358188u)) == 0u)
    {
        eax = (t112 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    }
    else
    {
        eax = (t112 & 0xffffff00u) | rd8(COW_IMG(0x10358188u));
    COW_AT(10014962)
        wr32(sp0 - 0x74u, esi);
        g->eax = eax;
        g->esp = sp0 - 0x70u;
        t113 = cow_thiscall(g, COW_IMG(0x100814f0u), COW_IMG(0x1047d600u), 1, esi);
        eax = t113;
    }
    COW_AT(1001496d)
    wr8(sp0 - 0x62u, 0x80u);
    wr8(sp0 - 0x63u, 0x80u);
    wr8(sp0 - 0x64u, 0x80u);
    wr8(sp0 - 0x61u, 0x80u);
    t114 = rd32(sp0 - 0x64u);
    wr32(ebp + 0x334u, t114);
    wr32(ebp + 0x338u, t114);
    wr32(COW_IMG(0x1045697cu), rd32(COW_IMG(0x1045697cu)) + 1u);
    eax = t114;
    loc_68 = rd32(sp0 - 0x68u);
    loc_6c = rd32(sp0 - 0x6cu);
    loc_70 = rd32(sp0 - 0x70u);
L_10014995: ;
    COW_AT(10014995)
    g->ebx = loc_70;
    g->esi = loc_6c;
    g->edi = edi;
    g->ebp = loc_68;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10014390(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100143abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100143b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100143cfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x6cu;
        (void)sp0;
        return 1;
    }
    case 0x100143deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x100143e3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x100143edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x10014407u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x10014434u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x10014439u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x10014443u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001445du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001448au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x6cu;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001449bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x100144a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_ebx = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebp = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        wr32(sp0 - 0x64u, self);
        (void)sp0;
        return 1;
    }
    case 0x1001451bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10014540u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1001454du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1001455eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10014568u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1001456fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x10014583u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100145acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100145c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100145d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100145e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100145ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100146c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        g->ebx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x100146e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        wr32(sp0 - 0x7cu, sp0 - 0x60u);
        wr32(sp0 - 0x78u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x10014725u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001472fu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001473eu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014748u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001475au:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014766u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014776u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014782u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014794u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100147a0u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100147b0u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100147bcu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001482cu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001484eu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001485au:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001486au:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014876u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001488bu:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x1001489du:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100148b0u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100148c2u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100148d7u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x100148e9u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014900u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014912u:
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
        g->esp = sp0 - 0x74u;
        wr32(sp0 - 0x80u, sp0 - 0x50u);
        (void)sp0;
        return 1;
    }
    case 0x10014936u:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10014962u:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001496du:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10014995u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x1001499eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10014390(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10014390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
