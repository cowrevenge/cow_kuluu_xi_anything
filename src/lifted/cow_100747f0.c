/* f_0x100747f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100747f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x24u) == 0u)
    {
        eax = rd32(self + 0x24u);
        goto L_1007483f;
    }
    eax = rd32(self + 0x24u);
    edx = 0u;
L_100747fe: ;
    if (eax == arg1) goto L_1007480f;
    if (rd32(eax + 0x28u) != 0u)
    {
        edx = eax;
        eax = rd32(eax + 0x28u);
        goto L_100747fe;
    }
    eax = rd32(eax + 0x28u);
    return eax;
L_1007480f: ;
    if (edx == 0u) goto L_1007482b;
    t1 = rd32(eax + 0x28u);
    wr32(edx + 0x28u, t1);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x10u, 0u);
    return t1;
L_1007482b: ;
    t2 = rd32(eax + 0x28u);
    wr32(self + 0x24u, t2);
    wr32(arg1 + 0x28u, 0u);
    wr32(arg1 + 0x10u, 0u);
L_1007483f: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100747f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100747f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
