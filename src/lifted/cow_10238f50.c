/* f_0x10238f50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10238f50(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103880f0u));
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103880dcu));
    t4 = g->edx;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103880c8u));
    t5 = g->edx;
    if (arg1 == 0u)
    {
        edx = t5;
        goto L_10238fb8;
    }
    edx = t5;
    if (arg1 == 1u) goto L_10238fa2;
    if (arg1 != 2u) goto L_10238fcb;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103880c8u), 1u, 0u);
    return;
L_10238fa2: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103880dcu), 1u, 0u);
    return;
L_10238fb8: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103880f0u), 1u, 0u);
L_10238fcb: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238f50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10238f50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
