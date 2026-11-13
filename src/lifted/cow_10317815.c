/* f_0x10317815 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   SEH epilogue: restores ESP from [EBP-0x18], marks [EBP-4] as -1, updates fs:[0] from [EBP-0x10], pops EBX/ESI/EDI, restores EBP, and returns popping 16 bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10317815(Guest* g, uint32_t sp0)
{
    (void)sp0;

    const uint32_t ebp0 = g->ebp;
    const uint32_t eax0 = g->eax;
    const uint32_t edx0 = g->edx;

    /* mov esp, dword ptr [ebp - 0x18] */
    uint32_t esp = rd32(ebp0 - 0x18u);

    /* or dword ptr [ebp - 4], 0xffffffff */
    {
        const uint32_t a = ebp0 - 4u;
        wr32(a, rd32(a) | 0xFFFFFFFFu);
    }

    /* mov ecx, dword ptr [ebp - 0x10] */
    const uint32_t ecx = rd32(ebp0 - 0x10u);
    g->ecx = ecx;

    /* mov dword ptr fs:[0], ecx */
    wr32(g->fs_base, ecx);

    /* pop edi */
    g->edi = rd32(esp);
    esp += 4u;

    /* pop esi */
    g->esi = rd32(esp);
    esp += 4u;

    /* pop ebx */
    g->ebx = rd32(esp);
    esp += 4u;

    /* leave */
    esp = ebp0;
    g->ebp = rd32(esp);
    esp += 4u;

    /* Prepare ESP for rt_return(g, ..., 16u): point at the return address. */
    g->esp = esp;

    /* eax and edx are unchanged by the original. */
    g->edx = edx0;
    return eax0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317815(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10317815(g, sp0);
    rt_return(g, result, 16u);   /* ret 0x10 */
}
/* COW_ADAPTER END */
