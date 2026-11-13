/* f_0x100e47a0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the global at 0x104dfd98 is nonzero, stores it plus 0x2cfd8 through the stack argument and returns that value with its low byte forced to 1; otherwise returns 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100e47a0(Guest* g, uint32_t param, uint32_t global)
{
    if (global == 0u)
    {
        /* Original path: mov eax,0; xor al,al; ret. */
        return 0u;
    }

    /* Original path:
       mov ecx,[esp+4]
       add eax,0x2cfd8
       mov [ecx],eax
       mov al,1
       ret
    */
    g->ecx = param;

    uint32_t eax = global + 0x2CFD8u;
    g->eax = eax;

    wr32(param, eax);

    eax = (eax & 0xFFFFFF00u) | 1u;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e47a0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t global = rd32(COW_IMG(0x104DFD98u));

    uint32_t param = 0u;
    if (global != 0u)
    {
        param = rd32(sp0 + 4u);
    }

    const uint32_t result = cow_fn_100e47a0(g, param, global);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
