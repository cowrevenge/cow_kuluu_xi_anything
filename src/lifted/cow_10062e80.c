/* f_0x10062e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10062e80(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, 1u);
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = arg1;
    g->esp = sp0;
    t1 = cow_stdcall(g, COW_IMG(0x10073d80u), 3, sp0 + 4u, arg1, 1u);
    if (rd32(t1) == 0u)
    {
        eax = rd32(t1);
    }
    else
    {
        eax = rd32(t1);
        wr32(sp0 - 4u, arg2);
        wr32(sp0 - 8u, 7u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        g->eax = rd32(eax);
        t2 = rd32(eax);
        g->esp = sp0;
        t3 = cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 + 4u, 7u, arg2);
        if (rd32(t3) == 0u)
        {
            eax = rd32(t3);
        }
        else
        {
            eax = rd32(t3);
            wr32(sp0 - 4u, arg4);
            wr32(sp0 - 8u, arg3);
            g->eax = rd32(eax);
            t4 = rd32(eax);
            g->esp = sp0;
            t5 = cow_thiscall(g, COW_IMG(0x10056ef0u), t4, 2, arg3, arg4);
            eax = t5;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10062e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
