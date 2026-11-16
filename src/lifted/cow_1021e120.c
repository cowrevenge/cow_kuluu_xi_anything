/* f_0x1021e120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1021e120(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x18u, in_esi);
    if (rd8(COW_IMG(0x10666e80u)) == 1u)
    {
        edx = in_edx;
        goto L_1021e313;
    }
    wr8(COW_IMG(0x10666e80u), 1u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, t1);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(rd32(sp0 + 4u)) + 0xcu), rd32(rd32(sp0 + 4u)), 2, t1, sp0 + 4u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr32(sp0 - 0x28u, 0u);
    t2 = rd32(self + rd32(self + 0x170u) * 4u + 0x174u);
    wr32(sp0 - 0x2cu, t2);
    g->eax = t2;
    g->edx = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(t2) + 0x40u), rd32(t2), 5, t2, 0u, sp0 - 8u, 0u, 0u);
    t4 = g->edx;
    if ((int32_t)t3 >= 0) goto L_1021e17d;
    edx = t4;
    wr8(COW_IMG(0x10666e80u), 0u);
    g->esi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return 0x80004005u;
L_1021e17d: ;
    t5 = rd32(sp0 - 8u);
    wr32(sp0 - 0x10u, t5);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(self + 0x16cu) != 0x15u)
    {
        ecx = rd32(sp0 - 4u);
        loc_10 = t5;
        goto L_1021e215;
    }
    ecx = rd32(sp0 - 4u);
    loc_10 = t5;
    wr32(sp0 - 0x14u, 0u);
    if ((int32_t)rd32(self + 0x164u) <= 0) goto L_1021e215;
    eax = rd32(sp0 + 4u);
    edi = rd32(self + 0x160u);
    loc_14 = 0u;
L_1021e1b3: ;
    if ((int32_t)edi <= 0)
    {
        ebx = ecx;
        ebp = eax;
        goto L_1021e1ee;
    }
    edx = 0u;
    ebx = ecx;
    ebp = eax;
L_1021e1bd: ;
    wr8(ecx, rd8(eax));
    wr8(ecx + 1u, rd8(rd32(sp0 + 4u) + 1u));
    wr8(ecx + 2u, rd8(rd32(sp0 + 4u) + 2u));
    t6 = rd32(sp0 + 4u) + 3u;
    t7 = rd32(self + 0x160u);
    wr32(sp0 + 4u, t6);
    if ((int32_t)(edx + 1u) < (int32_t)t7)
    {
        eax = t6;
        ecx = ecx + 4u;
        edx = edx + 1u;
        goto L_1021e1bd;
    }
    edi = t7;
L_1021e1ee: ;
    t8 = ebp + rd32(self + 0x168u);
    t9 = rd32(self + 0x164u);
    wr32(sp0 + 4u, t8);
    wr32(sp0 - 0x14u, loc_14 + 1u);
    if ((int32_t)(loc_14 + 1u) < (int32_t)t9)
    {
        eax = t8;
        ecx = ebx + loc_10;
        loc_14 = loc_14 + 1u;
        goto L_1021e1b3;
    }
    eax = t8;
    ecx = ebx + loc_10;
    ebx = t9;
L_1021e219: ;
    if (rd32(self + 0x16cu) == 0x19u)
    {
        wr32(sp0 - 0x14u, 0u);
        if ((int32_t)rd32(self + 0x164u) > 0)
        {
            edx = rd32(self + 0x160u);
            loc_14 = 0u;
L_1021e242: ;
            wr32(sp0 - 0xcu, ecx);
            if ((int32_t)edx <= 0)
            {
                ebp = eax;
                loc_c = ecx;
                goto L_1021e296;
            }
            ebp = eax;
            edi = 0u;
            loc_c = ecx;
L_1021e24e: ;
            t10 = rd8(eax + 1u);
            wr16(ecx, (uint16_t)(((eax & 0xffff0000u) | rd8(eax) >> 3u) + ((ebx & 0xffff0000u) | (t10 & 0xf8u)) * 4u + ((edx & 0xffff0000u) | (rd8(eax + 2u) & 0xf8u)) * 0x80u - 0x8000u));
            t11 = rd32(sp0 + 4u) + 3u;
            t12 = rd32(self + 0x160u);
            wr32(sp0 + 4u, t11);
            if ((int32_t)(edi + 1u) < (int32_t)t12)
            {
                eax = t11;
                ecx = ecx + 2u;
                edx = t12;
                ebx = (ebx & 0xffff0000u) | (t10 & 0xf8u);
                edi = edi + 1u;
                goto L_1021e24e;
            }
            edx = t12;
L_1021e296: ;
            t13 = ebp + rd32(self + 0x168u);
            t14 = rd32(self + 0x164u);
            wr32(sp0 + 4u, t13);
            wr32(sp0 - 0x14u, loc_14 + 1u);
            if ((int32_t)(loc_14 + 1u) < (int32_t)t14)
            {
                eax = t13;
                ecx = loc_10 + loc_c;
                ebx = t14;
                loc_14 = loc_14 + 1u;
                goto L_1021e242;
            }
        }
    }
    wr32(sp0 - 0x28u, 0u);
    t15 = rd32(self + rd32(self + 0x170u) * 4u + 0x174u);
    wr32(sp0 - 0x2cu, t15);
    g->eax = t15;
    g->edx = rd32(self + 0x170u);
    t16 = rd32(self + 0x170u);
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, rd32(rd32(t15) + 0x44u), rd32(t15), 2, t15, 0u);
    t18 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        edx = t18;
        goto L_1021e2ee;
    }
    edx = t18;
    wr8(COW_IMG(0x10666e80u), 0u);
    g->esi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return 0x80004005u;
L_1021e215: ;
    eax = rd32(sp0 + 4u);
    ebx = in_ebx;
    goto L_1021e219;
L_1021e2ee: ;
    t19 = rd32(self + 0x170u) + 1u;
    wr32(self + 0x170u, t19);
    if ((int32_t)t19 >= 4)
    {
        wr32(self + 0x170u, 0u);
    }
    wr8(COW_IMG(0x10666e80u), 0u);
L_1021e313: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021e120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021e120(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
