/* f_0x100b7860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7860(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_20;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, sp0 - 0x28u);
    wr32(sp0 - 0x38u, sp0 - 0x2cu);
    wr32(sp0 - 0x3cu, 3u);
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 3u);
    t2 = g->edx;
    wr32(sp0 - 0x3cu, t1);
    g->esp = sp0 - 0x30u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 0x2cu, sp0 - 0x28u);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        edx = t4;
        goto L_100b799b;
    }
    wr32(sp0 - 0x34u, sp0 - 0x2cu);
    wr32(sp0 - 0x38u, sp0 - 0x24u);
    wr32(sp0 - 0x3cu, 7u);
    g->edx = sp0 - 0x2cu;
    g->esp = sp0 - 0x38u;
    t5 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 7u);
    t6 = g->edx;
    wr32(sp0 - 0x3cu, t5);
    g->esp = sp0 - 0x30u;
    t7 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t6, 3, t5, sp0 - 0x24u, sp0 - 0x2cu);
    t8 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        edx = t8;
        goto L_100b799b;
    }
    edx = t8;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x28u) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x28u) * 4u);
        goto L_100b799b;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x28u) * 4u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x2cu) * 4u) == 0u)
    {
        edx = (uint16_t)rd32(sp0 - 0x2cu);
        goto L_100b799b;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x2cu) * 4u);
    if (!(rd32(eax + 0x120u) >> 7u & 1u))
    {
        edx = rd32(eax + 4u);
        x1 = (double)rdf32(eax + 0xcu);
        x0 = (double)rdf32(eax + 8u);
    }
    else
    {
        edx = rd32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x140u);
        x1 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x148u);
        x0 = (double)rdf32(rd32(rd32(eax + 0xd4u) + 0x260u) + 0x144u);
    }
    wr32(sp0 - 0x20u, edx);
    if (!(rd32(ecx + 0x120u) >> 7u & 1u))
    {
        loc_20 = edx;
        t10 = rd32(ecx + 0xcu);
        wr32(sp0 - 8u, t10);
        eax = t10;
        loc_8 = t10;
        x3 = (double)rdf32(ecx + 8u);
        x2 = (double)rdf32(ecx + 4u);
    }
    else
    {
        loc_20 = edx;
        t9 = rd32(rd32(rd32(ecx + 0xd4u) + 0x260u) + 0x148u);
        wr32(sp0 - 8u, t9);
        eax = rd32(rd32(ecx + 0xd4u) + 0x260u);
        edx = t9;
        loc_8 = t9;
        x3 = (double)rdf32(rd32(rd32(ecx + 0xd4u) + 0x260u) + 0x144u);
        x2 = (double)rdf32(rd32(rd32(ecx + 0xd4u) + 0x260u) + 0x140u);
        ecx = rd32(ecx + 0xd4u);
    }
    d11 = (double)(float)fr(g, x2 - cow_bits2f(loc_20));
    wrf32(sp0 - 0x28u, (float)d11);
    d12 = (double)(float)fr(g, x3 - x0);
    wrf32(sp0 - 0x2cu, (float)d12);
    d13 = fr(g, cow_bits2f(loc_8) - x1);
    g->edx = edx;
    d14 = fr(g, fr(g, sqrt(fr(g, fr(g, fr(g, d13 * d13) + fr(g, d12 * d12)) + fr(g, d11 * d11)))) * rdf64(COW_IMG(0x1032a110u)));
    fpush(g, d14);
    g->esp = sp0 - 0x30u;
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    wr32(sp0 - 0x34u, t15);
    eax = t15;
    edx = t16;
    loc_34 = t15;
L_100b799d: ;
    wr32(sp0 - 0x38u, 1u);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 1u, loc_34);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 0xbu));
    g->esi = rd32(sp0 - 0x30u);
    return;
L_100b799b: ;
    wr32(sp0 - 0x34u, 0u);
    loc_34 = 0u;
    loc_30 = in_esi;
    goto L_100b799d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7860(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
