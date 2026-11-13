/* f_0x10221ed0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object's field at +8 is non-null, calls FUN_10118e90 with that field as this and a 16-bit delta computed from fields +0x54, +0x38, and +0x30.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10221ed0(Guest* g, uint32_t self)
{
    const uint32_t field = rd32(self + 8u);

    if (field == 0u)
    {
        /* Original: mov eax, ecx; test ecx, ecx; je ret.
           eax is self, edx is unchanged from entry. */
        g->edx = g->edx;
        return self;
    }

    /* Original:
       mov dx, word ptr [eax + 0x54]
       sub dx, word ptr [eax + 0x38]
       add dx, word ptr [eax + 0x30]
       push edx
       call 0x10118e90

       Only dx is written; high 16 bits of edx are preserved.
    */
    const uint16_t v54 = (uint16_t)rd16(self + 0x54u);
    const uint16_t v38 = (uint16_t)rd16(self + 0x38u);
    const uint16_t v30 = (uint16_t)rd16(self + 0x30u);

    const uint16_t delta = (uint16_t)((uint16_t)(v54 - v38) + v30);
    const uint32_t edx_value = (g->edx & 0xFFFF0000u) | (uint32_t)delta;

    /* At the call site:
       eax = self
       ecx = field
       edx = computed value
    */
    g->eax = self;
    g->edx = edx_value;

    /* FUN_10118e90 is thiscall: ecx = this, one stack argument, callee pops ret 4. */
    cow_thiscall(g, COW_IMG(0x10118e90u), field, 1u, edx_value);

    /* After the call, original ret leaves eax and edx exactly as the callee left them. */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221ed0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10221ed0(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
