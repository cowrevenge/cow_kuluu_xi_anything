/* f_0x10257510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10257510(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_1025751b;
    return 0u;
L_1025751b: ;
    if (arg2 < rd16(arg1)) goto L_1025752b;
    edx = rd16(arg1);
    g->edx = edx;
    return 0u;
L_1025752b: ;
    if (rd32(arg1 + arg2 * 8u + 8u) == 0u)
    {
        edx = rd32(arg1 + arg2 * 8u + 8u);
        goto L_10257536;
    }
    edx = rd32(arg1 + arg2 * 8u + 8u);
    g->edx = edx;
    return 0u;
L_10257536: ;
    if (rd16(arg1 + rd32(arg1 + arg2 * 8u + 4u)) == 1u)
    {
        eax = arg1 + rd32(arg1 + arg2 * 8u + 4u);
        goto L_10257545;
    }
    g->edx = edx;
    return 0u;
L_10257545: ;
    g->edx = edx;
    return eax + 0x1cu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
