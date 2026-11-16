/* f_0x100222b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_100222b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    t2 = cow_cdecl(g, COW_IMG(0x10022290u), 1, t1);
    t3 = g->ecx;
    if ((int32_t)t2 >= 0)
    {
        eax = t2;
        ecx = t3;
        goto L_100222ca;
    }
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_100222ca: ;
    t4 = rd8(eax + ecx + 0x14u);
    wr8(sp0 + 4u, (uint8_t)t4);
    if ((uint8_t)t4 != 0xffu) goto L_100222df;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_100222df: ;
    t5 = (uint8_t)rd32(sp0 + 4u);
    wr32(sp0 + 4u, t5);
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x1032a428u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100222b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100222b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
