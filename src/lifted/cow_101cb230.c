/* f_0x101cb230 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   obtains an object from FUN_101c8c30(1), then forwards the caller's eight stack arguments plus two fields from that object to FUN_101caf00.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_101cb230(Guest* g,
                     uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3,
                     uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7)
{
    const uint32_t p = cow_cdecl(g, COW_IMG(0x101c8c30u), 1u, 1u);
    const uint32_t obj = rd32(p);
    const uint32_t f9c = rd32(obj + 0x9cu);
    const uint32_t f188 = rd32(obj + 0x188u);

    cow_cdecl(g, COW_IMG(0x101caf00u), 10u,
              a0,
              a1,
              f188,
              f9c,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);
    const uint32_t a5 = rd32(sp0 + 24u);
    const uint32_t a6 = rd32(sp0 + 28u);
    const uint32_t a7 = rd32(sp0 + 32u);

    cow_fn_101cb230(g, a0, a1, a2, a3, a4, a5, a6, a7);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
