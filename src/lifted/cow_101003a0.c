/* f_0x101003a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adds the 16-bit third stack argument to the 16-bit word at [first stack argument + 0x32].

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_101003a0(Guest* g, uint32_t a0, uint32_t a1, uint32_t a2)
{
    (void)a1;

    const uint16_t add = (uint16_t)a2;

    /* mov cx, word ptr [esp + 0xc] preserves the upper 16 bits of ecx. */
    g->ecx = (g->ecx & 0xFFFF0000u) | (uint32_t)add;

    const uint32_t addr = a0 + 0x32u;
    const uint16_t old = rd16(addr);
    const uint16_t sum = (uint16_t)(old + add);
    wr16(addr, sum);

    /* mov eax, dword ptr [esp + 4] is the only write to eax. */
    return a0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101003a0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a2 = rd16(sp0 + 0xCu);

    const uint32_t result = cow_fn_101003a0(g, a0, 0u, a2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
