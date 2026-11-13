/* f_0x10320f99 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   SEH-style epilogue that restores saved registers, clears the local SEH slot, restores fs:[0], and returns.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10320f99(Guest* g, uint32_t ebp)
{
    const uint32_t base = rd32(ebp - 0x18u);

    /* xor eax, eax */
    const uint32_t eax = 0u;

    /* or dword ptr [ebp - 4], 0xffffffff */
    wr32(ebp - 4u, rd32(ebp - 4u) | 0xFFFFFFFFu);

    /* mov ecx, dword ptr [ebp - 0x10] */
    const uint32_t ecx = rd32(ebp - 0x10u);

    /* mov dword ptr fs:[0], ecx */
    wr32(g->fs_base, ecx);

    /* pop edi / pop esi / pop ebx */
    g->edi = rd32(base);
    g->esi = rd32(base + 4u);
    g->ebx = rd32(base + 8u);

    /* leave: esp = ebp; ebp = [esp]; esp += 4 */
    const uint32_t saved_ebp = rd32(ebp);
    g->ebp = saved_ebp;

    /* ret 4: the return address is at the current esp before ret.
       Set g->esp to that address so rt_return(..., 4) performs the final pop/add. */
    g->esp = ebp + 4u;

    /* edx is untouched by the original; leave it as it was on entry. */
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320f99(Guest* g)
{
    const uint32_t sp0 = g->esp;
    (void)sp0;

    const uint32_t result = cow_fn_10320f99(g, g->ebp);

    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
