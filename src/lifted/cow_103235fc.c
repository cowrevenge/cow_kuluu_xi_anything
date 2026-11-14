/* f_0x103235fc - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies three 32-bit words from the second stack argument to the first stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_103235fc(Guest* g, uint32_t dst, uint32_t src)
{
    (void)g;

    const uint32_t off = dst - src;
    uint32_t v;

    v = rd32(src);
    wr32(src + off, v);
    src += 4u;

    v = rd32(src);
    wr32(src + off, v);
    src += 4u;

    v = rd32(src);
    wr32(src + off, v);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103235fc(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t src = rd32(sp0 + 8u);
    const uint32_t dst = rd32(sp0 + 4u);

    cow_fn_103235fc(g, dst, src);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
