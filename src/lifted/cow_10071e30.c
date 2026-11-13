/* f_0x10071e30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the first stack argument points to a dword equal to 6, pass a pointer to that stack slot to FUN_10071050 via ecx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10071e30(Guest* g, uint32_t self, uint32_t param, uint32_t sp0)
{
    uint32_t ecx;

    /* 10071e30: mov eax, dword ptr [esp + 4] */
    g->eax = param;

    /* 10071e34: cmp dword ptr [eax], 6 */
    /* 10071e37: jne 0x10071e49 */
    if (rd32(param) != 6u)
    {
        return g->eax;
    }

    /* 10071e39: mov ecx, dword ptr [ecx + 0x14] */
    ecx = rd32(self + 0x14u);

    /* 10071e3c: mov dword ptr [esp + 4], ecx */
    wr32(sp0 + 4u, ecx);

    /* 10071e40: lea ecx, [esp + 4] */
    ecx = sp0 + 4u;

    /* 10071e44: call 0x10071050 */
    g->esp = sp0;
    g->ecx = ecx;
    cow_thiscall_cdecl(g, COW_IMG(0x10071050u), ecx, 0u);

    /* 10071e49: ret 4 */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t param = rd32(sp0 + 4u);

    const uint32_t eax = cow_fn_10071e30(g, self, param, sp0);

    g->esp = sp0;
    rt_return(g, eax, 4u);
}
/* COW_ADAPTER END */
