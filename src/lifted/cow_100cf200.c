/* f_0x100cf200 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   adjusts this, obtains an object pointer, and if its first field is non-null calls FUN_1002ac50 with the caller's first stack argument and 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100cf200(Guest* g, uint32_t self, uint32_t sp0)
{
    /* add ecx, 0x674 */
    const uint32_t adjusted_self = self + 0x674u;

    /* call 0x1002b5a0; bare ret, so caller pops. It is entered with ecx = adjusted_self. */
    cow_thiscall_cdecl(g, COW_IMG(0x1002b5a0u), adjusted_self, 0);

    /* mov ecx, dword ptr [eax] */
    const uint32_t loaded_ecx = rd32(g->eax);

    /* test ecx, ecx; je skip */
    if (loaded_ecx != 0)
    {
        /* mov eax, dword ptr [esp + 4]
           At this point esp is the original function esp, because FUN_1002b5a0
           returned with a bare ret and no stack arguments were consumed.
        */
        const uint32_t arg1 = rd32(sp0 + 4u);

        /*
           Original pushes:
               push 0
               push eax
           so the last-pushed value (arg1) is the first argument, and 0 is second.

           ecx has been set by the preceding mov ecx, [eax], and the callee
           ends in ret 8, so it pops two stack argument words. Use thiscall
           with ecx = loaded_ecx and two stack args.
        */
        cow_thiscall(g, COW_IMG(0x1002ac50u), loaded_ecx, 2u, arg1, 0u);
    }

    /*
       The only compared registers are eax and edx.
       eax is whatever the last executed call left there.
       edx is not written by this function's own instructions, so leave the
       value left by the executed call path exactly as the helpers stored it.
    */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cf200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_100cf200(g, g->ecx, sp0);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
