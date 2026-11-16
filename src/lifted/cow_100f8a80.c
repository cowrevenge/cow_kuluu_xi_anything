/* f_0x100f8a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f8a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        goto L_100f8aa9;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(arg2 * 0x38u + ecx + 0x464cu) != 0u)
    {
        eax = arg2 * 0x38u + ecx + 0x464cu;
        goto L_100f8aac;
    }
    eax = arg2 * 0x38u + ecx + 0x464cu;
L_100f8aa9: ;
    return eax & 0xffffff00u;
L_100f8aac: ;
    wr32(arg1, eax);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f8a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f8a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
