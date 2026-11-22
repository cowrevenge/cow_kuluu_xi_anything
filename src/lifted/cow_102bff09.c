/* f_0x102bff09 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102bff09(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102bff2au: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff2a;
    case 0x102bff32u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff32;
    case 0x102bff40u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff40;
    case 0x102bff45u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff45;
    case 0x102bff4bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff4b;
    case 0x102bff59u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff59;
    case 0x102bff5eu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff5e;
    case 0x102bff62u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff62;
    case 0x102bff65u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff65;
    case 0x102bff73u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff73;
    case 0x102bff82u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff82;
    case 0x102bff8bu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff8b;
    case 0x102bff94u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bff94;
    case 0x102bffa0u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffa0;
    case 0x102bffa9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffa9;
    case 0x102bffc3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffc3;
    case 0x102bffcbu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffcb;
    case 0x102bffd7u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffd7;
    case 0x102bffdau: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bffda;
    case 0x102bfffbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102bfffb;
    case 0x102c000bu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c000b;
    case 0x102c0014u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0014;
    case 0x102c001cu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c001c;
    case 0x102c0025u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0025;
    case 0x102c0034u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0034;
    case 0x102c003au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c003a;
    case 0x102c0054u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0054;
    case 0x102c0059u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0059;
    case 0x102c0067u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0067;
    case 0x102c006au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c006a;
    case 0x102c0084u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0084;
    case 0x102c0090u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0090;
    case 0x102c0099u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0099;
    case 0x102c00acu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00ac;
    case 0x102c00b1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00b1;
    case 0x102c00b7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00b7;
    case 0x102c00e9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00e9;
    case 0x102c00ecu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00ec;
    case 0x102c00f4u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00f4;
    case 0x102c00f8u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00f8;
    case 0x102c00fbu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c00fb;
    case 0x102c012du: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c012d;
    case 0x102c0134u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0134;
    case 0x102c0138u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c0138;
    case 0x102c013bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_102c013b;
    default: break;
    }
#endif

    COW_AT(102bff09)
    t1 = rd32(rd32(sp0 + 4u));
    t2 = rd8(rd32(sp0 + 4u) + 8u);
    t3 = rd32(sp0 + 4u);
    wr8(sp0 + 7u, (uint8_t)(arg3 >> 8u));
    if ((uint8_t)t2 != 0u)
    {
        eax = t1;
        ecx = (self & 0xffffff00u) | t2;
        esi = t3;
        goto L_102c000b;
    }
    eax = t1;
    ecx = (self & 0xffffff00u) | t2;
    esi = t3;
    COW_AT(102bff2a)
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102bff82;
    }
    COW_AT(102bff32)
    t4 = rd8(sp0 + 0x10u);
    if ((t4 & 0x80u) == 0u)
    {
        ecx = eax + rd32(sp0 + 8u);
        edi = eax * 2u + rd32(sp0 + 8u);
    COW_AT(102bff5e)
        if (eax != 0u)
        {
    COW_AT(102bff62)
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102bff65: ;
    COW_AT(102bff65)
            t7 = rd8(ecx - 1u);
            wr8(edi - 1u, (uint8_t)t7);
            t8 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t8 - 1u);
            wr8(edi - 2u, (uint8_t)arg3);
            if (t8 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t7;
                edi = edi - 2u;
                goto L_102bff65;
            }
        }
    }
    else
    {
        ecx = eax + rd32(sp0 + 8u);
        edi = eax * 2u + rd32(sp0 + 8u);
    COW_AT(102bff40)
        if (eax > 1u)
        {
    COW_AT(102bff45)
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102bff4b: ;
    COW_AT(102bff4b)
            wr8(edi - 1u, (uint8_t)arg3);
            t5 = rd32(sp0 + 8u);
            t6 = rd8(ecx - 1u);
            wr32(sp0 + 8u, t5 - 1u);
            wr8(edi - 2u, (uint8_t)t6);
            if (t5 != 1u)
            {
                ecx = ecx - 1u;
                ebx = (ebx & 0xffffff00u) | t6;
                edi = edi - 2u;
                goto L_102bff4b;
            }
            edi = edi - 2u;
        }
    COW_AT(102bff59)
        wr8(edi - 1u, (uint8_t)arg3);
    }
    COW_AT(102bff73)
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x10u);
    eax = eax * 2u;
L_102c0138: ;
    COW_AT(102c0138)
    wr32(esi + 4u, eax);
L_102c013b: ;
    COW_AT(102c013b)
    return;
L_102bff82: ;
    COW_AT(102bff82)
    if ((uint8_t)ecx != 0x10u) goto L_102c013b;
    COW_AT(102bff8b)
    t9 = rd8(sp0 + 0x10u);
    if ((t9 & 0x80u) == 0u)
    {
        ecx = rd32(sp0 + 8u);
    COW_AT(102bffcb)
        wr32(sp0 + 8u, eax + ecx);
        if (eax != 0u)
        {
            edi = eax * 2u + ecx;
    COW_AT(102bffd7)
            wr32(sp0 + 0x10u, eax);
L_102bffda: ;
    COW_AT(102bffda)
            t13 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t13 - 1u);
            t14 = rd32(sp0 + 8u);
            t15 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t14 - 1u);
            wr8(edi - 1u, rd8(t15));
            wr8(edi - 2u, rd8(rd32(sp0 + 8u)));
            wr8(edi - 3u, (uint8_t)(arg3 >> 8u));
            t16 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t16 - 1u);
            wr8(edi - 4u, (uint8_t)arg3);
            if (t16 != 1u)
            {
                edi = edi - 4u;
                goto L_102bffda;
            }
        }
    }
    else
    {
        ecx = rd32(sp0 + 8u);
    COW_AT(102bff94)
        wr32(sp0 + 0x10u, eax + ecx);
        if (eax <= 1u)
        {
            ecx = eax * 2u + ecx;
            ebx = arg3 >> 8u;
        }
        else
        {
            ecx = eax * 2u + ecx;
    COW_AT(102bffa0)
            wr32(sp0 + 8u, eax - 1u);
            ebx = arg3 >> 8u;
            edi = rd32(sp0 + 0x10u);
L_102bffa9: ;
    COW_AT(102bffa9)
            wr8(ecx - 1u, (uint8_t)ebx);
            wr8(ecx - 2u, (uint8_t)arg3);
            t10 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t10);
            t11 = rd32(sp0 + 8u);
            t12 = rd8(edi - 2u);
            wr32(sp0 + 8u, t11 - 1u);
            wr8(ecx - 4u, (uint8_t)t12);
            if (t11 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t10 | t12) & 0xffffff00u) | rd8(sp0 + 7u);
                edi = edi - 2u;
                goto L_102bffa9;
            }
            ecx = ecx - 4u;
            ebx = ((ebx | t10 | t12) & 0xffffff00u) | rd8(sp0 + 7u);
        }
    COW_AT(102bffc3)
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)arg3);
    }
    COW_AT(102bfffb)
    wr8(esi + 0xau, 2u);
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
    goto L_102c0138;
L_102c000b: ;
    COW_AT(102c000b)
    if ((uint8_t)ecx != 2u) goto L_102c013b;
    COW_AT(102c0014)
    if (rd8(esi + 9u) != 8u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(esi + 9u);
        goto L_102c0090;
    }
    COW_AT(102c001c)
    t17 = rd8(sp0 + 0x10u);
    if ((t17 & 0x80u) == 0u)
    {
        ecx = rd32(sp0 + 8u);
    COW_AT(102c0059)
        if (eax != 0u)
        {
            edi = eax * 3u + ecx;
            ecx = eax * 4u + ecx;
    COW_AT(102c0067)
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102c006a: ;
    COW_AT(102c006a)
            t22 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t22);
            t23 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t23);
            t24 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t24);
            t25 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t25 - 1u);
            wr8(ecx - 4u, (uint8_t)arg3);
            if (t25 != 1u)
            {
                ecx = ecx - 4u;
                ebx = ((ebx | t22 | t23) & 0xffffff00u) | t24;
                edi = edi - 3u;
                goto L_102c006a;
            }
        }
    }
    else
    {
        ecx = rd32(sp0 + 8u);
    COW_AT(102c0025)
        if (eax <= 1u)
        {
            edi = eax * 4u + ecx;
        }
        else
        {
            edi = eax * 4u + ecx;
            ecx = eax * 3u + ecx;
    COW_AT(102c0034)
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102c003a: ;
    COW_AT(102c003a)
            wr8(edi - 1u, (uint8_t)arg3);
            t18 = rd8(ecx - 1u);
            wr8(edi - 2u, (uint8_t)t18);
            t19 = rd8(ecx - 2u);
            wr8(edi - 3u, (uint8_t)t19);
            t20 = rd32(sp0 + 8u);
            t21 = rd8(ecx - 3u);
            wr32(sp0 + 8u, t20 - 1u);
            wr8(edi - 4u, (uint8_t)t21);
            if (t20 != 1u)
            {
                ecx = ecx - 3u;
                ebx = ((ebx | t18 | t19) & 0xffffff00u) | t21;
                edi = edi - 4u;
                goto L_102c003a;
            }
            edi = edi - 4u;
        }
    COW_AT(102c0054)
        wr8(edi - 1u, (uint8_t)arg3);
    }
    COW_AT(102c0084)
    wr8(esi + 0xbu, 0x20u);
    eax = eax << 2u;
L_102c0134: ;
    COW_AT(102c0134)
    wr8(esi + 0xau, 4u);
    goto L_102c0138;
L_102c0090: ;
    COW_AT(102c0090)
    if ((uint8_t)ecx != 0x10u) goto L_102c013b;
    COW_AT(102c0099)
    t26 = rd8(sp0 + 0x10u);
    if ((t26 & 0x80u) == 0u)
    {
        ecx = eax * 4u + rd32(sp0 + 8u);
        edi = eax * 3u + rd32(sp0 + 8u);
    COW_AT(102c00f4)
        if (eax != 0u)
        {
    COW_AT(102c00f8)
            wr32(sp0 + 8u, eax);
            ebx = arg3 >> 8u;
L_102c00fb: ;
    COW_AT(102c00fb)
            t35 = rd8(edi - 1u);
            wr8(ecx - 1u, (uint8_t)t35);
            t36 = rd8(edi - 2u);
            wr8(ecx - 2u, (uint8_t)t36);
            t37 = rd8(edi - 3u);
            wr8(ecx - 3u, (uint8_t)t37);
            t38 = rd8(edi - 4u);
            wr8(ecx - 4u, (uint8_t)t38);
            t39 = rd8(edi - 5u);
            wr8(ecx - 5u, (uint8_t)t39);
            t40 = rd8(edi - 6u);
            wr8(ecx - 6u, (uint8_t)t40);
            t41 = rd8(sp0 + 7u);
            wr8(ecx - 7u, (uint8_t)t41);
            t42 = rd32(sp0 + 8u);
            wr32(sp0 + 8u, t42 - 1u);
            wr8(ecx - 8u, (uint8_t)arg3);
            if (t42 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t35 | t36 | t37 | t38 | t39 | t40) & 0xffffff00u) | t41;
                edi = edi - 6u;
                goto L_102c00fb;
            }
        }
    }
    else
    {
        ecx = eax * 4u + rd32(sp0 + 8u);
        edi = eax * 3u + rd32(sp0 + 8u);
    COW_AT(102c00ac)
        if (eax <= 1u)
        {
            ebx = arg3 >> 8u;
        }
        else
        {
    COW_AT(102c00b1)
            wr32(sp0 + 8u, eax - 1u);
            ebx = eax - 1u;
L_102c00b7: ;
    COW_AT(102c00b7)
            t27 = rd8(sp0 + 7u);
            wr8(ecx - 1u, (uint8_t)t27);
            wr8(ecx - 2u, (uint8_t)arg3);
            t28 = rd8(edi - 1u);
            wr8(ecx - 3u, (uint8_t)t28);
            t29 = rd8(edi - 2u);
            wr8(ecx - 4u, (uint8_t)t29);
            t30 = rd8(edi - 3u);
            wr8(ecx - 5u, (uint8_t)t30);
            t31 = rd8(edi - 4u);
            wr8(ecx - 6u, (uint8_t)t31);
            t32 = rd8(edi - 5u);
            wr8(ecx - 7u, (uint8_t)t32);
            t33 = rd32(sp0 + 8u);
            t34 = rd8(edi - 6u);
            wr32(sp0 + 8u, t33 - 1u);
            wr8(ecx - 8u, (uint8_t)t34);
            if (t33 != 1u)
            {
                ecx = ecx - 8u;
                ebx = ((ebx | t27 | t28 | t29 | t30 | t31 | t32) & 0xffffff00u) | t34;
                edi = edi - 6u;
                goto L_102c00b7;
            }
            ecx = ecx - 8u;
            ebx = ((ebx | t27 | t28 | t29 | t30 | t31 | t32) & 0xffffff00u) | t34;
    COW_AT(102c00e9)
            ebx = (ebx & 0xffffff00u) | rd8(sp0 + 7u);
        }
    COW_AT(102c00ec)
        wr8(ecx - 1u, (uint8_t)ebx);
        wr8(ecx - 2u, (uint8_t)arg3);
    }
    COW_AT(102c012d)
    wr8(esi + 0xbu, 0x40u);
    eax = eax << 3u;
    goto L_102c0134;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102bff09(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102bff2au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff32u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff40u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff45u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff4bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff59u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff5eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff62u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff65u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff82u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff8bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bff94u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffa0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffa9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffc3u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffcbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffd7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bffdau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102bfffbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c000bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0014u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c001cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0025u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0034u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c003au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0054u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0059u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0067u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c006au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0084u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0090u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0099u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00acu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00b1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00b7u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00e9u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00ecu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00f4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00f8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebx = arg3 >> 8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c00fbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = arg3;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c012du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0134u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c0138u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102c013bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102bff09(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102bff09(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
