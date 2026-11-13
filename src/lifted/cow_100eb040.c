/* f_0x100eb040 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100eaeb0(1) with the third stack argument left on the stack, then calls FUN_100eaf00 with the first call's result and that same third argument, and returns 1 in AL while preserving the upper

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100eb040(Guest* g, uint32_t arg1, uint32_t arg2, uint32_t arg3)
{
    (void)arg1;
    (void)arg2;

    const uint32_t sp0 = g->esp;

    /*
       Original stack sequence:

         push arg3
         push 1
         call FUN_100eaeb0
         add esp, 4          ; leaves arg3 on the stack

         push eax            ; eax = return value of FUN_100eaeb0
         call FUN_100eaf00
         add esp, 8          ; pops both values

       The second call therefore receives:
         param_1 = result of FUN_100eaeb0
         param_2 = arg3
    */

    /*
       Reproduce the extra pushed value for the first call.  cow_cdecl will
       push the declared argument(s), call, and pop the declared argument
       bytes.  We manually push arg3 underneath so that the first callee sees
       the same stack layout as the original, while cow_cdecl only pops the
       one declared argument byte group.
    */
    g->esp = sp0 - 4u;
    wr32(g->esp, arg3);

    uint32_t r1 = cow_cdecl(g, COW_IMG(0x100eaeb0u), 1u, 1u);

    /*
       After cow_cdecl has popped its declared argument, restore the stack to
       the state immediately after the original "add esp, 4": arg3 is still
       present at sp0 - 4.
    */
    g->esp = sp0 - 4u;

    uint32_t r2 = cow_cdecl(g, COW_IMG(0x100eaf00u), 2u, r1, arg3);

    /*
       The original leaves EAX as whatever FUN_100eaf00 returned, then does
       "mov al, 1", preserving bits 8..31.
    */
    g->esp = sp0;
    g->edx = g->edx;

    return (r2 & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eb040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);

    const uint32_t result = cow_fn_100eb040(g, arg1, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
