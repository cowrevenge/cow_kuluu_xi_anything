/* f_0x1021b3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_1021b3b0(Guest* g)
{
    uint32_t eax;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)arg3 >= (int16_t)rd16(arg5 + 2u))
    {
        eax = (uint32_t)(int16_t)rd16(arg5 + 2u);
        if ((int32_t)(arg3 + 0xeu) < (int32_t)(eax + rd16(arg5 + 0xau)))
        {
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x10129f00u), 5, arg2, arg3, arg4, 0u, 0x80808080u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021b3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1021b3b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
