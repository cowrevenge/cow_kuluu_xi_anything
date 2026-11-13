/* f_0x10062120 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object pointer offset by -0x34 is non-null, calls its vtable slot 0x18 with argument 1, then returns 1 in al while preserving the upper bits of eax and the final edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062120(Guest* g, uint32_t self)
{
    uint32_t p = self - 0x34u;
    uint32_t eax;
    uint32_t edx = g->edx;

    if (p != 0u)
    {
        eax = rd32(p);
        uint32_t target = rd32(eax + 0x18u);

        /* Match the register state seen by the callee at the call site. */
        g->ecx = p;
        g->eax = eax;
        g->edx = edx;

        /* push 1; call dword ptr [eax + 0x18] */
        cow_thiscall(g, target, p, 1u, 1u);

        eax = g->eax;
        edx = g->edx;
    }
    else
    {
        eax = g->eax;
        g->ecx = p;
    }

    /* mov al, 1 */
    eax = (eax & 0xFFFFFF00u) | 1u;

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10062120(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
