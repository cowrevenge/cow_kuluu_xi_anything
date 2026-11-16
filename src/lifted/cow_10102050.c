/* f_0x10102050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=10 */
uint32_t cow_fn_10102050(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg9 = rd32(g->esp + 0x24u);

    ecx = self & 0xffffff00u;
    edx = 0u;
    esi = rd32(sp0 + 0x20u);
L_1010205e: ;
    if ((int32_t)rd16(edx * 2u + esi) > 401)
    {
        eax = rd16(edx * 2u + esi);
        if (eax == 0x192u)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 2u);
        }
        else
        {
            eax = eax - 0x192u;
            if (eax == 0xeu)
            {
                ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 3u);
            }
        }
    }
    else
    {
        eax = rd16(edx * 2u + esi);
        zf = rd16(edx * 2u + esi) == 0x191u;
        if (zf)
        {
            ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 1u);
        }
        else
        {
            if (eax == 0x4fu)
            {
                ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 8u);
            }
            else
            {
                if (eax == 0x179u)
                {
                    ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 4u);
                }
            }
        }
    }
    if ((int32_t)(edx + 1u) < 32)
    {
        edx = edx + 1u;
        goto L_1010205e;
    }
    t1 = rd32(sp0 + 0x28u);
    t2 = rd32(sp0 + 0x18u);
    wr32(sp0 + 0x28u, t1);
    t3 = (self & 0xffffff00u) | (uint8_t)ecx;
    t4 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x20u, t3);
    t5 = rd32(sp0 + 0x14u);
    wr32(sp0 + 0x18u, t2);
    t6 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0x14u, t5);
    t7 = rd32(sp0 + 8u);
    wr32(sp0 + 0x10u, t4);
    t8 = rd32(sp0 + 4u);
    wr32(sp0 + 0xcu, t6);
    wr32(sp0 + 8u, t7);
    wr32(sp0 + 4u, t8);
    eax = t8;
    t9 = rd32(sp0 + 4u);
    if (rd16(arg7 + (uint8_t)t9 * 2u) > rd8(sp0 + 8u))
    {
        ecx = (uint8_t)t9;
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 0x18u);
        esi = (in_esi & 0xffff0000u) | rd16(arg7 + (uint8_t)t9 * 2u);
        goto L_1010217a;
    }
    eax = (eax & 0xffff0000u) | rd8(sp0 + 0x14u);
    ecx = (uint8_t)t9;
    edx = t9;
    ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 0x18u);
    esi = (in_esi & 0xffff0000u) | rd16(arg7 + (uint8_t)t9 * 2u);
    if ((ebx & 0x20u) == 0u) goto L_10102129;
    return (eax & 0xffffff00u) | (uint8_t)edx == 0x15u;
L_10102129: ;
    if ((uint8_t)edx != 0x14u) goto L_10102140;
    if ((ebx & 8u) == 0u) goto L_10102140;
    return (eax & 0xffffff00u) | (rd8(sp0 + 0x20u) >> 2u & 1u);
L_10102140: ;
    if ((ebx & 0x10u) == 0u) goto L_1010215d;
    if ((uint8_t)edx != 0x17u) goto L_10102150;
    return (eax & 0xffffff00u) | 1u;
L_10102150: ;
    return (eax & 0xffffff00u) | (rd8(sp0 + 0x20u) >> 3u & 1u);
L_1010215d: ;
    if ((uint8_t)edx != 0x14u) goto L_101021f1;
    if ((ebx & 4u) == 0u) goto L_101021f1;
    if ((uint8_t)eax != 1u) goto L_101021af;
    if (rd8(sp0 + 0x20u) & 1u) goto L_101021ba;
L_1010217a: ;
    t10 = rd32(sp0 + 0xcu);
    if (rd16(arg7 + (uint8_t)t10 * 2u) > rd8(sp0 + 0x10u))
    {
        cf = rd16(arg7 + (uint8_t)t10 * 2u) < rd8(sp0 + 0x10u);
        pf = PARITY((uint8_t)(rd16(arg7 + (uint8_t)t10 * 2u) - rd8(sp0 + 0x10u)));
        zf = (uint16_t)(rd16(arg7 + (uint8_t)t10 * 2u) - rd8(sp0 + 0x10u)) == 0u;
        sf = (int16_t)(rd16(arg7 + (uint8_t)t10 * 2u) - rd8(sp0 + 0x10u)) < 0;
        of = ((rd16(arg7 + (uint8_t)t10 * 2u) ^ rd8(sp0 + 0x10u)) & (rd16(arg7 + (uint8_t)t10 * 2u) ^ (uint16_t)(rd16(arg7 + (uint8_t)t10 * 2u) - rd8(sp0 + 0x10u)))) >> 0xfu;
        goto L_101021d4;
    }
    eax = (uint8_t)t10;
    edx = t10;
    if ((ebx & 0x20u) != 0u) goto L_10102208;
    if ((uint8_t)edx != 0x14u) goto L_101021f1;
    if ((ebx & 8u) == 0u) goto L_101021c0;
    return (eax & 0xffffff00u) | (rd8(sp0 + 0x20u) >> 2u & 1u);
L_101021af: ;
    if ((uint8_t)eax != 2u) goto L_1010217a;
    if ((rd8(sp0 + 0x20u) & 2u) == 0u) goto L_1010217a;
L_101021ba: ;
    return (eax & 0xffffff00u) | 1u;
L_101021c0: ;
    if ((ebx & 4u) == 0u) goto L_101021f1;
    if (rd8(sp0 + 0x14u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0x14u);
        goto L_101021f7;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 0x14u);
    if (rd8(sp0 + 0x20u) & 1u) goto L_10102202;
    cf = 0u;
    pf = PARITY(rd8(sp0 + 0x20u) & 1u);
    zf = !(rd8(sp0 + 0x20u) & 1u);
    sf = (int8_t)(rd8(sp0 + 0x20u) & 1u) < 0;
    of = 0u;
L_101021d4: ;
    if ((1u << (ecx & 0x1fu) & arg9) == 0u)
    {
        eax = arg9;
        goto L_10102208;
    }
    if (rd8(sp0 + 8u) < 0x63u)
    {
        eax = arg9;
        goto L_10102208;
    }
    if ((uint16_t)esi > rd16(sp0 + 0x28u))
    {
        eax = arg9;
        goto L_10102208;
    }
    eax = arg9;
L_101021f1: ;
    return (eax & 0xffffff00u) | 1u;
L_101021f7: ;
    if ((uint8_t)eax != 2u)
    {
        cf = (uint8_t)eax < 2u;
        pf = PARITY((uint8_t)((uint8_t)eax - 2u));
        zf = (uint8_t)((uint8_t)eax - 2u) == 0u;
        sf = (int8_t)((uint8_t)eax - 2u) < 0;
        of = (((uint8_t)eax ^ 2u) & ((uint8_t)eax ^ (uint8_t)((uint8_t)eax - 2u))) >> 7u;
        goto L_101021d4;
    }
    if ((rd8(sp0 + 0x20u) & 2u) == 0u)
    {
        cf = 0u;
        pf = PARITY(rd8(sp0 + 0x20u) & 2u);
        zf = (rd8(sp0 + 0x20u) & 2u) == 0u;
        sf = (int8_t)(rd8(sp0 + 0x20u) & 2u) < 0;
        of = 0u;
        goto L_101021d4;
    }
L_10102202: ;
    return (eax & 0xffffff00u) | 1u;
L_10102208: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10102050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10102050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
