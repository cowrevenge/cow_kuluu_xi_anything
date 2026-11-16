/* f_0x10098ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10098ad0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd16(arg3 + 0x24u) != 0xffffu)
    {
        eax = (in_eax & 0xffff0000u) | rd16(arg3 + 0x24u);
        goto L_10098bf2;
    }
    eax = (in_eax & 0xffff0000u) | rd16(arg3 + 0x24u);
    wr8(COW_IMG(0x1047fe8eu), rd8(arg3 + 4u));
    wr16(COW_IMG(0x1047fe8cu), rd16(arg3 + 8u));
    t1 = rd32(arg3 + 0xcu);
    wr32(COW_IMG(0x1047fe88u), t1);
    t2 = rd32(arg3 + 0x10u);
    t3 = rd32(COW_IMG(0x1047fe94u));
    wr32(COW_IMG(0x1047fe90u), t2);
    t4 = t3 ^ ((t3 ^ rd32(arg3 + 0x14u)) & 0xfu);
    if ((t4 & 0xfu) < 0xau)
    {
        eax = t4;
        esi = rd32(arg3 + 0x14u);
    }
    else
    {
        eax = t4;
        esi = rd32(arg3 + 0x14u);
        eax = (eax & 0xffffff00u) | (eax & 0xf9u) | 9u;
    }
    t5 = eax ^ ((eax ^ esi) & 0xf0u);
    if ((t5 & 0xf0u) < 0xa0u)
    {
        eax = t5;
    }
    else
    {
        eax = t5;
        eax = (eax & 0xffffff00u) | (eax & 0x9fu) | 0x90u;
    }
    t6 = eax ^ ((eax ^ esi) & 0xf00u);
    if ((t6 & 0xf00u) < 0xa00u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        eax = (eax & 0xffff00ffu) | ((eax >> 8u & 0xf9u) << 8u >> 8u | 9u) << 8u;
    }
    t7 = eax ^ ((eax ^ esi) & 0xf000u);
    if ((t7 & 0xf000u) < 0xa000u)
    {
        eax = t7;
    }
    else
    {
        eax = t7;
        eax = (eax & 0xffff00ffu) | ((eax >> 8u & 0x9fu) << 8u >> 8u | 0x90u) << 8u;
    }
    t8 = eax ^ ((eax ^ esi) & 0xf0000u);
    wr32(COW_IMG(0x1047fe94u), t8);
    if ((rd8(COW_IMG(0x1047fe96u)) & 0xfu) >= 0xau)
    {
        eax = t8;
        t9 = (eax & 0xfff9ffffu) | 0x90000u;
        wr32(COW_IMG(0x1047fe94u), t9);
    }
    t10 = (uint16_t)rd32(arg3 + 0x18u);
    wr32(COW_IMG(0x1047fe98u), t10);
    t11 = rd16(arg3 + 0x1au);
    wr32(COW_IMG(0x1047fea8u), t11);
    t12 = rd32(arg3 + 0x1cu);
    wr32(COW_IMG(0x1047fe9cu), t12);
    t13 = rd32(arg3 + 0x20u);
    t14 = rd32(COW_IMG(0x1047feacu));
    wr32(COW_IMG(0x1047fea0u), t13);
    eax = t14 | 0x80000000u;
    ecx = t13;
    edx = arg3;
L_10098e61: ;
    wr32(COW_IMG(0x1047feacu), eax);
L_10098e66: ;
    if (rd32(COW_IMG(0x1047feacu)) == 0x83ffffffu)
    {
        t17 = rd32(COW_IMG(0x1047feb0u));
        wr8(COW_IMG(0x1047fe8fu), 1u);
        if (t17 == 0u)
        {
            eax = t17;
        }
        else
        {
            eax = t17;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t18 = cow_thiscall(g, eax, ecx, 0);
            t19 = g->edx;
            eax = t18;
            edx = t19;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_10098bf2: ;
    if ((uint16_t)eax != 0xfffeu) goto L_10098c10;
    t15 = rd32(arg3 + 4u);
    t16 = rd32(COW_IMG(0x1047feacu));
    wr32(COW_IMG(0x1047fea4u), t15);
    eax = t16 | 0x80000000u;
    ecx = self;
    edx = t15;
    goto L_10098e61;
L_10098c10: ;
    if ((int32_t)(uint16_t)eax < 80)
    {
        eax = (uint16_t)eax;
        goto L_10098c57;
    }
    eax = (uint16_t)eax;
    if ((int32_t)eax >= 144) goto L_10098c5e;
    ecx = (uint32_t)((int32_t)(eax - 0x50u) >> 3u);
    edx = 8u;
    esi = COW_IMG(0x1047fb48u) + eax * 4u - 0x140u;
    eax = arg3 + 4u;
L_10098c38: ;
    wr32(esi, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        edx = edx - 1u;
        esi = esi + 4u;
        goto L_10098c38;
    }
    cf = esi + 4u < esi;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    edx = edx - 1u;
L_10098c45: ;
    wr32(COW_IMG(0x1047feacu), rd32(COW_IMG(0x1047feacu)) | 1u << (ecx & 0x1fu));
    eax = 1u << (ecx & 0x1fu);
    goto L_10098e66;
L_10098c57: ;
    if ((int32_t)eax < 144) goto L_10098c90;
L_10098c5e: ;
    if ((int32_t)eax >= 208) goto L_10098c97;
    ecx = COW_IMG(0x1047fca8u) + eax * 4u - 0x240u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0x90u) >> 3u);
    eax = arg3 + 4u;
L_10098c7e: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098c7e;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
L_10098e50: ;
    ecx = esi + 0xbu;
L_10098e53: ;
    eax = rd32(COW_IMG(0x1047feacu)) | 1u << (ecx & 0x1fu);
    edx = 1u << (ecx & 0x1fu);
    goto L_10098e61;
L_10098c90: ;
    if ((int32_t)eax < 208) goto L_10098ccc;
L_10098c97: ;
    if ((int32_t)eax >= 224) goto L_10098ccc;
    ecx = COW_IMG(0x1047fe08u) + eax * 4u - 0x340u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0xd0u) >> 3u);
    eax = arg3 + 4u;
L_10098cb7: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098cb7;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    edx = edx - 1u;
    ecx = esi + 0x16u;
    goto L_10098c45;
L_10098ccc: ;
    if ((int32_t)eax < 48) goto L_10098d02;
    if ((int32_t)eax >= 64) goto L_10098d02;
    ecx = COW_IMG(0x1047fe08u) + eax * 4u - 0x80u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0x20u) >> 3u);
    eax = arg3 + 4u;
L_10098ced: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098ced;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    ecx = esi + 0x16u;
    goto L_10098e53;
L_10098d02: ;
    if ((int32_t)eax < 224) goto L_10098d3b;
    if ((int32_t)eax >= 232) goto L_10098d42;
    ecx = (uint32_t)((int32_t)(eax - 0xa0u) >> 3u);
    edx = 8u;
    esi = COW_IMG(0x1047fb48u) + eax * 4u - 0x280u;
    eax = arg3 + 4u;
L_10098d29: ;
    wr32(esi, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        edx = edx - 1u;
        esi = esi + 4u;
        goto L_10098d29;
    }
    cf = esi + 4u < esi;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    edx = edx - 1u;
    goto L_10098c45;
L_10098d3b: ;
    if ((int32_t)eax < 232) goto L_10098d74;
L_10098d42: ;
    if ((int32_t)eax >= 240) goto L_10098d7b;
    ecx = COW_IMG(0x1047fca8u) + eax * 4u - 0x2a0u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0xa8u) >> 3u);
    eax = arg3 + 4u;
L_10098d62: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098d62;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    goto L_10098e50;
L_10098d74: ;
    if ((int32_t)eax < 240) goto L_10098dad;
L_10098d7b: ;
    if ((int32_t)eax >= 248) goto L_10098db4;
    ecx = (uint32_t)((int32_t)(eax - 0xa8u) >> 3u);
    edx = 8u;
    esi = COW_IMG(0x1047fb48u) + eax * 4u - 0x2a0u;
    eax = arg3 + 4u;
L_10098d9b: ;
    wr32(esi, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        edx = edx - 1u;
        esi = esi + 4u;
        goto L_10098d9b;
    }
    cf = esi + 4u < esi;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    edx = edx - 1u;
    goto L_10098c45;
L_10098dad: ;
    if ((int32_t)eax < 248) goto L_10098de3;
L_10098db4: ;
    if ((int32_t)eax >= 256) goto L_10098dea;
    ecx = COW_IMG(0x1047fca8u) + eax * 4u - 0x2c0u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0xb0u) >> 3u);
    eax = arg3 + 4u;
L_10098dd4: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098dd4;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    goto L_10098e50;
L_10098de3: ;
    if ((int32_t)eax < 256) goto L_10098e1c;
L_10098dea: ;
    if ((int32_t)eax >= 264) goto L_10098e23;
    ecx = (uint32_t)((int32_t)(eax - 0xb0u) >> 3u);
    edx = 8u;
    esi = COW_IMG(0x1047fb48u) + eax * 4u - 0x2c0u;
    eax = arg3 + 4u;
L_10098e0a: ;
    wr32(esi, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        edx = edx - 1u;
        esi = esi + 4u;
        goto L_10098e0a;
    }
    cf = esi + 4u < esi;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    edx = edx - 1u;
    goto L_10098c45;
L_10098e1c: ;
    if ((int32_t)eax < 264) goto L_10098e89;
L_10098e23: ;
    if ((int32_t)eax >= 272) goto L_10098e89;
    ecx = COW_IMG(0x1047fca8u) + eax * 4u - 0x2e0u;
    edx = 8u;
    esi = (uint32_t)((int32_t)(eax - 0xb8u) >> 3u);
    eax = arg3 + 4u;
L_10098e43: ;
    wr32(ecx, rd32(eax));
    if (edx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_10098e43;
    }
    cf = ecx + 4u < ecx;
    pf = PARITY((uint8_t)(edx - 1u));
    zf = edx == 1u;
    sf = (int32_t)(edx - 1u) < 0;
    of = edx == 0x80000000u;
    goto L_10098e50;
L_10098e89: ;
    g->edx = arg3;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10098ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10098ad0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
