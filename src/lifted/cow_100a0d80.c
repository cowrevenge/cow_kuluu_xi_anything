/* f_0x100a0d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100a0d80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(sp0 + 4u);
    t3 = rd32(sp0 + 8u);
    wr32(sp0 + 0xcu, t1);
    wr32(sp0 + 8u, t3);
    wr32(sp0 + 4u, t2);
    edx = t3;
    t4 = rd32(sp0 + 4u);
    t5 = rd32(sp0 + 0x10u);
    wr8(t5, 1u);
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x1035b880u) + (uint16_t)t4 * 2u) != 0x7fu)
    {
        eax = (uint32_t)(int16_t)rd16(COW_IMG(0x1035b880u) + (uint16_t)t4 * 2u);
        ecx = t5;
        goto L_100a0dcc;
    }
    g->edx = edx;
    return (uint16_t)rd32(sp0 + 8u) + 2u;
L_100a0dcc: ;
    if (eax == 0x7eu) goto L_100a0e71;
    if (eax == 0x7du) goto L_100a0e78;
    if (eax != 0x7cu) goto L_100a0df1;
    g->edx = edx;
    return (uint16_t)rd32(sp0 + 8u) + 0x68u;
L_100a0df1: ;
    if (eax != 0x7bu) goto L_100a0e12;
    t6 = rd32(sp0 + 8u);
    wr8(ecx, 0u);
    g->edx = edx;
    return (t6 & 1u) + ((uint16_t)t6 >> 1u) * 8u + 0x88u;
L_100a0e12: ;
    if (eax != 0x7au) goto L_100a0edf;
    t7 = rd32(sp0 + 8u);
    wr8(ecx, 0u);
    wr8(sp0 + 0xcu, 0u);
    if ((uint16_t)t7 == 0xffffu) goto L_100a0edd;
    eax = t7;
    g->edx = edx;
    t8 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1015bc40u), t8, 1, (uint16_t)eax);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        edx = t11;
        goto L_100a0e61;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    t12 = rd8(eax + 0x1b3u);
    t13 = rd8(eax + 0x2cu);
    wr8(sp0 + 0xcu, (uint8_t)t13);
    wr8(eax + 0x1b3u, (uint8_t)t12);
    if ((uint8_t)t13 == 0xffu)
    {
        edx = (edx & 0xffffff00u) | t12;
        goto L_100a0edd;
    }
    edx = (edx & 0xffffff00u) | t12;
L_100a0e61: ;
    g->edx = edx;
    return (uint8_t)rd32(sp0 + 0xcu) + 0xe0u;
L_100a0e71: ;
    esi = 0x48u;
L_100a0e7d: ;
    t14 = rd8(sp0 + 0xcu);
    wr8(sp0 + 0x10u, 6u);
    if ((uint8_t)t14 != 1u) goto L_100a0e9f;
    eax = (eax & 0xffffff00u) | t14;
    wr8(sp0 + 0x10u, rd8(sp0 + 8u));
    g->edx = edx;
    return esi + (uint8_t)rd32(sp0 + 0x10u);
L_100a0e78: ;
    esi = 0x108u;
    goto L_100a0e7d;
L_100a0e9f: ;
    if ((uint16_t)rd32(sp0 + 8u) != 0u)
    {
        eax = rd32(sp0 + 8u);
        g->edx = edx;
        t15 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 4u;
        t16 = cow_thiscall(g, COW_IMG(0x1015bc40u), t15, 1, (uint16_t)eax);
        t17 = g->ecx;
        t18 = g->edx;
        if (t16 == 0u)
        {
            edx = t18;
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            t19 = rd8(eax + 0x1b3u);
            wr8(sp0 + 0x10u, rd8(eax + 0x2cu));
            wr8(eax + 0x1b3u, (uint8_t)t19);
            edx = (edx & 0xffffff00u) | t19;
        }
    }
    g->edx = edx;
    return esi + (uint8_t)rd32(sp0 + 0x10u);
L_100a0edd: ;
    eax = 0xffffffffu;
L_100a0edf: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a0d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a0d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
