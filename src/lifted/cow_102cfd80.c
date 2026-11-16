/* f_0x102cfd80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_102cfd80(Guest* g)
{
    double d11;
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d22;
    double d24;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t15;
    uint32_t t2;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 8u) * 0x2bu << 0x10u;
    t2 = rd32(COW_IMG(0x10344e4cu) + (t1 >> 0x17u) * 0xcu + rd32(sp0 + 4u) * 0xcu - rd32(sp0 + 8u) * 4u) - (t1 & 0x7f800000u);
    t3 = rd32(sp0 + 0x10u);
    t4 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t2);
    if (t4 != 1u)
    {
        ecx = t3;
        ebx = t4;
        edi = t3 + rd32(sp0 + 0xcu) * 4u;
        goto L_102cfecd;
    }
    eax = 6u;
    ecx = t3;
    edi = t3 + rd32(sp0 + 0xcu) * 4u;
L_102cfdd9: ;
    d5 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx)) + (double)rdf32(COW_IMG(0x10343990u)));
    d6 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 4u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d7 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 8u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d8 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0xcu)) + (double)rdf32(COW_IMG(0x10343990u)));
    d9 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x10u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 4u, (float)d9);
    t10 = rd32(sp0 + 4u);
    d11 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x14u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 0x10u, (float)d11);
    t12 = rd32(sp0 + 0x10u);
    d13 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x18u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 0xcu, (float)d13);
    d14 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x1cu)) + (double)rdf32(COW_IMG(0x10343990u)));
    t15 = rd32(COW_IMG(0x10344cf0u) + (cow_f2bits(d5) & 1u) * 0x20u + (cow_f2bits(d6) & 1u) * 0x10u + (cow_f2bits(d7) & 1u) * 8u + (cow_f2bits(d8) & 1u) * 4u) + rd32(COW_IMG(0x10344cf0u) + (t10 & 1u) * 0x20u + (t12 & 1u) * 0x10u + (cow_f2bits(d14) & 1u) * 4u + (rd32(sp0 + 0xcu) & 1u) * 8u);
    if (ecx + 0x20u != edi)
    {
        eax = eax + t15;
        ecx = ecx + 0x20u;
        goto L_102cfdd9;
    }
    eax = eax + t15;
    edx = t15;
    g->edx = edx;
    return eax;
L_102cfecd: ;
    eax = 6u;
    edx = rd32(COW_IMG(0x103cc0c8u) + ebx * 8u);
    esi = rd32(COW_IMG(0x10344e9cu) + ebx * 4u);
L_102cfedb: ;
    d16 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx)) + (double)rdf32(COW_IMG(0x10343990u)));
    d17 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 4u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d18 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 8u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d19 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0xcu)) + (double)rdf32(COW_IMG(0x10343990u)));
    d20 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x10u)) + (double)rdf32(COW_IMG(0x10343990u)));
    d21 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x14u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 0xcu, (float)d21);
    d22 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x18u)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 0x10u, (float)d22);
    t23 = rd32(sp0 + 0x10u);
    d24 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(ecx + 0x1cu)) + (double)rdf32(COW_IMG(0x10343990u)));
    wrf32(sp0 + 4u, (float)d24);
    t25 = rd32(edx + (t23 & esi) * 8u + 4u) + rd32(edx + (cow_f2bits(d20) & esi) * 8u + 4u) + rd32(edx + (rd32(sp0 + 0xcu) & esi) * 8u + 4u) + rd32(edx + (rd32(sp0 + 4u) & esi) * 8u + 4u);
    t26 = t25 + rd32(edx + (cow_f2bits(d17) & esi) * 8u + 4u) + rd32(edx + (cow_f2bits(d18) & esi) * 8u + 4u) + rd32(edx + (cow_f2bits(d19) & esi) * 8u + 4u) + rd32(edx + (cow_f2bits(d16) & esi) * 8u + 4u);
    if (ecx + 0x20u != edi)
    {
        eax = eax + t26;
        ecx = ecx + 0x20u;
        goto L_102cfedb;
    }
    eax = eax + t26;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102cfd80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102cfd80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
