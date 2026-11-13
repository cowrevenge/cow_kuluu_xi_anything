/* f_0x101646e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Copies a 16-bit field from the object at ecx+0x14 into its inner object at [ecx+8]+0x4c, then calls FUN_10118170 with that inner object as this and the updated 32-bit value as the sole stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101646e0(Guest* g, uint32_t self)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t ecx;

    /* 101646e0: mov eax, dword ptr [ecx + 8] */
    eax = rd32(self + 8u);

    /* 101646e3: mov dx, word ptr [ecx + 0x14] */
    edx = (g->edx & 0xFFFF0000u) | (uint32_t)rd16(self + 0x14u);

    /* 101646e7: mov word ptr [eax + 0x4c], dx */
    wr16(eax + 0x4Cu, (uint16_t)edx);

    /* 101646eb: mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(self + 8u);

    /* 101646ee: mov ax, word ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4Cu);

    /* 101646f2: push eax */
    /* 101646f3: call 0x10118170 */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* 101646f8: ret */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101646e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101646e0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
