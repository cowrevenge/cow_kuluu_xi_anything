/* f_0x101281f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101281f0(Guest* g)
{
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint8_t)arg1 - 1u > 0xddu)
    {
        edx = in_edx;
        goto L_101283d5;
    }
    t1 = rd32(COW_IMG(0x101283e8u) + rd8(COW_IMG(0x10128410u) + (uint8_t)arg1 - 1u) * 4u);
    edx = rd8(COW_IMG(0x10128410u) + (uint8_t)arg1 - 1u);
    switch (t1 - RD)
    {
    case 0x1012821cu: goto L_1012821c;
    case 0x1012824fu: goto L_1012824f;
    case 0x10128282u: goto L_10128282;
    case 0x101282b5u: goto L_101282b5;
    case 0x101282e8u: goto L_101282e8;
    case 0x1012831bu: goto L_1012831b;
    case 0x1012834eu: goto L_1012834e;
    case 0x10128381u: goto L_10128381;
    case 0x101283b4u: goto L_101283b4;
    case 0x101283d5u: goto L_101283d5;
    default: rt_fatal(g, COW_IMG(0x10128215u), "switch");
    }
    return;
L_1012821c: ;
    t10 = rd8(self + 0x64020u);
    wr8(self + 0x64020u, (uint8_t)((uint8_t)arg2 + t10));
    if ((uint8_t)((uint8_t)arg2 + t10) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t10);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t10);
        wr8(self + 0x64020u, 0x64u);
    }
    wr16(self + 0x64032u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64032u)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_1012824f: ;
    t9 = rd8(self + 0x64021u);
    wr8(self + 0x64021u, (uint8_t)((uint8_t)arg2 + t9));
    if ((uint8_t)((uint8_t)arg2 + t9) < 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t9);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t9);
        wr8(self + 0x64021u, 0x64u);
    }
    wr16(self + 0x64036u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64036u)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_10128282: ;
    t8 = rd8(self + 0x64022u);
    wr8(self + 0x64022u, (uint8_t)((uint8_t)arg2 + t8));
    if ((uint8_t)((uint8_t)arg2 + t8) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t8);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t8);
        wr8(self + 0x64022u, 0x64u);
    }
    wr16(self + 0x64034u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64034u)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_101282b5: ;
    t7 = rd8(self + 0x64023u);
    wr8(self + 0x64023u, (uint8_t)((uint8_t)arg2 + t7));
    if ((uint8_t)((uint8_t)arg2 + t7) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t7);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t7);
        wr8(self + 0x64023u, 0x64u);
    }
    wr16(self + 0x6402eu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402eu)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_101282e8: ;
    t6 = rd8(self + 0x64024u);
    wr8(self + 0x64024u, (uint8_t)((uint8_t)arg2 + t6));
    if ((uint8_t)((uint8_t)arg2 + t6) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t6);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t6);
        wr8(self + 0x64024u, 0x64u);
    }
    wr16(self + 0x64030u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64030u)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_1012831b: ;
    t5 = rd8(self + 0x64025u);
    wr8(self + 0x64025u, (uint8_t)((uint8_t)arg2 + t5));
    if ((uint8_t)((uint8_t)arg2 + t5) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t5);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t5);
        wr8(self + 0x64025u, 0x64u);
    }
    wr16(self + 0x6403au, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403au)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_1012834e: ;
    t4 = rd8(self + 0x64027u);
    wr8(self + 0x64027u, (uint8_t)((uint8_t)arg2 + t4));
    if ((uint8_t)((uint8_t)arg2 + t4) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t4);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t4);
        wr8(self + 0x64027u, 0x64u);
    }
    wr16(self + 0x64038u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64038u)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_10128381: ;
    t3 = rd8(self + 0x64028u);
    wr8(self + 0x64028u, (uint8_t)((uint8_t)arg2 + t3));
    if ((uint8_t)((uint8_t)arg2 + t3) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t3);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t3);
        wr8(self + 0x64028u, 0x64u);
    }
    wr16(self + 0x6403eu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403eu)));
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
L_101283b4: ;
    t2 = rd8(self + 0x64029u);
    wr8(self + 0x64029u, (uint8_t)((uint8_t)arg2 + t2));
    if ((uint8_t)((uint8_t)arg2 + t2) <= 0x64u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t2);
    }
    else
    {
        edx = (edx & 0xffffff00u) | (uint8_t)((uint8_t)arg2 + t2);
        wr8(self + 0x64029u, 0x64u);
    }
    wr16(self + 0x64040u, (uint16_t)((uint16_t)arg2 + rd16(self + 0x64040u)));
L_101283d5: ;
    wr16(self + 0x6402cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6402cu)));
    wr16(self + 0x6403cu, (uint16_t)((uint16_t)arg2 + rd16(self + 0x6403cu)));
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101281f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101281f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
