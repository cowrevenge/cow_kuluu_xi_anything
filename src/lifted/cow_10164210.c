/* f_0x10164210 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [this+0x14] into [this->field8+0x4c], then calls FUN_10118170 on that object with the new value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10164210(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t ecx = self;
    uint32_t edx;

    /* 10164210: mov ax, word ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x14u);

    /* 10164214: mov edx, dword ptr [ecx + 8] */
    edx = rd32(ecx + 8u);

    /* 10164217: inc ax */
    eax = (eax & 0xFFFF0000u) | (uint32_t)((uint16_t)eax + 1u);

    /* 10164219: mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4Cu, (uint16_t)eax);

    /* 1016421d: mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(ecx + 8u);

    /* 10164220: mov ax, word ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4Cu);

    /* 10164224: push eax */
    /* 10164225: call 0x10118170 */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* 1016422a: ret */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_10164210(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
