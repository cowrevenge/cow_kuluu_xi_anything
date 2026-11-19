/* f_0x101e7980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101e7980(Guest* g)
{
    double d21;
    double d32;
    double d35;
    double d39;
    double d40;
    double d41;
    double d58;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t33;
    uint32_t t34;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e7992u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101e7992;
    case 0x101e799bu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_101e799b;
    case 0x101e79aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_101e79ae;
    case 0x101e79b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_101e79b2;
    case 0x101e79bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_101e79bf;
    case 0x101e79d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_101e79d3;
    case 0x101e79dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; loc_14 = rd32(sp0 - 0x14u); goto E_101e79dc;
    case 0x101e79fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi - 0x158u; goto E_101e79fa;
    case 0x101e7a04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; self = g->edi - 0x158u; goto E_101e7a04;
    case 0x101e7a1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7a1f;
    case 0x101e7a4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7a4f;
    case 0x101e7a69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7a69;
    case 0x101e7a87u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7a87;
    case 0x101e7a8eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7a8e;
    case 0x101e7ac1u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7ac1;
    case 0x101e7aefu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7aef;
    case 0x101e7b1fu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b1f;
    case 0x101e7b4eu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b4e;
    case 0x101e7b5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b5d;
    case 0x101e7b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b63;
    case 0x101e7b7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b7a;
    case 0x101e7b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b84;
    case 0x101e7b94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b94;
    case 0x101e7b9au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b9a;
    case 0x101e7b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7b9f;
    case 0x101e7ba5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7ba5;
    case 0x101e7bb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7bb5;
    case 0x101e7bb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7bb8;
    case 0x101e7bc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7bc5;
    case 0x101e7bd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7bd0;
    case 0x101e7bdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x14u); goto E_101e7bdf;
    case 0x101e7d74u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7d74;
    case 0x101e7dc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7dc8;
    case 0x101e7dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7dcf;
    case 0x101e7de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_101e7de6;
    case 0x101e7e03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7e03;
    case 0x101e7e1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7e1c;
    case 0x101e7e35u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e7e35;
    case 0x101e7e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e7e4e;
    case 0x101e7e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e7e58;
    case 0x101e7e68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e7e68;
    default: break;
    }
#endif

    COW_AT(101e7980)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101e7e68;
    }
    ebx = rd32(sp0 + 4u);
    COW_AT(101e7992)
    if ((int32_t)ebx >= 4)
    {
        loc_4 = self;
        loc_8 = in_ebx;
        loc_c = in_esi;
        loc_10 = in_edi;
        goto L_101e7e68;
    }
    COW_AT(101e799b)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, arg2);
    g->eax = arg2;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x101e6ca0u), 2, arg2, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(101e79ae)
        if (ebx == 0u)
        {
    COW_AT(101e79b2)
            wr32(sp0 - 0x14u, 0x7bu);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7bu);
            t3 = g->edx;
            edx = t3;
        }
    }
    COW_AT(101e79bf)
    wr32(sp0 - 4u, self + 0x158u);
    if (rd32(self + 0x158u) == 0u)
    {
        eax = rd32(self + 0x158u);
        goto L_101e79dc;
    }
    eax = rd32(self + 0x158u);
    COW_AT(101e79d3)
    if (rd32(eax) != 0u)
    {
        loc_4 = self + 0x158u;
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101e7e68;
    }
L_101e79dc: ;
    COW_AT(101e79dc)
    wr32(self + 0x160u, ebx);
    wr32(sp0 - 0x14u, self + 0x158u);
    t4 = rd16(COW_IMG(0x1037f454u) + ebx * 2u);
    wr32(sp0 - 0x18u, t4);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x101cc620u), t4, 2, t4, self + 0x158u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_101e7a1f;
    }
    edx = t6;
    COW_AT(101e79fa)
    if (rd32(self + 0x158u) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101e7e68;
    }
    eax = rd32(self + 0x158u);
    COW_AT(101e7a04)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
    t8 = g->edx;
    cow_thiscall(g, COW_IMG(0x10071050u), self + 0x158u, 0);
    wr32(self + 0x158u, 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = in_ebp;
    return;
L_101e7a1f: ;
    COW_AT(101e7a1f)
    wr32(sp0 - 0x14u, 2u);
    t9 = rd32(rd32(eax));
    t10 = rd32(eax);
    wr32(self + 0x8cu, self + 0x154u);
    wr32(self + 0x154u, t9);
    wr16(self + 0x78u, 1u);
    g->eax = t9;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    wr32(sp0 - 0x14u, in_ebp);
    eax = t11;
    ecx = COW_IMG(0x10381e10u);
    edx = self + 0xf4u;
L_101e7a4f: ;
    COW_AT(101e7a4f)
    t12 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
    wr32(edx, t12);
    if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x10381e40u))
    {
        ecx = ecx + 2u;
        edx = edx + 4u;
        goto L_101e7a4f;
    }
    edx = edx + 4u;
    COW_AT(101e7a69)
    t13 = rd32(self + 0x160u);
    wr32(self + 0x84u, self + 0xf4u);
    wr16(self + 0x74u, 0x18u);
    if (t13 > 3u) goto L_101e7b4e;
    eax = t13;
    COW_AT(101e7a87)
    t14 = rd32(COW_IMG(0x101e7e70u) + eax * 4u);
    switch (t14 - RD)
    {
    case 0x101e7a8eu: goto L_101e7a8e;
    case 0x101e7ac1u: goto L_101e7ac1;
    case 0x101e7aefu: goto L_101e7aef;
    case 0x101e7b1fu: goto L_101e7b1f;
    default: rt_fatal(g, COW_IMG(0x101e7a87u), "switch");
    }
    return;
L_101e7a8e: ;
    COW_AT(101e7a8e)
    wr32(self + 0x15cu, COW_IMG(0x1037fcd0u));
    wr16(self + 0x164u, 4u);
    wr16(self + 0x166u, 0x17u);
    wr16(self + 0x168u, 0xa9u);
    wr16(self + 0x16au, 4u);
L_101e7b4e: ;
    COW_AT(101e7b4e)
    if ((int16_t)rd16(self + 0x168u) <= 0)
    {
        ecx = 0x18u;
        edi = self + 0xf4u;
    }
    else
    {
    COW_AT(101e7b5d)
        ecx = 0u;
        ebx = rd32(sp0 + 4u);
        ebp = 0u;
L_101e7b63: ;
    COW_AT(101e7b63)
        if ((rd8(rd32(ecx + rd32(self + 0x15cu) + 0x1cu) + 6u) & 0xfu) != ebx)
        {
            edi = rd32(ecx + rd32(self + 0x15cu) + 0x1cu);
        }
        else
        {
            eax = ecx + rd32(self + 0x15cu);
            edx = rd8(rd32(ecx + rd32(self + 0x15cu) + 0x1cu) + 6u) & 0xfu;
            edi = rd32(ecx + rd32(self + 0x15cu) + 0x1cu);
    COW_AT(101e7b7a)
            if (rd16(edi + 2u) != 0xffffu)
            {
                edx = (edx & 0xffff0000u) | rd16(edi + 2u);
    COW_AT(101e7b94)
                if ((uint16_t)edx != 0xfffeu) goto L_101e7b9f;
    COW_AT(101e7b9a)
                wr8(eax, rd8(eax) | 1u);
L_101e7bb8: ;
    COW_AT(101e7bb8)
                t15 = rd32(self + 0x15cu);
                wr8(ecx + t15, rd8(ecx + t15) | 0x20u);
            }
            else
            {
    COW_AT(101e7b84)
                wr8(eax, rd8(eax) | 1u);
                wr8(ecx + rd32(self + 0x15cu), rd8(ecx + rd32(self + 0x15cu)) & 0xdfu);
            }
L_101e7bc5: ;
    COW_AT(101e7bc5)
            wr8(ecx + rd32(self + 0x15cu) + 5u, 0u);
        }
    COW_AT(101e7bd0)
        if ((int32_t)(ebp + 1u) < (int16_t)rd16(self + 0x168u))
        {
            ecx = ecx + 0x20u;
            ebp = ebp + 1u;
            goto L_101e7b63;
        }
        ecx = ecx + 0x20u;
        edx = (uint32_t)(int16_t)rd16(self + 0x168u);
    }
    COW_AT(101e7bdf)
    t16 = rd32(self + 0x15cu);
    t17 = rd16(self + 0x168u);
    wr32(self + 0x94u, t16);
    wr16(self + 0x7au, (uint16_t)t17);
    wr32(sp0 - 0x18u, arg2);
    wr32(self + 0x174u, arg2);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101e8c00u), self, 1, arg2);
    wr16(self + 0x18u, 0xfff8u);
    wr16(self + 0x1au, 0xfff8u);
    t18 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u)));
    t19 = rd32(COW_IMG(0x106218b8u));
    t20 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 4u, t18);
    d21 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10339c1cu)));
    wrf32(self + 0x68u, (float)d21);
    wrf32(self + 0x58u, (float)d21);
    g->eax = t18;
    g->edx = t19 - t20;
    t22 = cow_thiscall(g, COW_IMG(0x101ee040u), self, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr8(self + 0x14u, rd8(self + 0x14u) | 5u);
    wr8(self + 0xa2u, 1u);
    t25 = (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u)));
    t26 = rd16(COW_IMG(0x106218bau));
    t27 = rd16(COW_IMG(0x106218b6u));
    t28 = rd32(COW_IMG(0x106218b4u));
    wr32(sp0 + 4u, t25);
    t29 = (uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - t28);
    t30 = rd16(self + 0x14u);
    t31 = rd32(COW_IMG(0x106218b8u));
    d32 = fr(g, fr(g, (double)rdf32(COW_IMG(0x10335310u)) * (double)(int32_t)rd32(sp0 + 4u)) * (double)rdf32(COW_IMG(0x1032dfb8u)));
    t33 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t29);
    t34 = (uint32_t)(int16_t)(t26 - t27);
    d35 = (double)rdf32(COW_IMG(0x1032ac88u));
    t36 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t34);
    wr16(self + 0x14u, (uint16_t)((t30 & 0xffff00ffu) | (t30 >> 8u | 1u) << 8u));
    t37 = (uint32_t)(int16_t)(t31 - t28);
    t38 = rd32(sp0 + 4u);
    d39 = fr(g, (double)(int32_t)t36 - fr(g, fr(g, d35 * (double)(int32_t)t36) * (double)rdf32(COW_IMG(0x10329ce8u))));
    wr32(sp0 + 4u, t37);
    d40 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032ac88u))) * (double)rdf32(COW_IMG(0x10331380u)));
    d41 = fr(g, fr(g, (double)(int32_t)t38 * (double)rdf32(COW_IMG(0x10335310u))) * (double)rdf32(COW_IMG(0x10339c18u)));
    wrf32(self + 0x44u, (float)d40);
    wrf32(self + 0x48u, (float)d41);
    wrf32(self + 0x4cu, (float)d39);
    wrf32(self + 0x50u, (float)fr(g, (double)(int32_t)t33 - d32));
    t42 = rd32(COW_IMG(0x104e1d4cu));
    wr8(t42 + 0x88u, 0u);
    wr32(self + 0x70u, 0x41700000u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    t43 = rd32(rd32(COW_IMG(0x1057823cu)) + 8u);
    wr32(sp0 - 0x28u, t43);
    g->edx = t43;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t43, 1u, 1u, 0u, 0u);
    t44 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    t45 = rd32(rd32(COW_IMG(0x10578244u)) + 8u);
    wr32(sp0 - 0x28u, t45);
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t45, 1u, 1u, 0u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, 1u);
    t46 = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
    wr32(sp0 - 0x28u, t46);
    g->eax = t46;
    g->edx = rd32(COW_IMG(0x10578468u));
    t47 = rd32(COW_IMG(0x10578468u));
    t48 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t46, 1u, 1u, 0u, 0u);
    t49 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x10381ea8u));
    g->ebx = 0u;
    g->edx = t49;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381ea8u), 1u, 0u);
    t50 = g->ecx;
    t51 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        edx = t51;
        goto L_101e7e4e;
    }
    eax = rd32(self + 8u);
    ecx = t50;
    edx = t51;
    COW_AT(101e7d74)
    wr32(sp0 - 0x14u, 0xau);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t52 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0xau);
    t53 = g->edx;
    wr32(sp0 - 0x14u, t52);
    t54 = cow_thiscall(g, COW_IMG(0x101efc60u), self, 1, t52);
    t55 = (uint32_t)(int16_t)rd16(self + 0x22u);
    t56 = rd16(self + 0x20u);
    wr32(sp0 + 4u, t55);
    t57 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, (uint32_t)(int16_t)t56);
    wrf32(sp0 - 0x14u, (float)(double)(float)(double)(int32_t)t57);
    d58 = (double)(float)(double)(int32_t)rd32(sp0 + 4u);
    wrf32(sp0 - 0x18u, (float)d58);
    g->edx = (uint32_t)(int16_t)t56;
    cow_thiscall(g, COW_IMG(0x101ef990u), self, 2, cow_f2bits(d58), cow_f2bits((double)(float)(double)(int32_t)t57));
    t59 = g->edx;
    wr32(rd32(self + 8u) + 0x7cu, COW_IMG(0x101e7e90u));
    if (rd32(self + 0x160u) > 3u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
        goto L_101e7e68;
    }
    eax = rd32(self + 0x160u);
    edx = t59;
    COW_AT(101e7dc8)
    t60 = rd32(COW_IMG(0x101e7e80u) + eax * 4u);
    switch (t60 - RD)
    {
    case 0x101e7dcfu: goto L_101e7dcf;
    case 0x101e7e03u: goto L_101e7e03;
    case 0x101e7e1cu: goto L_101e7e1c;
    case 0x101e7e35u: goto L_101e7e35;
    default: rt_fatal(g, COW_IMG(0x101e7dc8u), "switch");
    }
    return;
L_101e7ac1: ;
    COW_AT(101e7ac1)
    wr32(self + 0x15cu, COW_IMG(0x103811f0u));
    wr16(self + 0x164u, 1u);
    wr16(self + 0x166u, 6u);
    wr16(self + 0x168u, 0x22u);
    wr16(self + 0x16au, 0x18u);
    goto L_101e7b4e;
L_101e7aef: ;
    COW_AT(101e7aef)
    wr32(self + 0x15cu, COW_IMG(0x10381630u));
    wr16(self + 0x164u, 8u);
    wr16(self + 0x166u, 0x10u);
    wr16(self + 0x168u, 0x2au);
    wr16(self + 0x16au, 0x21u);
    goto L_101e7b4e;
L_101e7b1f: ;
    COW_AT(101e7b1f)
    wr32(self + 0x15cu, COW_IMG(0x10381b70u));
    wr16(self + 0x164u, 1u);
    wr16(self + 0x166u, 9u);
    wr16(self + 0x168u, 0x15u);
    wr16(self + 0x16au, 1u);
    goto L_101e7b4e;
L_101e7b9f: ;
    COW_AT(101e7b9f)
    if (rd16(edi) != 0u) goto L_101e7bb5;
    COW_AT(101e7ba5)
    wr8(eax, rd8(eax) & 0xfeu);
    wr8(ecx + rd32(self + 0x15cu), rd8(ecx + rd32(self + 0x15cu)) & 0xdfu);
    goto L_101e7bc5;
L_101e7bb5: ;
    COW_AT(101e7bb5)
    wr8(eax, rd8(eax) & 0xfeu);
    goto L_101e7bb8;
L_101e7dcf: ;
    COW_AT(101e7dcf)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10381e94u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t70 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e94u), 1u, 0u);
    t71 = g->ecx;
    t72 = g->edx;
    wr32(sp0 - 0x14u, 0x8eu);
    eax = t70;
    ecx = t71;
    edx = t72;
    loc_14 = 0x8eu;
L_101e7de6: ;
    COW_AT(101e7de6)
    wr32(sp0 - 0x18u, 0xdu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t73 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_14);
    wr32(self + 0xb8u, t73);
    wr32(self + 0xb4u, 0u);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = in_ebp;
    return;
L_101e7e03: ;
    COW_AT(101e7e03)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10381e80u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t67 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e80u), 1u, 0u);
    t68 = g->ecx;
    t69 = g->edx;
    wr32(sp0 - 0x14u, 0x8cu);
    eax = t67;
    ecx = t68;
    edx = t69;
    loc_14 = 0x8cu;
    goto L_101e7de6;
L_101e7e1c: ;
    COW_AT(101e7e1c)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10381e6cu));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e6cu), 1u, 0u);
    t65 = g->ecx;
    t66 = g->edx;
    wr32(sp0 - 0x14u, 0x8fu);
    eax = t64;
    ecx = t65;
    edx = t66;
    loc_14 = 0x8fu;
    goto L_101e7de6;
L_101e7e35: ;
    COW_AT(101e7e35)
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, COW_IMG(0x10381e58u));
    g->ebx = 0u;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t61 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381e58u), 1u, 0u);
    t62 = g->ecx;
    t63 = g->edx;
    wr32(sp0 - 0x14u, 0xa2u);
    eax = t61;
    ecx = t62;
    edx = t63;
    loc_14 = 0xa2u;
    goto L_101e7de6;
L_101e7e4e: ;
    COW_AT(101e7e4e)
    if (rd32(rd32(sp0 - 4u)) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    else
    {
        eax = rd32(rd32(sp0 - 4u));
        esi = rd32(sp0 - 4u);
    COW_AT(101e7e58)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t74 = cow_thiscall(g, COW_IMG(0x10071ec0u), rd32(eax), 0);
        t75 = g->edx;
        cow_thiscall(g, COW_IMG(0x10071050u), esi, 0);
        wr32(esi, 0u);
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
L_101e7e68: ;
    COW_AT(101e7e68)
    g->ebx = loc_8;
    g->esi = loc_c;
    g->edi = loc_10;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e7980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e7992u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101e799bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x101e79aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e79b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e79bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e79d3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->edi = self + 0x158u;
        wr32(sp0 - 4u, self + 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x101e79dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x10u;
        g->edi = self + 0x158u;
        wr32(sp0 - 4u, self + 0x158u);
        (void)sp0;
        return 1;
    }
    case 0x101e79fau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi - 0x158u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        self = g->edi - 0x158u;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a1fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a4fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a87u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7a8eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7ac1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7aefu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = 0x18u;
        g->edi = self + 0xf4u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b63u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b7au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b94u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b9au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7b9fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7ba5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7bb5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7bb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7bc5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7bd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7bdfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101e7d74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7dc8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7dcfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7de6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e03u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e1cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e7e68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t loc_10;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e7980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e7980(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
