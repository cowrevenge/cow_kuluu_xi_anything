/* f_0x10123970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_10123970(Guest* g)
{
    double d11;
    double d12;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;

    if ((rd16(COW_IMG(0x1036cf60u) + rd32(sp0 + 8u) * 2u) & rd32(COW_IMG(0x1036e3a0u))) != 0u)
    {
        eax = rd32(sp0 + 8u);
        edx = rd32(COW_IMG(0x1036e3a0u));
        goto L_10123995;
    }
    eax = rd32(sp0 + 8u);
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_10123995: ;
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101239bd;
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd8(ecx + 0x4194u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 0x4194u);
        goto L_101239bd;
    }
    edx = (edx & 0xffffff00u) | rd8(ecx + 0x4194u);
    if (eax == 4u) goto L_101239b3;
    if (eax != 5u) goto L_101239bd;
L_101239b3: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_101239bd: ;
    t1 = rd32(COW_IMG(0x1036d0d8u) + eax * 8u);
    t2 = rd32(COW_IMG(0x1036d0d8u) + eax * 8u);
    wr32(sp0 + 8u, t1);
    if (t2 != 0u)
    {
        ecx = t1;
        edi = COW_IMG(0x1036d0d8u) + eax * 8u;
        goto L_101239e8;
    }
    ecx = t1;
    edi = COW_IMG(0x1036d0d8u) + eax * 8u;
    if (rd32(COW_IMG(0x1036d0dcu) + eax * 8u) != 0u)
    {
        edx = rd32(COW_IMG(0x1036d0dcu) + eax * 8u);
        goto L_101239e8;
    }
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return eax;
L_101239e8: ;
    t3 = rd32(COW_IMG(0x1036d0dcu) + eax * 8u);
    if (rd32(COW_IMG(0x1036d0dcu) + eax * 8u) != 0u)
    {
        esi = COW_IMG(0x1036d0dcu) + eax * 8u;
        eax = t3;
        loc_4 = t3;
        goto L_10123a0b;
    }
    esi = COW_IMG(0x1036d0dcu) + eax * 8u;
    eax = t3;
    loc_4 = t3;
    if (ecx == 0u) goto L_10123a0f;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, rd32(sp0 + 8u), eax, ecx, edx);
L_10123a0b: ;
    if (ecx != 0u) goto L_10123a1c;
L_10123a0f: ;
    if (eax == 0u) goto L_10123a1c;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, loc_4, eax, ecx, edx);
L_10123a1c: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(sp0 + 8u), ecx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = cow_take_float(g);
    wrf32(sp0 + 8u, (float)d7);
    g->edx = t6;
    t8 = cow_thiscall(g, rd32(esi), t5, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    d12 = (double)rdf32(sp0 + 8u);
    if (!(d12 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = t9;
        edx = t10;
        x1 = d12;
        x0 = d11;
    }
    else
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)cow_fsw(g, d12, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        ecx = t9;
        edx = t10;
        x1 = d12;
        x0 = d11;
        x1 = fr(g, x1 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    }
    if (!(x0 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 2u);
        x0 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3f0u)));
    }
    if ((cow_fsw(g, x1, x0, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x1, x0, 0u) & 0x4100u;
        goto L_10123a67;
    }
    eax = cow_fsw(g, x1, x0, 0u) & 0x4100u;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t13 = cow_thiscall(g, rd32(edi), ecx, 0);
    return t13;
L_10123a67: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, rd32(esi), ecx, 0);
    return t14;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123970(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
