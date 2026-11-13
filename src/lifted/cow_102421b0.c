/* f_0x102421b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   increments a global counter, stores its low 16 bits into an object field, reloads that field into eax, and calls FUN_10118170 with it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102421b0(Guest* g, uint32_t self)
{
    uint32_t eax = rd32(COW_IMG(0x1066908cu));
    uint32_t edx = rd32(self + 8u);

    eax = eax + 1u;                         /* inc eax */
    wr16(edx + 0x4cu, (uint16_t)eax);       /* mov word ptr [edx + 0x4c], ax */

    uint32_t ecx = rd32(self + 8u);         /* mov ecx, dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4cu); /* mov ax, word ptr [ecx + 0x4c] */

    g->eax = eax;
    g->edx = edx;
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102421b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102421b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
