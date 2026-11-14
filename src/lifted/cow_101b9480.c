/* f_0x101b9480 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls GetExitCodeThread on *(this + 4), storing the result in a stack slot, and returns whether that stored value equals 0x1234.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101b9480(Guest* g, uint32_t self)
{
    const uint32_t out_addr = g->esp - 4u;
    const uint32_t handle = rd32(self + 4u);

    /* Preserve the original's initial stack slot value before the call. */
    wr32(out_addr, self);

    /* Set g->esp so cow_stdcall builds the call exactly as the original did. */
    g->esp = out_addr;

    const uint32_t target = rd32(COW_IMG(0x103291f8u));
    cow_stdcall(g, target, 2u, handle, out_addr);

    /* After the stdcall, esp is back at out_addr, where GetExitCodeThread wrote. */
    const uint32_t a = rd32(out_addr);
    const uint32_t b = 0x1234u;
    const uint32_t zf = (a == b);

    /* sete al: low byte only, upper 24 bits of eax are whatever the call left. */
    g->eax = (g->eax & 0xFFFFFF00u) | (zf ? 1u : 0u);

    /* edx is not explicitly written by this function; leave whatever the call left. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b9480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101b9480(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
