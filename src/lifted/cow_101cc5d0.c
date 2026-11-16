/* f_0x101cc5d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_101cc5d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101cc5e8;
    eax = rd32(COW_IMG(0x104dfd98u));
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100f9880u), 1, eax);
    return (uint8_t)t1;
L_101cc5e8: ;
    return rd8(COW_IMG(0x10485641u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc5d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc5d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
