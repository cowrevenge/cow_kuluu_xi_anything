/* f_0x1022d370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_1022d370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x10u) - 1u > 0xeu)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x10u) - 1u;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
        goto L_1022d39f;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x10u) - 1u;
    esi = rd32(sp0 + 4u);
    t1 = rd32(COW_IMG(0x1022d4d4u) + rd8(COW_IMG(0x1022d4ecu) + eax) * 4u);
    edx = rd8(COW_IMG(0x1022d4ecu) + eax);
    switch (t1 - RD)
    {
    case 0x1022d391u: goto L_1022d391;
    case 0x1022d399u: goto L_1022d399;
    case 0x1022d39cu: goto L_1022d39c;
    case 0x1022d39fu: goto L_1022d39f;
    case 0x1022d437u: goto L_1022d437;
    case 0x1022d43fu: goto L_1022d43f;
    default: rt_fatal(g, COW_IMG(0x1022d38au), "switch");
    }
    return 0;
L_1022d391: ;
    wr8(esi + 0x1eu, 1u);
    wr8(esi + 0x20u, 1u);
L_1022d39f: ;
    if (rd32(esi + 4u) == 2u)
    {
        wr8(esi + 0x22u, 1u);
    }
    t2 = rd8(esi + 0x1cu);
    t3 = rd8(COW_IMG(0x1033c49cu) + (uint8_t)((rd8(esi + 0x1cu) != 1u) + (uint8_t)((-((uint8_t)(rd8(esi + 0x1eu) - 1u) != 0u) & 4u) + (-((uint8_t)(rd8(esi + 0x22u) - 1u) != 0u) & 2u))));
    wr32(esi + 0x14u, 0u);
    wr8(sp0 + 4u, (uint8_t)t3);
    if ((uint8_t)t2 != 0u)
    {
        eax = (eax & 0xffffff00u) | t2;
        ecx = (self & 0xffffff00u) | t2 != 1u;
        edx = t3;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t2;
        ecx = (self & 0xffffff00u) | t2 != 1u;
        edx = t3;
        if (rd8(esi + 0x20u) != 0u)
        {
            wr8(sp0 + 4u, 0u);
        }
    }
    if (rd8(esi + 0x21u) != 0u)
    {
        if (rd8(esi + 0x1fu) != 0u)
        {
            wr8(sp0 + 4u, 3u);
        }
    }
    if (rd8(esi + 0x23u) != 0u)
    {
        wr8(sp0 + 4u, 2u);
    }
    if (rd8(esi + 0x1du) != 0u)
    {
        wr8(sp0 + 4u, (uint8_t)(((uint8_t)eax != 0u) + 1u));
        eax = (eax & 0xffffff00u) | (uint8_t)(((uint8_t)eax != 0u) + 1u);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, COW_IMG(0x101cc510u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)rd32(sp0 + 4u) > 3u)
    {
        eax = (uint8_t)rd32(sp0 + 4u);
        goto L_1022d4cb;
    }
    eax = (uint8_t)rd32(sp0 + 4u);
    ecx = t5;
    edx = t6;
    edi = t4;
    t7 = rd32(COW_IMG(0x1022d4fcu) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1022d447u: goto L_1022d447;
    case 0x1022d46du: goto L_1022d46d;
    case 0x1022d4a3u: goto L_1022d4a3;
    case 0x1022d4b5u: goto L_1022d4b5;
    default: rt_fatal(g, COW_IMG(0x1022d430u), "switch");
    }
    return 0;
L_1022d399: ;
    wr8(esi + 0x20u, 1u);
L_1022d39c: ;
    wr8(esi + 0x1du, 1u);
    goto L_1022d39f;
L_1022d437: ;
    wr8(esi + 0x1eu, 1u);
    goto L_1022d39f;
L_1022d43f: ;
    wr8(esi + 0x1fu, 1u);
    goto L_1022d39f;
L_1022d447: ;
    if (rd8(esi + 0x1cu) == 0u) goto L_1022d450;
    if (edi == 0u) goto L_1022d4c8;
L_1022d450: ;
    g->esp = sp0 - 0xcu;
    t12 = cow_call_regs(g, COW_IMG(0x10157cb0u), eax, rd32(COW_IMG(0x1057876cu)), g->edx, 1, 0);
    if (t12 == 0u)
    {
        eax = t12;
        goto L_1022d4c8;
    }
    eax = t12;
    t13 = rd32(eax + 4u);
    wr32(esi + 0x14u, t13);
    return (t13 & 0xffffff00u) | rd8(sp0 + 4u);
L_1022d46d: ;
    if (rd8(esi + 0x1cu) == 0u) goto L_1022d476;
    if (edi == 0u) goto L_1022d4c8;
L_1022d476: ;
    if (rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u) == 0u) goto L_1022d496;
    eax = rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) * 4u);
    t11 = rd32(eax + 0x78u);
    wr32(esi + 0x14u, t11);
    return (t11 & 0xffffff00u) | rd8(sp0 + 4u);
L_1022d496: ;
    wr32(esi + 0x14u, 0u);
    return rd8(sp0 + 4u);
L_1022d4a3: ;
    if (edi == 0u) goto L_1022d4c8;
    t9 = rd32(edi + 0x78u);
    t10 = rd8(sp0 + 4u);
    wr32(esi + 0x14u, t9);
    return (eax & 0xffffff00u) | t10;
L_1022d4b5: ;
    if (edi == 0u) goto L_1022d4c8;
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10087630u), eax, g->ecx, g->edx, 1, 0);
    wr32(esi + 0x14u, t8);
    if (rd32(edi + 0x78u) != t8)
    {
        eax = t8;
        goto L_1022d4cb;
    }
    eax = t8;
L_1022d4c8: ;
    wr32(esi + 0x14u, 0u);
L_1022d4cb: ;
    return (eax & 0xffffff00u) | rd8(sp0 + 4u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022d370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
