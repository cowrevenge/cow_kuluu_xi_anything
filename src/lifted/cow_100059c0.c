/* f_0x100059c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100059c0(Guest* g)
{
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0xffffffffu) goto L_100059f9;
    if (rd8(COW_IMG(0x10455c35u)) == 0u) goto L_100059f9;
    if (arg1 <= 0x8cau) goto L_100059e6;
    if (arg1 >= 0x3d86u) goto L_100059e6;
    return (arg1 & 0xffff0000u) | 0x7fu;
L_100059e6: ;
    if (arg1 <= 0x4f1au) goto L_100059f9;
    if (arg1 >= 0x83d6u) goto L_100059f9;
    return (arg1 & 0xffff0000u) | 0xff81u;
L_100059f9: ;
    return arg1 & 0xffff0000u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100059c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100059c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
