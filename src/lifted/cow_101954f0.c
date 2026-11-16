/* f_0x101954f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101954f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 3336u);

    wr32(sp0 - 0xcf0u, 1u);
    wr32(sp0 - 0xcf4u, in_edi);
    eax = rd32(self + 4u) + 8u;
    ecx = 0xcfu;
    edx = 1u;
L_1019550f: ;
    if (rd32(eax + 4u) == 6u)
    {
        wr32(edx * 4u + sp0 - 0xcf0u, rd32(eax));
        edx = edx + 1u;
    }
    if (ecx != 1u)
    {
        eax = eax + 0x2cu;
        ecx = ecx - 1u;
        goto L_1019550f;
    }
    if ((int32_t)edx <= 0) goto L_10195556;
    wr32(sp0 - 0xcf4u, 0u);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, edx * 4u);
    wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd04u, COW_IMG(0x10379a00u));
    g->eax = edx * 4u;
    g->esp = sp0 - 0xcf0u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a00u), sp0 - 0xcf0u, edx * 4u, 0u, 0u);
    if ((int32_t)t1 >= 0) goto L_10195556;
    eax = t1;
    return 0xffffffffu;
L_10195556: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101954f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101954f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
