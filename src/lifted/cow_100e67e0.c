/* f_0x100e67e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e67e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100e1b50u), 0);
    t2 = g->ecx;
    if ((uint16_t)t1 != 0u)
    {
        eax = t1;
        goto L_100e6800;
    }
    ecx = t2;
    if (rd8(rd32(COW_IMG(0x104df770u)) + 0x134u) != 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e6800;
    }
    eax = rd32(COW_IMG(0x104df770u));
    return eax & 0xffffff00u;
L_100e6800: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e67e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e67e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
