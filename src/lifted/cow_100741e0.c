/* f_0x100741e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100741e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 < self + 8u)
    {
        eax = arg1;
        goto L_10074218;
    }
    if (arg1 > self + 0x40004u)
    {
        eax = arg1;
        goto L_10074218;
    }
    if (arg1 == 0u)
    {
        ecx = 0u;
    }
    else
    {
        ecx = rd32(arg1);
    }
    if (ecx < self + 8u)
    {
        eax = arg1;
        goto L_10074212;
    }
    if (arg1 == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(arg1);
    }
    if (eax <= self + 0x40004u) goto L_10074218;
L_10074212: ;
    g->edx = self + 8u;
    return (eax & 0xffffff00u) | 1u;
L_10074218: ;
    g->edx = self + 8u;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100741e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100741e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
