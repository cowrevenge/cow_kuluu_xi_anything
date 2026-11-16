/* f_0x10293720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10293720(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t10;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg4 <= 0) goto L_10293838;
    d1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)rdf32(sp0 + 0x14u));
    wr32(sp0 + 0x14u, arg3 - 2u);
    eax = arg3 - 2u;
    ecx = self;
    edx = in_edx;
    esi = 0u;
    x0 = d1;
L_1029374f: ;
    g->edx = edx;
    d2 = fr(g, x0 * (double)rdf32(arg2 + esi * 4u));
    fpush(g, d2);
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t4 = g->edx;
    if ((int32_t)t3 >= 0)
    {
        ecx = t3;
        edx = t4;
        ebx = 0u;
    }
    else
    {
        ecx = t3;
        edx = t4;
        ecx = -ecx;
        ebx = 0xffu;
    }
    if (rd32(sp0 + 0x14u) > 0xeu) goto L_10293826;
    eax = rd32(sp0 + 0x14u);
    t5 = rd32(COW_IMG(0x1029383cu) + rd8(COW_IMG(0x10293850u) + eax) * 4u);
    switch (t5 - RD)
    {
    case 0x10293785u: goto L_10293785;
    case 0x102937bcu: goto L_102937bc;
    case 0x102937efu: edx = rd8(COW_IMG(0x10293850u) + eax); goto L_102937ef;
    case 0x10293804u: edx = rd8(COW_IMG(0x10293850u) + eax); goto L_10293804;
    case 0x10293826u: edx = rd8(COW_IMG(0x10293850u) + eax); goto L_10293826;
    default: rt_fatal(g, COW_IMG(0x1029377eu), "switch");
    }
    return;
L_10293785: ;
    t10 = rd8(arg1 + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 3u)) >> 2u));
    wr8(arg1 + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 3u)) >> 2u), (uint8_t)(t10 | ecx));
    if (ebx == 0u)
    {
        eax = arg1 + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 3u)) >> 2u);
        edx = (t10 & 0xffffff00u) | (uint8_t)(t10 | ecx);
    }
    else
    {
        eax = arg1 + (uint32_t)((int32_t)(esi + ((uint32_t)((int32_t)esi >> 0x1fu) & 3u)) >> 2u);
        edx = (t10 & 0xffffff00u) | (uint8_t)(t10 | ecx);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t10 | ecx);
        wr8(eax, (uint8_t)(ecx | 2u));
    }
    if ((int32_t)(esi & 0x80000003u) >= 0)
    {
        ecx = esi & 0x80000003u;
    }
    else
    {
        ecx = esi & 0x80000003u;
        ecx = (ecx - 1u | 0xfffffffcu) + 1u;
    }
    if (ecx != 3u)
    {
        wr8(eax, (uint8_t)(rd8(eax) << 2u));
    }
L_10293826: ;
    if ((int32_t)(esi + 1u) < (int32_t)arg4)
    {
        eax = arg4;
        esi = esi + 1u;
        goto L_1029374f;
    }
L_10293838: ;
    return;
L_102937bc: ;
    t9 = rd8(arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u));
    wr8(arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u), (uint8_t)(t9 | ecx));
    if (ebx == 0u)
    {
        eax = arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t9 | ecx);
    }
    else
    {
        eax = arg1 + (uint32_t)((int32_t)(esi - (uint32_t)((int32_t)esi >> 0x1fu)) >> 1u);
        ecx = (ecx & 0xffffff00u) | (uint8_t)(t9 | ecx);
        wr8(eax, (uint8_t)(ecx | 8u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)(ecx | 8u);
    }
    if ((int32_t)(esi & 0x80000001u) >= 0)
    {
        edx = esi & 0x80000001u;
    }
    else
    {
        edx = esi & 0x80000001u;
        edx = (edx - 1u | 0xfffffffeu) + 1u;
    }
    if (edx != 1u)
    {
        wr8(eax, (uint8_t)(rd8(eax) << 4u));
    }
    goto L_10293826;
L_102937ef: ;
    t8 = rd8(arg1 + esi);
    wr8(arg1 + esi, (uint8_t)(t8 | ecx));
    if (ebx == 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(t8 | ecx);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t8 | ecx);
        edx = (edx & 0xffffff00u) | (uint8_t)(t8 | ecx);
        wr8(arg1 + esi, (uint8_t)(eax | 0x80u));
    }
    goto L_10293826;
L_10293804: ;
    t6 = rd8(arg1 + esi * 2u);
    wr8(arg1 + esi * 2u, (uint8_t)(t6 | (uint32_t)((int32_t)ecx >> 8u)));
    t7 = rd8(arg1 + esi * 2u + 1u);
    wr8(arg1 + esi * 2u + 1u, (uint8_t)(t7 | ecx));
    if (ebx == 0u)
    {
        edx = (edx & 0xffffff00u) | (uint8_t)(t7 | ecx);
    }
    else
    {
        eax = ((uint32_t)((int32_t)ecx >> 8u) & 0xffffff00u) | (uint8_t)(t6 | (uint32_t)((int32_t)ecx >> 8u));
        edx = (edx & 0xffffff00u) | (uint8_t)(t7 | ecx);
        wr8(arg1 + esi * 2u, (uint8_t)(eax | 0x80u));
    }
    goto L_10293826;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10293720(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
