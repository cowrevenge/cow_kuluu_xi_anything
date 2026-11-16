/* f_0x1006bdf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1006bdf0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = COW_IMG(0x1047c110u);
L_1006bdfb: ;
    t1 = rd32(arg1 + eax - COW_IMG(0x1047c110u));
    wr32(eax, t1);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x1047cad0u))
    {
        eax = eax + 4u;
        goto L_1006bdfb;
    }
    eax = eax + 4u;
    edx = t1;
    wr32(COW_IMG(0x10354040u), 0x270u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006bdf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1006bdf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
