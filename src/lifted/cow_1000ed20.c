/* f_0x1000ed20 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Opens a registry key with RegOpenKeyExA and, on success, stores the resulting handle in *self after closing any previous handle.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1000ed20(Guest* g, uint32_t sp0, uint32_t self, uint32_t hKey, uint32_t lpSubKey, uint32_t samDesired)
{
    const uint32_t phKey = cow_frame(g, sp0, 4u);

    wr32(phKey, 0u);

    const uint32_t status = cow_stdcall(
        g,
        rd32(COW_IMG(0x1032901cu)),
        5u,
        hKey,
        lpSubKey,
        0u,
        samDesired,
        phKey
    );

    if (status == 0u)
    {
        const uint32_t oldKey = rd32(self);
        if (oldKey != 0u)
        {
            cow_stdcall(
                g,
                rd32(COW_IMG(0x10329024u)),
                1u,
                oldKey
            );
            wr32(self, 0u);
        }

        const uint32_t newKey = rd32(phKey);
        wr32(self, newKey);

        /* The original pops ecx from the same stack slot used for phKey. */
        g->ecx = newKey;
    }
    else
    {
        /* On failure the original still pops ecx from the phKey slot. */
        g->ecx = rd32(phKey);
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ed20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t hKey = rd32(sp0 + 4u);
    const uint32_t lpSubKey = rd32(sp0 + 8u);
    const uint32_t samDesired = rd32(sp0 + 12u);

    cow_fn_1000ed20(g, sp0, self, hKey, lpSubKey, samDesired);

    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
