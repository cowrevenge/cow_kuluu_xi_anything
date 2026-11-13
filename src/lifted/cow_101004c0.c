/* f_0x101004c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Tail-calls FUN_101003e0 after forcing its second stack argument to 0x1c and masking its third stack argument to 16 bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101004c0(Guest* g, uint32_t sp0)
{
    uint32_t arg2;
    uint32_t arg0;
    uint32_t arg1;

    /* 101004c0: mov eax, dword ptr [esp + 0xc] */
    arg2 = rd32(sp0 + 0xCu);

    /* 101004c4: mov dword ptr [esp + 8], 0x1c */
    wr32(sp0 + 8u, 0x1Cu);

    /* 101004cc: and eax, 0xffff */
    arg2 &= 0xFFFFu;

    /* 101004d1: mov dword ptr [esp + 0xc], eax */
    wr32(sp0 + 0xCu, arg2);

    /*
     * 101004d5: jmp 0x101003e0
     *
     * The target is cdecl and ends with a bare ret, so the caller pops its
     * arguments.  Because this is a tail call, the target returns directly to
     * this function's caller.  Pass the three arguments that the target sees
     * on the stack after the two stores above.
     */
    arg0 = rd32(sp0 + 4u);
    arg1 = 0x1Cu;

    cow_cdecl(g, COW_IMG(0x101003e0u), 3u, arg0, arg1, arg2);

    /*
     * The judge compares both eax and edx.  cow_cdecl leaves the callee's
     * register results in g->eax and g->edx; return eax and preserve edx.
     */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101004c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101004c0(g, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);   /* target ends in a bare ret */
}
/* COW_ADAPTER END */
