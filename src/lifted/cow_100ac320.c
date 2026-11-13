/* f_0x100ac320 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts 'this' pointer by -0xC4, calls a helper function, then checks three member fields; if all are zero, it calls a virtual method at vtable offset 0x18 with argument 1.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100ac320(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t adjusted_self = self - 0xc4u;
    uint32_t eax_val;

    /* Call FUN_10085cf0 with ecx=adjusted_self and stack arg=arg */
    /* The callee is thiscall, returns void (but clobbers registers), ret 4 means callee pops arg */
    cow_thiscall(g, COW_IMG(0x10085cf0u), adjusted_self, 1, arg);

    /* Check [esi + 0x68] where esi is adjusted_self */
    eax_val = rd32(adjusted_self + 0x68u);
    if (eax_val != 0) {
        g->edx = g->edx; /* edx holds whatever the previous call left */
        return eax_val;
    }

    /* Check [esi + 0x6c] */
    eax_val = rd32(adjusted_self + 0x6cu);
    if (eax_val != 0) {
        g->edx = g->edx;
        return eax_val;
    }

    /* Check [esi + 0x84] */
    eax_val = rd32(adjusted_self + 0x84u);
    if (eax_val != 0) {
        g->edx = g->edx;
        return eax_val;
    }

    /* All three fields are zero: load vtable pointer into edx */
    uint32_t vtable_ptr = rd32(adjusted_self);
    g->edx = vtable_ptr;

    /* Get target function from vtable + 0x18 */
    uint32_t target_addr = rd32(vtable_ptr + 0x18u);

    /* Call virtual method: thiscall with ecx=adjusted_self, stack arg=1 */
    cow_thiscall(g, target_addr, adjusted_self, 1, 1u);

    /* Return eax from the virtual call. edx is whatever the virtual call left it as. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd32(sp0 + 4u);

    uint32_t result = cow_fn_100ac320(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
