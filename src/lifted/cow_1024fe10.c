/* f_0x1024fe10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024fe10(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d2;
    double d3;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t4;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if ((int32_t)rd32(sp0 + 8u) > 55000)
    {
        wr32(sp0 + 8u, 0xc350u);
    }
    t1 = rd32(sp0 + 4u);
    d2 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(rd32(sp0 + 4u) + 0x74u)) + (double)rdf32(rd32(sp0 + 4u) + 0x70u));
    wrf32(sp0 + 8u, (float)d2);
    d3 = (double)rdf32(t1 + 0x74u);
    t4 = rd32(sp0 + 8u);
    d5 = (double)rdf32(COW_IMG(0x103295d8u));
    wr32(t1 + 0x70u, t4);
    if (d3 != d5)
    {
        eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d5, 0u);
        esi = t1;
        goto L_1024fe5a;
    }
    eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d5, 0u);
    esi = t1;
    t6 = rd32(esi + 0x54u);
    wr32(esi + 0x70u, t6);
    edx = in_edx;
L_1024feaf: ;
    t15 = rd32(esi) & 0xfffffff7u;
    t16 = rd32(esi);
    wr32(esi, t15);
    if ((t16 & 0x40u) == 0u)
    {
        eax = (eax & 0xffffff00u) | (t16 & 0xf7u);
    }
    else
    {
        ecx = t15;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_cdecl(g, COW_IMG(0x1024d630u), 1, esi);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
L_1024fec5: ;
    t19 = rd32(esi + 0x70u);
    wr32(sp0 + 8u, t19);
    wr32(sp0 + 4u, 0xffffffffu);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10271bf0u), eax, t19, edx);
    return;
L_1024fe5a: ;
    d7 = (double)rdf32(esi + 0x74u);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1024fe80;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d8 = (double)rdf32(sp0 + 8u);
    d9 = (double)rdf32(esi + 0x6cu);
    if (!(d8 <= d9))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
        goto L_1024fe80;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
    t10 = rd32(esi + 0x6cu);
    wr32(esi + 0x70u, t10);
    edx = t10;
L_1024fea8: ;
    wr32(esi + 0x74u, 0u);
    goto L_1024feaf;
L_1024fe80: ;
    d11 = (double)rdf32(esi + 0x74u);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        edx = in_edx;
        goto L_1024fec5;
    }
    eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    d12 = (double)rdf32(sp0 + 8u);
    d13 = (double)rdf32(esi + 0x6cu);
    if ((cow_fsw(g, d12, d13, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d12, d13, 0u) & 0x100u;
        edx = in_edx;
        goto L_1024fec5;
    }
    t14 = rd32(esi + 0x6cu);
    wr32(esi + 0x70u, t14);
    eax = t14;
    edx = in_edx;
    goto L_1024fea8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024fe10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024fe10(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
