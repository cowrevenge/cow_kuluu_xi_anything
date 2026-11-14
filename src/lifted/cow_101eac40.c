/* f_0x101eac40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Sets or clears bit 0 of the byte at [global + 0x74] depending on whether the byte argument equals 1, and returns the global pointer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101eac40(Guest* g, uint32_t arg)
{
    /* mov al, byte ptr [esp + 4] */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)arg;

    /* mov cl, 1 */
    g->ecx = (g->ecx & 0xFFFFFF00u) | 1u;

    /* mov eax, dword ptr [0x1057876c] */
    const uint32_t ptr = rd32(COW_IMG(0x1057876cu));
    g->eax = ptr;

    /* cmp al, cl / jne */
    if ((uint8_t)arg == 1u)
    {
        /* or byte ptr [eax + 0x74], cl */
        const uint32_t addr = ptr + 0x74u;
        wr8(addr, (uint8_t)(rd8(addr) | 1u));
    }
    else
    {
        /* and byte ptr [eax + 0x74], 0xfe */
        const uint32_t addr = ptr + 0x74u;
        wr8(addr, (uint8_t)(rd8(addr) & 0xFEu));
    }

    /* edx is never written by the original; leave it unchanged. */
    g->edx = g->edx;

    return ptr;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eac40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd8(sp0 + 4u);
    const uint32_t result = cow_fn_101eac40(g, arg);
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
