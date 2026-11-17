/* f_0x1018b7c0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   If the object has a non-null field at +0x1ac, calls a helper with the first stack argument and its address, then if that argument is a non-null pointer to a non-null dword, calls two more helpers with

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_1018b7c0(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t arg0_addr = sp0 + 4u;
    const uint32_t arg1_addr = sp0 + 8u;
    const uint32_t arg2_addr = sp0 + 0xcu;

    uint32_t ecx = rd32(self + 0x1acu);
    if (ecx == 0u)
    {
        /* Original leaves eax and edx untouched on this path. */
        return g->eax;
    }

    uint32_t eax = rd32(arg0_addr);
    uint32_t edx = arg0_addr;

    /* Preserve the register state the original has at the call site. */
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;

    /*
       Original:
         push eax
         push 7
         push edx
         call 0x10072290
       The callee is stdcall and pops 3 words.
       Arguments in source order are: edx, 7, eax.
    */
    cow_stdcall(g, COW_IMG(0x10072290u), 3u, edx, 7u, eax);

    /*
       The callee may have modified the first stack argument slot,
       because it received its address. Reload it exactly as the
       original does after the call.
    */
    eax = rd32(arg0_addr);

    if (eax == 0u)
    {
        g->edx = edx;
        return eax;
    }

    if (rd32(eax) == 0u)
    {
        g->edx = edx;
        return eax;
    }

    ecx = rd32(arg2_addr);
    edx = rd32(arg1_addr);

    /*
       Original:
         push ecx
         mov  ecx, dword ptr [0x1047d128]
         push edx
         push eax
         call 0x10072fb0
       The callee is stdcall and pops only 1 word, leaving the two
       previously pushed values on the stack for the next call.
    */
    g->ecx = rd32(COW_IMG(0x1047d128u));
    g->edx = edx;
    g->esp = sp0;

    cow_stdcall(g, COW_IMG(0x10072fb0u), 1u, eax);

    /*
       After FUN_10072fb0 returns with ret 4, the original stack is:
         [esp]     = edx/arg1
         [esp + 4] = ecx/arg2
       Then:
         mov ecx, eax
         call 0x10056ef0
       FUN_10056ef0 is thiscall with ecx = eax and two stack arguments:
       arg1 first, arg2 second.
    */
    ecx = g->eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;

    cow_thiscall(g, COW_IMG(0x10056ef0u), ecx, 2u, edx, rd32(arg2_addr));

    /*
       The original ends with ret 0xc.  The final eax and edx are
       whatever the last called function left in them.
    */
    g->esp = sp0;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t self = g->ecx;
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 0xcu);

    (void)arg0;
    (void)arg1;
    (void)arg2;

    const uint32_t result = cow_fn_1018b7c0(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
