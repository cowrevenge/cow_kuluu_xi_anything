/* f_0x101e4ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101e4ce0(Guest* g)
{
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_101e4cf9;
    }
    eax = 0u;
L_101e4cee: ;
    if (rd32(arg1 + eax * 4u) == arg2) goto L_101e4cfc;
    if ((int32_t)(eax + 1u) < 3)
    {
        eax = eax + 1u;
        goto L_101e4cee;
    }
    eax = eax + 1u;
L_101e4cf9: ;
    return eax & 0xffffff00u;
L_101e4cfc: ;
    wr8(arg3, (uint8_t)eax);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4ce0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
