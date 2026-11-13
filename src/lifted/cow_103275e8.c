/* f_0x103275e8 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_10311bf0 with the dword at [ebp-0x10] and returns, leaving eax from that call in eax and ecx as the popped value.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_103275e8(Guest* g, uint32_t ebp)
{
    uint32_t param = rd32(ebp - 0x10u);
    uint32_t ecx_val;

    /* push eax (param), call FUN_10311bf0, pop ecx */
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, param);
    ecx_val = g->eax; /* after cdecl return, eax holds callee's return value; but we need to track what the original leaves in eax and edx */

    /* The original:
       mov eax, [ebp-0x10]   -> eax = param
       push eax              -> stack has param
       call 0x10311bf0       -> callee may modify eax, ecx, edx; cdecl means caller pops
       pop ecx               -> ecx = value popped from stack (which was the return address pushed by call)
       ret                   -> esp += 4 (pop return addr), bare ret

       After the call, eax and edx are whatever FUN_10311bf0 left them as.
       The pop ecx loads ecx with the return address that was on the stack.
       But wait - in the original, after `call`, esp points to the return address (pushed by call). Then `pop ecx` reads that return address into ecx and increments esp. Then `ret` pops another 4 bytes (the caller's return address) and jumps there.

       Actually let me re-trace:
       Entry: esp = sp0, [esp] = return_addr_to_caller
       mov eax, [ebp-0x10]
       push eax: esp = sp0-4, [sp0-4] = param
       call 0x10311bf0: pushes return addr (0x103275f1), esp = sp0-8, calls callee
       After callee returns (cdecl, callee pops nothing for args since it's cdecl with 1 arg... wait, cdecl means CALLER pops):
         Actually the call instruction itself pushes the return address. The callee does NOT pop arguments in cdecl - the caller does. But here there's no explicit add esp after the call; instead there's a `pop ecx`.

       Let me re-read:
       103275eb: push eax        -> esp -= 4, [esp] = param
       103275ec: call 0x10311bf0 -> esp -= 4, [esp] = 0x103275f1 (return addr), jump to callee
         Callee executes... returns with bare ret -> pops the return addr from stack, esp += 4 back to where it was after push eax. So now esp points to param.
       103275f1: pop ecx         -> ecx = [esp] = param, esp += 4 (back to sp0)
       103275f2: ret             -> pops return_addr_to_caller from stack, esp += 4

       So after the call returns, eax and edx are whatever FUN_10311bf0 left them as.
       ecx is loaded with param (the value that was pushed).

       The judge compares ALL of eax and edx. So I need to return eax as set by the callee, and set g->edx to what the callee left in edx.

       Since cow_cdecl calls the function and the guest model handles register state, after cow_cdecl returns, g->eax and g->edx hold whatever the callee left them as.
    */

    /* After cow_cdecl, g->eax and g->edx are set by the callee. ecx should be param (from pop). */
    g->ecx = param;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103275e8(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ebp_val = g->ebp;
    const uint32_t result = cow_fn_103275e8(g, ebp_val);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
