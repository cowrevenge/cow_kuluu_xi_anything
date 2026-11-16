/* f_0x1003ac40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1003ac40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    wr32(self + 0xcu, 0u);
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1003aab0u), self, 0);
    t2 = g->ecx;
    if (rd32(t1) == 0u)
    {
        eax = t1;
        goto L_1003ac6a;
    }
    eax = t1;
    ecx = t2;
    edx = rd32(t1);
L_1003ac53: ;
    if (rd32(edx + 0x3cu) == 1u) goto L_1003ac6e;
    esi = rd32(edx + 0x3cu);
    if (esi == 2u) goto L_1003ac77;
    if (rd32(edx + 0x38u) != 0u)
    {
        eax = edx + 0x38u;
        edx = rd32(edx + 0x38u);
        goto L_1003ac53;
    }
    eax = edx + 0x38u;
L_1003ac6a: ;
    return eax & 0xffffff00u;
L_1003ac6e: ;
    t3 = rd32(eax);
    wr32(ecx + 0xcu, t3);
    return (t3 & 0xffffff00u) | 1u;
L_1003ac77: ;
    wr32(ecx + 0xcu, rd32(eax));
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ac40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003ac40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
