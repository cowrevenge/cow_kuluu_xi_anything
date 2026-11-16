/* f_0x1031dfe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_1031dfe0(Guest* g)
{
    double d2;
    double d3;
    double d4;
    double d5;
    uint32_t eax;
    uint32_t t1;
    uint32_t t6;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);

    x1 = rdf80(sp0 + 4u);
    x0 = rdf80(sp0 + 0x10u);
L_1031dfe8: ;
    if (rd32(sp0 + 8u) * 2u >= rd32(sp0 + 8u)) goto L_1031e07a;
    eax = rd32(sp0 + 8u) * 2u;
    if (((eax ^ 0xe000000u) & 0xe000000u) == 0u)
    {
        eax = eax ^ 0xe000000u;
        goto L_1031e003;
    }
    eax = eax ^ 0xe000000u;
    fpush(g, fr(g, x0 / x1));
    return eax;
L_1031e003: ;
    if (rd8(COW_IMG(0x103d2ab0u) + (eax >> 0x1cu)) != 0u) goto L_1031e012;
    eax = eax >> 0x1cu;
    fpush(g, fr(g, x0 / x1));
    return eax;
L_1031e012: ;
    if ((rd32(sp0 + 0xcu) & 0x7fffu) == 0u)
    {
        eax = rd32(sp0 + 0xcu) & 0x7fffu;
        goto L_1031e084;
    }
    eax = rd32(sp0 + 0xcu) & 0x7fffu;
    if (eax == 0x7fffu) goto L_1031e084;
    wr16(sp0 + 0x1cu, (uint16_t)g->fcw);
    t1 = (rd32(sp0 + 0x1cu) | 0x33fu) & 0xf3ffu;
    wr32(sp0 + 0x20u, t1);
    g->fcw = rd16(sp0 + 0x20u);
    if ((arg6 & 0x7fffu) == 1u) goto L_1031e063;
    d2 = fr(g, x1 * (double)rdf32(COW_IMG(0x103d2ac0u)));
    d3 = fr(g, x0 * (double)rdf32(COW_IMG(0x103d2ac0u)));
    g->fcw = rd16(sp0 + 0x1cu);
    fpush(g, fr(g, d3 / d2));
    return arg6 & 0x7fffu;
L_1031e063: ;
    d4 = fr(g, x1 * (double)rdf32(COW_IMG(0x103d2ac4u)));
    d5 = fr(g, x0 * (double)rdf32(COW_IMG(0x103d2ac4u)));
    g->fcw = rd16(sp0 + 0x1cu);
    fpush(g, fr(g, d5 / d4));
    return arg6 & 0x7fffu;
L_1031e07a: ;
    if ((rd32(sp0 + 4u) | rd32(sp0 + 8u)) != 0u) goto L_1031e087;
    eax = rd32(sp0 + 4u) | rd32(sp0 + 8u);
L_1031e084: ;
    fpush(g, fr(g, x0 / x1));
    return eax;
L_1031e087: ;
    if ((rd32(sp0 + 0xcu) & 0x7fffu) != 0u)
    {
        eax = rd32(sp0 + 0xcu) & 0x7fffu;
        goto L_1031e084;
    }
    wr16(sp0 + 0x1cu, (uint16_t)g->fcw);
    t6 = (rd32(sp0 + 0x1cu) | 0x33fu) & 0xf3ffu;
    wr32(sp0 + 0x20u, t6);
    g->fcw = rd16(sp0 + 0x20u);
    if ((arg6 & 0x7fffu) == 0u) goto L_1031e0c8;
    if ((arg6 & 0x7fffu) == 0x7fffu)
    {
        eax = arg6 & 0x7fffu;
        goto L_1031e0f0;
    }
    if (arg5 * 2u >= arg5)
    {
        eax = arg5 * 2u;
        goto L_1031e0f0;
    }
L_1031e0d0: ;
    wrf80(sp0 + 4u, fr(g, x1 * (double)rdf32(COW_IMG(0x103d2ac8u))));
    g->fcw = rd16(sp0 + 0x1cu);
    x0 = rdf80(sp0 + 0x10u);
    goto L_1031dfe8;
L_1031e0c8: ;
    if (arg5 * 2u < arg5)
    {
        eax = arg5 * 2u;
        goto L_1031e0f0;
    }
    goto L_1031e0d0;
L_1031e0f0: ;
    g->fcw = rd16(sp0 + 0x1cu);
    fpush(g, fr(g, x0 / x1));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031dfe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031dfe0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
