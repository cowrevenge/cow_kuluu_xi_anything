/* f_0x10306a9d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10306a9d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_esi = g->esi;

    t1 = rd32(in_esi + 0xcu);
    t2 = rd32(rd32(in_eax + 0x1a4u) + 0x18u);
    t3 = rd32(in_esi + 0x10u);
    t4 = rd32(in_esi + 4u);
    t5 = rd32(in_esi + 8u);
    t6 = rd32(in_esi + 0x14u);
    if ((int32_t)rd32(in_esi) >= (int32_t)rd32(in_esi + 4u))
    {
        edi = t5;
        loc_24 = t1;
        loc_28 = t2;
        loc_10 = t3;
        loc_1c = rd32(in_esi);
        loc_14 = t4;
        loc_2c = t5;
        loc_18 = t6;
        loc_c = rd32(sp0 - 0xcu);
        goto L_10306ba3;
    }
    ecx = rd32(in_esi);
    edi = t5;
    loc_24 = t1;
    loc_28 = t2;
    loc_10 = t3;
    loc_1c = rd32(in_esi);
    loc_14 = t4;
    loc_2c = t5;
    loc_18 = t6;
L_10306adc: ;
    if ((int32_t)edi > (int32_t)loc_24)
    {
        loc_c = edi;
        goto L_10306b2e;
    }
    loc_c = edi;
    eax = edi * 0x40u + loc_10 * 2u + rd32(ecx * 4u + loc_28);
L_10306af5: ;
    if ((int32_t)loc_10 > (int32_t)loc_18) goto L_10306b20;
    loc_8 = loc_10;
    loc_20 = eax;
L_10306b06: ;
    if (rd16(loc_20) != 0u) goto L_10306b36;
    loc_20 = loc_20 + 2u;
    if ((int32_t)(loc_8 + 1u) <= (int32_t)loc_18)
    {
        loc_8 = loc_8 + 1u;
        goto L_10306b06;
    }
L_10306b20: ;
    if ((int32_t)(loc_c + 1u) <= (int32_t)loc_24)
    {
        eax = eax + 0x40u;
        loc_c = loc_c + 1u;
        goto L_10306af5;
    }
    loc_c = loc_c + 1u;
L_10306b2e: ;
    if ((int32_t)(ecx + 1u) <= (int32_t)loc_14)
    {
        ecx = ecx + 1u;
        goto L_10306adc;
    }
L_10306b3b: ;
    if ((int32_t)loc_14 <= (int32_t)loc_1c) goto L_10306ba3;
    ecx = loc_14;
L_10306b43: ;
    if ((int32_t)edi > (int32_t)loc_24)
    {
        loc_c = edi;
        goto L_10306b95;
    }
    loc_c = edi;
    eax = edi * 0x40u + loc_10 * 2u + rd32(ecx * 4u + loc_28);
L_10306b5c: ;
    if ((int32_t)loc_10 > (int32_t)loc_18) goto L_10306b87;
    loc_8 = loc_10;
    loc_20 = eax;
L_10306b6d: ;
    if (rd16(loc_20) != 0u) goto L_10306b9d;
    loc_20 = loc_20 + 2u;
    if ((int32_t)(loc_8 + 1u) <= (int32_t)loc_18)
    {
        loc_8 = loc_8 + 1u;
        goto L_10306b6d;
    }
L_10306b87: ;
    if ((int32_t)(loc_c + 1u) <= (int32_t)loc_24)
    {
        eax = eax + 0x40u;
        loc_c = loc_c + 1u;
        goto L_10306b5c;
    }
    loc_c = loc_c + 1u;
L_10306b95: ;
    if ((int32_t)(ecx - 1u) >= (int32_t)loc_1c)
    {
        ecx = ecx - 1u;
        goto L_10306b43;
    }
L_10306ba3: ;
    if ((int32_t)edi >= (int32_t)loc_24)
    {
        ebx = loc_24;
    }
    else
    {
        ecx = edi * 0x40u + loc_10 * 2u;
        loc_c = edi;
L_10306bbb: ;
        if ((int32_t)loc_1c > (int32_t)loc_14) goto L_10306bf5;
        edx = loc_1c;
L_10306bc5: ;
        if ((int32_t)loc_10 > (int32_t)loc_18) goto L_10306bec;
        eax = ecx + rd32(edx * 4u + loc_28);
        ebx = loc_18;
        edi = loc_10;
        loc_8 = loc_10;
L_10306bda: ;
        if (rd16(eax) != 0u) goto L_10306c05;
        edi = (edi & 0xffff0000u) | rd16(eax);
        eax = eax + 2u;
        if ((int32_t)(loc_8 + 1u) <= (int32_t)ebx)
        {
            loc_8 = loc_8 + 1u;
            goto L_10306bda;
        }
L_10306bec: ;
        if ((int32_t)(edx + 1u) <= (int32_t)loc_14)
        {
            edx = edx + 1u;
            goto L_10306bc5;
        }
        edi = loc_2c;
L_10306bf5: ;
        if ((int32_t)(loc_c + 1u) <= (int32_t)loc_24)
        {
            ecx = ecx + 0x40u;
            loc_c = loc_c + 1u;
            goto L_10306bbb;
        }
        loc_c = loc_c + 1u;
L_10306c10: ;
        if ((int32_t)loc_24 <= (int32_t)edi)
        {
            ebx = loc_24;
        }
        else
        {
            ebx = loc_24;
            ecx = ebx * 0x40u + loc_10 * 2u;
            loc_c = ebx;
L_10306c24: ;
            if ((int32_t)loc_1c > (int32_t)loc_14) goto L_10306c5e;
            edx = loc_1c;
L_10306c2e: ;
            if ((int32_t)loc_10 > (int32_t)loc_18) goto L_10306c55;
            eax = ecx + rd32(edx * 4u + loc_28);
            ebx = loc_18;
            edi = loc_10;
            loc_8 = loc_10;
L_10306c43: ;
            if (rd16(eax) != 0u) goto L_10306c6e;
            edi = (edi & 0xffff0000u) | rd16(eax);
            eax = eax + 2u;
            if ((int32_t)(loc_8 + 1u) <= (int32_t)ebx)
            {
                loc_8 = loc_8 + 1u;
                goto L_10306c43;
            }
L_10306c55: ;
            if ((int32_t)(edx + 1u) <= (int32_t)loc_14)
            {
                edx = edx + 1u;
                goto L_10306c2e;
            }
            edi = loc_2c;
L_10306c5e: ;
            if ((int32_t)(loc_c - 1u) >= (int32_t)edi)
            {
                ecx = ecx - 0x40u;
                loc_c = loc_c - 1u;
                goto L_10306c24;
            }
            loc_c = loc_c - 1u;
            ebx = loc_24;
        }
    }
L_10306c7c: ;
    if ((int32_t)loc_10 < (int32_t)loc_18)
    {
        eax = loc_10;
        loc_8 = eax;
L_10306c8b: ;
        if ((int32_t)loc_1c > (int32_t)loc_14) goto L_10306cca;
        loc_20 = loc_1c;
        ecx = edi * 0x40u + loc_8 * 2u;
L_10306ca0: ;
        if ((int32_t)edi > (int32_t)ebx) goto L_10306cbf;
        eax = ecx + rd32(loc_20 * 4u + loc_28);
        edx = edi;
L_10306cb1: ;
        if (rd16(eax) != 0u) goto L_10306cd7;
        if ((int32_t)(edx + 1u) <= (int32_t)ebx)
        {
            eax = eax + 0x40u;
            edx = edx + 1u;
            goto L_10306cb1;
        }
L_10306cbf: ;
        if ((int32_t)(loc_20 + 1u) <= (int32_t)loc_14)
        {
            loc_20 = loc_20 + 1u;
            goto L_10306ca0;
        }
L_10306cca: ;
        if ((int32_t)(loc_8 + 1u) <= (int32_t)loc_18)
        {
            loc_8 = loc_8 + 1u;
            goto L_10306c8b;
        }
L_10306ce0: ;
        if ((int32_t)loc_18 > (int32_t)loc_10)
        {
            eax = loc_18;
            loc_8 = eax;
L_10306ceb: ;
            if ((int32_t)loc_1c > (int32_t)loc_14) goto L_10306d2a;
            loc_20 = loc_1c;
            ecx = edi * 0x40u + loc_8 * 2u;
L_10306d00: ;
            if ((int32_t)edi > (int32_t)ebx) goto L_10306d1f;
            eax = ecx + rd32(loc_20 * 4u + loc_28);
            edx = edi;
L_10306d11: ;
            if (rd16(eax) != 0u) goto L_10306d37;
            if ((int32_t)(edx + 1u) <= (int32_t)ebx)
            {
                eax = eax + 0x40u;
                edx = edx + 1u;
                goto L_10306d11;
            }
L_10306d1f: ;
            if ((int32_t)(loc_20 + 1u) <= (int32_t)loc_14)
            {
                loc_20 = loc_20 + 1u;
                goto L_10306d00;
            }
L_10306d2a: ;
            if ((int32_t)(loc_8 - 1u) >= (int32_t)loc_10)
            {
                loc_8 = loc_8 - 1u;
                goto L_10306ceb;
            }
        }
    }
L_10306d40: ;
    t7 = loc_18 * 8u - loc_10 * 8u;
    t8 = ebx * 0xcu - edi * 0xcu;
    t9 = loc_14 * 0x10u - loc_1c * 0x10u;
    t10 = t7 * t7 + t8 * t8 + t9 * t9;
    wr32(in_esi + 0x18u, t10);
    eax = loc_1c;
    edx = ebx - edi;
    loc_c = 0u;
    loc_8 = loc_18 - loc_10;
L_10306dc6: ;
    if ((int32_t)eax <= (int32_t)loc_14) goto L_10306d7e;
    wr32(in_esi + 0x1cu, loc_c);
    return;
L_10306b36: ;
    wr32(in_esi, ecx);
    loc_1c = ecx;
    goto L_10306b3b;
L_10306b9d: ;
    wr32(in_esi + 4u, ecx);
    loc_14 = ecx;
    goto L_10306ba3;
L_10306c05: ;
    wr32(in_esi + 8u, loc_c);
    edi = loc_c;
    loc_2c = loc_c;
    goto L_10306c10;
L_10306c6e: ;
    wr32(in_esi + 0xcu, loc_c);
    ebx = loc_c;
    edi = loc_2c;
    loc_24 = loc_c;
    goto L_10306c7c;
L_10306cd7: ;
    wr32(in_esi + 0x10u, loc_8);
    loc_10 = loc_8;
    goto L_10306ce0;
L_10306d37: ;
    wr32(in_esi + 0x14u, loc_8);
    loc_18 = loc_8;
    goto L_10306d40;
L_10306d7e: ;
    if ((int32_t)loc_2c <= (int32_t)loc_24)
    {
        ecx = loc_2c;
        ecx = ecx * 0x40u + loc_10 * 2u + rd32(eax * 4u + loc_28);
        edi = edx + 1u;
L_10306d98: ;
        if ((int32_t)loc_10 <= (int32_t)loc_18)
        {
            loc_20 = ecx;
            loc_1c = loc_8 + 1u;
L_10306daa: ;
            if (rd16(loc_20) != 0u)
            {
                loc_c = loc_c + 1u;
            }
            if (loc_1c != 1u)
            {
                loc_1c = loc_1c - 1u;
                loc_20 = loc_20 + 2u;
                goto L_10306daa;
            }
        }
        if (edi != 1u)
        {
            ecx = ecx + 0x40u;
            edi = edi - 1u;
            goto L_10306d98;
        }
    }
    eax = eax + 1u;
    goto L_10306dc6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10306a9d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10306a9d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
