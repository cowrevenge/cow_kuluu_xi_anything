/* f_0x1027e430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027e430(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = 0u;
    ecx = arg1 + 0x14u;
L_1027e439: ;
    if (rd32(ecx) == 0u) goto L_1027e457;
    if ((int32_t)(eax + 1u) < 2)
    {
        eax = eax + 1u;
        ecx = ecx + 4u;
        goto L_1027e439;
    }
    eax = eax + 1u;
    d1 = (double)rdf32(arg1 + 0xcu);
    if (!(d1 < (double)rdf32(COW_IMG(0x103295d8u)))) goto L_1027e45a;
L_1027e457: ;
    return 0u;
L_1027e45a: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027e430(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
