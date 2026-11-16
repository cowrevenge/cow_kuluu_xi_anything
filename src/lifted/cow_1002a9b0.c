/* f_0x1002a9b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1002a9b0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x100351f0u), self + 8u, 1, arg1);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_1002a9c6;
    }
    eax = t1;
    return eax;
L_1002a9c6: ;
    if (arg1 < 0x80u) goto L_1002a9d4;
    return 0u;
L_1002a9d4: ;
    return (uint32_t)(int16_t)rd16(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a9b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002a9b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
