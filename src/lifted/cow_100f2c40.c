/* f_0x100f2c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100f2c40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd16(self + 0x1058u) == 0u)
    {
        eax = in_eax;
        goto L_100f2c72;
    }
    if (rd32(self + 0x105cu) == 0u)
    {
        eax = rd32(self + 0x105cu);
        goto L_100f2c72;
    }
    eax = rd32(self + 0x105cu);
    if (rd32(eax + rd16(self + 0x105au) * 4u) == 0u)
    {
        eax = rd32(eax + rd16(self + 0x105au) * 4u);
        goto L_100f2c72;
    }
    eax = rd32(eax + rd16(self + 0x105au) * 4u);
    edx = rd16(self + 0x105au);
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_thiscall_cdecl(g, eax, self, 2, self, 3u);
    return (t1 & 0xffffff00u) | t1 == 0u;
L_100f2c72: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f2c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f2c40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
