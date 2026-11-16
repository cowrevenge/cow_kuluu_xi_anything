/* f_0x10095790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10095790(Guest* g)
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
    if (eax == 0x3fu) goto L_1009580f;
    if (eax == 0x40u) goto L_1009580f;
    if (eax == 0x41u) goto L_1009580f;
    if (eax == 0x42u) goto L_1009580f;
    if (eax == 0x43u) goto L_1009580f;
    if (eax == 0x44u) goto L_1009580f;
    if (eax == 0x45u) goto L_1009580f;
    if (eax == 0x46u) goto L_1009580f;
    if (eax == 0x47u) goto L_1009580f;
    if (eax == 0x48u) goto L_1009580f;
    if (eax == 0x49u) goto L_1009580f;
    if (eax == 0x4au) goto L_1009580f;
    if (eax == 0x4bu) goto L_1009580f;
    if (eax == 0x4cu) goto L_1009580f;
    if (eax == 0x4du) goto L_1009580f;
    if (eax == 0x4eu) goto L_1009580f;
    if (eax == 0x4fu) goto L_1009580f;
    if (eax == 0x50u) goto L_1009580f;
    if (eax == 0x51u) goto L_1009580f;
    if (eax == 0x52u) goto L_1009580f;
    if (eax == 0x53u) goto L_1009580f;
    return eax & 0xffffff00u;
L_1009580f: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095790(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
