/* f_0x10265660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10265660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
L_10265663: ;
    if (rd32(self + 0x28u) == 0u)
    {
        ecx = rd32(self + 0x28u);
        goto L_10265680;
    }
    ecx = rd32(self + 0x28u);
    t1 = rd32(ecx + 0x1cu);
    t2 = rd32(self + 0x2cu);
    wr32(self + 0x28u, t1);
    wr32(self + 0x2cu, t2 - 1u);
    g->edx = rd32(ecx);
    t3 = rd32(ecx);
    g->esp = sp0 - 4u;
    cow_thiscall(g, rd32(t3 + 0x54u), ecx, 1, 1u);
    t4 = g->edx;
    edx = t4;
    goto L_10265663;
L_10265680: ;
    t5 = rd32(self + 0x60u);
    wr32(self + 0x3cu, 0u);
    if (t5 != 0u)
    {
        eax = t5;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(COW_IMG(0x1032922cu)), ecx, 3, eax, 0u, 0x8000u);
        wr32(self + 0x60u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10265660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
