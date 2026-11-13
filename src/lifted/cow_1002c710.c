/* f_0x1002c710 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Calls FUN_1002b5a0, dereferences its returned pointer, and either returns 0 or tail-calls FUN_1002b3f0 with the loaded pointer in ecx and the original stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_1002c710(Guest* g, uint32_t sp0, uint32_t ecx_in)
{
    uint32_t p;
    uint32_t ecx;
    uint32_t arg0;
    uint32_t result;

    /*
     * 1002c710: call 0x1002b5a0
     *
     * The decompiler models this as __fastcall with one register argument.
     * The instruction stream has no pushes, so the argument is ecx.  The
     * callee ends in a bare ret, so the caller pops any stack arguments
     * (none here).  Use cow_thiscall_cdecl to set ecx while preserving the
     * caller-pops convention.
     */
    p = cow_thiscall_cdecl(g, COW_IMG(0x1002b5a0u), ecx_in, 0);

    /* 1002c715: mov ecx, dword ptr [eax] */
    ecx = rd32(p);

    /* 1002c717: test ecx, ecx */
    /* 1002c719: jne 0x1002c720 */
    if (ecx == 0)
    {
        /*
         * 1002c71b: xor eax, eax
         * 1002c71d: ret 4
         *
         * edx is whatever FUN_1002b5a0 left in it.  cow_thiscall_cdecl has
         * already updated g->edx to the callee's final edx.
         */
        return 0;
    }

    /*
     * 1002c720: jmp 0x1002b3f0
     *
     * Tail call.  At this point ecx contains the value loaded from [eax].
     * FUN_1002b3f0 is modeled as taking a register/this argument and one
     * stack argument, and it ends in ret 4.  Pass the original stack argument
     * through unchanged and set ecx to the value the original jump would have
     * had in ecx.
     */
    arg0 = rd32(sp0 + 4u);
    result = cow_thiscall(g, COW_IMG(0x1002b3f0u), ecx, 1, arg0);

    /*
     * The tail callee's ret 4 has already updated g->edx to the value left by
     * FUN_1002b3f0.  Return its eax result; the adapter will pop 4 bytes,
     * matching the original tail callee's ret 4.
     */
    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002c710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ecx_in = g->ecx;
    const uint32_t result = cow_fn_1002c710(g, sp0, ecx_in);
    g->esp = sp0;
    rt_return(g, result, 4u);   /* ret 4 */
}
/* COW_ADAPTER END */
