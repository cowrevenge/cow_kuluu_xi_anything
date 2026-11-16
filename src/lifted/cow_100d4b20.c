/* f_0x100d4b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_100d4b20(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t2 = g->edx;
    if (rd32(t1) != 0u)
    {
        edx = t2;
        esi = rd32(t1);
        goto L_100d4b3e;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_100d4b3e: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1001b1a0u), esi + 0x24u, 0);
    t4 = g->edx;
    t5 = cow_thiscall(g, COW_IMG(0x1001b1a0u), esi + 0x38u, 0);
    if (t3 == 0u)
    {
        eax = t5;
        goto L_100d4b79;
    }
    eax = t5;
    edi = t3;
    if (eax == 0u)
    {
        x0 = (double)rdf32(edi + 0x20u);
        goto L_100d4b80;
    }
    x0 = (double)rdf32(edi + 0x20u);
    t6 = rd32(eax + 0x20u);
    if ((cow_fsw(g, x0, cow_bits2f(t6), 1u) & 0x4100u) == 0u)
    {
        loc_4 = t6;
        goto L_100d4b8a;
    }
    loc_4 = t6;
    fpush(g, cow_bits2f(loc_4));
    return;
L_100d4b79: ;
    if (eax == 0u) goto L_100d4b84;
    x0 = (double)rdf32(eax + 0x20u);
L_100d4b80: ;
    fpush(g, x0);
    return;
L_100d4b84: ;
    loc_4 = self;
    x0 = (double)rdf32(COW_IMG(0x1032a3a0u));
L_100d4b8a: ;
    fpush(g, x0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d4b20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
