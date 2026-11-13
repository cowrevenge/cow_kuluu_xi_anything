/* f_0x10064cb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   calls two helper routines on the object with the stack argument, preserving the original stack saves.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10064cb0(Guest* g, uint32_t sp0, uint32_t self, uint32_t param)
{
    /* push esi / push edi: keep the original saved values in guest memory. */
    wr32(sp0 - 4u, g->esi);
    wr32(sp0 - 8u, g->edi);

    /* The original sets esi=ecx and edi=[esp+0xc] before making the first call. */
    g->esp = sp0 - 8u;
    g->esi = self;
    g->edi = param;

    /*
     * Original stack before call 0x10064c30:
     *   sp0 - 4: saved esi
     *   sp0 - 8: saved edi
     *   sp0 -12: pushed param
     *   sp0 -16: return address pushed by call
     */
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10064c30u), self, 1u, g->edi);

    /*
     * Original stack before call 0x10064db0:
     *   sp0 - 4: saved esi
     *   sp0 - 8: saved edi
     *   sp0 -12: pushed edi
     *   sp0 -16: return address pushed by call
     *
     * The argument is the current value of edi after the first call, not a
     * cached C copy.
     */
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10064db0u), g->esi, 1u, g->edi);

    /* pop edi / pop esi from guest memory, matching the original exactly. */
    g->esp = sp0 - 8u;
    g->edi = rd32(g->esp);
    g->esp += 4u;
    g->esi = rd32(g->esp);
    g->esp += 4u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_10064cb0(g, sp0, self, param);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
