/* f_0x102cf4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_102cf4d0(Guest* g)
{
    double d10;
    double d12;
    double d14;
    double d16;
    double d18;
    double d20;
    double d21;
    double d27;
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t13;
    uint32_t t15;
    uint32_t t17;
    uint32_t t19;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t28;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(sp0 + 0xcu) * 4u + rd32(sp0 + 8u));
    t2 = rd32(sp0 + 0xcu);
    t3 = rd8(rd32(sp0 + 0xcu) + rd32(sp0 + 8u) + 0x38u);
    t4 = rd32(rd32(sp0 + 0xcu) * 4u + rd32(sp0 + 8u) + 0x1cu);
    wr32(sp0 + 0xcu, t1);
    if (t2 != 0u)
    {
        eax = t2;
        ebx = (uint32_t)(int8_t)t3;
        ebp = t4;
        edi = rd32(arg1 + 0x40u);
        loc_4 = (uint32_t)(int8_t)t3;
        goto L_102cf681;
    }
    eax = t2;
    ebx = (uint32_t)(int8_t)t3;
    ebp = t4;
    edi = rd32(arg1 + 0x40u);
    loc_4 = (uint32_t)(int8_t)t3;
    t5 = 0xffffffffu >> (ebx & 0x1fu);
    wr32(sp0 + 8u, t5);
    eax = arg5;
L_102cf50f: ;
    t6 = ((rd8((uint32_t)((int32_t)edi >> 3u) + rd32(arg1 + 0x3cu)) << 8u | rd8((uint32_t)((int32_t)edi >> 3u) + rd32(arg1 + 0x3cu) + 1u)) << 8u | rd8((uint32_t)((int32_t)edi >> 3u) + rd32(arg1 + 0x3cu) + 2u)) << 8u | rd8((uint32_t)((int32_t)edi >> 3u) + rd32(arg1 + 0x3cu) + 3u);
    if ((int8_t)rd8(ebp + ((uint32_t)((int32_t)t6 >> ((ebx - (edi & 7u) & 0x1fu) < 0x20u ? ebx - (edi & 7u) & 0x1fu : 0x1fu)) & rd32(sp0 + 8u))) < 0) goto L_102cf6db;
    ecx = ebx - (edi & 7u);
    edx = t6;
    esi = (uint32_t)(int8_t)rd8(ebp + ((uint32_t)((int32_t)t6 >> ((ebx - (edi & 7u) & 0x1fu) < 0x20u ? ebx - (edi & 7u) & 0x1fu : 0x1fu)) & rd32(sp0 + 8u)));
    t7 = rd8(esi + rd32(sp0 + 0xcu));
    d8 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344120u) + esi * 4u)) + (double)rdf32(eax));
    wrf32(eax, (float)d8);
    t9 = rd32(sp0 + 8u);
    d10 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344124u) + esi * 4u)) + (double)rdf32(eax + 4u));
    wrf32(eax + 4u, (float)d10);
    if ((int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t7 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t7 & 0x1fu : 0x1fu)) & t9)) < 0) goto L_102cf6db;
    eax = eax + 8u;
    esi = (uint32_t)(int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t7 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t7 & 0x1fu : 0x1fu)) & t9));
    ecx = ecx - (uint32_t)(int8_t)t7;
    t11 = rd8(esi + rd32(sp0 + 0xcu));
    d12 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344120u) + esi * 4u)) + (double)rdf32(eax));
    wrf32(eax, (float)d12);
    t13 = rd32(sp0 + 8u);
    d14 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344124u) + esi * 4u)) + (double)rdf32(eax + 4u));
    wrf32(eax + 4u, (float)d14);
    if ((int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t11 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t11 & 0x1fu : 0x1fu)) & t13)) < 0) goto L_102cf6db;
    eax = eax + 8u;
    esi = (uint32_t)(int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t11 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t11 & 0x1fu : 0x1fu)) & t13));
    ecx = ecx - (uint32_t)(int8_t)t11;
    t15 = rd8(esi + rd32(sp0 + 0xcu));
    d16 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344120u) + esi * 4u)) + (double)rdf32(eax));
    wrf32(eax, (float)d16);
    t17 = rd32(sp0 + 8u);
    d18 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344124u) + esi * 4u)) + (double)rdf32(eax + 4u));
    wrf32(eax + 4u, (float)d18);
    if ((int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t15 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t15 & 0x1fu : 0x1fu)) & t17)) < 0) goto L_102cf6db;
    eax = eax + 8u;
    edx = (uint32_t)(int8_t)rd8(ebp + ((uint32_t)((int32_t)edx >> ((ecx - (uint32_t)(int8_t)t15 & 0x1fu) < 0x20u ? ecx - (uint32_t)(int8_t)t15 & 0x1fu : 0x1fu)) & t17));
    ecx = ecx - (uint32_t)(int8_t)t15;
    t19 = rd8(edx + rd32(sp0 + 0xcu));
    d20 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344120u) + edx * 4u)) + (double)rdf32(eax));
    wrf32(eax, (float)d20);
    d21 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10344124u) + edx * 4u)) + (double)rdf32(eax + 4u));
    wrf32(eax + 4u, (float)d21);
    if (eax + 8u < arg6)
    {
        eax = eax + 8u;
        ebx = loc_4;
        edi = loc_4 + (uint32_t)(int8_t)t19 + (edi & 0xfffffff8u) - ecx;
        goto L_102cf50f;
    }
    edi = loc_4 + (uint32_t)(int8_t)t19 + (edi & 0xfffffff8u) - ecx;
    wr32(arg1 + 0x40u, edi);
    return;
L_102cf681: ;
    t22 = rd32(COW_IMG(0x10344350u) + eax * 4u);
    wr32(sp0 + 8u, t22);
    edx = t22;
    esi = arg5;
L_102cf690: ;
    t23 = rd32(arg1 + 0x3cu);
    g->eax = arg1;
    g->esp = sp0 - 0xcu;
    t24 = cow_cdecl(g, COW_IMG(0x102cf280u), 5, t23, edi, ebx, in_edi, in_esi);
    if ((int8_t)rd8(ebp + t24) < 0) goto L_102cf6db;
    eax = (uint32_t)(int8_t)rd8(ebp + t24);
    t25 = rd32(sp0 + 8u);
    t26 = rd8(eax + rd32(sp0 + 0xcu));
    d27 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax * 4u + rd32(sp0 + 8u))) + (double)rdf32(esi));
    wrf32(esi, (float)d27);
    if (esi + 4u < arg6)
    {
        edx = t25;
        esi = esi + 4u;
        edi = edi + (uint32_t)(int8_t)t26;
        goto L_102cf690;
    }
    edi = edi + (uint32_t)(int8_t)t26;
    wr32(arg1 + 0x40u, edi);
    return;
L_102cf6db: ;
    t28 = rd32(arg1 + 0x44u) | 2u;
    wr32(arg1 + 0x44u, t28);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cf4d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102cf4d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
