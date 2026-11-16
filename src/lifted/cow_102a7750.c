/* f_0x102a7750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102a7750(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    t1 = rd32(COW_IMG(0x109a286cu));
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, in_edx, 1, 3, arg1, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        ecx = t3;
        goto L_102a777f;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be484u), in_edi);
    return;
L_102a777f: ;
    t5 = arg2 - (uint32_t)((int32_t)arg2 >> 0x1fu);
    t6 = rd32(COW_IMG(0x103be2c8u) + (uint32_t)((int32_t)t5 >> 1u) * 4u);
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, (uint32_t)((int32_t)arg2 >> 0x1fu), 1, 6, t6, 1u, arg2, arg1, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u)
    {
        edx = t9;
        ebx = t6;
        edi = (uint32_t)((int32_t)t5 >> 1u);
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        ebx = t6;
        edi = (uint32_t)((int32_t)t5 >> 1u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103be468u), in_edi);
        t10 = g->edx;
        edx = t10;
    }
    t11 = arg2 + rd32(COW_IMG(0x109a286cu));
    wr32(COW_IMG(0x109a286cu), t11);
    if (rd16(COW_IMG(0x109aa89cu)) != 0u)
    {
        ecx = (t11 & 0xffff0000u) | rd16(COW_IMG(0x109aa89cu));
        goto L_102a77fd;
    }
    esi = ebx;
    edi = COW_IMG(0x109aa89cu);
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
L_102a77e2: ;
    esi = ebx;
    edi = arg4;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
L_102a77f8: ;
    return;
L_102a77fd: ;
    if ((uint16_t)ecx == 0x4d4du)
    {
        if ((int32_t)edi > 0)
        {
            eax = 0u;
            esi = arg2 + ebx - 1u;
L_102a780e: ;
            t12 = rd8(eax + ebx);
            t13 = rd8(esi);
            wr8(eax + ebx, (uint8_t)t13);
            wr8(esi, (uint8_t)t12);
            if ((int32_t)(eax + 1u) < (int32_t)edi)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t12;
                edx = (edx & 0xffffff00u) | t13;
                esi = esi - 1u;
                goto L_102a780e;
            }
        }
    }
    if (arg3 - 1u > 0xbu) goto L_102a77f8;
    t14 = rd32(COW_IMG(0x102a784cu) + arg3 * 4u - 4u);
    switch (t14 - RD)
    {
    case 0x102a77e2u: goto L_102a77e2;
    case 0x102a782fu: goto L_102a782f;
    default: rt_fatal(g, COW_IMG(0x102a7828u), "switch");
    }
    return;
L_102a782f: ;
    esi = ebx;
    edi = arg4;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a7750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102a7750(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
