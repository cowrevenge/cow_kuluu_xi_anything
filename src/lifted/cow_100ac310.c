/* f_0x100ac310 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Adjusts `this` by -0xc4, calls FUN_10085c90 with an argument from the stack, then conditionally invokes a virtual method if three fields are zero.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_100ac310(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t esi = self - 0xC4u;

    /* call 0x10085c90: thiscall with ecx=esi, one stack argument */
    cow_thiscall(g, COW_IMG(0x10085c90u), esi, 1, arg);

    uint32_t eax = rd32(esi + 0x68u);
    if (eax != 0) {
        g->edx = g->edx; /* edx unchanged on this path */
        return eax;
    }

    eax = rd32(esi + 0x6cu);
    if (eax != 0) {
        g->edx = g->edx;
        return eax;
    }

    eax = rd32(esi + 0x84u);
    if (eax != 0) {
        g->edx = g->edx;
        return eax;
    }

    uint32_t edx = rd32(esi);
    uint32_t vtable_entry = rd32(edx + 0x18u);

    /* call dword ptr [edx + 0x18]: thiscall with ecx=esi, one stack argument (pushed as 1) */
    cow_thiscall(g, vtable_entry, esi, 1, 1u);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ac310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100ac310(g, g->ecx, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
