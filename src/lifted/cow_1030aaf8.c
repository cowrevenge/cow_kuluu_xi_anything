/* f_0x1030aaf8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1030aaf8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    cow_frame(g, sp0, 172u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0xa0u, in_ebx);
    wr32(sp0 - 0xa4u, in_esi);
    wr32(sp0 - 0xa8u, in_edi);
    t1 = rd32(rd32(sp0 + 4u) + 0x11cu) + 0x80u;
    wr32(sp0 - 0x10u, t1);
    t2 = rd32(sp0 + 8u);
    t3 = rd32(rd32(sp0 + 8u) + 0x50u);
    t4 = rd32(sp0 + 0xcu);
    wr32(sp0 + 4u, 8u);
    wr32(sp0 - 0x14u, sp0 - 0x7cu);
    wr32(sp0 - 0x18u, t4 + 0x60u);
    eax = t2;
    ecx = t3 + 0x60u;
    edx = t1;
    ebx = in_ebx;
    esi = t4 + 0x60u;
    edi = sp0 - 0x7cu;
    loc_10 = t1;
    loc_14 = sp0 - 0x7cu;
    loc_18 = t4 + 0x60u;
L_1030ab35: ;
    if (rd32(sp0 + 4u) != 4u)
    {
        t5 = rd16(esi - 0x10u);
        wr16(sp0 + 0xcu, rd16(esi + 0x10u));
        t6 = rd16(esi);
        wr16(sp0 + 8u, (uint16_t)t5);
        wr16(sp0 - 8u, rd16(esi - 0x30u));
        wr32(sp0 - 0x1cu, t6);
        t7 = rd16(esi - 0x50u);
        wr32(sp0 - 0xcu, t7);
        if ((uint16_t)(t6 | rd16(esi - 0x50u) | rd32(sp0 - 8u) | rd32(sp0 + 8u) | rd32(sp0 + 0xcu) | rd16(esi - 0x40u)) != 0u)
        {
            eax = (uint32_t)(int16_t)rd16(ecx - 0x60u);
            ebx = rd16(esi - 0x40u);
            loc_1c = t6;
            loc_c = t7;
            t10 = (uint32_t)(int16_t)rd16(ecx - 0x10u) * (uint32_t)(int16_t)rd16(sp0 + 8u);
            t11 = rd16(esi - 0x60u);
            t12 = rd16(ecx - 0x40u);
            t13 = rd16(ecx);
            t14 = rd16(ecx + 0x10u);
            t15 = rd16(sp0 + 0xcu);
            t16 = rd16(sp0 - 8u);
            wr32(sp0 + 8u, t10);
            t17 = (uint32_t)(int16_t)rd16(ecx - 0x30u) * (uint32_t)(int16_t)t16;
            wr32(sp0 + 0xcu, t17);
            t18 = (uint32_t)(int16_t)rd16(sp0 + 8u);
            t19 = rd16(ecx - 0x50u);
            wr32(sp0 + 8u, t18);
            t20 = (uint32_t)(int16_t)t19 * (uint32_t)(int16_t)loc_c;
            wr32(sp0 - 0xcu, t20);
            wr32(sp0 - 8u, (uint32_t)(int16_t)t20);
            t21 = (uint32_t)(int16_t)((uint32_t)(int16_t)t14 * (uint32_t)(int16_t)t15);
            t22 = rd16(sp0 + 0xcu);
            wr32(sp0 + 0xcu, t21);
            t23 = (uint32_t)(int16_t)t20 * 0x5203u + (uint32_t)(int16_t)t22 * 0x1ccdu - rd32(sp0 + 0xcu) * 0x1050u - rd32(sp0 + 8u) * 0x133eu;
            t24 = rd32(sp0 + 8u);
            t25 = rd32(sp0 + 0xcu);
            wr32(sp0 + 0xcu, t23);
            t26 = (uint32_t)((int32_t)((uint32_t)(int16_t)(t12 * (uint16_t)ebx) * 0x3b21u + (eax * (uint32_t)(int16_t)t11 << 0xeu) - (uint32_t)(int16_t)(t13 * (uint16_t)loc_1c) * 0x187eu + (uint32_t)(int16_t)t20 * 0x5203u + (uint32_t)(int16_t)t22 * 0x1ccdu - t25 * 0x1050u - t24 * 0x133eu + 0x800u) >> 0xcu);
            t27 = rd32(sp0 + 0xcu);
            wr32(loc_14 - 0x20u, t26);
            t28 = (uint32_t)((int32_t)((uint32_t)(int16_t)(t12 * (uint16_t)ebx) * 0x3b21u + (eax * (uint32_t)(int16_t)t11 << 0xeu) - (uint32_t)(int16_t)(t13 * (uint16_t)loc_1c) * 0x187eu - t27 + 0x800u) >> 0xcu);
            wr32(loc_14 + 0x40u, t28);
            t29 = (uint32_t)((int32_t)((eax * (uint32_t)(int16_t)t11 << 0xeu) - ((uint32_t)(int16_t)(t12 * (uint16_t)ebx) * 0x3b21u - (uint32_t)(int16_t)(t13 * (uint16_t)loc_1c) * 0x187eu) + (uint32_t)(int16_t)t20 * 0x21f9u + t24 * 0x2e75u - t25 * 0x6c2u - (uint32_t)(int16_t)t22 * 0x4587u + 0x800u) >> 0xcu);
            wr32(loc_14, t29);
            eax = (uint32_t)((int32_t)((eax * (uint32_t)(int16_t)t11 << 0xeu) - ((uint32_t)(int16_t)(t12 * (uint16_t)ebx) * 0x3b21u - (uint32_t)(int16_t)(t13 * (uint16_t)loc_1c) * 0x187eu) - ((uint32_t)(int16_t)t20 * 0x21f9u + t24 * 0x2e75u - t25 * 0x6c2u - (uint32_t)(int16_t)t22 * 0x4587u) + 0x800u) >> 0xcu);
            edx = loc_10;
            ebx = 0x800u;
            esi = loc_18;
            edi = loc_14;
            loc_8 = (uint32_t)(int16_t)t20;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(ecx - 0x60u);
            t8 = eax * (uint32_t)(int16_t)rd16(esi - 0x60u) * 4u;
            t9 = rd16(esi - 0x60u);
            wr32(edi - 0x20u, t8);
            wr32(edi, t8);
            wr32(edi + 0x40u, t8);
            eax = t8;
            ebx = (uint32_t)(int16_t)t9;
        }
        wr32(edi + 0x20u, eax);
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    wr32(sp0 - 0x18u, esi + 2u);
    wr32(sp0 - 0x14u, edi + 4u);
    if ((int32_t)rd32(sp0 + 4u) > 0)
    {
        ecx = ecx + 2u;
        loc_14 = edi + 4u;
        edi = edi + 4u;
        loc_18 = esi + 2u;
        esi = esi + 2u;
        goto L_1030ab35;
    }
    wr32(sp0 + 4u, 0u);
    ecx = sp0 - 0x9cu;
L_1030accb: ;
    if ((rd32(ecx + 4u) | rd32(ecx + 0xcu) | rd32(ecx + 0x14u) | rd32(ecx + 0x1cu) | rd32(ecx + 0x18u) | rd32(ecx + 8u)) != 0u)
    {
        eax = arg5 + rd32(arg4 + rd32(sp0 + 4u) * 4u);
        ebx = rd32(ecx + 0x14u);
        t31 = (uint32_t)(int16_t)rd16(ecx + 4u);
        wr32(sp0 - 8u, t31);
        t32 = (uint32_t)(int16_t)rd16(ecx + 0x1cu);
        t33 = rd32(ecx);
        t34 = rd16(ecx + 8u);
        t35 = rd16(ecx + 0x18u);
        wr32(sp0 + 0xcu, t32);
        wr32(sp0 + 8u, (uint32_t)(int16_t)ebx);
        t36 = (t33 << 0xeu) - ((uint32_t)(int16_t)t34 * 0x3b21u - (uint32_t)(int16_t)t35 * 0x187eu);
        wr32(sp0 - 0xcu, t36);
        t37 = (uint32_t)(int16_t)rd16(ecx + 0xcu);
        t38 = t31 * 0x5203u + t37 * 0x1ccdu - rd32(sp0 + 0xcu) * 0x1050u - rd32(sp0 + 8u) * 0x133eu;
        t39 = rd32(sp0 + 0xcu);
        t40 = rd32(sp0 + 8u);
        wr32(sp0 + 0xcu, t38);
        t41 = rd8(loc_10 + ((uint32_t)((int32_t)((t33 << 0xeu) + (uint32_t)(int16_t)t34 * 0x3b21u - (uint32_t)(int16_t)t35 * 0x187eu + t31 * 0x5203u + t37 * 0x1ccdu - t39 * 0x1050u - t40 * 0x133eu + 0x40000u) >> 0x13u) & 0x3ffu));
        t42 = rd32(sp0 + 0xcu);
        wr8(eax, (uint8_t)t41);
        wr8(eax + 3u, rd8(loc_10 + ((uint32_t)((int32_t)((t33 << 0xeu) + (uint32_t)(int16_t)t34 * 0x3b21u - (uint32_t)(int16_t)t35 * 0x187eu - t42 + 0x40000u) >> 0x13u) & 0x3ffu)));
        t43 = rd8(loc_10 + ((uint32_t)((int32_t)(t36 + t31 * 0x21f9u + (uint32_t)(int16_t)ebx * 0x2e75u - t39 * 0x6c2u - t37 * 0x4587u + 0x40000u) >> 0x13u) & 0x3ffu));
        wr8(eax + 1u, (uint8_t)t43);
        edx = loc_10;
        ebx = ((((uint32_t)((int32_t)(t36 + t31 * 0x21f9u + (uint32_t)(int16_t)ebx * 0x2e75u - t39 * 0x6c2u - t37 * 0x4587u + 0x40000u) >> 0x13u) & 0x300u) | t43) & 0xffffff00u) | rd8(loc_10 + ((uint32_t)((int32_t)(t36 - (t31 * 0x21f9u + (uint32_t)(int16_t)ebx * 0x2e75u - t39 * 0x6c2u - t37 * 0x4587u) + 0x40000u) >> 0x13u) & 0x3ffu));
    }
    else
    {
        eax = arg5 + rd32(arg4 + rd32(sp0 + 4u) * 4u);
        ebx = rd32(ecx + 0x14u);
        t30 = rd8(edx + ((uint32_t)((int32_t)(rd32(ecx) + 0x10u) >> 5u) & 0x3ffu));
        wr8(eax, (uint8_t)t30);
        wr8(eax + 1u, (uint8_t)t30);
        wr8(eax + 3u, (uint8_t)t30);
        ebx = (ebx & 0xffffff00u) | t30;
    }
    wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    t44 = rd32(sp0 + 4u);
    wr8(eax + 2u, (uint8_t)ebx);
    if ((int32_t)t44 < 4)
    {
        ecx = ecx + 0x20u;
        goto L_1030accb;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030aaf8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030aaf8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
