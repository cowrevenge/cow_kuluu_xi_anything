/* f_0x1001d940 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1001d940(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, arg2);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x10039810u), sp0 - 0x10u, in_edx, 1, arg2);
    t1 = g->edx;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    g->edx = t1;
    cow_thiscall(g, COW_IMG(0x100398e0u), arg1, 1, sp0 - 0x10u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)rd32(sp0 - 0x10u) != 0x63u)
    {
        ecx = t2;
        edx = t3;
    }
    else
    {
        eax = rd32(sp0 - 0x10u);
        ecx = t2;
        edx = t3;
        if ((uint8_t)(eax >> 8u) == 0x75u)
        {
            if (rd8(sp0 - 0xeu) == 0x62u)
            {
                if (rd8(sp0 - 0xdu) == 0x65u)
                {
                    if (rd8(sp0 - 0xcu) == 0x6du)
                    {
                        if (rd8(sp0 - 0xbu) == 0x61u)
                        {
                            if (rd8(sp0 - 0xau) == 0x70u)
                            {
                                if (rd8(sp0 - 9u) == 0x20u)
                                {
                                    t4 = (rd32(arg1 + 0x2cu) & 0xfffffffdu) | 5u;
                                    wr32(arg1 + 0x2cu, t4);
                                    ecx = t4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    t5 = rd16(arg2 + 0x14u);
    wr16(arg1 + 0x24u, (uint16_t)t5);
    t6 = rd16(arg2 + 0x18u);
    wr16(arg1 + 0x26u, (uint16_t)t6);
    t7 = rd8(arg2 + 0x1eu);
    wr8(arg1 + 0x28u, (uint8_t)t7);
    wr8(arg1 + 0x29u, rd8(arg2 + 0x34u));
    if (arg4 > 3u)
    {
        edx = (((edx & 0xffff0000u) | t5) & 0xffffff00u) | t7;
        goto L_1001db7a;
    }
    ecx = (ecx & 0xffff0000u) | t6;
    edx = (((edx & 0xffff0000u) | t5) & 0xffffff00u) | t7;
    t8 = rd32(COW_IMG(0x1001db84u) + arg4 * 4u);
    switch (t8 - RD)
    {
    case 0x1001d9dfu: goto L_1001d9df;
    case 0x1001da3fu: goto L_1001da3f;
    case 0x1001da54u: edi = arg2 + 0x38u; goto L_1001da54;
    default: rt_fatal(g, COW_IMG(0x1001d9d8u), "switch");
    }
    return;
L_1001d9df: ;
    if ((uint8_t)arg3 == 0u) goto L_1001db7a;
    if (rd32(arg2 + 0x38u) == 0u)
    {
        edx = rd32(arg2 + 0x38u);
        goto L_1001db7a;
    }
    edx = rd32(arg2 + 0x38u);
    eax = 0u;
    ecx = rd32(COW_IMG(0x1045666cu));
    ebx = in_ebx;
L_1001d9fd: ;
    if (edx != rd32(COW_IMG(0x103511e0u) + eax * 4u)) goto L_1001da21;
    if (eax != 0u) goto L_1001da12;
    ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x910u);
L_1001da1d: ;
    if ((uint8_t)ebx != 0u) goto L_1001da2d;
L_1001da21: ;
    if ((int32_t)(eax + 1u) < 5)
    {
        eax = eax + 1u;
        goto L_1001d9fd;
    }
    zf = eax == 4u;
    eax = eax + 1u;
    if (zf) goto L_1001db7a;
L_1001da2d: ;
    wr32(arg1 + 0x20u, arg2 + 0x3cu);
    wr8(arg1 + 0x29u, (uint8_t)(eax | 0x80u));
    g->edx = edx;
    return;
L_1001da12: ;
    if (eax != 2u) goto L_1001da21;
    ebx = (ebx & 0xffffff00u) | rd8(ecx + 0x911u);
    goto L_1001da1d;
L_1001da3f: ;
    t9 = (rd8(arg2 + 0x38u) & 0xfu) << 4u ^ ((rd32(arg1 + 0x2cu) & 0xffffff00u) | (rd32(arg1 + 0x2cu) & 0xfu));
    wr32(arg1 + 0x2cu, t9);
    ecx = t9;
    edi = arg2 + 0x3cu;
L_1001da54: ;
    if (rd8(arg1 + 0x28u) - 4u > 0x1cu) goto L_1001db25;
    eax = rd8(arg1 + 0x28u) - 4u;
    t10 = rd32(COW_IMG(0x1001db94u) + rd8(COW_IMG(0x1001dbacu) + eax) * 4u);
    switch (t10 - RD)
    {
    case 0x1001da74u: goto L_1001da74;
    case 0x1001daacu: goto L_1001daac;
    case 0x1001dae7u: edx = rd8(COW_IMG(0x1001dbacu) + eax); goto L_1001dae7;
    case 0x1001dafbu: goto L_1001dafb;
    case 0x1001db11u: goto L_1001db11;
    case 0x1001db25u: edx = rd8(COW_IMG(0x1001dbacu) + eax); goto L_1001db25;
    default: rt_fatal(g, COW_IMG(0x1001da6du), "switch");
    }
    return;
L_1001da74: ;
    t12 = rd8(arg1 + 0x29u);
    wr32(arg1 + 0x1cu, edi);
    if ((uint8_t)t12 == 0x10u)
    {
        edi = edi + 0x20u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t12;
        if ((uint8_t)eax == 0x18u)
        {
            edi = edi + 0x30u;
        }
        else
        {
            if ((uint8_t)eax == 0x20u)
            {
                edi = edi + 0x40u;
            }
        }
    }
    eax = edi + (uint32_t)((int32_t)(rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u - (uint32_t)((int32_t)(rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u) >> 0x1fu)) >> 1u);
    ecx = rd16(arg1 + 0x24u);
    edx = (uint32_t)((int32_t)(rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) + 1u) >> 0x1fu);
L_1001db29: ;
    wr32(arg1 + 0x20u, edi);
    if ((uint8_t)arg3 != 0u)
    {
        if (rd32(eax) != 0u)
        {
            edi = rd32(eax);
            ecx = 0u;
            edx = rd32(COW_IMG(0x1045666cu));
            ebx = in_ebx;
L_1001db42: ;
            if (edi != rd32(COW_IMG(0x103511ccu) + ecx * 4u)) goto L_1001db66;
            if (ecx != 0u) goto L_1001db57;
            ebx = (ebx & 0xffffff00u) | rd8(edx + 0x910u);
L_1001db62: ;
            if ((uint8_t)ebx != 0u) goto L_1001db6e;
L_1001db66: ;
            if ((int32_t)(ecx + 1u) < 5)
            {
                ecx = ecx + 1u;
                goto L_1001db42;
            }
            zf = ecx == 4u;
            ecx = ecx + 1u;
            if (zf) goto L_1001db7a;
L_1001db6e: ;
            wr32(arg1 + 0x20u, eax + 4u);
            wr8(arg1 + 0x29u, (uint8_t)(ecx | 0x80u));
        }
    }
L_1001db7a: ;
    g->edx = edx;
    return;
L_1001daac: ;
    t11 = rd8(arg1 + 0x29u);
    wr32(arg1 + 0x1cu, edi);
    if ((uint8_t)t11 == 0x10u)
    {
        edi = edi + 0x200u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t11;
        if ((uint8_t)eax == 0x18u)
        {
            edi = edi + 0x300u;
        }
        else
        {
            if ((uint8_t)eax == 0x20u)
            {
                edi = edi + 0x400u;
            }
        }
    }
    eax = edi + rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u);
    edx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001dae7: ;
    eax = edi + rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 2u;
    ecx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001dafb: ;
    eax = edi + rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 3u;
    ecx = edi + rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 2u;
    edx = rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001db11: ;
    eax = edi + rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u) * 4u;
    edx = rd16(arg1 + 0x26u) * rd16(arg1 + 0x24u);
    goto L_1001db29;
L_1001db25: ;
    eax = arg3;
    goto L_1001db29;
L_1001db57: ;
    if (ecx != 2u) goto L_1001db66;
    ebx = (ebx & 0xffffff00u) | rd8(edx + 0x911u);
    goto L_1001db62;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001d940(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001d940(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
