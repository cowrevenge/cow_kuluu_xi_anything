/* f_0x10221dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10221dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x50u) != 0u)
    {
        esi = rd32(self + 0x50u);
        goto L_10221de2;
    }
    if ((int32_t)arg1 >= (int32_t)rd32(self + 0x48u))
    {
        ecx = rd32(self + 0x48u);
        goto L_10221ddb;
    }
    return 0u;
L_10221ddb: ;
    return arg1 - ecx;
L_10221de2: ;
    if ((int32_t)rd32(self + 0x3cu) <= 0)
    {
        eax = 0u;
        edx = rd32(self + 0x3cu);
    }
    else
    {
        edx = rd32(self + 0x3cu);
        eax = 0u;
        ecx = esi;
L_10221df1: ;
        if ((int32_t)(eax + rd32(ecx)) >= (int32_t)arg1) goto L_10221e01;
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            goto L_10221df1;
        }
        eax = eax + 1u;
    }
L_10221e01: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221dc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
