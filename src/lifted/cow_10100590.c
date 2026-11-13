/* f_0x10100590 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101003e0 after forcing its second stack argument to 0x21 and truncating its third stack argument to 16 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10100590(Guest* g, uint32_t sp0)
{
    uint32_t arg1;
    uint32_t arg3;
    uint32_t result;

    /* 10100590: mov eax, dword ptr [esp + 0xc] */
    arg3 = rd32(sp0 + 0xCu);

    /* 10100594: mov dword ptr [esp + 8], 0x21 */
    wr32(sp0 + 0x8u, 0x21u);

    /* 1010059c: and eax, 0xffff */
    arg3 &= 0xFFFFu;

    /* 101005a1: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, arg3);

    /*
     * 101005a5: jmp 0x101003e0
     *
     * The target is reached by a tail jump, so it sees the same stack layout:
     *   [esp + 0x00] = return address to this function's caller
     *   [esp + 0x04] = param_1
     *   [esp + 0x08] = param_2, now 0x21
     *   [esp + 0x0c] = param_3, now masked
     *
     * The target ends in a bare ret, so it is cdecl: the caller pops the
     * arguments.  Pass the values in source order.
     */
    arg1 = rd32(sp0 + 0x4u);

    result = cow_cdecl(g, COW_IMG(0x101003e0u), 3u,
                       arg1,
                       0x21u,
                       arg3);

    /*
     * Preserve the original stack-argument bytes that the tail-jumped callee
     * would have seen and could have modified.  The original leaves these
     * slots above the returned esp, so they are observable.
     */
    wr32(sp0 + 0x4u,  rd32(g->esp + 0x4u));
    wr32(sp0 + 0x8u,  rd32(g->esp + 0x8u));
    wr32(sp0 + 0xCu,  rd32(g->esp + 0xCu));

    /*
     * eax is returned by cow_cdecl.  edx must be exactly what the target
     * leaves in edx.
     */
    g->edx = g->edx;

    return result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10100590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10100590(g, sp0);

    /*
     * The original has no ret of its own; it tail-jumps to a callee ending
     * in a bare ret.  Therefore the target pops 0 bytes.
     */
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
