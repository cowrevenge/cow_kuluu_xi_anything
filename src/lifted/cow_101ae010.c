/* f_0x101ae010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ae010(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        esi = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        esi = rd32(eax + 0x70u);
    }
    if (arg1 - 1u > 3u)
    {
        eax = arg1 - 1u;
        goto L_101ae12c;
    }
    t4 = rd32(COW_IMG(0x101ae130u) + arg1 * 4u - 4u);
    switch (t4 - RD)
    {
    case 0x101ae039u: goto L_101ae039;
    case 0x101ae048u: goto L_101ae048;
    case 0x101ae0b7u: goto L_101ae0b7;
    case 0x101ae128u: eax = arg1 - 1u; goto L_101ae128;
    default: rt_fatal(g, COW_IMG(0x101ae032u), "switch");
    }
    return 0;
L_101ae039: ;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x10087070u), arg1 - 1u, g->ecx, g->edx, 1, 1, 0u);
    eax = t21;
L_101ae0e2: ;
    if ((uint8_t)eax != 0u) goto L_101ae12c;
    if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u);
        goto L_101ae12c;
    }
    ecx = rd32(COW_IMG(0x1057876cu));
    if (rd32(ecx + 0xc4u) != 0u)
    {
        eax = rd32(ecx + 0xc4u);
        goto L_101ae12c;
    }
    eax = rd32(ecx + 0xc4u);
    if (esi == 0u) goto L_101ae12c;
    if (rd32(esi + 0x170u) == 2u)
    {
        eax = rd32(esi + 0x170u);
        goto L_101ae12c;
    }
    eax = rd32(esi + 0x170u);
    if (eax == 3u) goto L_101ae12c;
    if (rd16(ecx + 0x68u) != 0u) goto L_101ae12c;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d4u));
        goto L_101ae128;
    }
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 0u) goto L_101ae12c;
L_101ae128: ;
    return (eax & 0xffffff00u) | 1u;
L_101ae048: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x10087070u), arg1 - 1u, g->ecx, g->edx, 1, 1, 0u);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        goto L_101ae12c;
    }
    edx = t11;
    g->esp = sp0 - 4u;
    t12 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t13 = g->edx;
    if ((uint8_t)t12 != 0u)
    {
        eax = t12;
        goto L_101ae12c;
    }
    edx = t13;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        eax = t14;
        goto L_101ae0b3;
    }
    edx = t15;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x10376364u));
    t17 = g->edx;
    if ((uint8_t)t16 != 0u)
    {
        eax = t16;
        goto L_101ae0b3;
    }
    edx = t17;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037633cu));
    t19 = g->edx;
    if ((uint8_t)t18 != 0u)
    {
        eax = t18;
        goto L_101ae0b3;
    }
    edx = t19;
    g->esp = sp0 - 4u;
    t20 = cow_thiscall(g, COW_IMG(0x1015ec50u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        goto L_101ae12c;
    }
    eax = t20;
L_101ae0b3: ;
    return (eax & 0xffffff00u) | 1u;
L_101ae0b7: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_call_regs(g, COW_IMG(0x10087070u), arg1 - 1u, g->ecx, g->edx, 1, 1, 0u);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        eax = t5;
        goto L_101ae12c;
    }
    edx = t6;
    g->esp = sp0 - 4u;
    t7 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        goto L_101ae12c;
    }
    edx = t8;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x1015ecc0u), COW_IMG(0x10621838u), 1, 0x20000u);
    eax = t9;
    goto L_101ae0e2;
L_101ae12c: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ae010(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
