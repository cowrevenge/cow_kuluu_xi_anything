/* f_0x102e7421 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   returns a 64-bit value whose low half is 1 if CPUID leaf 1 reports bit 23 of EDX, else 0, with the high half equal to the caller's original EDX.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint64_t cow_fn_102e7421(Guest* g)
{
    const uint32_t entry_ecx = g->ecx;
    const uint32_t entry_edx = g->edx;
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;

    /* The original leaves eax = 0 before pushal, then sets eax = 1 for cpuid. */
    g->eax = 1u;

    /* Execute CPUID with the original other general-purpose registers in place. */
    rt_cpuid(g);

    /* test edx, 0x800000 / setne al */
    const uint32_t result = (g->edx & 0x00800000u) ? 1u : 0u;

    /* popal restores all general-purpose registers saved before cpuid. */
    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;
    g->edx = entry_edx;

    /*
     * The original writes eax to the saved ECX stack slot and then pops it into ecx,
     * so the final ecx is the result.  ECX is not listed as compared, but this matches
     * the original exactly.
     */
    g->ecx = result;

    /* Final eax is the result; final edx is the caller's original edx. */
    return ((uint64_t)entry_edx << 32) | (uint64_t)result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e7421(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint64_t result = cow_fn_102e7421(g);

    g->esp = sp0;
    g->eax = (uint32_t)result;
    g->edx = (uint32_t)(result >> 32);

    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
