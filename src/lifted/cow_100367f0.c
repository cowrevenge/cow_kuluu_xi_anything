/* f_0x100367f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100367f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_10036812;
    }
    if ((int32_t)rd32(COW_IMG(0x104638fcu)) <= 0)
    {
        eax = 0u;
        goto L_10036812;
    }
    eax = 0u;
    ecx = rd32(COW_IMG(0x104638fcu));
L_10036804: ;
    if (rd32(COW_IMG(0x10462590u) + eax * 4u) == arg1) goto L_10036815;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_10036804;
    }
    eax = eax + 1u;
L_10036812: ;
    return eax & 0xffffff00u;
L_10036815: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100367f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100367f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
