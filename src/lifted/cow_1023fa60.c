/* f_0x1023fa60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [this+0x24], stores it at [[this+8]+0x4c], then calls FUN_10118170 with that stored value (preserving the upper 16 bits of the incoming EAX).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1023fa60(Guest* g, uint32_t self)
{
    const uint32_t entry_eax = g->eax;

    /* 1023fa60: mov ax, word ptr [ecx + 0x24] */
    const uint16_t v = rd16(self + 0x24u);

    /* 1023fa64: mov edx, dword ptr [ecx + 8] */
    const uint32_t edx = rd32(self + 8u);

    /* 1023fa67: inc ax */
    const uint16_t newv = (uint16_t)(v + 1u);

    /* 1023fa69: mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4cu, newv);

    /* 1023fa6d: mov ecx, dword ptr [ecx + 8] */
    const uint32_t self2 = rd32(self + 8u);

    /* 1023fa70: mov ax, word ptr [ecx + 0x4c] */
    const uint16_t arg_low = rd16(self2 + 0x4cu);

    /* 1023fa74: push eax */
    const uint32_t arg = (entry_eax & 0xFFFF0000u) | (uint32_t)arg_low;

    /* Preserve the register state the original has at the call site. */
    g->eax = arg;
    g->edx = edx;

    /* 1023fa75: call 0x10118170 */
    cow_thiscall(g, COW_IMG(0x10118170u), self2, 1u, arg);

    /* 1023fa7a: ret */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023fa60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1023fa60(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
