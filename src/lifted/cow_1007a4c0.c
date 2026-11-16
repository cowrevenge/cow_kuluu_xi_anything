/* f_0x1007a4c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1007a4c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x20u, 0u);
    if (arg1 == 0u) goto L_1007a5ec;
    if (rd8(arg1) == 0u) goto L_1007a5ec;
    if ((int32_t)arg2 <= 0) goto L_1007a5ec;
    if ((int32_t)arg2 > 24) goto L_1007a5ec;
    if ((int32_t)arg3 >= 0)
    {
        edx = arg3;
    }
    else
    {
        edx = 0u;
    }
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_edi);
    if ((int32_t)rd32(sp0 + 0x10u) <= 2304)
    {
        ebp = rd32(sp0 + 0x10u);
    }
    else
    {
        wr32(sp0 + 0x10u, 0x900u);
        ebp = 0x900u;
    }
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    esi = arg1;
    edi = sp0 - 0x1cu;
    ecx = arg2 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = arg2 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)edx >= (int32_t)ebp)
    {
        loc_20 = 0u;
        goto L_1007a5e0;
    }
    edi = edx;
L_1007a548: ;
    if (rd32(COW_IMG(0x10480af0u) + edi * 4u) == 0u) goto L_1007a5c3;
    esi = rd32(COW_IMG(0x10480af0u) + edi * 4u);
    if (esi + 0x74u == 0u) goto L_1007a5c3;
    ebx = esi + 0x74u;
    if (rd32(ebx + 4u) == 0u) goto L_1007a5c3;
    if (rd32(esi + 0x124u) >> 0xcu & 1u) goto L_1007a5c3;
    t1 = rd32(esi + 0x120u);
    if (t1 >> 7u & 1u)
    {
        edx = t1 >> 7u;
        goto L_1007a5c3;
    }
    eax = t1;
    edx = t1 >> 7u;
    if (eax >> 8u & 1u) goto L_1007a5c3;
    eax = eax >> 8u;
    if ((uint8_t)arg5 == 0u) goto L_1007a5ae;
    if ((int32_t)edi < 1792) goto L_1007a5ae;
    if (!(rd32(esi + 0x12cu) >> 0x16u & 1u)) goto L_1007a5c3;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t2 = cow_thiscall(g, COW_IMG(0x1008e260u), esi, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_1007a5c3;
    }
L_1007a5ae: ;
    wr32(sp0 - 0x34u, arg5);
    wr32(sp0 - 0x38u, sp0 - 0x1cu);
    g->edx = sp0 - 0x1cu;
    g->esp = sp0 - 0x30u;
    t4 = cow_thiscall(g, COW_IMG(0x1008b270u), esi, 2, sp0 - 0x1cu, arg5);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        goto L_1007a5dc;
    }
    edx = t5;
L_1007a5c3: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 + 0x10u))
    {
        edi = edi + 1u;
        goto L_1007a548;
    }
    g->edx = edx;
    return 0u;
L_1007a5dc: ;
    wr32(sp0 - 0x20u, ebx);
    loc_20 = ebx;
L_1007a5e0: ;
    g->edx = edx;
    return loc_20;
L_1007a5ec: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a4c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a4c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
