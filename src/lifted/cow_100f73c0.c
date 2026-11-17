/* f_0x100f73c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   If the global at 0x104df908 is null returns 2; otherwise forwards selected caller stack arguments to FUN_100f2500 as a thiscall and returns its eax, leaving edx as the original leaves it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=4 */
uint32_t cow_fn_100f73c0(Guest* g, uint32_t sp0)
{
    const uint32_t thisp = rd32(COW_IMG(0x104df908u));

    if (thisp == 0u)
    {
        /* Original: mov eax, 2; ret.  edx is untouched. */
        return 2u;
    }

    /* Original reads these only after the non-null global check. */
    const uint32_t param4 = rd32(sp0 + 0x10u); /* [esp + 0x10] */
    const uint32_t param3 = rd32(sp0 + 0x0cu); /* [esp + 0x0c] */

    /*
       Original stack construction:
         push param4
         push param3
         push 0xa
         push 0
         lea eax, [esp + 0x14]   ; eax = sp0 + 4, address of first stack arg
         push 0
         push eax

       Therefore the callee receives, in source order:
         (sp0 + 4, 0, 0, 0xa, param3, param4)
    */

    /*
       The original sets edx before the call:
         mov edx, dword ptr [esp + 0xc]

       Preserve that value across the helper call.  If the helper actually
       executes the guest callee and updates g->edx, that update remains in
       effect; if it does not, edx is still left as the original left it.
    */
    g->edx = param3;

    const uint32_t result = cow_thiscall(
        g,
        COW_IMG(0x100f2500u),
        thisp,
        6u,
        sp0 + 4u,
        0u,
        0u,
        0xa,
        param3,
        param4
    );

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f73c0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t result = cow_fn_100f73c0(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u); /* bare ret */
}
/* COW_ADAPTER END */
