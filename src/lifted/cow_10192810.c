/* f_0x10192810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10192810(Guest* g)
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
    uint32_t loc_1c;
    uint32_t loc_40;
    uint32_t loc_4c;
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
    uint32_t t4;
    uint32_t t5;
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
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10192837u: ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10192837;
    case 0x1019283fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_1019283f;
    case 0x10192846u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x24u); goto E_10192846;
    case 0x10192877u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_10192877;
    case 0x101928b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101928b5;
    case 0x101928beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101928be;
    case 0x101928cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101928ca;
    case 0x101928dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101928db;
    case 0x10192903u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192903;
    case 0x10192929u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); goto E_10192929;
    case 0x10192931u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10192931;
    case 0x1019294du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_1019294d;
    case 0x1019297du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1019297d;
    case 0x10192985u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192985;
    case 0x10192991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192991;
    case 0x101929a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101929a0;
    case 0x101929beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101929be;
    case 0x101929ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_101929ce;
    case 0x101929fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_101929fa;
    case 0x10192a02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a02;
    case 0x10192a0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a0e;
    case 0x10192a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a1d;
    case 0x10192a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a3b;
    case 0x10192a4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_10192a4b;
    case 0x10192a76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a76;
    case 0x10192a7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10192a7e;
    case 0x10192a8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10192a8a;
    case 0x10192a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10192a9d;
    case 0x10192abfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10192abf;
    case 0x10192acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10192acf;
    default: break;
    }
#endif

    COW_AT(10192810)
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    t1 = rd32(self + 0x18u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    if (rd32(t1 + 8u) == 0u)
    {
        edx = rd32(t1 + 8u);
    COW_AT(1019283f)
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    else
    {
    COW_AT(10192837)
        t2 = rd32(self + 8u);
        wr8(t2 + 0x62u, 0u);
        edx = t2;
    }
    COW_AT(10192846)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    t3 = rd32(self + 0x18u);
    t4 = rd32(rd32(self + 0x18u) + 0xcu);
    wr16(sp0 - 0x20u, rd16(rd32(self + 8u) + 0x4cu));
    wr32(sp0 - 0x34u, t4);
    t5 = rd32(t3 + 4u);
    wr32(sp0 - 0x38u, t5);
    g->eax = t3;
    g->edx = t5;
    g->esp = sp0 - 0x30u;
    t6 = cow_stdcall(g, COW_IMG(0x10192c00u), 2, t5, t4);
    t7 = g->edx;
    wr32(sp0 - 0x14u, t6);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, t6);
    edx = t7;
    ebx = 1u;
    edi = in_edi;
    loc_14 = t6;
    loc_18 = 1u;
    loc_1c = t6;
L_10192877: ;
    COW_AT(10192877)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, ebx, 1u, 1u);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
    wr32(sp0 - 4u, t8);
    t9 = rd32(rd32(sp0 - 0x1cu));
    wr32(sp0 - 0x34u, t9);
    g->eax = t9;
    g->edx = rd32(rd32(self + 0x14u));
    t10 = rd32(rd32(self + 0x14u));
    t11 = rd16(sp0 - 0x10u);
    t12 = rd32(t9 * 4u + rd32(rd32(self + 0x14u)));
    t13 = cow_stdcall(g, COW_IMG(0x10192cc0u), 1, t9);
    t14 = g->edx;
    if (t12 == 0u)
    {
        ebx = rd32(sp0 - 0x18u);
        ebp = (uint32_t)(int16_t)t11;
        edi = t12;
    }
    else
    {
        eax = t13;
        edx = t14;
        ebx = rd32(sp0 - 0x18u);
        ebp = (uint32_t)(int16_t)t11;
        edi = t12;
    COW_AT(101928b5)
        if ((uint32_t)(int16_t)rd16(sp0 - 0x20u) != ebx) goto L_10192903;
    COW_AT(101928be)
        if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
        {
            edx = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
            goto L_101928db;
        }
        ecx = rd32(self + 8u);
        edx = (edx & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
    COW_AT(101928ca)
        wr32(sp0 - 0x34u, edx);
        wr32(sp0 - 0x38u, 0x1eu);
        t15 = rd32(sp0 - 4u);
        wr32(sp0 - 0x3cu, t15);
        wr32(sp0 - 0x40u, ebp);
        wr32(sp0 - 0x44u, edi);
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, edi, ebp, t15, 0x1eu, edx);
    }
L_10192931: ;
    COW_AT(10192931)
    t20 = rd32(sp0 - 0x1cu) + 4u;
    wr32(sp0 - 0x1cu, t20);
    wr32(sp0 - 0x18u, ebx + 1u);
    if ((int32_t)ebx < 9)
    {
        edx = ebx;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = ebx + 1u;
        ebx = ebx + 1u;
        loc_1c = t20;
        goto L_10192877;
    }
    edx = ebx;
    ebx = ebx + 1u;
    COW_AT(1019294d)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xbu);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, 0xbu, 1u, 1u);
    if (rd32(rd32(rd32(self + 0x14u)) + rd32(rd32(sp0 - 0x14u) + 0x24u) * 4u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        ebx = rd32(sp0 - 0x14u);
        edi = rd32(rd32(self + 0x14u));
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        ecx = rd32(rd32(rd32(self + 0x14u)) + rd32(rd32(sp0 - 0x14u) + 0x24u) * 4u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
        ebx = rd32(sp0 - 0x14u);
        edi = rd32(rd32(self + 0x14u));
    COW_AT(1019297d)
        if (rd16(sp0 - 0x20u) != 0xbu)
        {
    COW_AT(101929be)
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0x80808080u);
            wr32(sp0 - 0x40u, edx);
            wr32(sp0 - 0x44u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x30u;
            t23 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, eax, edx, 0x80808080u, 0u, 0u);
            eax = t23;
        }
        else
        {
    COW_AT(10192985)
            if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
            {
                ebp = (ebp & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                edi = rd32(self + 8u);
    COW_AT(101929a0)
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80805020u);
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, edx);
                wr32(sp0 - 0x50u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t22 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, eax, edx, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
                eax = t22;
            }
            else
            {
                ebp = (ebp & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                edi = rd32(self + 8u);
    COW_AT(10192991)
                wr32(sp0 - 0x34u, ebp);
                wr32(sp0 - 0x38u, 0x1eu);
                wr32(sp0 - 0x3cu, edx);
                wr32(sp0 - 0x40u, eax);
                wr32(sp0 - 0x44u, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t21 = cow_thiscall(g, COW_IMG(0x10119f80u), edi, 5, ecx, eax, edx, 0x1eu, ebp);
                eax = t21;
            }
        }
    }
    COW_AT(101929ce)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xcu);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, 0xcu, 1u, 1u);
    if (rd32(rd32(ebx + 0x28u) * 4u + rd32(rd32(self + 0x14u))) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        edi = rd32(rd32(self + 0x14u));
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        ecx = rd32(rd32(ebx + 0x28u) * 4u + rd32(rd32(self + 0x14u)));
        edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
        edi = rd32(rd32(self + 0x14u));
    COW_AT(101929fa)
        if (rd16(sp0 - 0x20u) != 0xcu)
        {
    COW_AT(10192a3b)
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x38u, 0u);
            wr32(sp0 - 0x3cu, 0x80808080u);
            wr32(sp0 - 0x40u, edx);
            wr32(sp0 - 0x44u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x30u;
            t26 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, eax, edx, 0x80808080u, 0u, 0u);
            eax = t26;
        }
        else
        {
    COW_AT(10192a02)
            if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
            {
                edi = rd32(self + 8u);
    COW_AT(10192a1d)
                wr32(sp0 - 0x34u, 0u);
                wr32(sp0 - 0x38u, 0u);
                wr32(sp0 - 0x3cu, 0u);
                wr32(sp0 - 0x40u, 0x80805020u);
                wr32(sp0 - 0x44u, 0x3f800000u);
                wr32(sp0 - 0x48u, 0x3f800000u);
                wr32(sp0 - 0x4cu, edx);
                wr32(sp0 - 0x50u, eax);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t25 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, eax, edx, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
                eax = t25;
            }
            else
            {
                ebp = (ebp & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
                edi = rd32(self + 8u);
    COW_AT(10192a0e)
                wr32(sp0 - 0x34u, ebp);
                wr32(sp0 - 0x38u, 0x1eu);
                wr32(sp0 - 0x3cu, edx);
                wr32(sp0 - 0x40u, eax);
                wr32(sp0 - 0x44u, ecx);
                g->eax = eax;
                g->esp = sp0 - 0x30u;
                t24 = cow_thiscall(g, COW_IMG(0x10119f80u), edi, 5, ecx, eax, edx, 0x1eu, ebp);
                eax = t24;
            }
        }
    }
    COW_AT(10192a4b)
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0xau);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    g->ebx = ebx;
    g->edi = edi;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 0x10u, 0xau, 1u, 1u);
    if (rd32(rd32(rd32(self + 0x14u)) + 0x44u) == 0u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
        ebx = rd32(sp0 - 0x2cu);
        ebp = rd32(sp0 - 0x30u);
        goto L_10192acf;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
    ecx = rd32(rd32(rd32(self + 0x14u)) + 0x44u);
    edx = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
    ebx = rd32(sp0 - 0x2cu);
    ebp = rd32(sp0 - 0x30u);
    COW_AT(10192a76)
    if (rd16(sp0 - 0x20u) != 0xau) goto L_10192abf;
    COW_AT(10192a7e)
    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0) goto L_10192a9d;
    esi = rd32(self + 8u);
    edi = (edi & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
    COW_AT(10192a8a)
    wr32(sp0 - 0x2cu, edi);
    wr32(sp0 - 0x30u, 0x1eu);
    wr32(sp0 - 0x34u, edx);
    wr32(sp0 - 0x38u, eax);
    wr32(sp0 - 0x3cu, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t27 = cow_thiscall(g, COW_IMG(0x10119f80u), esi, 5, ecx, eax, edx, 0x1eu, edi);
    t28 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    g->edx = t28;
    return t27;
L_101928db: ;
    COW_AT(101928db)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    t16 = (-((uint8_t)((uint8_t)eax - 1u) != 0u) & 0x40402810u) + 0x40402810u;
    wr32(sp0 - 0x40u, t16);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    t17 = rd32(sp0 - 4u);
    wr32(sp0 - 0x4cu, t17);
    eax = t17;
    loc_40 = t16;
    loc_4c = t17;
L_10192929: ;
    COW_AT(10192929)
    wr32(sp0 - 0x50u, ebp);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1011fc80u), edi, 8, ebp, loc_4c, 0x3f800000u, 0x3f800000u, loc_40, 0u, 0u, 0u);
    goto L_10192931;
L_10192903: ;
    COW_AT(10192903)
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    t18 = (-((uint8_t)((uint8_t)eax - 1u) != 0u) & 0x40405870u) + 0x40402810u;
    wr32(sp0 - 0x40u, t18);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    t19 = rd32(sp0 - 4u);
    wr32(sp0 - 0x4cu, t19);
    eax = t18;
    loc_40 = t18;
    loc_4c = t19;
    goto L_10192929;
L_10192a9d: ;
    COW_AT(10192a9d)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0x80805020u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, edx);
    wr32(sp0 - 0x48u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t29 = cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, eax, edx, 0x3f800000u, 0x3f800000u, 0x80805020u, 0u, 0u, 0u);
    t30 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    g->edx = t30;
    return t29;
L_10192abf: ;
    COW_AT(10192abf)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0x80808080u);
    wr32(sp0 - 0x38u, edx);
    wr32(sp0 - 0x3cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t31 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, eax, edx, 0x80808080u, 0u, 0u);
    t32 = g->edx;
    eax = t31;
    edx = t32;
L_10192acf: ;
    COW_AT(10192acf)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10192810(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10192837u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        g->eax = 0u;
        wr32(sp0 - 0x28u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x1019283fu:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10192846u:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x28u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x10192877u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101928b5u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101928beu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101928cau:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101928dbu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192903u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192929u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x48u, 0x3f800000u);
        wr32(sp0 - 0x44u, 0x3f800000u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10192931u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1019294du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x1019297du:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192985u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192991u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101929a0u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101929beu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x101929ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x101929fau:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a02u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a0eu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a1du:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a3bu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a4bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x10192a76u:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a7eu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a8au:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192a9du:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192abfu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10192acfu:
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
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10192810(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10192810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
