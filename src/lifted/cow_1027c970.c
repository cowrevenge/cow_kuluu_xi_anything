/* f_0x1027c970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027c970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg2 + 0x68u) == 0u)
    {
        eax = arg2;
        goto L_1027c99b;
    }
    esi = rd32(arg2 + 0x68u);
    if ((int32_t)rd32(arg1 + 0x28u) <= 0)
    {
        eax = 0u;
        goto L_1027c99b;
    }
    edx = rd32(arg1 + 0x28u);
    eax = 0u;
    ecx = rd32(arg1 + 0x20u);
L_1027c98c: ;
    if (ecx == esi) goto L_1027c99e;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0xf8u;
        goto L_1027c98c;
    }
    eax = eax + 1u;
L_1027c99b: ;
    eax = 0xffffffffu;
L_1027c99e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027c970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027c970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
