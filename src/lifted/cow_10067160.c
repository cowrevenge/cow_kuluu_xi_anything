/* f_0x10067160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10067160(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    eax = rd32(sp0 + 4u);
    ebp = 0xffffffffu;
L_1006716e: ;
    wr32(sp0 + 4u, 0u);
    edx = arg2;
    loc_8 = 0x186a0u;
    loc_4 = 0xffffffffu;
L_1006718a: ;
    if ((uint8_t)rd32(edx) != rd32(COW_IMG(0x1047bf4cu)))
    {
        ecx = rd32(edx);
        edi = (uint8_t)rd32(edx);
    }
    else
    {
        ecx = rd32(edx);
        edi = (uint8_t)rd32(edx);
        wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
    }
    if (edi != rd32(COW_IMG(0x1047bf44u))) goto L_100671b5;
    t1 = rd32(sp0 + 4u) - 1u;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t2 == 1u) goto L_100671fb;
L_100671b5: ;
    if ((ecx >> 0x13u & 1u) != 1u)
    {
        esi = ecx >> 0x13u & 1u;
    }
    else
    {
        esi = ecx >> 0x13u & 1u;
        if ((int16_t)rd16(edx + 4u) >= (int32_t)loc_4)
        {
            ebx = (uint32_t)(int16_t)rd16(edx + 4u);
            loc_4 = ebx;
        }
    }
    if (esi == 0u)
    {
        if ((int16_t)rd16(edx + 4u) > (int32_t)loc_4)
        {
            esi = (uint32_t)(int16_t)rd16(edx + 4u);
            if ((int32_t)esi < (int32_t)loc_8)
            {
                loc_8 = esi;
            }
        }
    }
    if (edi == 0u)
    {
        edx = 0u;
    }
    else
    {
        edx = edx + (ecx >> 8u & 0x1fu) * 4u;
    }
    goto L_1006718a;
L_100671fb: ;
    ebx = arg2;
L_100671ff: ;
    if ((uint8_t)rd32(ebx) != rd32(COW_IMG(0x1047bf4cu)))
    {
        ecx = rd32(ebx);
        edx = (uint8_t)rd32(ebx);
        goto L_1006723c;
    }
    ecx = rd32(ebx);
    edx = (uint8_t)rd32(ebx);
    t3 = rd32(sp0 + 4u) + 1u;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t3);
    if ((int32_t)(t4 + 1u) < 2) goto L_1006723c;
    esi = t3;
    if ((ecx & 0x80000u) != 0u) goto L_1006723c;
    g->ebp = ebp;
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t5 = cow_cdecl(g, COW_IMG(0x10067160u), 2, eax, ebx);
    wr32(sp0 + 4u, esi - 1u);
    eax = t5;
    goto L_100671ff;
L_1006723c: ;
    if (edx != rd32(COW_IMG(0x1047bf44u))) goto L_1006724f;
    t6 = rd32(sp0 + 4u) - 1u;
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t6);
    if (t7 == 1u) goto L_100672bb;
L_1006724f: ;
    if ((ecx & 0x80000u) == 0u)
    {
        if ((uint32_t)(int16_t)rd16(ebx + 4u) == loc_8)
        {
            t11 = (ecx >> 8u & 0x1fu) << 2u;
            esi = ebx;
            edi = eax;
            ecx = t11 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t11 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
            t12 = (ecx & 0xffff0000u) | rd16(ebx + 4u);
            wr16(eax + 4u, (uint16_t)(t12 - ebp));
            t13 = rd32(ebx) | 0x80000u;
            t14 = rd32(ebx);
            wr32(ebx, t13);
            eax = eax + (t14 >> 8u & 0x1fu) * 4u;
            ebp = (uint32_t)(int16_t)t12;
        }
    }
    if ((uint8_t)rd32(ebx) == 0u)
    {
        ebx = 0u;
    }
    else
    {
        ecx = rd32(ebx);
        ebx = ebx + (ecx >> 8u & 0x1fu) * 4u;
    }
    goto L_100671ff;
L_100672bb: ;
    if (loc_8 != 0x186a0u) goto L_1006716e;
    t8 = (rd32(ebx) >> 8u & 0x1fu) << 2u;
    esi = ebx;
    edi = eax;
    ecx = t8 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t8 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t9 = rd32(ebx) | 0x80000u;
    t10 = rd32(ebx);
    wr32(ebx, t9);
    g->ebp = in_ebp;
    return eax + (t10 >> 8u & 0x1fu) * 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10067160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
