/* f_0x102e74df - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Returns 1 in eax if CPUID leaf 0x80000001 is supported and its edx bit 31 is set, otherwise 0; edx is preserved as the high half of the 64-bit result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u64 stack_args=0 */
uint64_t cow_fn_102e74df(Guest* g)
{
    const uint32_t entry_eax = g->eax;
    const uint32_t entry_ecx = g->ecx;
    const uint32_t entry_edx = g->edx;
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;

    uint32_t local = 0u;

    /* mov eax, 0x80000000 / cpuid */
    g->eax = 0x80000000u;
    rt_cpuid(g);

    /* cmp eax, 0x80000001 / jb end  (unsigned) */
    if (g->eax >= 0x80000001u)
    {
        /* mov eax, 0x80000001 / cpuid */
        g->eax = 0x80000001u;
        rt_cpuid(g);

        /* xor eax, eax / test edx, 0x80000000 / setne al */
        local = ((g->edx & 0x80000000u) != 0u) ? 1u : 0u;
    }

    /* Restore registers as popal/pops/leave would leave them. */
    g->eax = entry_eax;
    g->ecx = entry_ecx;
    g->edx = entry_edx;
    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;

    return ((uint64_t)entry_edx << 32) | (uint64_t)local;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e74df(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint64_t result = cow_fn_102e74df(g);

    g->esp = sp0;
    rt_return(g, (uint32_t)result, 0u);
    g->edx = (uint32_t)(result >> 32);
}
/* COW_ADAPTER END */
