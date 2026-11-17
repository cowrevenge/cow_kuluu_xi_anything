/* f_0x100e0740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e0740(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;

    eax = 0u;
    ecx = rd32(COW_IMG(0x104dfd98u)) + 0x1a6a8u;
L_100e074e: ;
    if (rd16(ecx) == 0xffffu) goto L_100e0762;
    if ((int32_t)(eax + 1u) < 300)
    {
        eax = eax + 1u;
        ecx = ecx + 0x1cu;
        goto L_100e074e;
    }
    eax = eax + 1u;
    eax = 0xffffffffu;
L_100e0762: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
