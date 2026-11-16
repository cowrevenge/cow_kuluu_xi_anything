/* f_0x102f349f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102f349f(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d18;
    double d19;
    double d20;
    double d21;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_esi);
    wr32(sp0 - 0x68u, in_edi);
    t1 = rd16(rd32(sp0 + 8u));
    t2 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x68u;
    cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0x5cu, t1, in_edx, 1, 0);
    t3 = g->edx;
    t4 = rd16(t2 + 2u);
    cow_call_regs(g, COW_IMG(0x102f21afu), sp0 - 0x4cu, t4, t3, 1, 0);
    if ((uint16_t)t1 > (uint16_t)t4)
    {
        ebx = t2;
        d9 = fr(g, (double)rdf32(sp0 - 0x4cu) - (double)rdf32(sp0 - 0x5cu));
        d10 = (double)(float)fr(g, fr(g, d9 * (double)rdf32(COW_IMG(0x1032a84cu))) + (double)rdf32(sp0 - 0x5cu));
        wrf32(sp0 - 0x3cu, (float)d10);
        d11 = fr(g, (double)rdf32(sp0 - 0x48u) - (double)rdf32(sp0 - 0x58u));
        d12 = (double)rdf32(COW_IMG(0x1032a84cu));
        wrf32(sp0 + 8u, (float)d11);
        d13 = (double)(float)fr(g, fr(g, d11 * d12) + (double)rdf32(sp0 - 0x58u));
        wrf32(sp0 - 0x38u, (float)d13);
        d14 = (double)(float)fr(g, (double)rdf32(sp0 - 0x44u) - (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 8u, (float)d14);
        d15 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x44u) - (double)rdf32(sp0 - 0x54u)) * d12) + (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 0x34u, (float)d15);
        d16 = (double)(float)fr(g, (double)rdf32(sp0 - 0x40u) - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0xcu, (float)d16);
        d17 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x40u) - (double)rdf32(sp0 - 0x50u)) * d12) + (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x30u, (float)d17);
        d18 = (double)(float)fr(g, fr(g, d9 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x5cu));
        wrf32(sp0 - 0x2cu, (float)d18);
        d19 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x58u));
        wrf32(sp0 - 0x28u, (float)d19);
        d20 = (double)(float)fr(g, fr(g, d14 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 0x24u, (float)d20);
        d21 = (double)(float)fr(g, fr(g, d16 * (double)rdf32(COW_IMG(0x1032b6d4u))) + (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x20u, (float)d21);
    }
    else
    {
        ebx = t2;
        d5 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x4cu) - (double)rdf32(sp0 - 0x5cu)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x5cu));
        wrf32(sp0 - 0x3cu, (float)d5);
        d6 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x48u) - (double)rdf32(sp0 - 0x58u)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x58u));
        wrf32(sp0 - 0x38u, (float)d6);
        d7 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x44u) - (double)rdf32(sp0 - 0x54u)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 0x34u, (float)d7);
        d8 = (double)(float)fr(g, fr(g, fr(g, (double)rdf32(sp0 - 0x40u) - (double)rdf32(sp0 - 0x50u)) * (double)rdf32(COW_IMG(0x10329a08u))) + (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x30u, (float)d8);
        wrf32(sp0 - 0x1cu, (float)(double)(float)0.0);
        wrf32(sp0 - 0x18u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x14u, (float)(double)(float)0.0);
        wrf32(sp0 - 0x10u, (float)(double)(float)0.0);
        esi = sp0 - 0x1cu;
        edi = sp0 - 0x2cu;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    }
    wr32(sp0 - 0x6cu, 0x10u);
    eax = arg1;
    ecx = 0x10u;
    ebx = rd32(ebx + 4u);
L_102f35bb: ;
    esi = sp0 + (ebx & 3u) * 0x10u - 0x5cu;
    edi = eax;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        ebx = ebx >> 2u;
        goto L_102f35bb;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f349f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f349f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
