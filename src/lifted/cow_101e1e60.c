/* f_0x101e1e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e1e60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->eax = arg2;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101e28b0u), arg1, 1, arg2);
    if (rd32(self) != 0u)
    {
        ecx = rd32(self);
        goto L_101e1e8c;
    }
    eax = t1;
    wr32(self, arg1);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1, 3u);
    g->edx = 0u;
    return eax;
L_101e1e8c: ;
    if (rd32(ecx + 0x20u) == 0u)
    {
        eax = rd32(ecx + 0x20u);
        goto L_101e1e9c;
    }
    eax = rd32(ecx + 0x20u);
L_101e1e93: ;
    if (rd32(eax + 0x20u) != 0u)
    {
        eax = rd32(eax + 0x20u);
        goto L_101e1e93;
    }
    ecx = eax;
    eax = rd32(eax + 0x20u);
L_101e1e9c: ;
    wr32(ecx + 0x20u, arg1);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1, 3u);
    g->edx = 0u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1e60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
