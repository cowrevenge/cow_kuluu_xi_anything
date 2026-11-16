/* f_0x102eefa4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102eefa4(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->eax = rd32(arg1 + 4u);
    t1 = rd32(arg1 + 4u);
    g->esp = sp0 - 4u;
    t2 = cow_thiscall_cdecl(g, rd32(t1), self, 3, arg1, 0u, 0x5cu);
    wr32(arg1 + 0x190u, t2);
    wr32(t2, COW_IMG(0x102eef7au));
    wr32(rd32(arg1 + 0x190u) + 4u, COW_IMG(0x102eec20u));
    wr32(rd32(arg1 + 0x190u) + 8u, COW_IMG(0x102eee0du));
    wr32(rd32(arg1 + 0x190u) + 0xcu, COW_IMG(0x102eea16u));
    eax = 0x10u;
L_102eefed: ;
    t3 = rd32(arg1 + 0x190u);
    wr32(eax + t3, COW_IMG(0x102eea16u));
    if ((int32_t)(eax + 4u) < 80)
    {
        eax = eax + 4u;
        goto L_102eefed;
    }
    edx = t3;
    wr32(rd32(arg1 + 0x190u) + 0x10u, COW_IMG(0x102edf75u));
    t4 = rd32(arg1 + 0x190u);
    wr32(t4 + 0x48u, COW_IMG(0x102ee1b1u));
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102eef7au), 1, arg1);
    t5 = g->edx;
    g->edx = t5;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eefa4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102eefa4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
