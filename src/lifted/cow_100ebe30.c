/* f_0x100ebe30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100ebe30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_100ebe59;
    ecx = rd32(COW_IMG(0x104dfd98u));
    if ((int32_t)arg1 < 0) goto L_100ebe59;
    if ((int32_t)arg1 >= 10) goto L_100ebe59;
    if (rd8(arg1 * 0x58u + ecx + 0x1951cu) == 2u)
    {
        eax = arg1 * 0x58u + ecx + 0x1951cu;
        goto L_100ebe5b;
    }
L_100ebe59: ;
    eax = 0u;
L_100ebe5b: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ebe30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ebe30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
