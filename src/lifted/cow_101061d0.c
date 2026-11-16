/* f_0x101061d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101061d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 8u);
    t2 = rd32(sp0 + 4u);
    edi = t1;
    eax = 0u;
    ecx = 0x12u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t3 = (in_ebx & 0xffff0000u) | rd8(t2);
    wr32(sp0 + 4u, t3);
    if ((int16_t)t3 < 0)
    {
        edx = t2;
        ebp = t1;
        loc_4 = self;
        goto L_10106bb0;
    }
    eax = eax & 0xffffff00u;
    edx = t2;
    ebx = t3;
    ebp = t1;
    esi = 8u;
    loc_4 = self;
L_10106200: ;
    if ((int16_t)(uint8_t)arg4 <= 0)
    {
        edi = 0u;
        goto L_1010623e;
    }
    ecx = (ecx & 0xffff0000u) | (uint8_t)arg4;
    edi = 0u;
L_1010620d: ;
    if ((int16_t)esi <= 7)
    {
        ecx = ecx - 1u;
        goto L_1010622d;
    }
    ecx = ecx - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t4 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t4;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106230: ;
    if ((int8_t)eax >= 0)
    {
        edi = edi * 2u;
    }
    else
    {
        edi = edi * 2u;
        edi = edi | 1u;
    }
    if ((int16_t)ecx > 0) goto L_1010620d;
L_1010623e: ;
    if ((uint8_t)arg5 == 0u)
    {
        cf = 0u;
        pf = PARITY((uint8_t)arg5);
        zf = (uint8_t)arg5 == 0u;
        sf = (int8_t)arg5 < 0;
        of = 0u;
        goto L_10106257;
    }
    wr32(sp0 + 8u, (uint32_t)(int16_t)edi);
    if ((uint8_t)arg5 == (uint32_t)(int16_t)edi)
    {
        ebx = (uint32_t)(int16_t)edi;
        goto L_10106279;
    }
    cf = (uint8_t)arg5 < (uint32_t)(int16_t)edi;
    pf = PARITY((uint8_t)((uint8_t)arg5 - (uint32_t)(int16_t)edi));
    zf = (uint8_t)arg5 == (uint32_t)(int16_t)edi;
    sf = (int32_t)((uint8_t)arg5 - (uint32_t)(int16_t)edi) < 0;
    of = (((uint8_t)arg5 ^ (uint32_t)(int16_t)edi) & ((uint8_t)arg5 ^ (uint8_t)arg5 - (uint32_t)(int16_t)edi)) >> 0x1fu;
L_10106257: ;
    wr32(sp0 + 8u, (uint32_t)(int16_t)edi);
    if ((1u << (edi & 0x1fu) & rd32(ebp)) != 0u) goto L_10106bb0;
    ecx = rd32(ebp);
    ebx = 1u << (edi & 0x1fu);
    t5 = rd32(sp0 + 8u);
    wr32(ebp, ecx | ebx);
    ebx = t5;
L_10106279: ;
    if ((uint8_t)arg5 == 0u) goto L_101064fd;
    if ((uint8_t)arg5 != ebx)
    {
        ebx = rd32(sp0 + 4u);
        goto L_10106501;
    }
    ebx = rd32(sp0 + 4u);
    if ((int16_t)(uint8_t)arg4 <= 0)
    {
        edi = 0u;
        goto L_101062d5;
    }
    ecx = (uint8_t)arg4;
    edi = 0u;
L_101062a4: ;
    if ((int16_t)esi <= 7)
    {
        ecx = ecx - 1u;
        goto L_101062c4;
    }
    ecx = ecx - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t6 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t6;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101062c7: ;
    if ((int8_t)eax >= 0)
    {
        edi = edi * 2u;
    }
    else
    {
        edi = edi * 2u;
        edi = edi | 1u;
    }
    if ((int16_t)ecx > 0) goto L_101062a4;
L_101062d5: ;
    if ((uint32_t)(int16_t)(edi | 8u) == 8u) goto L_101064ac;
    ecx = (uint32_t)(int16_t)(edi | 8u) - 8u;
    if (ecx == 5u)
    {
        ecx = ecx - 5u;
        goto L_1010633c;
    }
    ecx = ecx - 5u;
    if (ecx != 1u) goto L_10106501;
    ecx = 0u;
    edi = 0x20u;
L_101062f7: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106317;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t7 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t7;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_1010631a: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_101062f7;
    t8 = rd32(ebp);
    wr32(ebp + 0x14u, ecx);
    wr32(ebp, t8 | 0x4000u);
L_10106501: ;
    if (rd32(sp0 + 8u) > 0x17u)
    {
        ecx = rd32(sp0 + 8u);
        goto L_10106ba7;
    }
    ecx = rd32(sp0 + 8u);
    t18 = rd32(COW_IMG(0x10106becu) + ecx * 4u);
    switch (t18 - RD)
    {
    case 0x10106515u: goto L_10106515;
    case 0x101065b9u: goto L_101065b9;
    case 0x10106604u: goto L_10106604;
    case 0x1010664cu: goto L_1010664c;
    case 0x101066d7u: goto L_101066d7;
    case 0x10106762u: goto L_10106762;
    case 0x101067aau: goto L_101067aa;
    case 0x101067f5u: goto L_101067f5;
    case 0x1010683du: goto L_1010683d;
    case 0x10106888u: goto L_10106888;
    case 0x10106a28u: goto L_10106a28;
    case 0x10106a73u: goto L_10106a73;
    case 0x10106abbu: goto L_10106abb;
    case 0x10106b06u: goto L_10106b06;
    case 0x10106b65u: goto L_10106b65;
    case 0x10106ba7u: goto L_10106ba7;
    default: rt_fatal(g, COW_IMG(0x1010650eu), "switch");
    }
    return 0;
L_1010622d: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106230;
L_101062c4: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101062c7;
L_10106317: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_1010631a;
L_1010633c: ;
    ecx = ecx & 0xffffff00u;
    edi = 8u;
L_10106343: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106363;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t9 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t9;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106366: ;
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106343;
    t10 = rd32(ebp);
    wr8(ebp + 0x38u, (uint8_t)ecx);
    wr32(ebp, t10 | 0x2000u);
    ecx = ecx & 0xffffff00u;
    edi = 8u;
L_1010638a: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101063aa;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t11 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t11;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101063ad: ;
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_1010638a;
    wr8(ebp + 0x39u, (uint8_t)ecx);
    ecx = ecx & 0xffffff00u;
    edi = 8u;
L_101063c5: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101063e5;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t12 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t12;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101063e8: ;
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx * 2u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_101063c5;
    wr8(ebp + 0x3au, (uint8_t)ecx);
    ecx = 0u;
    edi = 0x20u;
L_10106400: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106420;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t13 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t13;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106423: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106400;
    wr32(ebp + 0x3cu, ecx);
    ecx = 0u;
    edi = 0x20u;
L_1010643b: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_1010645b;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t14 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t14;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_1010645e: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_1010643b;
    wr32(ebp + 0x40u, ecx);
    ecx = 0u;
    edi = 0x20u;
L_10106476: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106496;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t15 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t15;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106499: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106476;
    wr32(ebp + 0x44u, ecx);
    goto L_10106501;
L_10106363: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106366;
L_101063aa: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101063ad;
L_101063e5: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101063e8;
L_10106420: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106423;
L_1010645b: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_1010645e;
L_10106496: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106499;
L_101064ac: ;
    ecx = 0u;
    edi = 0x14u;
L_101064b3: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101064d3;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t16 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t16;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101064d6: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_101064b3;
    if ((uint16_t)arg3 != 0u)
    {
        t17 = rd32(ebp);
        wr32(ebp + 0x18u, ecx);
        wr32(ebp, t17 | 0x100u);
    }
    goto L_10106501;
L_101064d3: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101064d6;
L_101064fd: ;
    ebx = rd32(sp0 + 4u);
    goto L_10106501;
L_10106515: ;
    wr32(sp0 + 8u, ebp + 4u);
    ecx = 0u;
    edi = 4u;
L_10106523: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106543;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t59 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t59;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106546: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106523;
    if ((int16_t)ecx <= 0) goto L_101065ad;
L_10106559: ;
    edi = 7u;
    loc_4 = ecx - 1u;
    ecx = 0u;
L_10106565: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106585;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t60 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t60;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106588: ;
    if ((int8_t)eax >= 0)
    {
        ecx = ecx * 2u;
    }
    else
    {
        ecx = ecx * 2u;
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106565;
    t62 = rd32(sp0 + 8u);
    wr8(t62, ecx & 0x7fu);
    wr32(sp0 + 8u, t62 + 1u);
    if ((int16_t)loc_4 > 0)
    {
        ecx = loc_4;
        goto L_10106559;
    }
L_101065ad: ;
    t63 = rd32(sp0 + 8u);
    wr8(t63, 0u);
    ecx = t63;
L_10106ba7: ;
    if ((int16_t)ebx >= 0) goto L_10106200;
L_10106bb0: ;
    wr16(ebp + 0x30u, 0u);
    t64 = rd32(ebp + 0x30u) | rd16(ebp + 0x2au);
    wr32(ebp + 0x30u, t64);
    return edx + 1u;
L_10106543: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106546;
L_10106585: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106588;
L_101065b9: ;
    wr16(ebp + 0x28u, 0u);
    edi = 0xau;
L_101065c4: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101065e4;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t58 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t58;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101065e7: ;
    wr16(ebp + 0x28u, (uint16_t)(rd16(ebp + 0x28u) << 1u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x28u);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x28u);
        wr16(ebp + 0x28u, (uint16_t)(ecx | 1u));
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_101065c4;
    goto L_10106ba7;
L_101065e4: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101065e7;
L_10106604: ;
    wr8(ebp + 0x1cu, 0u);
    edi = 2u;
L_1010660d: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_1010662d;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t56 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t56;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106630: ;
    t57 = rd8(ebp + 0x1cu);
    wr8(ebp + 0x1cu, (uint8_t)(t57 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t57 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t57 * 2u);
        wr8(ebp + 0x1cu, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_1010660d;
    goto L_10106ba7;
L_1010662d: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106630;
L_1010664c: ;
    wr8(ebp + 0x20u, 0u);
    edi = 5u;
L_10106655: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106675;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t52 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t52;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106678: ;
    t53 = rd8(ebp + 0x20u);
    wr8(ebp + 0x20u, (uint8_t)(t53 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t53 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t53 * 2u);
        wr8(ebp + 0x20u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106655;
    wr8(ebp + 0x21u, 0u);
    edi = 5u;
L_10106698: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101066b8;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t54 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t54;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101066bb: ;
    t55 = rd8(ebp + 0x21u);
    wr8(ebp + 0x21u, (uint8_t)(t55 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t55 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t55 * 2u);
        wr8(ebp + 0x21u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106698;
    goto L_10106ba7;
L_10106675: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106678;
L_101066b8: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101066bb;
L_101066d7: ;
    wr8(ebp + 0x22u, 0u);
    edi = 8u;
L_101066e0: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106700;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t48 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t48;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106703: ;
    t49 = rd8(ebp + 0x22u);
    wr8(ebp + 0x22u, (uint8_t)(t49 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t49 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t49 * 2u);
        wr8(ebp + 0x22u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_101066e0;
    wr8(ebp + 0x23u, 0u);
    edi = 8u;
L_10106723: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106743;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t50 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t50;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106746: ;
    t51 = rd8(ebp + 0x23u);
    wr8(ebp + 0x23u, (uint8_t)(t51 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t51 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t51 * 2u);
        wr8(ebp + 0x23u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106723;
    goto L_10106ba7;
L_10106700: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106703;
L_10106743: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106746;
L_10106762: ;
    wr8(ebp + 0x1du, 0u);
    edi = 4u;
L_1010676b: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_1010678b;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t46 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t46;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_1010678e: ;
    t47 = rd8(ebp + 0x1du);
    wr8(ebp + 0x1du, (uint8_t)(t47 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t47 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t47 * 2u);
        wr8(ebp + 0x1du, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_1010676b;
    goto L_10106ba7;
L_1010678b: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_1010678e;
L_101067aa: ;
    wr16(ebp + 0x2au, 0u);
    edi = 0x10u;
L_101067b5: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101067d5;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t45 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t45;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101067d8: ;
    wr16(ebp + 0x2au, (uint16_t)(rd16(ebp + 0x2au) << 1u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x2au);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x2au);
        wr16(ebp + 0x2au, (uint16_t)(ecx | 1u));
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_101067b5;
    goto L_10106ba7;
L_101067d5: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101067d8;
L_101067f5: ;
    wr8(ebp + 0x24u, 0u);
    edi = 8u;
L_101067fe: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_1010681e;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t43 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t43;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106821: ;
    t44 = rd8(ebp + 0x24u);
    wr8(ebp + 0x24u, (uint8_t)(t44 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t44 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t44 * 2u);
        wr8(ebp + 0x24u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_101067fe;
    goto L_10106ba7;
L_1010681e: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106821;
L_1010683d: ;
    wr32(ebp + 0x18u, 0u);
    edi = 0x14u;
L_10106849: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106869;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t41 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t41;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_1010686c: ;
    t42 = rd32(ebp + 0x18u) * 2u;
    wr32(ebp + 0x18u, t42);
    if ((int8_t)eax >= 0)
    {
        ecx = t42;
    }
    else
    {
        ecx = t42;
        wr32(ebp + 0x18u, ecx | 1u);
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106849;
    goto L_10106ba7;
L_10106869: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_1010686c;
L_10106888: ;
    wr8(ebp + 0x38u, 0u);
    edi = 8u;
L_10106891: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101068b1;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t29 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t29;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101068b4: ;
    t30 = rd8(ebp + 0x38u);
    wr8(ebp + 0x38u, (uint8_t)(t30 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t30 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t30 * 2u);
        wr8(ebp + 0x38u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106891;
    wr8(ebp + 0x39u, 0u);
    edi = 8u;
L_101068d4: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101068f4;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t31 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t31;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101068f7: ;
    t32 = rd8(ebp + 0x39u);
    wr8(ebp + 0x39u, (uint8_t)(t32 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t32 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t32 * 2u);
        wr8(ebp + 0x39u, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_101068d4;
    wr8(ebp + 0x3au, 0u);
    edi = 8u;
L_10106917: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106937;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t33 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t33;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_1010693a: ;
    t34 = rd8(ebp + 0x3au);
    wr8(ebp + 0x3au, (uint8_t)(t34 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t34 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t34 * 2u);
        wr8(ebp + 0x3au, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106917;
    wr32(ebp + 0x3cu, 0u);
    edi = 0x20u;
L_1010695d: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_1010697d;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t35 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t35;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106980: ;
    t36 = rd32(ebp + 0x3cu) * 2u;
    wr32(ebp + 0x3cu, t36);
    if ((int8_t)eax < 0)
    {
        ecx = t36;
        wr32(ebp + 0x3cu, ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_1010695d;
    wr32(ebp + 0x40u, 0u);
    edi = 0x20u;
L_101069a3: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_101069c3;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t37 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t37;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_101069c6: ;
    t38 = rd32(ebp + 0x40u) * 2u;
    wr32(ebp + 0x40u, t38);
    if ((int8_t)eax < 0)
    {
        ecx = t38;
        wr32(ebp + 0x40u, ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_101069a3;
    wr32(ebp + 0x44u, 0u);
    edi = 0x20u;
L_101069e9: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106a09;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t39 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t39;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106a0c: ;
    t40 = rd32(ebp + 0x44u) * 2u;
    wr32(ebp + 0x44u, t40);
    if ((int8_t)eax >= 0)
    {
        ecx = t40;
    }
    else
    {
        ecx = t40;
        wr32(ebp + 0x44u, ecx | 1u);
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_101069e9;
    goto L_10106ba7;
L_101068b1: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101068b4;
L_101068f4: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101068f7;
L_10106937: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_1010693a;
L_1010697d: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106980;
L_101069c3: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_101069c6;
L_10106a09: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106a0c;
L_10106a28: ;
    wr32(ebp + 0x14u, 0u);
    edi = 0x20u;
L_10106a34: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106a54;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t27 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t27;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106a57: ;
    t28 = rd32(ebp + 0x14u) * 2u;
    wr32(ebp + 0x14u, t28);
    if ((int8_t)eax >= 0)
    {
        ecx = t28;
    }
    else
    {
        ecx = t28;
        wr32(ebp + 0x14u, ecx | 1u);
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106a34;
    goto L_10106ba7;
L_10106a54: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106a57;
L_10106a73: ;
    wr8(ebp + 0x1eu, 0u);
    edi = 8u;
L_10106a7c: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106a9c;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t25 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t25;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106a9f: ;
    t26 = rd8(ebp + 0x1eu);
    wr8(ebp + 0x1eu, (uint8_t)(t26 * 2u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t26 * 2u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t26 * 2u);
        wr8(ebp + 0x1eu, (uint8_t)(ecx | 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
    }
    if ((int16_t)edi > 0) goto L_10106a7c;
    goto L_10106ba7;
L_10106a9c: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106a9f;
L_10106abb: ;
    wr32(ebp + 0x34u, 0u);
    edi = 0x20u;
L_10106ac7: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106ae7;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t23 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t23;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106aea: ;
    t24 = rd32(ebp + 0x34u) * 2u;
    wr32(ebp + 0x34u, t24);
    if ((int8_t)eax >= 0)
    {
        ecx = t24;
    }
    else
    {
        ecx = t24;
        wr32(ebp + 0x34u, ecx | 1u);
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106ac7;
    goto L_10106ba7;
L_10106ae7: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106aea;
L_10106b06: ;
    wr32(ebp + 0x30u, 0u);
    edi = 0x20u;
L_10106b12: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106b32;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t20 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t20;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106b35: ;
    t21 = rd32(ebp + 0x30u) * 2u;
    wr32(ebp + 0x30u, t21);
    if ((int8_t)eax >= 0)
    {
        ecx = t21;
    }
    else
    {
        ecx = t21;
        wr32(ebp + 0x30u, ecx | 1u);
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106b12;
    t22 = rd8(ebp + 0x25u);
    wr8(ebp + 0x25u, (uint8_t)(((rd32(ebp + 0x30u) >> 0x1eu ^ t22) & 1u) ^ t22));
    ecx = (ecx & 0xffffff00u) | t22;
    ebx = rd32(sp0 + 4u);
    goto L_10106ba7;
L_10106b32: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106b35;
L_10106b65: ;
    wr16(ebp + 0x2cu, 0u);
    edi = 0x10u;
L_10106b70: ;
    if ((int16_t)esi <= 7)
    {
        edi = edi - 1u;
        goto L_10106b8c;
    }
    edi = edi - 1u;
    if ((int16_t)ebx <= 0) goto L_10106bcd;
    t19 = rd8(edx + 1u);
    wr32(sp0 + 4u, ebx - 1u);
    eax = (eax & 0xffffff00u) | t19;
    edx = edx + 1u;
    ebx = ebx - 1u;
    esi = 1u;
L_10106b8f: ;
    wr16(ebp + 0x2cu, (uint16_t)(rd16(ebp + 0x2cu) << 1u));
    if ((int8_t)eax >= 0)
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x2cu);
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp + 0x2cu);
        wr16(ebp + 0x2cu, (uint16_t)(ecx | 1u));
        ecx = ecx | 1u;
    }
    if ((int16_t)edi > 0) goto L_10106b70;
    goto L_10106ba7;
L_10106b8c: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax * 2u);
    esi = esi + 1u;
    goto L_10106b8f;
L_10106bcd: ;
    wr16(ebp + 0x30u, 0u);
    t61 = rd32(ebp + 0x30u) | rd16(ebp + 0x2au);
    wr32(ebp + 0x30u, t61);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101061d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101061d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
