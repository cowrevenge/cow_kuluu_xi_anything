/* f_0x101644e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Sets the 16-bit field at [this+8]+0x4c to 1, then calls FUN_10118170 with that field value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101644e0(Guest* g, uint32_t self)
{
    /* 101644e0: mov eax, dword ptr [ecx + 8] */
    const uint32_t p = rd32(self + 8u);

    /* 101644e3: mov word ptr [eax + 0x4c], 1 */
    wr16(p + 0x4cu, (uint16_t)1u);

    /* 101644e9: mov ecx, dword ptr [ecx + 8] */
    const uint32_t ecx2 = rd32(self + 8u);

    /* 101644ec: mov dx, word ptr [ecx + 0x4c] */
    const uint32_t edx = (g->edx & 0xFFFF0000u) |
                         (uint32_t)(uint16_t)rd16(ecx2 + 0x4cu);

    /* Preserve the original register state before the call. */
    g->eax = p;
    g->edx = edx;

    /* 101644f0: push edx
       101644f1: call 0x10118170
       The callee is thiscall and ends in ret 4. */
    cow_thiscall(g, COW_IMG(0x10118170u), ecx2, 1u, edx);

    /* 101644f6: ret
       Return eax and leave edx exactly as the callee left it. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101644e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101644e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
