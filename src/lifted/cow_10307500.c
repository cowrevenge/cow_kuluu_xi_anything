/* f_0x10307500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307500(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    uint32_t loc_68;
    uint32_t loc_6c;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x11cu);
    t2 = rd32(rd32(arg1 + 0x1a4u) + 0x18u);
    t3 = rd32(rd32(arg1 + 0x1a4u) + 0x28u);
    t4 = rd32(rd32(arg1 + 0x74u));
    t5 = rd32(rd32(arg1 + 0x74u) + 8u);
    t6 = rd32(arg1 + 0x1a4u);
    t7 = rd32(arg1 + 0x5cu);
    t8 = rd32(rd32(arg1 + 0x74u) + 4u);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = rd32(sp0 + 0x10u);
        edx = t7;
    }
    else
    {
        eax = rd32(sp0 + 0x10u);
        ecx = t6;
        edx = t7;
        loc_18 = t1;
        loc_50 = t2;
        loc_2c = t3;
        loc_5c = t4;
        loc_64 = t5;
        loc_6c = t6;
        loc_44 = t7;
        loc_60 = t8;
        loc_28 = arg3;
        loc_48 = eax;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
L_10307565: ;
        t9 = rd32(arg2 + loc_28 - arg3);
        if (rd8(ecx + 0x24u) == 0u)
        {
            eax = t9;
            loc_c = t9;
            loc_14 = rd32(loc_28);
            t12 = rd32(ecx + 0x20u);
            wr8(ecx + 0x24u, 1u);
            esi = t12;
            loc_3c = 1u;
            loc_8 = 3u;
        }
        else
        {
            eax = t9;
            esi = rd32(loc_28);
            wr8(ecx + 0x24u, 0u);
            t10 = eax + edx * 3u - 3u;
            t11 = edx + esi - 1u;
            eax = t10;
            esi = edx * 6u + rd32(ecx + 0x20u) + 6u;
            loc_c = t10;
            loc_14 = t11;
            loc_3c = 0xffffffffu;
            loc_8 = 0xfffffffdu;
        }
        wr32(sp0 + 0x10u, 0u);
        if (loc_44 == 0u)
        {
            edx = loc_44;
            loc_24 = 0u;
            loc_20 = 0u;
            loc_1c = 0u;
        }
        else
        {
            edx = loc_44;
            ebx = 0u;
            edi = 0u;
            loc_24 = 0u;
            loc_20 = 0u;
            loc_1c = 0u;
            loc_38 = 0u;
            loc_34 = 0u;
            loc_30 = 0u;
            loc_40 = edx;
L_103075e8: ;
            t13 = esi + loc_8 * 2u;
            t14 = rd8(loc_18 + rd8(eax + 1u) + rd32(loc_2c + (uint32_t)((int32_t)(ebx + (uint32_t)(int16_t)rd16(esi + loc_8 * 2u + 2u) + 8u) >> 4u) * 4u));
            t15 = rd8(loc_18 + rd8(eax + 2u) + rd32(loc_2c + (uint32_t)((int32_t)(rd32(sp0 + 0x10u) + (uint32_t)(int16_t)rd16(esi + loc_8 * 2u + 4u) + 8u) >> 4u) * 4u));
            t16 = rd8(loc_18 + rd8(eax) + rd32(loc_2c + (uint32_t)((int32_t)(edi + (uint32_t)(int16_t)rd16(t13) + 8u) >> 4u) * 4u));
            wr32(sp0 + 0x10u, t15);
            t17 = (uint32_t)((int32_t)t14 >> 2u) * 0x40u + (uint32_t)((int32_t)t15 >> 3u) * 2u + rd32(loc_50 + (uint32_t)((int32_t)t16 >> 3u) * 4u);
            if (rd16((uint32_t)((int32_t)t14 >> 2u) * 0x40u + (uint32_t)((int32_t)t15 >> 3u) * 2u + rd32(loc_50 + (uint32_t)((int32_t)t16 >> 3u) * 4u)) != 0u)
            {
                eax = t17;
                ebx = t14;
                edi = t16;
                loc_68 = t13;
            }
            else
            {
                ecx = (uint32_t)((int32_t)t16 >> 3u);
                edx = (uint32_t)((int32_t)t14 >> 2u) * 0x20u + (uint32_t)((int32_t)t15 >> 3u);
                ebx = t14;
                edi = t16;
                loc_68 = t13;
                loc_10 = (uint32_t)((int32_t)t14 >> 2u);
                loc_54 = (uint32_t)((int32_t)t15 >> 3u);
                loc_58 = t17;
                g->esp = sp0 - 0x70u;
                cow_call_regs(g, COW_IMG(0x10307387u), loc_10, g->ecx, g->edx, 1, 5, arg1, ecx, loc_54, in_edi, in_ebx);
                eax = loc_58;
            }
            t18 = rd16(eax);
            wr8(loc_14, (uint8_t)(t18 - 1u));
            t19 = edi - rd8(loc_5c + t18 - 1u);
            t20 = rd32(sp0 + 0x10u);
            t21 = rd8(loc_64 + t18 - 1u);
            t22 = rd8(loc_60 + t18 - 1u);
            wr32(sp0 + 0x10u, t19);
            wr16(esi, (uint16_t)(loc_1c + t19 * 3u));
            t23 = loc_30 + t19 * 5u;
            t24 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, ebx - t22);
            wr16(esi + 2u, (uint16_t)(ebx * 3u + loc_20 - t22 * 3u));
            t25 = ebx * 5u + loc_34 - t22 * 5u;
            t26 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t20 - t21);
            wr16(esi + 4u, (uint16_t)(loc_24 + t20 * 3u - t21 * 3u));
            t27 = loc_38 + t20 * 5u - t21 * 5u;
            t28 = t20 * 7u - t21 * 7u;
            t29 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t28);
            if (loc_40 != 1u)
            {
                ebx = ebx * 7u - t22 * 7u;
                esi = loc_68;
                edi = t19 * 7u;
                loc_c = loc_8 + loc_c;
                loc_14 = loc_14 + loc_3c;
                loc_24 = t27;
                loc_20 = t25;
                loc_1c = t23;
                loc_38 = t29;
                loc_34 = t26;
                loc_30 = t24;
                loc_40 = loc_40 - 1u;
                goto L_103075e5;
            }
            eax = loc_3c;
            esi = loc_68;
            loc_24 = t27;
            loc_20 = t25;
            loc_1c = t23;
            ecx = loc_6c;
            edx = loc_44;
        }
        wr16(esi, (uint16_t)loc_1c);
        wr16(esi + 2u, (uint16_t)loc_20);
        wr16(esi + 4u, (uint16_t)loc_24);
        if (loc_48 != 1u)
        {
            loc_28 = loc_28 + 4u;
            loc_48 = loc_48 - 1u;
            goto L_10307562;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)loc_24;
    }
    g->edx = edx;
    return eax;
L_10307562: ;
    goto L_10307565;
L_103075e5: ;
    eax = loc_c;
    goto L_103075e8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
