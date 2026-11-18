/* f_0x100aeea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100aeea0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100aeed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_100aeed4;
    case 0x100aeef9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aeef9;
    case 0x100aef14u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef14;
    case 0x100aef2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef2f;
    case 0x100aef66u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef66;
    case 0x100aef74u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef74;
    case 0x100aef86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef86;
    case 0x100aef91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef91;
    case 0x100aef9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aef9e;
    case 0x100aefa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aefa2;
    case 0x100aefe0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100aefe0;
    case 0x100aeffdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_100aeffd;
    case 0x100af007u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af007;
    case 0x100af010u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af010;
    case 0x100af01eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af01e;
    case 0x100af03bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af03b;
    case 0x100af048u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af048;
    case 0x100af04cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af04c;
    case 0x100af064u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af064;
    case 0x100af096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af096;
    case 0x100af0c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af0c0;
    case 0x100af0d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af0d3;
    case 0x100af0f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af0f9;
    case 0x100af103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af103;
    case 0x100af10du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af10d;
    case 0x100af11fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af11f;
    case 0x100af130u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af130;
    case 0x100af14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af14d;
    case 0x100af161u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100af161;
    case 0x100af175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_100af175;
    default: break;
    }
#endif

    COW_AT(100aeea0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0xcu, 0u);
    t1 = rd32(rd32(COW_IMG(0x10489904u)));
    wr32(sp0 - 4u, t1);
    t2 = rd32(COW_IMG(0x10489904u)) + 4u;
    wr32(sp0 - 8u, t2);
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        goto L_100af175;
    }
    ebx = t1 * 4u >> 2u;
    esi = t2;
    loc_18 = in_ebx;
    loc_1c = in_ebp;
    loc_20 = in_esi;
    loc_24 = in_edi;
    loc_c = 0u;
    loc_4 = t1;
    loc_8 = t2;
L_100aeed4: ;
    COW_AT(100aeed4)
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    t3 = rd32(ebx * 4u + esi);
    wr32(sp0 - 0x30u, t3);
    wr32(sp0 - 0x10u, t3);
    g->eax = t3;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x24u;
    t4 = cow_cdecl(g, COW_IMG(0x100af180u), 3, t3, sp0 - 0x10u, sp0 - 0x14u);
    t5 = g->edx;
    if ((uint8_t)t4 != 1u) goto L_100aefe0;
    edx = t5;
    ebp = ebx * 4u + esi;
    COW_AT(100aeef9)
    wr32(sp0 - 0x28u, ebp);
    t6 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x2cu, t6);
    t7 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t7);
    g->eax = t6;
    g->esp = sp0 - 0x24u;
    t8 = cow_cdecl(g, COW_IMG(0x100bd130u), 3, t7, t6, ebp);
    if ((uint8_t)t8 != 1u) goto L_100aefe0;
    COW_AT(100aef14)
    t9 = rd32(sp0 - 0x14u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u) == 0u)
    {
        eax = t9;
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u);
        edx = (uint16_t)t9;
        goto L_100af10d;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t9 * 4u);
    COW_AT(100aef2f)
    t10 = rd32(ecx + 0x120u) | 0x100u;
    wr32(ecx + 0x120u, t10);
    t11 = rd32(sp0 - 0x14u);
    if (rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u) + 0x124u) >> 0xcu & 1u)
    {
        eax = t11;
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u);
        edx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u) + 0x124u) >> 0xcu;
        esi = t10;
        goto L_100af10d;
    }
    eax = t11;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u);
    edx = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t11 * 4u) + 0x124u) >> 0xcu;
    esi = t10;
    COW_AT(100aef66)
    if (rd8(ecx + 0x145u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 0x145u);
        goto L_100af10d;
    }
    COW_AT(100aef74)
    if (!(rd32(ecx + 0x120u) >> 9u & 1u)) goto L_100af103;
    COW_AT(100aef86)
    if (!(rd32(COW_IMG(0x1047fb40u)) >> 8u & 1u))
    {
        edx = rd32(COW_IMG(0x1047fb40u));
        goto L_100af007;
    }
    edx = rd32(COW_IMG(0x1047fb40u));
    COW_AT(100aef91)
    wr32(sp0 - 0x28u, 0u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x10085450u), rd32(ecx + 0xa0u), 1, 0u);
L_100aef9e: ;
    COW_AT(100aef9e)
    eax = rd32(sp0 - 0x14u);
L_100aefa2: ;
    COW_AT(100aefa2)
    wr32(sp0 - 0x28u, ebp);
    wr32(sp0 - 0x2cu, eax);
    t23 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t23);
    g->ebx = ebx;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x1008edc0u), (uint16_t)eax, rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u), g->edx, 0, 3, t23, eax, ebp);
    t24 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) + 0x24u);
    t25 = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u);
    t26 = rd32(sp0 - 8u);
    wr32(t25 + 0x44u, t24);
    t27 = rd32(t25 + 0x28u);
    wr32(t25 + 0x48u, t27);
    t28 = rd32(t25 + 0x2cu);
    wr32(t25 + 0x4cu, t28);
    esi = t26;
L_100aefe0: ;
    COW_AT(100aefe0)
    t40 = rd32(sp0 - 0xcu) + 1u;
    t41 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, t40);
    if ((int32_t)(t41 + 1u) < (int32_t)rd32(sp0 - 4u))
    {
        ebx = ebx + (rd32(esi + t41 * 4u) >> 2u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_c = t40;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        goto L_100aeed4;
    }
    eax = t40;
    COW_AT(100aeffd)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | 1u;
L_100af007: ;
    COW_AT(100af007)
    if (rd32(ecx + 0x170u) == 0x2fu) goto L_100af04c;
    COW_AT(100af010)
    wr32(sp0 - 0x28u, 0xffu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t12 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, 0xffu);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        edx = t13;
        goto L_100af048;
    }
    COW_AT(100af01e)
    t14 = rd32(sp0 - 0x14u);
    if (rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t14 * 4u) + 0x1bcu) == 0u)
    {
        eax = t14;
        edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t14 * 4u);
        goto L_100af04c;
    }
    eax = t14;
    ecx = (t14 & 0xff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t14 * 4u) + 0x1bcu);
    edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t14 * 4u);
    COW_AT(100af03b)
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t15 = cow_call_regs(g, COW_IMG(0x10087030u), eax, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        goto L_100af161;
    }
    edx = t16;
L_100af048: ;
    COW_AT(100af048)
    eax = rd32(sp0 - 0x14u);
L_100af04c: ;
    COW_AT(100af04c)
    if ((rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0x78u) & 0xff000000u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    COW_AT(100af064)
        wr32(sp0 - 0x28u, 0u);
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x10085450u), rd32(ecx + 0xa0u), 1, 0u);
        wr32(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x14u) * 4u) + 0xa0u) + 0x7d8u, 0x20202020u);
        eax = rd32(sp0 - 0x14u);
    }
    COW_AT(100af096)
    t20 = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) + 0x120u);
    if ((t20 >> 0xfu | t20 >> 0xeu) & 1u) goto L_100aefa2;
    edx = t20 >> 0xeu;
    edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
    COW_AT(100af0c0)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t21 = cow_thiscall(g, COW_IMG(0x10083320u), rd32(edi + 0xa0u), 0);
    if (t21 == 0u) goto L_100aef9e;
    COW_AT(100af0d3)
    t22 = rd32(sp0 - 0x14u);
    if ((rd8(rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t22 * 4u) + 0xa0u) + 0x88u) & 0x20u) != 0u)
    {
        eax = t22;
        goto L_100aefa2;
    }
    eax = t22;
    COW_AT(100af0f9)
    wr32(COW_IMG(0x1048990cu), 8u);
L_100af103: ;
    COW_AT(100af103)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_100af10d: ;
    COW_AT(100af10d)
    wr32(sp0 - 0x28u, (uint16_t)eax);
    g->eax = (uint16_t)eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t29 = cow_cdecl(g, COW_IMG(0x100af2f0u), 1, (uint16_t)eax);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        eax = t29;
    }
    else
    {
        ecx = t30;
        edx = t31;
    COW_AT(100af11f)
        t32 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0x28u, t32);
        g->esi = esi;
        g->eax = t32;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t33 = cow_cdecl(g, COW_IMG(0x100aec70u), 3, t32, rd32(sp0 - 0x24u), rd32(sp0 - 0x20u));
        t34 = g->edx;
        if ((uint8_t)t33 != 1u)
        {
            eax = t33;
        }
        else
        {
            eax = t33;
            edx = t34;
    COW_AT(100af130)
            t35 = (uint16_t)rd32(sp0 - 0x14u);
            wr32(sp0 - 0x28u, t35);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t36 = cow_call_regs(g, COW_IMG(0x100af2c0u), g->eax, g->ecx, edx, 1, 1, t35);
            wr32(COW_IMG(0x104886f0u), 0x78u);
            eax = t36;
        }
    }
    COW_AT(100af14d)
    t37 = rd32(sp0 - 0x1cu);
    t38 = rd32(sp0 - 0x20u);
    t39 = rd32(sp0 - 0x24u);
    wr32(COW_IMG(0x1048990cu), 6u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t38;
    g->edi = t39;
    g->ebp = t37;
    return eax & 0xffffff00u;
L_100af161: ;
    COW_AT(100af161)
    t17 = rd32(sp0 - 0x1cu);
    t18 = rd32(sp0 - 0x20u);
    t19 = rd32(sp0 - 0x24u);
    wr32(COW_IMG(0x1048990cu), 7u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t18;
    g->edi = t19;
    g->ebp = t17;
    return eax & 0xffffff00u;
L_100af175: ;
    COW_AT(100af175)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100aeea0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100aeed4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aeef9u:
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
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x2cu, sp0 - 0x10u);
        wr32(sp0 - 0x28u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    case 0x100aef14u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef2fu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef66u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef74u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef86u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef91u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aef9eu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aefa2u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aefe0u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100aeffdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af007u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af010u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af01eu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af03bu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af048u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af04cu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af064u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af096u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af0c0u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af0d3u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af0f9u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af103u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af10du:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af11fu:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af130u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af14du:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af161u:
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
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x100af175u:
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
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100aeea0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100aeea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
