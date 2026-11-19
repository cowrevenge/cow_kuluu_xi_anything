/* f_0x101e12e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e12e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_28;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
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
    uint32_t t5;
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
    cow_frame(g, sp0, 64u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e1320u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101e1320;
    case 0x101e132cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101e132c;
    case 0x101e1336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101e1336;
    case 0x101e133fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101e133f;
    case 0x101e1346u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_101e1346;
    case 0x101e1392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_101e1392;
    case 0x101e139bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; goto E_101e139b;
    case 0x101e13b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101e13b0;
    case 0x101e13d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101e13d9;
    case 0x101e13ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101e13eb;
    case 0x101e13fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101e13fc;
    case 0x101e1408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_101e1408;
    case 0x101e1417u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_101e1417;
    case 0x101e1419u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_101e1419;
    case 0x101e1425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_101e1425;
    case 0x101e1440u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e1440;
    case 0x101e145fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e145f;
    case 0x101e146au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e146a;
    case 0x101e148du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e148d;
    case 0x101e14aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); goto E_101e14ae;
    case 0x101e14bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e14bf;
    case 0x101e14c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e14c9;
    case 0x101e14dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101e14df;
    case 0x101e150bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_101e150b;
    case 0x101e1525u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_101e1525;
    default: break;
    }
#endif

    COW_AT(101e12e0)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t2 = cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = (t3 & 0xffff0000u) | rd16(self + 0x20u);
    wr32(sp0 - 0x20u, t5);
    g->edx = t4;
    t6 = cow_stdcall(g, COW_IMG(0x101e0730u), 1, t5);
    t7 = g->edx;
    if ((int32_t)t6 < 0)
    {
        eax = t6;
        edx = t7;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_esi;
        loc_1c = in_edi;
    }
    else
    {
        eax = t6;
    COW_AT(101e1320)
        if (rd32(self + 0x70u) != 2u) goto L_101e133f;
        ecx = rd32(self + 0x70u);
    COW_AT(101e132c)
        if (rd8(COW_IMG(0x106634deu)) != 0u) goto L_101e133f;
    COW_AT(101e1336)
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0x80585858u);
        loc_28 = 0x80585858u;
L_101e1346: ;
    COW_AT(101e1346)
        t8 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 4u;
        wr32(sp0 - 0x2cu, t8);
        t9 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x24u;
        wr32(sp0 - 0x30u, t9);
        t10 = rd32(eax * 4u + self + 0x50u);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, COW_IMG(0x1011fb60u), t10, 5, t9, t8, loc_28, 0u, 0u);
        t11 = g->ecx;
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x24u, 0x80808080u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, 0x3f000000u);
        t12 = rd32(sp0 - 6u) + 4u;
        wr32(sp0 - 0x30u, t12);
        t13 = rd32(sp0 - 8u) + 0x12u;
        wr32(sp0 - 0x34u, t13);
        t14 = (t11 & 0xffff0000u) | rd16(self + 0x20u);
        wr32(sp0 - 0x38u, t14);
        g->eax = t13;
        g->edx = t12;
        t15 = rd32(COW_IMG(0x10621808u));
        t16 = cow_thiscall(g, COW_IMG(0x1015bd70u), t15, 7, t14, t13, t12, 0x3f000000u, 0u, 0x80808080u, 0u);
        t17 = g->ecx;
        t18 = g->edx;
        if (rd32(self + 0x70u) != 2u)
        {
            eax = t16;
            edx = t18;
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
    COW_AT(101e1392)
            if (rd8(COW_IMG(0x106634deu)) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106634deu));
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_18 = rd32(sp0 - 0x18u);
                loc_1c = rd32(sp0 - 0x1cu);
            }
            else
            {
                eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106634deu));
    COW_AT(101e139b)
                wr32(sp0 - 0x20u, 2u);
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t19 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
                if (rd32(rd32(t19) + 0x80cu) == 0u)
                {
                    eax = t19;
                    edx = rd32(t19);
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
                else
                {
                    ecx = rd32(rd32(t19) + 0x80cu);
    COW_AT(101e13b0)
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 0u);
                    wr32(sp0 - 0x28u, 0u);
                    wr32(sp0 - 0x2cu, 0x80808080u);
                    wr32(sp0 - 0x30u, 0x3e99999au);
                    wr32(sp0 - 0x34u, 0x3e99999au);
                    t20 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0xau;
                    wr32(sp0 - 0x38u, t20);
                    t21 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x1du;
                    wr32(sp0 - 0x3cu, t21);
                    g->eax = t20;
                    g->edx = t21;
                    g->esp = sp0 - 0x1cu;
                    t22 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t21, t20, 0x3e99999au, 0x3e99999au, 0x80808080u, 0u, 0u, 0u);
                    t23 = g->edx;
                    eax = t22;
                    edx = t23;
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_1c = rd32(sp0 - 0x1cu);
                }
            }
        }
    }
    COW_AT(101e13d9)
    wr32(sp0 - 0x20u, 9u);
    wr32(sp0 - 0x24u, 0xbu);
    g->eax = eax;
    g->edx = edx;
    t24 = rd32(self + 8u);
    g->esp = sp0 - 0x1cu;
    t25 = cow_thiscall(g, COW_IMG(0x10118b60u), t24, 2, 0xbu, 9u);
    t26 = g->ecx;
    t27 = g->edx;
    if (rd32(self + 0x70u) != 2u)
    {
        eax = t25;
        edx = t27;
    }
    else
    {
        eax = t25;
        ecx = t26;
        edx = t27;
    COW_AT(101e13eb)
        wr32(sp0 - 0x20u, COW_IMG(0x106634d4u));
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t28 = cow_call_regs(g, COW_IMG(0x101e1200u), eax, g->ecx, g->edx, 1, 1, COW_IMG(0x106634d4u));
        t29 = g->edx;
        if ((uint8_t)t28 != 0u)
        {
            eax = t28;
            edx = t29;
        }
        else
        {
            eax = t28;
            edx = t29;
    COW_AT(101e13fc)
            wr32(sp0 - 0x20u, 9u);
            wr32(sp0 - 0x24u, 5u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t30 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 9u);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
    }
    COW_AT(101e1408)
    wr32(sp0 - 0xcu, COW_IMG(0x106634e0u));
    ebx = self + 0x22u;
    ebp = 0u;
    loc_c = COW_IMG(0x106634e0u);
L_101e1419: ;
    COW_AT(101e1419)
    if (rd16(ebx) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ebx);
    COW_AT(101e1425)
        wr32(sp0 - 0x20u, (uint16_t)eax);
        g->eax = (uint16_t)eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t32 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
        t33 = g->edx;
        if (t32 == 0u)
        {
            edx = t33;
            loc_c = rd32(sp0 - 0xcu);
        }
        else
        {
            edx = t33;
            edi = t32;
    COW_AT(101e1440)
            wr32(sp0 - 0x20u, 1u);
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, ebp + 1u);
            wr32(sp0 - 0x2cu, sp0 - 8u);
            g->ebx = ebx;
            g->edi = edi;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp + 1u, 1u, 1u);
            if (rd32(edi + 0x14c0u) == 0u) goto L_101e148d;
            eax = rd32(edi + 0x14c0u);
    COW_AT(101e145f)
            if (rd16(eax) <= 1u) goto L_101e148d;
    COW_AT(101e146a)
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x80808080u);
            t34 = rd8(ebp + self + 0x36u);
            wr32(sp0 - 0x28u, t34);
            wr32(sp0 - 0x2cu, 0x3f800000u);
            t35 = rd32(sp0 - 6u);
            wr32(sp0 - 0x30u, t35);
            t36 = rd32(sp0 - 8u);
            wr32(sp0 - 0x34u, t36);
            t37 = (t34 & 0xffff0000u) | rd16(ebx);
            wr32(sp0 - 0x38u, t37);
            eax = t35;
            edx = t37;
            loc_28 = t34;
            loc_30 = t35;
            loc_34 = t36;
            loc_38 = t37;
L_101e14ae: ;
    COW_AT(101e14ae)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t42 = cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, loc_38, loc_34, loc_30, 0x3f800000u, loc_28, 0x80808080u, 0u);
            t43 = g->edx;
            if (rd32(self + 0x70u) != 2u)
            {
                edx = t43;
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
                eax = t42;
                edx = t43;
    COW_AT(101e14bf)
                if ((int16_t)rd16(rd32(sp0 - 0xcu)) >= 0)
                {
                    loc_c = rd32(sp0 - 0xcu);
                }
                else
                {
                    ecx = rd32(sp0 - 0xcu);
    COW_AT(101e14c9)
                    wr32(sp0 - 0x20u, 2u);
                    g->eax = eax;
                    g->esp = sp0 - 0x1cu;
                    t44 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
                    if (rd32(rd32(t44) + 0x80cu) == 0u)
                    {
                        edx = rd32(t44);
                        loc_c = rd32(sp0 - 0xcu);
                    }
                    else
                    {
                        ecx = rd32(rd32(t44) + 0x80cu);
    COW_AT(101e14df)
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0x80808080u);
                        wr32(sp0 - 0x30u, 0x3ea3d70au);
                        wr32(sp0 - 0x34u, 0x3ea3d70au);
                        t45 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 0x14u;
                        wr32(sp0 - 0x38u, t45);
                        t46 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x14u;
                        wr32(sp0 - 0x3cu, t46);
                        g->edx = t46;
                        g->esp = sp0 - 0x1cu;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, t46, t45, 0x3ea3d70au, 0x3ea3d70au, 0x80808080u, 0u, 0u, 0u);
                        t47 = g->edx;
                        edx = t47;
                        loc_c = rd32(sp0 - 0xcu);
                    }
                }
            }
        }
    }
    COW_AT(101e150b)
    wr32(sp0 - 0xcu, loc_c + 6u);
    if ((int32_t)(loc_c + 6u) < (int32_t)COW_IMG(0x1066351cu))
    {
        eax = loc_c + 6u;
        ebx = ebx + 2u;
        ebp = ebp + 1u;
        loc_c = loc_c + 6u;
        goto L_101e1417;
    }
    eax = loc_c + 6u;
    COW_AT(101e1525)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_101e133f: ;
    COW_AT(101e133f)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    loc_28 = 0x80808080u;
    goto L_101e1346;
L_101e1417: ;
    COW_AT(101e1417)
    goto L_101e1419;
L_101e148d: ;
    COW_AT(101e148d)
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x80808080u);
    t38 = rd8(ebp + self + 0x36u);
    wr32(sp0 - 0x28u, t38);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    t39 = rd32(sp0 - 6u);
    wr32(sp0 - 0x30u, t39);
    t40 = rd32(sp0 - 8u);
    wr32(sp0 - 0x34u, t40);
    t41 = (t38 & 0xffff0000u) | rd16(ebx);
    wr32(sp0 - 0x38u, t41);
    eax = t41;
    edx = t40;
    loc_28 = t38;
    loc_30 = t39;
    loc_34 = t40;
    loc_38 = t41;
    goto L_101e14ae;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e12e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e1320u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e132cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e1336u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e133fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e1346u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x28u;
        g->ebx = 2u;
        g->edi = 0u;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101e1392u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e139bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->ebx = 2u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e13b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e13d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_30;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e13ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e13fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e1408u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e1417u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e1419u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e1425u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e1440u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e145fu:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101e146au:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101e148du:
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
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x101e14aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x2cu, 0x3f800000u);
        wr32(sp0 - 0x24u, 0x80808080u);
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101e14bfu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e14c9u:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e14dfu:
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
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e150bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x101e1525u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_28;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e12e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e12e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
