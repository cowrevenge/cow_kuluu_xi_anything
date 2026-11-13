/* f_0x10164760 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [self+0x1c], stores it at [[self+8]+0x4c], then calls FUN_10118170 with the stored value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10164760(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t ecx = self;
    uint32_t edx;

    /* mov ax, word ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x1Cu);

    /* mov edx, dword ptr [ecx + 8] */
    edx = rd32(ecx + 8u);

    /* inc ax */
    {
        uint16_t a = (uint16_t)eax;
        uint16_t r = (uint16_t)(a + 1u);
        eax = (eax & 0xFFFF0000u) | (uint32_t)r;
    }

    /* mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4Cu, (uint16_t)eax);

    /* mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(self + 8u);

    /* mov ax, word ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4Cu);

    /* Prepare registers exactly as the original has them at the call. */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;

    /* push eax; call 0x10118170 */
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* ret: return whatever the callee left in eax; edx is already in g->edx. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10164760(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
