/* f_0x100d5490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d5490(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 != 1u) goto L_100d54a8;
    t1 = rd32(self + 0x86cu) + 1u;
    wr32(self + 0x86cu, t1);
    return;
L_100d54a8: ;
    if ((uint8_t)arg1 == 0u)
    {
        if ((int32_t)rd32(self + 0x86cu) > 0)
        {
            eax = rd32(self + 0x86cu);
            wr32(self + 0x86cu, eax - 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d5490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d5490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
