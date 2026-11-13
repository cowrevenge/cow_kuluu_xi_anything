/* f_0x1014f780 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies up to 0x7f bytes from the stack argument into the object's buffer at offset 0x58 when the source pointer is non-null.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1014f780(Guest* g, uint32_t self, uint32_t src)
{
    g->eax = src;

    if (src != 0u)
    {
        const uint32_t dest = self + 0x58u;
        cow_cdecl(g, COW_IMG(0x10312090u), 3u, dest, src, 0x7fu);
        g->eax = dest;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t src = rd32(sp0 + 4u);

    cow_fn_1014f780(g, self, src);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
