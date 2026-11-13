/* f_0x100abd50 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts the this pointer by -0xc4, and if it is non-null calls the virtual slot at offset 0x18 with argument 1; then returns eax with al forced to 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100abd50(Guest* g, uint32_t self)
{
    uint32_t ecx = self + 0xFFFFFF3Cu;   /* add ecx, 0xffffff3c */
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    g->ecx = ecx;

    if (ecx != 0u)                        /* test ecx, ecx / je */
    {
        eax = rd32(ecx);                  /* mov eax, dword ptr [ecx] */

        const uint32_t target = rd32(eax + 0x18u);

        /* push 1; call dword ptr [eax + 0x18] */
        cow_thiscall(g, target, ecx, 1u, 1u);

        eax = g->eax;
        edx = g->edx;
    }

    eax = (eax & 0xFFFFFF00u) | 1u;       /* mov al, 1 */

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100abd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100abd50(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
