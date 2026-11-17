/* f_0x1011bbd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1011bbd0(Guest* g)
{
    double d1;
    double d10;
    double d11;
    double d12;
    double d2;
    double d3;
    double d5;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t20;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    d1 = fr(g, (double)(int32_t)rd32(arg2) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x38u, (float)d1);
    wrf32(self, (float)d1);
    d2 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032a1acu))) + (double)(int32_t)rd32(arg2)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x54u, (float)d2);
    wrf32(self + 0x1cu, (float)d2);
    d3 = fr(g, (double)(int32_t)rd32(arg2 + 4u) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x20u, (float)d3);
    wrf32(self + 4u, (float)d3);
    t4 = (uint32_t)(int16_t)rd16(sp0 + 4u);
    d5 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0x14u) * (double)rdf32(COW_IMG(0x1032a1acu))) + (double)(int32_t)rd32(arg2 + 4u)) - (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(self + 0x58u, (float)d5);
    wrf32(self + 0x3cu, (float)d5);
    if ((int32_t)(t4 & 0x8000003fu) >= 0)
    {
        eax = t4;
        ecx = t4 & 0x8000003fu;
    }
    else
    {
        eax = t4;
        ecx = t4 & 0x8000003fu;
        ecx = (ecx - 1u | 0xffffffc0u) + 1u;
    }
    wr32(sp0 + 4u, ecx);
    t6 = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)eax >> 0x1fu) & 0x3fu)) >> 6u);
    t7 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t6);
    t8 = rd32(sp0 + 4u);
    wrf32(sp0 + 4u, (float)(double)(int32_t)t8);
    d9 = fr(g, (double)rdf32(COW_IMG(0x1032a9e8u)) * (double)(int32_t)t7);
    wrf32(self + 0x4cu, (float)d9);
    wrf32(self + 0x14u, (float)d9);
    d10 = fr(g, fr(g, (double)(int32_t)t7 + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a9e8u)));
    wrf32(self + 0x68u, (float)d10);
    wrf32(self + 0x30u, (float)d10);
    d11 = fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(self + 0x34u, (float)d11);
    wrf32(self + 0x18u, (float)d11);
    d12 = fr(g, fr(g, (double)rdf32(sp0 + 4u) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x1032a778u)));
    wrf32(self + 0x6cu, (float)d12);
    wrf32(self + 0x50u, (float)d12);
    ebx = self + 0x10u;
    edi = 0u;
L_1011bca8: ;
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, rd32(ebx));
    t13 = rd32(ebx);
    wr32(edi * 4u + sp0 - 0x10u, t13);
    g->eax = t13;
    g->ecx = ecx;
    g->edx = arg3;
    g->esp = sp0 - 0x20u;
    t14 = cow_cdecl(g, COW_IMG(0x101200b0u), 2, t13, arg3);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(ebx, t14);
    if ((int32_t)(edi + 1u) < 4)
    {
        ecx = t15;
        ebx = ebx + 0x1cu;
        edi = edi + 1u;
        goto L_1011bca8;
    }
    edx = t16;
    ebx = ebx + 0x1cu;
    wr32(sp0 - 0x24u, 0x144u);
    t17 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x28u, t17);
    g->eax = t17;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t18 = cow_thiscall(g, rd32(rd32(t17) + 0x130u), rd32(t17), 2, t17, 0x144u);
    t19 = g->edx;
    wr32(sp0 - 0x24u, 0x1cu);
    wr32(sp0 - 0x28u, self);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, 5u);
    g->ebx = ebx;
    cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, self, 0x1cu);
    eax = 0u;
    ecx = self + 0x10u;
    ebx = rd32(sp0 - 0x14u);
    ebp = rd32(sp0 - 0x18u);
    esi = rd32(sp0 - 0x1cu);
    edi = rd32(sp0 - 0x20u);
L_1011bcf7: ;
    t20 = rd32(eax * 4u + sp0 - 0x10u);
    wr32(ecx, t20);
    if ((int32_t)(eax + 1u) < 4)
    {
        eax = eax + 1u;
        ecx = ecx + 0x1cu;
        goto L_1011bcf7;
    }
    eax = eax + 1u;
    edx = t20;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011bbd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011bbd0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
