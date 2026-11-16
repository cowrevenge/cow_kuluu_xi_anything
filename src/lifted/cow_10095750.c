/* f_0x10095750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10095750(Guest* g)
{
    uint32_t eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0xffu)
    {
        eax = arg1;
    }
    else
    {
        eax = rd32(self + 0x170u);
    }
    if (eax == 0x38u) goto L_10095789;
    if (eax == 0x39u) goto L_10095789;
    if (eax == 0x3au) goto L_10095789;
    if (eax == 0x3bu) goto L_10095789;
    if (eax == 0x3cu) goto L_10095789;
    if (eax == 0x3du) goto L_10095789;
    if (eax == 0x3eu) goto L_10095789;
    return eax & 0xffffff00u;
L_10095789: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095750(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
