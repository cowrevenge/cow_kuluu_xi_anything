/* f_0x10221770 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_1011d840 with the stack argument and a zeroed two-dword output buffer, returning the first dword of that buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10221770(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t buf = cow_frame(g, sp0, 8u);

    /* Original zeroing order: [esp+4] then [esp], where esp == buf. */
    wr32(buf + 4u, 0u);
    wr32(buf, 0u);

    /*
     * Original call sequence:
     *   lea eax, [esp]   ; eax = buf
     *   push eax         ; second argument
     *   push ecx         ; first argument
     *   call 0x1011d840
     *
     * cow_cdecl lists arguments in source order, so:
     *   first argument  = param
     *   second argument = buf
     */
    cow_cdecl(g, COW_IMG(0x1011d840u), 2u, param, buf);

    /* Original: mov eax, dword ptr [esp + 8] after the call, which is buf. */
    return rd32(buf);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_10221770(g, sp0, param);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
