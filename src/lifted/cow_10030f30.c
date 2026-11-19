/* f_0x10030f30 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Waits on a handle from the object, then either exits when a flag is set or performs a virtual call and signals another handle, looping until the flag is set.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10030f30(Guest* g, uint32_t self)
{
    const uint32_t entry_ebx = g->ebx;
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;
    const uint32_t entry_ebp = g->ebp;

    uint32_t eax;
    uint32_t edi;
    uint32_t ebx;

    eax = rd32(self);
    eax = (uint32_t)(eax << 12);
    eax = (uint32_t)(eax + 3u);
    eax = (eax & 0xFFFFFF00u) | (uint32_t)(((uint8_t)eax) & 0xFCu);

    g->eax = eax;
    cow_cdecl(g, COW_IMG(0x10312190u), 0);

    edi = rd32(COW_IMG(0x103291c8u));
    ebx = rd32(COW_IMG(0x103291c4u));

    for (;;)
    {
        eax = rd32(self + 8u);

        g->eax = eax;
        cow_stdcall(g, edi, 2u, eax, 0xFFFFFFFFu);

        if (rd8(self + 0x14u) == 1u)
        {
            break;
        }

        {
            uint32_t ecx = rd32(self + 0x18u);
            uint32_t arg = rd32(self + 0x1cu);
            uint32_t edx = rd32(ecx);
            uint32_t target = rd32(edx + 0x20u);

            g->ecx = ecx;
            g->edx = edx;
            g->eax = arg;
            cow_thiscall(g, target, ecx, 1u, arg);
        }

        {
            uint32_t ecx = rd32(self + 0xcu);

            g->ecx = ecx;
            cow_stdcall(g, ebx, 1u, ecx);
        }
    }

    g->ebx = entry_ebx;
    g->esi = entry_esi;
    g->edi = entry_edi;
    g->ebp = entry_ebp;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10030f30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);

    const uint32_t result = cow_fn_10030f30(g, self);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
