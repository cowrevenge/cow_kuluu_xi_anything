/* f_0x1024ff70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1024ff70(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1) & 0x20u) == 0u) goto L_1024ffac;
    d1 = fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(arg1 + 0x88u));
    wr32(arg2 + 4u, 0xc0000000u);
    wrf32(arg2, (float)d1);
    d2 = fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(arg1 + 0x90u));
    wrf32(arg2 + 8u, (float)-d2);
    return 0u;
L_1024ffac: ;
    if (arg1 + 0xa8u == 0u)
    {
        eax = arg1;
        goto L_1024ffed;
    }
    if ((rd8(arg1 + 0xa8u) & 4u) == 0u)
    {
        eax = arg1;
        goto L_1024ffed;
    }
    if ((int32_t)rd32(rd32(arg1 + 0xc8u) + 0x44u) <= 0)
    {
        eax = rd32(rd32(arg1 + 0xc8u) + 0x44u);
        goto L_1024ffed;
    }
    eax = rd32(rd32(arg1 + 0xc8u) + 0x44u);
    ecx = arg1 + 0xa8u;
    edx = in_edx;
    ebx = rd32(arg1 + 0xc8u);
    edi = 0u;
L_1024ffca: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x10279890u), 2, ebx, edi);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(t3) != 0xb0001u)
    {
        ecx = t4;
        edx = t5;
        goto L_1024ffe5;
    }
    ecx = t4;
    edx = t5;
    esi = t3;
    if (rd32(esi + 0x1cu) != 0u) goto L_1024fff4;
L_1024ffe5: ;
    if ((int32_t)(edi + 1u) < (int32_t)rd32(ebx + 0x44u))
    {
        eax = rd32(ebx + 0x44u);
        edi = edi + 1u;
        goto L_1024ffca;
    }
    eax = rd32(ebx + 0x44u);
L_1024ffed: ;
    return 0xffffffffu;
L_1024fff4: ;
    t6 = rd32(rd32(esi + 0x1cu) + 0x68u);
    wr32(rd32(esi + 0x1cu) + 0x68u, 0u);
    t7 = rd32(esi + 0x1cu);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027cd10u), 3, esi, t7, arg2);
    d8 = fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(arg2));
    wrf32(arg2, (float)d8);
    d9 = fr(g, (double)rdf32(COW_IMG(0x103890e4u)) * (double)rdf32(arg2 + 4u));
    wrf32(arg2 + 4u, (float)-d9);
    d10 = fr(g, (double)rdf32(arg2 + 8u) * (double)rdf32(COW_IMG(0x103890e4u)));
    wrf32(arg2 + 8u, (float)-d10);
    wr32(rd32(esi + 0x1cu) + 0x68u, t6);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024ff70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024ff70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
