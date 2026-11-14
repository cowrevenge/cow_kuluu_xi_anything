/* f_0x10055620 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls two helper routines, loading the global object pointer into ecx before the second and tail call, then tail-jumps to the third helper.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10055620(Guest* g)
{
    uint32_t ecx;

    /* 10055620: call 0x10046380 */
    cow_cdecl(g, COW_IMG(0x10046380u), 0u);

    /* 10055625: mov ecx, dword ptr [0x1047bc94] */
    ecx = rd32(COW_IMG(0x1047bc94u));

    /* 1005562b: call 0x10055520 */
    cow_thiscall_cdecl(g, COW_IMG(0x10055520u), ecx, 0u);

    /* 10055630: mov ecx, dword ptr [0x1047bc94] */
    ecx = rd32(COW_IMG(0x1047bc94u));

    /* 10055636: jmp 0x100554b0 */
    cow_thiscall_cdecl(g, COW_IMG(0x100554b0u), ecx, 0u);

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10055620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10055620(g);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
