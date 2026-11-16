/* f_0x102842a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102842a0(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    double loc_84_f;
    double loc_88_f;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 172u);

    if (rd32(COW_IMG(0x109a2730u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109a2730u));
        edx = in_edx;
    }
    else
    {
        t1 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
        wr32(sp0 - 0x8cu, t1);
        t2 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
        wr32(sp0 - 0x90u, t2);
        wr32(sp0 - 0x94u, sp0 - 0x80u);
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x88u;
        cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, t2, t1);
        t3 = g->edx;
        wr32(sp0 - 0x98u, sp0 - 0x80u);
        wr32(sp0 - 0x9cu, sp0 - 0x40u);
        g->ecx = sp0 - 0x40u;
        g->esp = sp0 - 0x94u;
        cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x40u, sp0 - 0x80u);
        t4 = g->ecx;
        wr32(sp0 - 0xa0u, arg1);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        wr32(sp0 - 0xa8u, COW_IMG(0x109a2724u));
        g->eax = sp0 - 0x40u;
        g->edx = arg1;
        g->esp = sp0 - 0x9cu;
        t5 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, COW_IMG(0x109a2724u), sp0 - 0x40u, arg1);
        t6 = g->edx;
        d7 = (double)rdf32(COW_IMG(0x109a272cu));
        wrf32(COW_IMG(0x109a272cu), (float)-d7);
        eax = t5;
        edx = t6;
    }
    d8 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x109a272cu)) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c0u));
    wrf32(sp0 - 0x84u, (float)d8);
    d9 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c8u));
    wrf32(sp0 - 0x88u, (float)d9);
    d10 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c8u)) + d8);
    if ((cow_fsw(g, (double)rdf32(COW_IMG(0x109a2724u)), d10, 1u) & 0x4100u) == 0u)
    {
        x0 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c8u)) + d8);
        goto L_10284413;
    }
    eax = cow_fsw(g, (double)rdf32(COW_IMG(0x109a2724u)), d10, 1u) & 0x4100u;
    ecx = rd32(COW_IMG(0x1099d200u));
    loc_84_f = d8;
    loc_88_f = d9;
    x0 = fr(g, fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(rd32(COW_IMG(0x1099d200u)) + 0x2c8u)) + d8);
    if ((cow_fsw(g, -x0, (double)rdf32(COW_IMG(0x109a2724u)), 0u) & 0x4100u) == 0u) goto L_10284415;
    eax = cow_fsw(g, -x0, (double)rdf32(COW_IMG(0x109a2724u)), 0u) & 0x4100u;
    d11 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(ecx + 0x2b8u));
    if (d11 < (double)rdf32(COW_IMG(0x109a272cu))) goto L_10284415;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x109a272cu)), 0u);
    d12 = fr(g, (double)rdf32(ecx + 0x2bcu) - (double)rdf32(sp0 + 8u));
    if ((cow_fsw(g, d12, (double)rdf32(COW_IMG(0x109a272cu)), 0u) & 0x4100u) == 0u) goto L_10284415;
    eax = cow_fsw(g, d12, (double)rdf32(COW_IMG(0x109a272cu)), 0u) & 0x4100u;
    d13 = (double)(float)fr(g, loc_84_f - loc_88_f);
    wrf32(sp0 - 0x88u, (float)d13);
    d14 = fr(g, (double)rdf32(ecx + 0x2b8u) - (double)rdf32(sp0 + 8u));
    if ((cow_fsw(g, d14, (double)rdf32(COW_IMG(0x109a272cu)), 0u) & 0x4100u) != 0u) goto L_10284407;
    eax = cow_fsw(g, d14, (double)rdf32(COW_IMG(0x109a272cu)), 0u) & 0x4100u;
    loc_88_f = d13;
    d15 = fr(g, (double)rdf32(sp0 + 8u) + (double)rdf32(ecx + 0x2bcu));
    if (!(d15 < (double)rdf32(COW_IMG(0x109a272cu)))) goto L_10284407;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, (double)rdf32(COW_IMG(0x109a272cu)), 0u);
    if (!((double)rdf32(COW_IMG(0x109a2724u)) < loc_88_f)) goto L_10284407;
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(COW_IMG(0x109a2724u)), loc_88_f, 0u);
    if (!(-loc_88_f < (double)rdf32(COW_IMG(0x109a2724u)))) goto L_10284407;
    g->edx = edx;
    return 1u;
L_10284407: ;
    g->edx = edx;
    return 3u;
L_10284413: ;
L_10284415: ;
    g->edx = edx;
    return 2u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102842a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102842a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
