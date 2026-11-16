/* f_0x10022120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_10022120(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((int32_t)rd32(sp0 + 4u) > 3)
    {
        eax = rd32(sp0 + 4u);
        goto L_10022130;
    }
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax >= 0) goto L_1002213f;
L_10022130: ;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    eax = 0u;
L_1002213f: ;
    if (rd8(eax + self + 0xau) != 0xffu)
    {
        eax = (eax & 0xffffff00u) | rd8(eax + self + 0xau);
        goto L_10022151;
    }
    fpush(g, (double)rdf32(COW_IMG(0x1032961cu)));
    return;
L_10022151: ;
    wr32(sp0 + 4u, (uint8_t)eax);
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10329a18u))));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10022120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10022120(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
