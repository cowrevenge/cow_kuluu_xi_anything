/* f_0x102512d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102512d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (!(rd32(arg1) & 1u))
    {
        eax = rd32(arg1);
        goto L_10251330;
    }
    eax = rd32(arg1);
    wr32(arg1 + 4u, 0xffffffffu);
    wr32(arg1 + 8u, 0xffffffffu);
    wr32(arg1 + 0xcu, 0xffffffffu);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    if ((eax & 8u) == 0u) goto L_10251309;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, arg1 + 0x18u);
    t1 = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xe1u);
    wr32(arg1, t1);
    return 0u;
L_10251309: ;
    if ((eax & 4u) != 0u)
    {
        t2 = rd32(arg1 + 0x18u);
        g->esp = sp0 - 4u;
        t3 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t2, COW_IMG(0x10389748u), 0x16fu);
        wr32(arg1 + 0x18u, t3);
    }
    t4 = (rd32(arg1) & 0xffffff00u) | (rd32(arg1) & 0xe1u);
    wr32(arg1, t4);
    return 0u;
L_10251330: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102512d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102512d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
