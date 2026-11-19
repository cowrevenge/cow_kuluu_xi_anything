/* f_0x10073750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10073750(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40c;
    uint32_t loc_410;
    uint32_t loc_414;
    uint32_t loc_418;
    uint32_t loc_41c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1072u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007376bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); self = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_1007376b;
    case 0x1007376eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); self = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_1007376e;
    case 0x10073775u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_10073775;
    case 0x10073782u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); self = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_10073782;
    case 0x100737b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); self = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_100737b1;
    case 0x100737ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); self = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_100737ce;
    case 0x100737fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_100737fb;
    case 0x10073802u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); goto E_10073802;
    case 0x1007380eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x424u); in_ebp = rd32(sp0 - 0x420u); loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); g->ebp = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x424u); goto E_1007380e;
    case 0x10073825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x424u); in_ebp = rd32(sp0 - 0x420u); loc_41c = rd32(sp0 - 0x41cu); loc_418 = rd32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); g->ebp = rd32(sp0 - 0x420u); g->edi = rd32(sp0 - 0x424u); goto E_10073825;
    case 0x10073854u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073854;
    case 0x10073874u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073874;
    case 0x10073882u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40c = rd32(sp0 - 0x40cu); goto E_10073882;
    case 0x10073887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40c = rd32(sp0 - 0x40cu); goto E_10073887;
    case 0x1007388cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40c = rd32(sp0 - 0x40cu); goto E_1007388c;
    case 0x100738a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x41cu); in_ebx = rd32(sp0 - 0x418u); loc_414 = rd32(sp0 - 0x414u); g->ebx = rd32(sp0 - 0x418u); g->esi = rd32(sp0 - 0x41cu); goto E_100738a7;
    case 0x100738b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40c = rd32(sp0 - 0x40cu); goto E_100738b4;
    case 0x100738cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100738cd;
    case 0x100738dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100738dc;
    case 0x100738deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100738de;
    case 0x10073968u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073968;
    case 0x10073973u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073973;
    case 0x1007397au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007397a;
    case 0x1007397fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007397f;
    case 0x10073981u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073981;
    case 0x1007398cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1007398c;
    case 0x10073990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073990;
    case 0x10073992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073992;
    case 0x10073999u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073999;
    case 0x1007399eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40c = rd32(sp0 - 0x40cu); goto E_1007399e;
    case 0x100739adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739ad;
    case 0x100739b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739b4;
    case 0x100739b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739b8;
    case 0x100739bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739ba;
    case 0x100739beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739be;
    case 0x100739d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100739d3;
    case 0x100739d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100739d7;
    case 0x100739d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100739d9;
    case 0x100739ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100739dd;
    case 0x100739dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739df;
    case 0x100739e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739e3;
    case 0x100739eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739ea;
    case 0x100739eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739ee;
    case 0x100739f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739f0;
    case 0x100739f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_100739f4;
    case 0x10073a05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a05;
    case 0x10073a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a09;
    case 0x10073a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a0b;
    case 0x10073a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a0f;
    case 0x10073a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a16;
    case 0x10073a1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a1b;
    case 0x10073a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a1d;
    case 0x10073a21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a21;
    case 0x10073a32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a32;
    case 0x10073a36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a36;
    case 0x10073a38u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10073a38;
    case 0x10073a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_410 = rd32(sp0 - 0x410u); loc_40c = rd32(sp0 - 0x40cu); goto E_10073a3c;
    default: break;
    }
#endif

    COW_AT(10073750)
    wr32(sp0 - 0x418u, in_ebx);
    wr32(sp0 - 0x41cu, in_esi);
    wr32(sp0 - 0x414u, self);
    if (rd32(arg1 + 0x10u) == 1u)
    {
        eax = rd32(arg1 + 0x10u) - 1u;
        goto L_10073782;
    }
    eax = rd32(arg1 + 0x10u) - 1u;
    COW_AT(1007376b)
    if (eax == 1u)
    {
        esi = 0u;
        goto L_100737b1;
    }
    eax = eax - 1u;
    COW_AT(1007376e)
    if (eax == 1u)
    {
        edx = in_edx;
        loc_418 = in_ebx;
        loc_41c = in_esi;
        loc_414 = self;
        goto L_10073802;
    }
    COW_AT(10073775)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_10073782: ;
    COW_AT(10073782)
    wr32(sp0 - 0x420u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x41cu;
    t1 = cow_thiscall(g, COW_IMG(0x10071270u), rd32(arg1), 1, 0u);
    wr32(arg1 + 0x14u, t1);
    t2 = rd32(arg1);
    wr32(arg1 + 0x18u, t1);
    wr32(arg1 + 0x10u, 2u);
    t3 = rd32(t2 + 4u) >> 7u & 0x7ffffu;
    t4 = t2 + t3 * 0x10u;
    wr32(arg1, t4);
    esi = t3 << 4u;
L_100737b1: ;
    COW_AT(100737b1)
    if ((int32_t)(esi + (rd32(rd32(arg1) + 4u) >> 7u & 0x7ffffu) * 0x10u) > (int32_t)rd32(arg1 + 4u))
    {
        edx = rd32(arg1 + 4u);
        goto L_100738a7;
    }
    eax = esi + (rd32(rd32(arg1) + 4u) >> 7u & 0x7ffffu) * 0x10u;
    ecx = rd32(arg1);
    edx = rd32(arg1 + 4u);
    COW_AT(100737ce)
    wr32(sp0 - 0x420u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x41cu;
    t5 = cow_thiscall(g, COW_IMG(0x10071270u), ecx, 1, 0u);
    t6 = g->edx;
    wr32(rd32(arg1 + 0x18u) + 0x1cu, t5);
    t7 = rd32(arg1);
    wr32(arg1 + 0x18u, t5);
    t8 = t7 + (rd32(t7 + 4u) >> 7u & 0x7ffffu) * 0x10u;
    t9 = rd32(t7 + 4u);
    wr32(arg1, t8);
    if (rd32(arg1 + 8u) != esi + (t9 >> 7u & 0x7ffffu) * 0x10u)
    {
        esi = esi + (t9 >> 7u & 0x7ffffu) * 0x10u;
        goto L_100737b1;
    }
    edx = t6;
    COW_AT(100737fb)
    wr32(arg1 + 0x10u, 3u);
    loc_418 = rd32(sp0 - 0x418u);
    loc_41c = rd32(sp0 - 0x41cu);
    loc_414 = rd32(sp0 - 0x414u);
L_10073802: ;
    COW_AT(10073802)
    wr32(sp0 - 0x420u, in_ebp);
    wr32(sp0 - 0x424u, in_edi);
    if (rd32(arg1 + 0xcu) == 0u)
    {
        eax = rd32(arg1 + 0xcu);
        ebp = rd32(arg1 + 0x14u);
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        ebp = rd32(arg1 + 0x14u);
    COW_AT(1007380e)
        wr32(eax, ebp);
        t10 = rd32(ebp + 0x14u);
        wr32(sp0 - 0x428u, t10);
        g->edx = edx;
        g->esp = sp0 - 0x424u;
        cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, t10);
        t11 = g->edx;
        t12 = rd32(arg1 + 0xcu);
        wr32(ebp + 0x14u, t12);
        eax = t12;
        edx = t11;
        loc_418 = rd32(sp0 - 0x418u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_414 = rd32(sp0 - 0x414u);
    }
    COW_AT(10073825)
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10072030u), ebp, 0);
    t13 = rd32(ebp + 0x14u);
    wr32(ebp + 0x28u, t13);
    wr32(sp0 - 0x40cu, 0u);
    t14 = rd32(ebp + 0x14u);
    wr32(sp0 - 0x400u, t14);
    wr32(sp0 - 0x410u, ebp);
    t15 = rd32(arg1 + 0x14u);
    t16 = rd32(rd32(arg1 + 0x14u) + 0x1cu);
    wr32(ebp + 0x1cu, 0u);
    if (t16 == 0u)
    {
        edx = t15;
        goto L_100739ad;
    }
    edx = t15;
    esi = 0u;
    edi = t16;
    loc_40c = 0u;
    loc_410 = ebp;
L_10073854: ;
    COW_AT(10073854)
    t17 = rd32(ebp + 0x14u);
    t18 = rd32(sp0 - 0x414u);
    wr32(edi + 0x28u, t17);
    wr32(sp0 - 0x428u, edi);
    wr32(sp0 - 0x42cu, sp0 - 0x408u);
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10074140u), t18, 2, sp0 - 0x408u, edi);
    t19 = g->ecx;
    t20 = g->edx;
    if ((rd32(edi + 0x24u) & 0x7fu) != 1u)
    {
        eax = rd32(edi + 0x24u) & 0x7fu;
        ecx = t19;
        edx = t20;
        loc_40c = rd32(sp0 - 0x40cu);
    }
    else
    {
        eax = rd32(edi + 0x24u) & 0x7fu;
        edx = t20;
    COW_AT(10073874)
        wr32(sp0 - 0x40cu, esi + 1u);
        t21 = rd32(edi + 0x14u);
        wr32(esi * 4u + sp0 - 0x3fcu, t21);
        ecx = t21;
        ebp = edi;
        loc_40c = esi + 1u;
        esi = esi + 1u;
    }
    COW_AT(10073882)
    if (eax == 0x20u) goto L_100738b4;
    COW_AT(10073887)
    if (eax == 0x1bu) goto L_100738b4;
    COW_AT(1007388c)
    wr32(sp0 - 0x428u, edi);
    g->eax = eax;
    g->edx = rd32(sp0 - 0x410u);
    t22 = rd32(sp0 - 0x410u);
    g->esp = sp0 - 0x424u;
    t23 = cow_thiscall(g, COW_IMG(0x100711e0u), t22 + 4u, 1, edi);
    t24 = g->edx;
    wr32(sp0 - 0x428u, t24);
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, t24);
    t26 = g->edx;
    eax = t25;
    edx = t26;
L_10073968: ;
    COW_AT(10073968)
    t47 = rd8(edi + 0x24u);
    wr8(edi + 0x1au, rd8(edi + 0x1au) & 0xfdu);
    if ((t47 & 0x7fu) != 0u)
    {
        loc_40c = rd32(sp0 - 0x40cu);
        goto L_1007399e;
    }
    COW_AT(10073973)
    if (rd32(ebp + 0x28u) == 0u)
    {
    COW_AT(1007397f)
        ebp = 0u;
    }
    else
    {
        ebp = rd32(ebp + 0x28u);
    COW_AT(1007397a)
        ebp = rd32(ebp);
    }
    COW_AT(10073981)
    if (rd32(esi * 4u + sp0 - 0x400u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
    COW_AT(10073990)
        eax = 0u;
    }
    else
    {
        eax = rd32(esi * 4u + sp0 - 0x400u);
        ecx = rd32(edi + 0x14u);
    COW_AT(1007398c)
        eax = rd32(eax);
    }
    COW_AT(10073992)
    wr32(eax + 0x3cu, ecx);
    if ((int32_t)esi <= 0) goto L_100739ad;
    COW_AT(10073999)
    wr32(sp0 - 0x40cu, esi - 1u);
    loc_40c = esi - 1u;
    esi = esi - 1u;
L_1007399e: ;
    COW_AT(1007399e)
    wr32(sp0 - 0x410u, edi);
    if (rd32(edi + 0x1cu) != 0u)
    {
        loc_410 = edi;
        edi = rd32(edi + 0x1cu);
        goto L_10073854;
    }
L_100739ad: ;
    COW_AT(100739ad)
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
    COW_AT(100739b8)
        edi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
    COW_AT(100739b4)
        edi = rd32(eax);
    }
    COW_AT(100739ba)
    if (edi == 0u) goto L_100739df;
L_100739be: ;
    COW_AT(100739be)
    wr32(sp0 - 0x428u, 1u);
    wr32(sp0 - 0x42cu, edi);
    t48 = rd32(sp0 - 0x414u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t49 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 1u);
    t50 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t49;
        edx = t50;
        esi = t48;
    COW_AT(100739d7)
        edi = 0u;
    }
    else
    {
        eax = t49;
        edx = t50;
        esi = t48;
        edi = rd32(edi + 8u);
    COW_AT(100739d3)
        edi = rd32(edi);
    }
    COW_AT(100739d9)
    if (edi != 0u) goto L_100739be;
    COW_AT(100739dd)
L_100739e3: ;
    COW_AT(100739e3)
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
    COW_AT(100739ee)
        edi = 0u;
    }
    else
    {
        eax = rd32(ebp + 8u);
    COW_AT(100739ea)
        edi = rd32(eax);
    }
    COW_AT(100739f0)
    if (edi == 0u) goto L_10073a0f;
L_100739f4: ;
    COW_AT(100739f4)
    wr32(sp0 - 0x428u, 2u);
    wr32(sp0 - 0x42cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t51 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 2u);
    t52 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t51;
        edx = t52;
    COW_AT(10073a09)
        edi = 0u;
    }
    else
    {
        eax = t51;
        edx = t52;
        edi = rd32(edi + 8u);
    COW_AT(10073a05)
        edi = rd32(edi);
    }
    COW_AT(10073a0b)
    if (edi != 0u) goto L_100739f4;
L_10073a0f: ;
    COW_AT(10073a0f)
    if (rd32(ebp + 8u) == 0u)
    {
    COW_AT(10073a1b)
        edi = 0u;
    }
    else
    {
        ebp = rd32(ebp + 8u);
    COW_AT(10073a16)
        edi = rd32(ebp);
    }
    COW_AT(10073a1d)
    if (edi == 0u) goto L_10073a3c;
L_10073a21: ;
    COW_AT(10073a21)
    wr32(sp0 - 0x428u, 4u);
    wr32(sp0 - 0x42cu, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x424u;
    t53 = cow_stdcall(g, COW_IMG(0x10073a60u), 2, edi, 4u);
    t54 = g->edx;
    if (rd32(edi + 8u) == 0u)
    {
        eax = t53;
        edx = t54;
    COW_AT(10073a36)
        edi = 0u;
    }
    else
    {
        eax = t53;
        edx = t54;
        edi = rd32(edi + 8u);
    COW_AT(10073a32)
        edi = rd32(edi);
    }
    COW_AT(10073a38)
    if (edi != 0u) goto L_10073a21;
L_10073a3c: ;
    COW_AT(10073a3c)
    t55 = rd32(sp0 - 0x420u);
    t56 = rd32(sp0 - 0x424u);
    wr32(arg1 + 0x10u, 0u);
    g->ebx = rd32(sp0 - 0x418u);
    g->esi = rd32(sp0 - 0x41cu);
    g->edi = t56;
    g->ebp = t55;
    g->edx = edx;
    return 0u;
L_100738a7: ;
    COW_AT(100738a7)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return esi;
L_100738b4: ;
    COW_AT(100738b4)
    wr32(sp0 - 0x428u, 1u);
    wr32(sp0 - 0x42cu, 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x418u;
    t27 = cow_cdecl(g, COW_IMG(0x100286b0u), 5, 0x40u, 1u, rd32(sp0 - 0x424u), rd32(sp0 - 0x420u), rd32(sp0 - 0x41cu));
    t28 = g->edx;
    wr8(COW_IMG(0x1047d12cu), 1u);
    if (t27 == 0u)
    {
    COW_AT(100738dc)
        esi = 0u;
    }
    else
    {
        eax = t27;
        edx = t28;
        esi = t27;
    COW_AT(100738cd)
        g->esp = sp0 - 0x424u;
        cow_thiscall(g, COW_IMG(0x10071d80u), esi, 0);
        wr32(esi, COW_IMG(0x1032c934u));
    }
    COW_AT(100738de)
    wr32(esi + 0x20u, 0u);
    wr32(esi + 0x24u, 0u);
    wr32(esi + 0x28u, 0u);
    wr32(esi + 0x2cu, 0u);
    t29 = (rd32(esi + 0x24u) & 0xffffff80u) ^ 0xau;
    wr32(esi + 0x24u, t29);
    t30 = (rd32(esi + 0x24u) & 0xfc00007fu) | (uint32_t)(uint8_t)((rd32(esi + 0x24u) & 0xfc00027fu) >> 8u | 2u) << 8u;
    wr32(esi + 0x24u, t30);
    t31 = rd32(edi + 0x20u);
    wr32(esi + 0x20u, t31);
    wr32(sp0 - 0x428u, edi + 0x31u);
    g->edx = edi + 0x31u;
    g->esp = sp0 - 0x424u;
    cow_thiscall(g, COW_IMG(0x10076750u), esi, 1, edi + 0x31u);
    t32 = g->edx;
    t33 = rd32(ebp + 0x14u);
    wr32(esi + 0x28u, t33);
    wr32(sp0 - 0x428u, esi);
    wr32(sp0 - 0x42cu, sp0 - 0x404u);
    t34 = rd16(esi + 0x1au);
    t35 = rd32(sp0 - 0x414u);
    wr16(esi + 0x1au, (t34 & 0xff00u) | (t34 & 0xf9u) | 1u);
    g->eax = (t34 & 0xff00u) | (t34 & 0xf9u) | 1u;
    t36 = cow_thiscall(g, COW_IMG(0x10074140u), t35, 2, sp0 - 0x404u, esi);
    wr32(sp0 - 0x428u, esi);
    g->edx = rd32(sp0 - 0x410u);
    t37 = rd32(sp0 - 0x410u);
    t38 = cow_thiscall(g, COW_IMG(0x100711e0u), t37 + 4u, 1, esi);
    t39 = g->edx;
    wr32(sp0 - 0x428u, t39);
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x100711d0u), esi + 4u, 1, t39);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x428u, edi);
    g->edx = t42;
    t43 = cow_thiscall(g, COW_IMG(0x100711e0u), t41, 1, edi);
    t44 = g->edx;
    wr32(sp0 - 0x428u, esi);
    g->edx = t44;
    t45 = cow_thiscall(g, COW_IMG(0x100711d0u), edi + 4u, 1, esi);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    esi = rd32(sp0 - 0x40cu);
    goto L_10073968;
L_100739df: ;
    COW_AT(100739df)
    esi = rd32(sp0 - 0x414u);
    goto L_100739e3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10073750(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007376bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        self = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1007376eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        self = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073775u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x10073782u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        self = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100737b1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        self = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100737ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        self = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100737fbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073802u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t loc_414;
        uint32_t loc_418;
        uint32_t loc_41c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007380eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t loc_414;
        uint32_t loc_418;
        uint32_t loc_41c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x424u);
        in_ebp = rd32(sp0 - 0x420u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073825u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t loc_414;
        uint32_t loc_418;
        uint32_t loc_41c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x424u);
        in_ebp = rd32(sp0 - 0x420u);
        loc_41c = rd32(sp0 - 0x41cu);
        loc_418 = rd32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073854u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073874u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        wr32(sp0 - 0x42cu, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073882u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        wr32(sp0 - 0x42cu, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x10073887u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        wr32(sp0 - 0x42cu, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x1007388cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        wr32(sp0 - 0x42cu, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x100738a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_414;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x41cu);
        in_ebx = rd32(sp0 - 0x418u);
        loc_414 = rd32(sp0 - 0x414u);
        g->esp = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x100738b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        wr32(sp0 - 0x42cu, sp0 - 0x408u);
        (void)sp0;
        return 1;
    }
    case 0x100738cdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100738dcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100738deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073968u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073973u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007397au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007397fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073981u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007398cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073990u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073992u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073999u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1007399eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739b8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739beu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739d7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739dfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739e3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739eau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739f0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100739f4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a05u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a0fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a16u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a1du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a32u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a36u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10073a3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40c;
        uint32_t loc_410;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_410 = rd32(sp0 - 0x410u);
        loc_40c = rd32(sp0 - 0x40cu);
        g->esp = sp0 - 0x424u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10073750(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10073750(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
