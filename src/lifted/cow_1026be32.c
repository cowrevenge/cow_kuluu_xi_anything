/* f_0x1026be32 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Inserts param_2 between param_1 and param_1's successor, updating the forward and backward links.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1026be32(Guest* g, uint32_t sp0)
{
    const uint32_t local = cow_frame(g, sp0, 8u); /* [ebp - 4] == sp0 - 8 */

    wr32(local, 0xCCCCCCCCu);

    uint32_t p1 = rd32(sp0 + 4u);
    uint32_t old = rd32(p1 + 0x18u);
    wr32(local, old);

    p1 = rd32(sp0 + 4u);
    uint32_t p2 = rd32(sp0 + 8u);
    wr32(p1 + 0x18u, p2);

    p2 = rd32(sp0 + 8u);
    p1 = rd32(sp0 + 4u);
    wr32(p2 + 0x14u, p1);

    p2 = rd32(sp0 + 8u);
    old = rd32(local);
    wr32(p2 + 0x18u, old);

    old = rd32(local);
    if (old != 0u)
    {
        p2 = rd32(sp0 + 8u);
        wr32(old + 0x14u, p2);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026be32(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1026be32(g, sp0);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
