/* f_0x10164130 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [this+0x14], stores it at [[this+8]+0x4c], then calls FUN_10118170 with that stored value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10164130(Guest* g, uint32_t self, uint32_t sp0)
{
    uint32_t eax = g->eax;
    uint32_t edx;
    uint32_t ecx;
    uint16_t v;
    uint16_t r;
    uint16_t arg16;

    /* mov ax, word ptr [ecx + 0x14] */
    v = rd16(self + 0x14u);
    eax = (eax & 0xFFFF0000u) | (uint32_t)v;

    /* mov edx, dword ptr [ecx + 8] */
    edx = rd32(self + 8u);

    /* inc ax */
    r = (uint16_t)(v + 1u);
    eax = (eax & 0xFFFF0000u) | (uint32_t)r;

    /* mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4cu, r);

    /* mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(self + 8u);

    /* mov ax, word ptr [ecx + 0x4c] */
    arg16 = rd16(ecx + 0x4cu);
    eax = (eax & 0xFFFF0000u) | (uint32_t)arg16;

    /* push eax / call 0x10118170 */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;
    g->esp = sp0;

    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* ret: leave eax and edx exactly as the callee left them */
    g->esp = sp0;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10164130(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
