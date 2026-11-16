/* f_0x10103970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10103970(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t in_eax = g->eax;

    if (rd32(COW_IMG(0x10456a28u)) == 0u) goto L_10103994;
    ecx = rd32(COW_IMG(0x10456a28u));
    if ((int8_t)rd8(ecx + 0x18u) >= 0)
    {
        eax = rd32(ecx + 8u);
        goto L_10103997;
    }
    eax = rd32(ecx + 8u);
    if (eax == 2u) goto L_1010398e;
    if (eax != 3u) goto L_10103997;
L_1010398e: ;
    return 1u;
L_10103994: ;
    eax = in_eax & 0xffff0000u;
L_10103997: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10103970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10103970(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
