/* f_0x10291f60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   unlinks a matching child from a parent's linked list; on failure it reports an error through FUN_102858b0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10291f60(Guest* g, uint32_t parent, uint32_t child)
{
    const uint32_t sp0 = g->esp;

    const uint32_t eax_entry = g->eax;
    const uint32_t ecx_entry = g->ecx;
    const uint32_t edx_entry = g->edx;
    const uint32_t ebx_entry = g->ebx;
    const uint32_t esi_entry = g->esi;
    const uint32_t edi_entry = g->edi;
    const uint32_t ebp_entry = g->ebp;

    (void)eax_entry;
    (void)ebx_entry;
    (void)esi_entry;
    (void)edi_entry;
    (void)ebp_entry;

    uint32_t eax = rd32(parent + 0x6cu);
    uint32_t dl = 0u;

    if (eax != 0u)
    {
        for (;;)
        {
            if (eax == child)
            {
                uint32_t ecx = rd32(eax + 0x70u);
                dl = 0xffu;

                if (ecx == 0u)
                {
                    wr32(eax + 0x70u, 0u);
                }
                else
                {
                    ecx = rd32(ecx + 0x70u);
                    wr32(eax + 0x70u, ecx);
                }
            }

            eax = rd32(eax + 0x70u);
            if (eax == 0u)
                break;
        }

        if (dl != 0u)
        {
            wr32(child + 0x68u, 0u);
            wr32(child + 0x70u, 0u);

            g->eax = 0u;
            g->ecx = ecx_entry;
            g->edx = (edx_entry & 0xffffff00u) | 0xffu;
            g->ebx = 0u;
            g->esi = child;
            g->edi = parent;
            g->ebp = ebp_entry;
            return 0u;
        }
    }

    /*
     * The original has already pushed ebx, esi, and edi before reaching the
     * error path.  The two calls also leave the first call's three arguments
     * on the stack until after the second call, then pop 0x18 bytes.  Match
     * those stack-pointer positions because the callee can observe them.
     */
    g->eax = 0u;
    g->ecx = ecx_entry;
    g->edx = edx_entry & 0xffffff00u;
    g->ebx = 0u;
    g->esi = child;
    g->edi = parent;
    g->ebp = ebp_entry;

    g->esp = sp0 - 12u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
              COW_IMG(0x103b379cu),
              COW_IMG(0x103baf34u),
              0x141u);

    g->ebx = 0u;
    g->esi = child;
    g->edi = parent;
    g->ebp = ebp_entry;

    g->esp = sp0 - 24u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
              COW_IMG(0x103bb0a4u),
              parent,
              child);

    g->esp = sp0;

    g->ebx = ebx_entry;
    g->esi = esi_entry;
    g->edi = edi_entry;
    g->ebp = ebp_entry;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t parent = rd32(sp0 + 4u);
    const uint32_t child = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10291f60(g, parent, child);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
