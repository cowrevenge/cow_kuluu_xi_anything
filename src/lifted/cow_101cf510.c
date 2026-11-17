/* f_0x101cf510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_101cf510(Guest* g)
{
    double d13;
    double d14;
    double d16;
    double d17;
    double d18;
    double d19;
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
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x60u, arg1);
    g->edx = arg1;
    g->esp = sp0 - 0x5cu;
    t1 = cow_cdecl(g, COW_IMG(0x101cce80u), 1, arg1);
    t2 = g->edx;
    wr32(sp0 - 0x64u, t2);
    g->eax = arg2 << 4u;
    g->ecx = t2 * 4u + rd8(arg2 + t1);
    g->edx = t2;
    t3 = rd8(arg2 + t1);
    t4 = rd32(COW_IMG(0x1037e248u) + t2 * 0x10u + rd8(arg2 + t1) * 4u);
    g->esp = sp0 - 0x60u;
    t5 = cow_cdecl(g, COW_IMG(0x101cce90u), 1, t2);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 0x68u, t7);
    d8 = (double)(float)(double)rdf32(arg2 * 0x10u + t5);
    wrf32(sp0 - 0x50u, (float)d8);
    g->ecx = t6;
    g->edx = t7;
    d9 = (double)rdf32(arg2 * 0x10u + t5);
    g->esp = sp0 - 0x64u;
    t10 = cow_cdecl(g, COW_IMG(0x101cce90u), 1, t7);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x6cu, t12);
    d13 = (double)(float)(double)rdf32(arg2 * 0x10u + t10 + 4u);
    wrf32(sp0 - 0x4cu, (float)d13);
    d14 = (double)rdf32(arg2 * 0x10u + t10 + 4u);
    g->esp = sp0 - 0x68u;
    t15 = cow_cdecl(g, COW_IMG(0x101cce90u), 1, t12);
    d16 = (double)(float)(double)rdf32(arg2 * 0x10u + t15 + 8u);
    wrf32(sp0 - 0x48u, (float)d16);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wrf32(sp0 - 0x40u, (float)(double)(float)d9);
    wr32(sp0 - 0x18u, cow_f2bits(d16));
    wrf32(sp0 - 0x3cu, (float)(double)(float)d14);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0x3f800000u);
    d17 = (double)(float)(double)rdf32(arg2 * 0x10u + t15 + 8u);
    wrf32(sp0 - 0x38u, (float)d17);
    wr32(sp0 - 0x14u, 0x3f800000u);
    wrf32(sp0 - 0x30u, (float)(double)(float)d9);
    wrf32(sp0 - 0x2cu, (float)(double)(float)d14);
    d18 = (double)(float)(double)rdf32(arg2 * 0x10u + t15 + 8u);
    wrf32(sp0 - 0x28u, (float)d18);
    wrf32(sp0 - 0x20u, (float)(double)(float)d9);
    wrf32(sp0 - 0x1cu, (float)(double)(float)d14);
    edx = t4 - (sp0 - 0x50u);
    ebx = t3;
    esi = sp0 - 0x50u;
    edi = 4u;
L_101cf5c9: ;
    eax = esi;
    ecx = 3u;
L_101cf5d0: ;
    d19 = fr(g, fr(g, (double)rdf32(sp0 + 0x10u) * (double)rdf32(eax + edx)) + (double)rdf32(eax));
    wrf32(eax, (float)d19);
    if (ecx != 1u)
    {
        eax = eax + 4u;
        ecx = ecx - 1u;
        goto L_101cf5d0;
    }
    if (edi != 1u)
    {
        esi = esi + 0x10u;
        edi = edi - 1u;
        goto L_101cf5c9;
    }
    wr32(sp0 - 0x60u, 0u);
    wr32(sp0 - 0x64u, arg3 >> 0x18u);
    wr32(sp0 - 0x68u, arg3 >> 0x10u);
    wr32(sp0 - 0x6cu, arg3 >> 8u);
    wr32(sp0 - 0x70u, arg3);
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    g->ebx = ebx;
    g->edx = sp0 - 0x50u;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x10177b40u), 6, sp0 - 0x50u, arg3, arg3 >> 8u, arg3 >> 0x10u, arg3 >> 0x18u, 0u);
    t20 = g->edx;
    g->ebx = in_ebx;
    g->edx = t20;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
