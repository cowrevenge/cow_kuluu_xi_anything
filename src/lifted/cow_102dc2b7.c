/* f_0x102dc2b7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102dc2b7(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(sp0 + 8u) >= 2u)
    {
        if (rd8(rd32(sp0 + 4u)) != 0x50u)
        {
            edx = in_edx;
            goto L_102dc498;
        }
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 4u));
        edi = rd32(sp0 + 4u);
        if (rd8(edi + 1u) != 0x33u) goto L_102dc2ee;
        loc_1c = 1u;
L_102dc304: ;
        wr32(sp0 + 8u, rd32(sp0 + 8u) - 2u);
        if (rd32(sp0 + 8u) == 2u)
        {
            edx = in_edx;
            goto L_102dc498;
        }
        ecx = self;
        edx = in_edx;
        loc_10 = edi + 2u;
        edi = edi + 2u;
        loc_8 = 0u;
        loc_18 = 0u;
        loc_c = 0xffu;
        loc_14 = rd32(sp0 - 0x14u);
L_102dc324: ;
        if (loc_1c != 0u) goto L_102dc333;
        if (loc_8 == 3u) goto L_102dc4a4;
L_102dc333: ;
        g->edx = edx;
        t9 = rd8(edi);
        g->esp = sp0 - 0x28u;
        t10 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, t9);
        t11 = g->edx;
        if (t10 == 0u)
        {
            ecx = t9;
            edx = t11;
            goto L_102dc34d;
        }
        ecx = t9;
        edx = t11;
L_102dc341: ;
        wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
        loc_10 = edi + 1u;
        edi = edi + 1u;
L_102dc48d: ;
        if (rd32(sp0 + 8u) != 0u) goto L_102dc324;
L_102dc498: ;
        eax = 0x80004005u;
L_102dc49d: ;
    }
    else
    {
        eax = 0x80004005u;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
L_102dc2ee: ;
    if ((uint8_t)eax != 0x50u)
    {
        edx = in_edx;
        goto L_102dc498;
    }
    if (rd8(edi + 1u) != 0x36u)
    {
        edx = in_edx;
        goto L_102dc498;
    }
    loc_1c = 0u;
    goto L_102dc304;
L_102dc34d: ;
    if (rd8(edi) != 0x23u) goto L_102dc364;
    if (rd32(sp0 + 8u) == 0u) goto L_102dc341;
L_102dc357: ;
    if (rd8(edi) == 0xau) goto L_102dc341;
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    if (rd32(sp0 + 8u) != 1u)
    {
        edi = edi + 1u;
        goto L_102dc357;
    }
    edi = edi + 1u;
    goto L_102dc341;
L_102dc364: ;
    if (rd32(sp0 + 8u) == 0u)
    {
        ebx = 0u;
        goto L_102dc39d;
    }
    ebx = 0u;
L_102dc36a: ;
    g->edx = edx;
    t12 = rd8(edi);
    g->esp = sp0 - 0x28u;
    t13 = cow_cdecl(g, COW_IMG(0x103147f1u), 1, t12);
    t14 = g->edx;
    if (t13 != 0u)
    {
        ecx = t12;
        edx = t14;
        goto L_102dc39d;
    }
    ecx = t12;
    edx = t14;
    g->edx = edx;
    t15 = rd8(edi);
    g->esp = sp0 - 0x28u;
    t16 = cow_cdecl(g, COW_IMG(0x1031479cu), 1, t15);
    t17 = g->edx;
    if (t16 == 0u)
    {
        edx = t17;
        goto L_102dc498;
    }
    edx = t17;
    t18 = rd8(edi);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    if (rd32(sp0 + 8u) != 1u)
    {
        ecx = t18;
        ebx = ebx * 0xau + t18 - 0x30u;
        loc_10 = edi + 1u;
        edi = edi + 1u;
        goto L_102dc36a;
    }
    ecx = t18;
    ebx = ebx * 0xau + t18 - 0x30u;
    loc_10 = edi + 1u;
    edi = edi + 1u;
L_102dc39d: ;
    if (loc_8 == 0u) goto L_102dc483;
    eax = loc_8;
    if (eax == 1u) goto L_102dc433;
    eax = eax - 1u;
    if (eax == 1u) goto L_102dc42e;
    eax = eax - 1u;
    if (eax == 1u) goto L_102dc409;
    eax = eax - 1u;
    if (eax == 1u) goto L_102dc3ed;
    eax = eax - 1u;
    if (eax != 1u) goto L_102dc48a;
    t19 = cow_divu(g, ebx * 0xffu, loc_c);
    t20 = cow_modu(g, ebx * 0xffu, loc_c);
    t21 = rd32(sp0 + 4u);
    wr32(t21, rd32(t21) | t19);
    wr32(sp0 + 4u, t21 + 4u);
    if (t21 + 4u == loc_14)
    {
        edx = t20;
        goto L_102dc52c;
    }
    ecx = t21 + 4u;
    edx = t20;
    loc_8 = 2u;
L_102dc48a: ;
    loc_8 = loc_8 + 1u;
    goto L_102dc48d;
L_102dc3ed: ;
    t22 = cow_divu(g, ebx * 0xffu, loc_c);
    t23 = cow_modu(g, ebx * 0xffu, loc_c);
    wr32(rd32(sp0 + 4u), rd32(rd32(sp0 + 4u)) | t22 << 8u);
    ecx = t22 << 8u;
    edx = t23;
    goto L_102dc48a;
L_102dc409: ;
    if (rd32(sp0 + 4u) >= loc_14) goto L_102dc498;
    ecx = rd32(sp0 + 4u);
    t24 = cow_divu(g, ebx * 0xffu, loc_c);
    t25 = cow_modu(g, ebx * 0xffu, loc_c);
    t26 = (t24 | 0xffffff00u) << 0x10u;
    wr32(ecx, t26);
    edx = t25;
    goto L_102dc48a;
L_102dc42e: ;
    loc_c = ebx;
L_102dc486: ;
    if (ebx == 0u) goto L_102dc498;
    goto L_102dc48a;
L_102dc433: ;
    if (ebx == 0u) goto L_102dc498;
    t27 = ebx * loc_18 * 4u;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t28 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, t27, in_edi, in_esi);
    t29 = g->edx;
    wr32(self + 4u, t28);
    if (t28 == 0u)
    {
        edx = t29;
        goto L_102dc533;
    }
    eax = t28;
    edi = t27;
    wr32(sp0 + 4u, eax);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x38u, 1u);
    wr32(self, 0x16u);
    wr32(self + 0x30u, loc_18 << 2u);
    wr32(self + 0xcu, loc_18);
    wr32(self + 0x10u, ebx);
    wr32(self + 0x14u, 1u);
    ecx = 1u;
    edx = loc_18 << 2u;
    loc_14 = eax + edi;
    edi = loc_10;
    goto L_102dc48a;
L_102dc483: ;
    loc_18 = ebx;
    goto L_102dc486;
L_102dc4a4: ;
    if (loc_c > 0xffu) goto L_102dc498;
    esi = loc_c;
    if (rd32(sp0 + 8u) > 1u)
    {
        if (rd8(edi) == 0xdu)
        {
            wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
            edi = edi + 1u;
        }
    }
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 1u);
    if (rd32(sp0 + 8u) == 1u) goto L_102dc518;
    edi = edi + 1u;
L_102dc4c4: ;
    if (rd32(sp0 + 4u) >= loc_14) goto L_102dc518;
    ecx = rd32(sp0 + 4u);
    t1 = cow_divu(g, rd8(edi) * 0xffu, esi);
    t2 = cow_modu(g, rd8(edi) * 0xffu, esi);
    t3 = cow_divu(g, rd8(edi + 1u) * 0xffu, esi);
    t4 = cow_modu(g, rd8(edi + 1u) * 0xffu, esi);
    t5 = cow_divu(g, rd8(edi + 2u) * 0xffu, esi);
    t6 = cow_modu(g, rd8(edi + 2u) * 0xffu, esi);
    t7 = ((t1 | 0xffffff00u) << 8u | t3) << 8u | t5;
    wr32(ecx, t7);
    wr32(sp0 + 8u, rd32(sp0 + 8u) - 3u);
    t8 = rd32(sp0 + 8u);
    wr32(sp0 + 4u, ecx + 4u);
    if (t8 != 3u)
    {
        edx = t6;
        edi = edi + 3u;
        goto L_102dc4c4;
    }
    edx = t6;
L_102dc518: ;
    eax = -(rd32(sp0 + 4u) != loc_14) & 0x80004005u;
    goto L_102dc49d;
L_102dc52c: ;
    eax = 0u;
    goto L_102dc49d;
L_102dc533: ;
    eax = 0x8007000eu;
    goto L_102dc49d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102dc2b7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102dc2b7(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
