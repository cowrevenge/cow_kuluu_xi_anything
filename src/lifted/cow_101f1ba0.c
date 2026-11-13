/* f_0x101f1ba0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the byte argument is nonzero, calls the object's vtable slot +0x18 with arguments (6, 0); otherwise returns with only al updated.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101f1ba0(Guest* g, uint32_t self, uint32_t arg)
{
    uint32_t eax = g->eax;
    uint32_t edx = g->edx;

    /* mov al, byte ptr [esp + 4] */
    eax = (eax & 0xFFFFFF00u) | (arg & 0xFFu);

    /* test al, al / je */
    if ((eax & 0xFFu) == 0u)
    {
        g->edx = edx;
        return eax;
    }

    /* mov eax, dword ptr [ecx] */
    eax = rd32(self);

    /* Preserve the register state the original has at the call site. */
    g->eax = eax;
    g->ecx = self;
    g->edx = edx;

    /*
       push 0
       push 6
       call dword ptr [eax + 0x18]

       Source-order arguments are (6, 0).  This is a virtual thiscall-style
       indirect call: ecx is the object pointer and the callee pops the
       two pushed argument words.
    */
    {
        const uint32_t target = rd32(eax + 0x18u);
        cow_thiscall(g, target, self, 2u, 6u, 0u);
    }

    /*
       After the call, eax and edx contain whatever the callee left there.
       The helper updates g->eax/g->edx; return the final eax and leave edx
       exactly as the call left it.
    */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f1ba0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg = rd8(sp0 + 4u);

    const uint32_t result = cow_fn_101f1ba0(g, self, arg);

    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
