/* f_0x10211490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10211490(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)(arg2 + arg3) >= (int32_t)rd32(self + 0xcu))
    {
        eax = rd32(self + 0xcu);
        eax = eax - arg2;
    }
    else
    {
        eax = arg3;
    }
    if ((int32_t)eax > 0)
    {
        edx = 0u;
        esi = arg2;
L_102114b7: ;
        wr8(arg1 + edx, rd8(esi + rd32(self + 4u)));
        if ((int32_t)(edx + 1u) < (int32_t)eax)
        {
            edx = edx + 1u;
            esi = esi + 1u;
            goto L_102114b7;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10211490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10211490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
