/* f_0x100f0fb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f0fb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100f0fe0;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((uint8_t)arg1 >= 0x10u) goto L_100f0fcf;
    return rd8(ecx + (uint8_t)arg1 + 0x1a628u);
L_100f0fcf: ;
    if ((uint8_t)arg1 >= 0x18u)
    {
        eax = arg1;
        goto L_100f0fe0;
    }
    return rd8(ecx + (uint8_t)arg1 + 0x1a660u);
L_100f0fe0: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f0fb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f0fb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
