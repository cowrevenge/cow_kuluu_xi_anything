/* f_0x101f75c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_101f75c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t zf;
    const uint32_t sp0 = g->esp;

    t1 = (uint32_t)(int8_t)rd8(COW_IMG(0x103821f5u) + rd32(sp0 + 4u) * 0xeu);
    t2 = rd8(COW_IMG(0x103821f5u) + rd32(sp0 + 4u) * 0xeu);
    wr32(sp0 + 4u, t1);
    if ((int8_t)t2 >= 0)
    {
        zf = (uint32_t)(int8_t)t2 == 0u;
    }
    else
    {
        eax = t1;
        wr32(sp0 + 4u, -eax);
        zf = -eax == 0u;
    }
    if (!zf) goto L_101f75ee;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
L_101f75ee: ;
    fpush(g, fr(g, (double)rdf32(COW_IMG(0x1033a7dcu)) / (double)(int32_t)rd32(sp0 + 4u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f75c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f75c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
