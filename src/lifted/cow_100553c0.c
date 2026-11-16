/* f_0x100553c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100553c0(Guest* g)
{
    double d4;
    double d5;
    double d6;
    double d7;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    t1 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0x10u, t1);
    g->eax = t1;
    t2 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x1006ca20u), 2, t1, in_edi);
    if ((uint8_t)t3 == 0u) goto L_10055493;
    edi = t2;
    if (rd32(edi + 0x14u) == 0u)
    {
        eax = rd32(edi + 0x14u);
        goto L_100553ed;
    }
    eax = rd32(edi + 0x14u);
    wr32(edi + 0x14u, eax + 1u);
    return;
L_100553ed: ;
    d4 = (double)rdf32(self + 0xcu);
    if (!((double)rdf32(edi) < d4))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(edi), d4, 0u);
        d5 = (double)rdf32(self + 0x10u);
        if ((cow_fsw(g, (double)rdf32(edi), d5, 0u) & 0x4100u) != 0u)
        {
            x0 = (double)rdf32(edi);
        }
        else
        {
            x0 = (double)rdf32(self + 0x10u);
        }
    }
    else
    {
        x0 = (double)rdf32(self + 0xcu);
    }
    wr32(sp0 - 4u, 0x4b000000u);
    d6 = fr(g, x0 - (double)rdf32(self + 0xcu));
    wrf32(sp0 + 4u, (float)d6);
    d7 = (double)(float)fr(g, fr(g, (double)rdf32(sp0 + 4u) * (double)rdf32(self + 0x14u)) + cow_bits2f(0x4b000000u));
    wrf32(sp0 - 4u, (float)d7);
    if ((int32_t)(cow_f2bits(d7) - 0x4affffffu) <= (int32_t)rd32(self + 8u))
    {
        eax = cow_f2bits(d7) - 0x4affffffu;
        loc_4_f = d7;
    }
    else
    {
        ecx = rd32(self + 8u);
        loc_4_f = d7;
        eax = ecx;
    }
    t8 = eax * 0x20u + rd32(self + 4u);
    if (rd32(t8 + 4u) == 0u)
    {
        edx = t8;
        goto L_1005546b;
    }
    eax = t8;
    ecx = rd32(t8 + 4u);
    edx = t8;
L_10055455: ;
    d9 = (double)rdf32(sp0 + 4u);
    if ((double)rdf32(ecx) < d9) goto L_1005546b;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ecx), d9, 0u);
    if (rd32(ecx + 4u) != 0u)
    {
        edx = ecx;
        ecx = rd32(ecx + 4u);
        goto L_10055455;
    }
    edx = ecx;
L_1005546b: ;
    t10 = rd32(edx + 4u);
    wr32(edi + 0x10u, edx);
    wr32(edi + 4u, t10);
    if (rd32(edx + 4u) != 0u)
    {
        eax = rd32(edx + 4u);
        wr32(eax + 0x10u, edi);
    }
    wr32(edx + 4u, edi);
    t11 = rd32(edi + 0x14u) + 1u;
    wr32(edi + 0x14u, t11);
    t12 = rd32(COW_IMG(0x1047bc90u)) + 1u;
    wr32(COW_IMG(0x1047bc90u), t12);
L_10055493: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100553c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100553c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
