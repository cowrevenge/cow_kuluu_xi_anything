/* f_0x101640e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [this+0x18] into [this->field8+0x4c], then calls FUN_10118170 with the updated 16-bit value (upper eax preserved).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101640e0(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t ecx = self;
    uint32_t edx;

    /* 101640e0: mov ax, word ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x18u);

    /* 101640e4: mov edx, dword ptr [ecx + 8] */
    edx = rd32(ecx + 8u);

    /* 101640e7: inc ax */
    {
        uint16_t ax = (uint16_t)eax;
        ax = (uint16_t)(ax + 1u);
        eax = (eax & 0xFFFF0000u) | (uint32_t)ax;
    }

    /* 101640e9: mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4Cu, (uint16_t)eax);

    /* 101640ed: mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(ecx + 8u);

    /* 101640f0: mov ax, word ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4Cu);

    /* Set the register state exactly as the original has it at the call site. */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;

    /* 101640f4: push eax
       101640f5: call 0x10118170
       The callee ends in ret 4 and is treated as __thiscall with this in ecx. */
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* The callee may have modified eax/edx; leave them exactly as it left them. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101640e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101640e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
