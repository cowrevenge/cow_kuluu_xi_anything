/* f_0x10097500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10097500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u)
    {
        eax = arg1;
        edx = in_edx;
        goto L_100976ec;
    }
    if ((rd32(self + 0x124u) & 0x4000000u) == 0u)
    {
        esi = rd32(self + 0x124u);
        goto L_10097521;
    }
    return (arg1 & 0xffffff00u) | 0x8eu;
L_10097521: ;
    if ((esi & 0x10000000u) == 0u) goto L_1009752f;
    return (arg1 & 0xffffff00u) | 0x8fu;
L_1009752f: ;
    if (rd16(self + 0x210u) == 0u) goto L_1009753f;
    return (arg1 & 0xffffff00u) | 0xabu;
L_1009753f: ;
    if (rd8(self + 0x1ffu) < 2u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_100975ef;
    }
    edx = (in_edx & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)edx > 0x63u) goto L_100975ef;
    if ((uint8_t)edx < 0x28u) goto L_10097565;
    if ((uint8_t)edx <= 0x2bu) goto L_100975ef;
L_10097565: ;
    if (rd8(self + 0x294u) != 0u)
    {
        eax = rd8(self + 0x294u);
    }
    else
    {
        if ((uint8_t)edx > 6u)
        {
            eax = 0u;
        }
        else
        {
            eax = (uint8_t)edx - 1u;
        }
    }
    if (eax - 1u > 6u)
    {
        eax = eax - 1u;
        goto L_100975c6;
    }
    eax = eax - 1u;
    t1 = rd32(COW_IMG(0x100976f4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1009758fu: goto L_1009758f;
    case 0x10097593u: goto L_10097593;
    case 0x10097597u: goto L_10097597;
    case 0x1009759bu: goto L_1009759b;
    case 0x1009759fu: goto L_1009759f;
    case 0x100975a3u: goto L_100975a3;
    case 0x100975b7u: goto L_100975b7;
    default: rt_fatal(g, COW_IMG(0x10097588u), "switch");
    }
    return 0;
L_1009758f: ;
    eax = (eax & 0xffffff00u) | 0x9eu;
L_100975ca: ;
    if ((uint8_t)edx - 0x20u > 7u)
    {
        edx = (uint8_t)edx;
        goto L_100976f0;
    }
    ecx = (uint8_t)edx - 0x20u;
    edx = (uint8_t)edx;
    t2 = rd32(COW_IMG(0x10097710u) + ecx * 4u);
    switch (t2 - RD)
    {
    case 0x100975e3u: goto L_100975e3;
    case 0x100975e9u: goto L_100975e9;
    default: rt_fatal(g, COW_IMG(0x100975dcu), "switch");
    }
    return 0;
L_10097593: ;
    eax = (eax & 0xffffff00u) | 0x9fu;
    goto L_100975ca;
L_10097597: ;
    eax = (eax & 0xffffff00u) | 0xa0u;
    goto L_100975ca;
L_1009759b: ;
    eax = (eax & 0xffffff00u) | 0xa3u;
    goto L_100975ca;
L_1009759f: ;
    eax = (eax & 0xffffff00u) | 0xa4u;
    goto L_100975ca;
L_100975a3: ;
    eax = ((rd32(self + 0x29cu) & 0xffffff00u) | rd32(self + 0x29cu) != 0u) * 2u + 0xa3u;
    goto L_100975ca;
L_100975b7: ;
    eax = (eax & 0xffffff00u) | (uint8_t)((rd32(self + 0x29cu) != 0u) + 0xa4u);
    goto L_100975ca;
L_100975c6: ;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    goto L_100975ca;
L_100975e3: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xa6u;
L_100975e9: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xa7u;
L_100975ef: ;
    if ((esi & 0x400000u) == 0u) goto L_10097632;
    if ((rd32(self + 0x78u) & 0xff000000u) != 0x1000000u)
    {
        eax = rd32(self + 0x78u) & 0xff000000u;
        goto L_1009762c;
    }
    eax = rd32(self + 0x78u) & 0xff000000u;
    if ((esi >> 1u & 7u) == 5u) goto L_10097626;
    esi = (esi >> 1u & 7u) - 5u;
    if (esi == 1u) goto L_10097620;
    esi = esi - 1u;
    if (esi != 1u) goto L_100976ec;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xb0u;
L_10097620: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xafu;
L_10097626: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xaeu;
L_1009762c: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0x90u;
L_10097632: ;
    if ((rd32(self + 0x12cu) & 0x40000u) != 0u)
    {
        eax = arg1;
        goto L_10097656;
    }
    if ((rd32(self + 0x128u) >> 0xbu & 7u) == 0u)
    {
        eax = rd32(self + 0x128u) >> 0xbu & 7u;
        goto L_10097656;
    }
    eax = rd32(self + 0x128u) >> 0xbu & 7u;
    g->edx = edx;
    return (eax & 0xffffff00u) | rd8(COW_IMG(0x1035b61cu) + eax);
L_10097656: ;
    if (rd8(self + 0x1dau) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x1dau);
        goto L_10097666;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x1dau);
    g->edx = edx;
    return (eax & 0xffffff00u) | 0x94u;
L_10097666: ;
    if ((rd8(self + 0x140u) & 8u) == 0u) goto L_10097675;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xacu;
L_10097675: ;
    if ((esi & 0x200000u) == 0u) goto L_10097683;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0x9du;
L_10097683: ;
    if ((esi & 0x100000u) == 0u) goto L_10097691;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0x91u;
L_10097691: ;
    if ((rd32(self + 0x130u) & 0x800000u) == 0u)
    {
        eax = rd32(self + 0x130u);
        goto L_100976a4;
    }
    eax = rd32(self + 0x130u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xa8u;
L_100976a4: ;
    if (!(eax >> 0xeu & 1u)) goto L_100976b4;
    edx = eax >> 0xeu;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0x93u;
L_100976b4: ;
    if (!(eax >> 0xcu & 1u))
    {
        edx = eax >> 0xcu;
        goto L_100976d2;
    }
    edx = eax >> 0xcu;
    g->edx = edx;
    return (-(rd32(self + 0x78u) & 0xff000000u) & 0xffffff00u) | (uint8_t)((-((rd32(self + 0x78u) & 0xff000000u) != 0u) & 0xfu) + 0xa2u);
L_100976d2: ;
    if (!(eax >> 0xdu & 1u)) goto L_100976df;
    eax = eax >> 0xdu;
    g->edx = edx;
    return (eax & 0xffffff00u) | 0xa1u;
L_100976df: ;
    if ((rd32(self + 0x128u) >> 8u & 2u) != 0u)
    {
        eax = (rd32(self + 0x128u) & 0xffffff00u) | 0x9cu;
        goto L_100976f0;
    }
    eax = (rd32(self + 0x128u) & 0xffffff00u) | 0x9cu;
L_100976ec: ;
    eax = (eax & 0xffffff00u) | (uint8_t)arg2;
L_100976f0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097500(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
