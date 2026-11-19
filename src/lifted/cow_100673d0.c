/* f_0x100673d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_100673d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100673d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100673d6;
    case 0x100673e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100673e6;
    case 0x100673eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100673ee;
    case 0x100673f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100673f3;
    case 0x10067400u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067400;
    case 0x1006740du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006740d;
    case 0x1006741du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006741d;
    case 0x1006742eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006742e;
    case 0x1006743eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006743e;
    case 0x10067443u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067443;
    case 0x10067448u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067448;
    case 0x10067456u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067456;
    case 0x1006745fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006745f;
    case 0x10067468u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067468;
    case 0x10067475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067475;
    case 0x1006747cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006747c;
    case 0x10067480u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067480;
    case 0x1006748du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006748d;
    case 0x10067491u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067491;
    case 0x1006749eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006749e;
    case 0x100674adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674ad;
    case 0x100674bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674ba;
    case 0x100674cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674cb;
    case 0x100674d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674d0;
    case 0x100674d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674d5;
    case 0x100674deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674de;
    case 0x100674ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674eb;
    case 0x100674efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674ef;
    case 0x100674f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_100674f3;
    case 0x10067505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067505;
    case 0x10067519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067519;
    case 0x1006751eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1006751e;
    case 0x10067524u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10067524;
    default: break;
    }
#endif

    COW_AT(100673d0)
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
L_100673d6: ;
    COW_AT(100673d6)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0x28u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t1;
    COW_AT(100673ee)
        if ((uint8_t)ebx != 0x2fu) goto L_10067443;
    COW_AT(100673f3)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0;
        t4 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t5 = g->ecx;
        t6 = g->edx;
        if ((uint8_t)t4 != (uint8_t)ebx)
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            goto L_1006747c;
        }
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(10067400)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 != 0x23u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            goto L_1006742e;
        }
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(1006740d)
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0;
        t10 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
        t11 = g->ecx;
        t12 = g->edx;
        if ((uint8_t)t10 == 0x23u)
        {
            ecx = t11;
            edx = t12;
            ebx = (ebx & 0xffffff00u) | (uint8_t)t10;
        }
        else
        {
            eax = t10;
            ecx = t11;
            edx = t12;
            ebx = (ebx & 0xffffff00u) | (uint8_t)t10;
    COW_AT(1006741d)
            g->ecx = ecx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
            t13 = g->ecx;
            t14 = g->edx;
            ecx = t13;
            edx = t14;
            ebx = (ebx & 0xffffff00u) | 0x23u;
        }
    }
    else
    {
        ecx = t2;
        edx = t3;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t1;
    COW_AT(100673e6)
        wr32(COW_IMG(0x1047bf5cu), rd32(COW_IMG(0x1047bf5cu)) + 1u);
    }
L_10067456: ;
    COW_AT(10067456)
    if (rd32(COW_IMG(0x1047bf5cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047bf5cu));
        goto L_100674cb;
    }
    eax = rd32(COW_IMG(0x1047bf5cu));
    COW_AT(1006745f)
    if ((uint8_t)ebx != 0x20u) goto L_10067519;
    COW_AT(10067468)
    if (rd8(COW_IMG(0x1047bf60u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
        goto L_100673d6;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
    COW_AT(10067475)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1006742e: ;
    COW_AT(1006742e)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t15 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0xau)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        ebx = (ebx & 0xffffff00u) | (uint8_t)t15;
        goto L_10067443;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t15;
    COW_AT(1006743e)
    if ((uint8_t)ebx != 0xffu) goto L_1006742e;
L_10067443: ;
    COW_AT(10067443)
    if ((uint8_t)ebx == 0x22u)
    {
    COW_AT(10067448)
        wr8(COW_IMG(0x1047bf60u), rd8(COW_IMG(0x1047bf60u)) == 0u);
    }
    goto L_10067456;
L_1006747c: ;
    COW_AT(1006747c)
    if ((uint8_t)eax != 0x2au) goto L_100674ba;
L_10067480: ;
    COW_AT(10067480)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t18 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t19 = g->ecx;
    t20 = g->edx;
    if ((uint8_t)t18 == 0x2au)
    {
        eax = t18;
        ecx = t19;
        edx = t20;
        goto L_10067491;
    }
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(1006748d)
    if ((uint8_t)eax != 0xffu) goto L_10067480;
L_10067491: ;
    COW_AT(10067491)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t21 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t22 = g->ecx;
    t23 = g->edx;
    if ((uint8_t)t21 == 0x2fu)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        goto L_100674ad;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
    COW_AT(1006749e)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t24 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    goto L_10067480;
L_100674ad: ;
    COW_AT(100674ad)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t27 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    ebx = (ebx & 0xffffff00u) | (uint8_t)t27;
    goto L_10067443;
L_100674ba: ;
    COW_AT(100674ba)
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    ebx = (ebx & 0xffffff00u) | 0x2fu;
    goto L_10067456;
L_100674cb: ;
    COW_AT(100674cb)
    if ((uint8_t)ebx == 0x20u) goto L_100674d5;
    COW_AT(100674d0)
    if ((uint8_t)ebx != 9u) goto L_10067519;
L_100674d5: ;
    COW_AT(100674d5)
    if (rd8(COW_IMG(0x1047bf60u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
        goto L_10067519;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1047bf60u));
L_100674de: ;
    COW_AT(100674de)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t32 = cow_call_regs(g, COW_IMG(0x10313f6cu), g->eax, g->ecx, edx, 1, 3, arg1, in_esi, in_ebx);
    t33 = g->ecx;
    t34 = g->edx;
    if ((uint8_t)t32 == 0x20u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_100674de;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(100674eb)
    if ((uint8_t)eax == 9u) goto L_100674de;
    COW_AT(100674ef)
    if ((uint8_t)eax != 0x28u) goto L_10067505;
    COW_AT(100674f3)
    t35 = rd32(COW_IMG(0x1047bf5cu)) + 1u;
    wr32(COW_IMG(0x1047bf5cu), t35);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t35 & 0xffffff00u) | 0x28u;
L_10067505: ;
    COW_AT(10067505)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t36 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, edx, 1, 3, arg1, 0xffffffffu, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (t36 & 0xffffff00u) | 0x20u;
L_10067519: ;
    COW_AT(10067519)
    if ((uint8_t)ebx == 0x29u)
    {
    COW_AT(1006751e)
        wr32(COW_IMG(0x1047bf5cu), rd32(COW_IMG(0x1047bf5cu)) - 1u);
    }
    COW_AT(10067524)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100673d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100673d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100673e6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100673eeu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100673f3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067400u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006740du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006741du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006742eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006743eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067443u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067448u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067456u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006745fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067468u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067475u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006747cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067480u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006748du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067491u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1006749eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674adu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674bau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674d0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674d5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674deu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674ebu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100674f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10067505u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10067519u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1006751eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10067524u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100673d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100673d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
