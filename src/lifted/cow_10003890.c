/* f_0x10003890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10003890(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_d4;
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
    cow_frame(g, sp0, 252u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100038b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xe4u); in_esi = rd32(sp0 - 0xe0u); in_ebp = rd32(sp0 - 0xdcu); g->ebp = rd32(sp0 - 0xdcu); g->edi = rd32(sp0 - 0xe4u); g->esi = rd32(sp0 - 0xe0u); goto E_100038b1;
    case 0x100038cau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100038ca;
    case 0x100038e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100038e2;
    case 0x100038fau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100038fa;
    case 0x10003912u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003912;
    case 0x1000392au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1000392a;
    case 0x10003942u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003942;
    case 0x1000395au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1000395a;
    case 0x10003963u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003963;
    case 0x1000396cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1000396c;
    case 0x10003978u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003978;
    case 0x10003981u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003981;
    case 0x10003999u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003999;
    case 0x100039a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); goto E_100039a1;
    case 0x100039afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); goto E_100039af;
    case 0x100039b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100039b8;
    case 0x100039c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100039c9;
    case 0x100039d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100039d8;
    case 0x100039edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_100039ed;
    case 0x10003a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a01;
    case 0x10003a17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a17;
    case 0x10003a2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a2c;
    case 0x10003a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a3e;
    case 0x10003a4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a4c;
    case 0x10003a56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a56;
    case 0x10003a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a73;
    case 0x10003a7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a7e;
    case 0x10003a93u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003a93;
    case 0x10003aa5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003aa5;
    case 0x10003abau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003aba;
    case 0x10003ad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10003ad0;
    case 0x10003ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); goto E_10003ad4;
    case 0x10003aeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_d4 = rd32(sp0 - 0xd4u); goto E_10003aea;
    case 0x10003affu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003aff;
    case 0x10003b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003b15;
    case 0x10003b2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003b2d;
    case 0x10003b39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003b39;
    case 0x10003b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003b42;
    case 0x10003b4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10003b4b;
    default: break;
    }
#endif

    COW_AT(10003890)
    wr32(sp0 - 0xd8u, in_ebx);
    wr32(sp0 - 0xdcu, in_ebp);
    wr32(sp0 - 0xe0u, in_esi);
    wr32(sp0 - 0xe4u, in_edi);
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x1cu);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t1);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x100038b1u);
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xc8u), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t1, 0x1cu, 0u);
    COW_AT(100038b1)
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 0x89u);
    t2 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t2);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x100038cau);
    cow_thiscall(g, rd32(rd32(t2) + 0xc8u), rd32(t2), 3, t2, 0x89u, 0u);
    COW_AT(100038ca)
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 0u);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t3);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x100038e2u);
    cow_thiscall(g, rd32(rd32(t3) + 0xfcu), rd32(t3), 4, t3, 0u, 1u, 2u);
    COW_AT(100038e2)
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 2u);
    wr32(sp0 - 0xf0u, 0u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t4);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x100038fau);
    cow_thiscall(g, rd32(rd32(t4) + 0xfcu), rd32(t4), 4, t4, 0u, 2u, 0u);
    COW_AT(100038fa)
    wr32(sp0 - 0xe8u, 2u);
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 0u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t5);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003912u);
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 4u, 2u);
    COW_AT(10003912)
    wr32(sp0 - 0xe8u, 0u);
    wr32(sp0 - 0xecu, 5u);
    wr32(sp0 - 0xf0u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t6);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x1000392au);
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 5u, 0u);
    COW_AT(1000392a)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 1u);
    wr32(sp0 - 0xf0u, 1u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t7);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003942u);
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 1u, 1u, 1u);
    COW_AT(10003942)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 4u);
    wr32(sp0 - 0xf0u, 1u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf4u, t8);
    g->eax = t8;
    g->edx = rd32(COW_IMG(0x1045666cu));
    t9 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0xe4u;
    COW_RET(0x1000395au);
    t10 = cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 1u, 4u, 1u);
    t11 = g->edx;
    eax = t10;
    edx = t11;
    COW_AT(1000395a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003963u);
    t12 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0xc0u, 0);
    t13 = g->edx;
    eax = t12;
    edx = t13;
    COW_AT(10003963)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x1000396cu);
    t14 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x80u, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(1000396c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003978u);
    t16 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t17 = g->edx;
    eax = t16;
    edx = t17;
    COW_AT(10003978)
    g->eax = eax;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003981u);
    t18 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x80u, 0);
    eax = t18;
    COW_AT(10003981)
    wr32(sp0 - 0xe8u, sp0 - 0x40u);
    wr32(sp0 - 0xecu, 0x100u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003999u);
    cow_thiscall(g, COW_IMG(0x1000bdb0u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t19 = g->edx;
    edx = t19;
    COW_AT(10003999)
    wr32(sp0 - 0xd4u, 0u);
    ebx = in_ebx;
    ebp = 0u;
    edi = 0u;
    loc_d4 = 0u;
L_100039a1: ;
    COW_AT(100039a1)
    t20 = rd32(ebp + rd32(self + 0xcu) + 4u);
    if (t20 != 0xffffffffu)
    {
        eax = rd32(self + 0xcu);
    COW_AT(100039af)
        g->eax = eax;
        g->esp = sp0 - 0xe4u;
        COW_RET(0x100039b8u);
        t21 = cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0xc0u, 0);
        eax = t21;
    COW_AT(100039b8)
        t22 = rd32(edi + rd32(self + 0x10u) + 0xcu);
        wr32(sp0 - 0xe8u, t22);
        g->edx = t22;
        g->esp = sp0 - 0xe4u;
        COW_RET(0x100039c9u);
        cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0xc0u, 1, t22);
        t23 = g->edx;
        edx = t23;
    COW_AT(100039c9)
        t24 = edi + rd32(self + 0x10u);
        wr32(sp0 - 0xe8u, t24);
        g->eax = t24;
        g->edx = edx;
        g->esp = sp0 - 0xe4u;
        COW_RET(0x100039d8u);
        t25 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0xc0u, 1, t24);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    COW_AT(100039d8)
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        wr32(sp0 - 0xecu, 0x100u);
        g->esp = sp0 - 0xe4u;
        COW_RET(0x100039edu);
        cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0xc0u);
    COW_AT(100039ed)
        wr32(sp0 - 0xe8u, 0x42u);
        t27 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0xecu, t27);
        g->eax = t27;
        g->edx = rd32(COW_IMG(0x1045666cu));
        t28 = rd32(COW_IMG(0x1045666cu));
        g->esp = sp0 - 0xe4u;
        COW_RET(0x10003a01u);
        t29 = cow_thiscall(g, rd32(rd32(t27) + 0x130u), rd32(t27), 2, t27, 0x42u);
        t30 = g->edx;
        eax = t29;
        edx = t30;
    COW_AT(10003a01)
        wr32(sp0 - 0xe8u, 0x10u);
        wr32(sp0 - 0xecu, COW_IMG(0x1034f6c0u));
        wr32(sp0 - 0xf0u, 3u);
        wr32(sp0 - 0xf4u, 2u);
        g->ebx = ebx;
        g->esp = sp0 - 0xe4u;
        COW_RET(0x10003a17u);
        cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 3u, COW_IMG(0x1034f6c0u), 0x10u);
    COW_AT(10003a17)
        if (rd32(COW_IMG(0x10480af0u) + rd32(ebp + rd32(self + 0xcu)) * 4u) == 0u)
        {
            edx = rd32(self + 0xcu);
        }
        else
        {
            eax = rd32(COW_IMG(0x10480af0u) + rd32(ebp + rd32(self + 0xcu)) * 4u);
            edx = rd32(self + 0xcu);
    COW_AT(10003a2c)
            if (rd32(eax + 0x120u) >> 9u & 1u)
            {
    COW_AT(10003a3e)
                if (rd32(eax + 0xa0u) == 0u)
                {
                    ebx = rd32(eax + 0xa0u);
                }
                else
                {
                    ebx = rd32(eax + 0xa0u);
    COW_AT(10003a4c)
                    g->eax = eax;
                    g->edx = rd32(ebx);
                    t31 = rd32(ebx);
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003a56u);
                    t32 = cow_thiscall(g, rd32(t31 + 0x198u), ebx, 0);
                    t33 = g->edx;
                    eax = t32;
                    edx = t33;
    COW_AT(10003a56)
                    t34 = (-((uint8_t)eax != 0u) & 0xff010000u) - 0x7f000001u;
                    wr32(COW_IMG(0x1034f72cu), t34);
                    g->eax = rd32(ebx);
                    g->edx = edx;
                    t35 = rd32(ebx);
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003a73u);
                    t36 = cow_thiscall(g, rd32(t35 + 0x1bcu), ebx, 0);
                    t37 = g->edx;
                    eax = t36;
                    edx = t37;
    COW_AT(10003a73)
                    wr32(sp0 - 0xe8u, eax);
                    wr32(sp0 - 0xecu, sp0 - 0xd0u);
                    g->ecx = sp0 - 0xd0u;
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003a7eu);
                    cow_cdecl(g, COW_IMG(0x10026e90u), 2, sp0 - 0xd0u, eax);
                    t38 = g->ecx;
                    ecx = t38;
    COW_AT(10003a7e)
                    t39 = edi + rd32(self + 0x10u);
                    wr32(sp0 - 0xf0u, t39);
                    wr32(sp0 - 0xf4u, sp0 - 0xd0u);
                    wr32(sp0 - 0xf8u, COW_IMG(0x1034f730u));
                    g->eax = sp0 - 0xd0u;
                    g->edx = t39;
                    g->esp = sp0 - 0xecu;
                    COW_RET(0x10003a93u);
                    t40 = cow_cdecl(g, COW_IMG(0x10027120u), 3, COW_IMG(0x1034f730u), sp0 - 0xd0u, t39);
                    t41 = g->edx;
                    eax = t40;
                    edx = t41;
    COW_AT(10003a93)
                    t42 = edi + rd32(self + 0x10u);
                    wr32(sp0 - 0xe8u, t42);
                    g->eax = eax;
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003aa5u);
                    t43 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x80u, 1, t42);
                    eax = t43;
    COW_AT(10003aa5)
                    wr32(sp0 - 0xe8u, sp0 - 0x80u);
                    wr32(sp0 - 0xecu, 0x100u);
                    g->eax = eax;
                    g->edx = sp0 - 0x80u;
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003abau);
                    t44 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x80u);
                    t45 = g->edx;
                    eax = t44;
                    edx = t45;
    COW_AT(10003aba)
                    wr32(sp0 - 0xe8u, 0x10u);
                    wr32(sp0 - 0xecu, COW_IMG(0x1034f720u));
                    wr32(sp0 - 0xf0u, 1u);
                    wr32(sp0 - 0xf4u, 2u);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0xe4u;
                    COW_RET(0x10003ad0u);
                    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 2u, 1u, COW_IMG(0x1034f720u), 0x10u);
                    t46 = g->edx;
                    edx = t46;
    COW_AT(10003ad0)
                    ebp = rd32(sp0 - 0xd4u);
                }
            }
        }
    }
    COW_AT(10003ad4)
    wr32(sp0 - 0xd4u, ebp + 8u);
    if ((int32_t)(ebp + 8u) < 18432)
    {
        edi = edi + 0x10u;
        loc_d4 = ebp + 8u;
        ebp = ebp + 8u;
        goto L_100039a1;
    }
    COW_AT(10003aea)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 0xeu);
    t47 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t47);
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003affu);
    cow_thiscall(g, rd32(rd32(t47) + 0xc8u), rd32(t47), 3, t47, 0xeu, 1u);
    COW_AT(10003aff)
    wr32(sp0 - 0xe8u, 1u);
    wr32(sp0 - 0xecu, 7u);
    t48 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0xf0u, t48);
    g->eax = t48;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003b15u);
    t49 = cow_thiscall(g, rd32(rd32(t48) + 0xc8u), rd32(t48), 3, t48, 7u, 1u);
    eax = t49;
    COW_AT(10003b15)
    wr32(sp0 - 0xe8u, sp0 - 0x40u);
    wr32(sp0 - 0xecu, 0x100u);
    g->eax = eax;
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003b2du);
    t50 = cow_thiscall(g, COW_IMG(0x1000bd50u), rd32(COW_IMG(0x1045666cu)), 2, 0x100u, sp0 - 0x40u);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(10003b2d)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003b39u);
    t52 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t53 = g->edx;
    eax = t52;
    edx = t53;
    COW_AT(10003b39)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003b42u);
    t54 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(10003b42)
    g->esp = sp0 - 0xe4u;
    COW_RET(0x10003b4bu);
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    COW_AT(10003b4b)
    g->ebx = rd32(sp0 - 0xd8u);
    g->esi = rd32(sp0 - 0xe0u);
    g->edi = rd32(sp0 - 0xe4u);
    g->ebp = rd32(sp0 - 0xdcu);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10003890(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100038b1u:
    {
        uint32_t eax;
        uint32_t ebp;
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
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xe4u);
        in_esi = rd32(sp0 - 0xe0u);
        in_ebp = rd32(sp0 - 0xdcu);
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xd8u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x100038cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100038e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100038fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003912u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1000392au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003942u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1000395au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003963u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x1000396cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003978u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003981u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003999u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x100039a1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039b8u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039c9u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039d8u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x100039edu:
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0xc0u);
        (void)sp0;
        return 1;
    }
    case 0x10003a01u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a17u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a2cu:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a3eu:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a4cu:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a56u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a73u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003a7eu:
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
        g->esp = sp0 - 0xecu;
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10003a93u:
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
        g->esp = sp0 - 0xf8u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10003aa5u:
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xecu, sp0 - 0xd0u);
        (void)sp0;
        return 1;
    }
    case 0x10003abau:
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xf4u, sp0 - 0xd0u);
        wr32(sp0 - 0xe8u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x10003ad0u:
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003ad4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003aeau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_d4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_d4 = rd32(sp0 - 0xd4u);
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003affu:
    {
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003b15u:
    {
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
        g->esp = sp0 - 0xe4u;
        (void)sp0;
        return 1;
    }
    case 0x10003b2du:
    {
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10003b39u:
    {
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10003b42u:
    {
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10003b4bu:
    {
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
        g->esp = sp0 - 0xe4u;
        wr32(sp0 - 0xe8u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10003890(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10003890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
