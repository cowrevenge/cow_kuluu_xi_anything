/* f_0x10071a30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Adds 0x30 to ecx, then if the byte at [ecx+0x1c] is nonzero clears it and rebases the dwords at [ecx+0x14] and [ecx+0x18] by subtracting the adjusted ecx; otherwise it only clears the low byte of eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10071a30(Guest* g, uint32_t self)
{
    const uint32_t ecx = self + 0x30u;
    uint32_t eax = g->eax;
    const uint32_t flag = rd8(ecx + 0x1cu);

    /* mov al, byte ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFFFF00u) | flag;

    if (flag != 0u)
    {
        /* mov eax, dword ptr [ecx + 0x14] */
        eax = rd32(ecx + 0x14u);

        /* mov byte ptr [ecx + 0x1c], 0 */
        wr8(ecx + 0x1cu, 0u);

        /* sub eax, ecx */
        eax -= ecx;

        /* mov dword ptr [ecx + 0x14], eax */
        wr32(ecx + 0x14u, eax);

        /* mov eax, dword ptr [ecx + 0x18] */
        eax = rd32(ecx + 0x18u);

        /* sub eax, ecx */
        eax -= ecx;

        /* mov dword ptr [ecx + 0x18], eax */
        wr32(ecx + 0x18u, eax);
    }

    g->edx = g->edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10071a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10071a30(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
