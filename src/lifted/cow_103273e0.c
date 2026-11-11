/* f_0x103273e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   XORs the low byte of edx with the byte at [eax], then tail-calls GetUserDefaultLCID().

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103273e0(Guest* g, uint32_t eax_val)
{
    /* xor dl, byte ptr [eax] */
    uint8_t a = (uint8_t)(g->edx);
    uint8_t b = rd8(eax_val);
    uint8_t r = (uint8_t)(a ^ b);
    g->edx = (g->edx & 0xFFFFFF00u) | (uint32_t)r;

    /* jmp dword ptr [0x1032917c] -> tail call to GetUserDefaultLCID */
    uint32_t target = rd32(COW_IMG(0x1032917cu));
    return cow_stdcall(g, target, 0);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103273e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_103273e0(g, g->eax);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
