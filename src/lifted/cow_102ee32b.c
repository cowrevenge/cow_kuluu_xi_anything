/* f_0x102ee32b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102ee32b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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

    t1 = rd32(rd32(in_esi + 0x14u) + 4u);
    if (rd32(rd32(in_esi + 0x14u) + 4u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(in_esi + 0x14u);
        edi = rd32(rd32(in_esi + 0x14u));
        loc_8 = t1;
        goto L_102ee357;
    }
    eax = t1;
    ebx = rd32(in_esi + 0x14u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_thiscall(g, rd32(ebx + 0xcu), self, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_102ee47e;
    }
    edx = t3;
    t4 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t4;
L_102ee357: ;
    t5 = rd8(edi) << 8u;
    if (loc_8 != 1u)
    {
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = t5;
        goto L_102ee37d;
    }
    eax = t5;
    loc_c = t5;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_102ee47e;
    }
    edx = t7;
    t8 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t8;
L_102ee37d: ;
    t9 = loc_c + rd8(edi);
    eax = rd8(edi);
    edi = edi + 1u;
    loc_8 = loc_8 - 1u;
    loc_c = t9 - 2u;
L_102ee466: ;
    if ((int32_t)loc_c > 0) goto L_102ee390;
    wr32(ebx + 4u, loc_8);
    wr32(ebx, edi);
    eax = (loc_8 & 0xffffff00u) | 1u;
L_102ee47a: ;
    return eax;
L_102ee390: ;
    if (loc_8 != 0u) goto L_102ee3ab;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t10 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        eax = t10;
        goto L_102ee47e;
    }
    edx = t11;
    t12 = rd32(ebx + 4u);
    ecx = in_esi;
    edi = rd32(ebx);
    loc_8 = t12;
L_102ee3ab: ;
    if (loc_8 != 1u)
    {
        loc_8 = loc_8 - 1u;
        loc_10 = rd8(edi);
        edi = edi + 1u;
        goto L_102ee3d0;
    }
    eax = rd8(edi);
    loc_10 = rd8(edi);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t13 = cow_thiscall(g, rd32(ebx + 0xcu), ecx, 0);
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        goto L_102ee47e;
    }
    t14 = rd32(ebx + 4u);
    edi = rd32(ebx);
    loc_8 = t14;
L_102ee3d0: ;
    t15 = rd8(edi);
    wr32(rd32(in_esi) + 0x14u, 0x4eu);
    wr32(rd32(in_esi) + 0x18u, loc_10);
    t16 = rd32(in_esi);
    wr32(t16 + 0x1cu, t15);
    g->edx = loc_10;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t16, 0);
    t17 = g->edx;
    if ((int32_t)loc_10 < 0)
    {
        eax = loc_10;
        edx = t17;
        edi = edi + 1u;
        loc_8 = loc_8 - 1u;
        loc_c = loc_c - 2u;
        loc_14 = t15;
        goto L_102ee40a;
    }
    eax = loc_10;
    edx = t17;
    edi = edi + 1u;
    loc_8 = loc_8 - 1u;
    loc_c = loc_c - 2u;
    loc_14 = t15;
    if ((int32_t)eax < 32)
    {
        ecx = 1u;
        goto L_102ee421;
    }
L_102ee40a: ;
    wr32(rd32(in_esi) + 0x14u, 0x1au);
    t18 = rd32(in_esi);
    wr32(t18 + 0x18u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(in_esi)), t18, 0);
    t19 = g->edx;
    eax = loc_10;
    ecx = in_esi;
    edx = t19;
L_102ee421: ;
    if ((int32_t)eax < 16)
    {
        wr8(eax + in_esi + 0xcau, loc_14 & 0xfu);
        wr8(eax + in_esi + 0xdau, (uint8_t)(uint32_t)((int32_t)loc_14 >> 4u));
        if ((loc_14 & 0xfu) <= (uint8_t)(uint32_t)((int32_t)loc_14 >> 4u))
        {
            ecx = (ecx & 0xffffff00u) | (loc_14 & 0xfu);
            edx = (uint32_t)((int32_t)loc_14 >> 4u);
        }
        else
        {
            edx = (uint32_t)((int32_t)loc_14 >> 4u);
            wr32(rd32(in_esi) + 0x14u, 0x1bu);
            wr32(rd32(in_esi) + 0x18u, loc_14);
            g->eax = rd32(in_esi);
            g->edx = edx;
            t20 = rd32(in_esi);
            g->esp = sp0 - 0x20u;
            t21 = cow_thiscall(g, rd32(t20), loc_14, 0);
            t22 = g->edx;
            eax = t21;
            ecx = in_esi;
            edx = t22;
        }
    }
    else
    {
        wr8(eax + in_esi + 0xdau, (uint8_t)loc_14);
        ecx = (ecx & 0xffffff00u) | (uint8_t)loc_14;
    }
    goto L_102ee466;
L_102ee47e: ;
    eax = eax & 0xffffff00u;
    goto L_102ee47a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ee32b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ee32b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
