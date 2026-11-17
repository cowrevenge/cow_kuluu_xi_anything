/* f_0x101db9e0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   checks whether a short selector is 3 or 4, calls a helper with a corresponding code, then optionally calls a virtual method and returns 1 unless the helper/virtual result indicates otherwise.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_101db9e0(Guest* g, uint32_t param)
{
    uint32_t eax = (uint32_t)(int32_t)(int16_t)param;

    /* 101db9e5: sub eax, 3 */
    eax -= 3u;

    if (eax != 0u)
    {
        /* 101db9ea: dec eax */
        eax -= 1u;

        if (eax != 0u)
        {
            /* 101dba26: xor al, al; ret 8 */
            return eax & 0xFFFFFF00u;
        }

        /* param was 4 */
        cow_cdecl(g, COW_IMG(0x10123a70u), 4u, 0x3Eu, 0xB6u, 4u, 0xFFFFFFFFu);
    }
    else
    {
        /* param was 3 */
        cow_cdecl(g, COW_IMG(0x10123a70u), 4u, 0x3Eu, 0xB5u, 4u, 0xFFFFFFFFu);
    }

    /* 101dba0b: test al, al */
    if ((g->eax & 0xFFu) == 0u)
    {
        /* 101dba26: xor al, al; ret 8 */
        return g->eax & 0xFFFFFF00u;
    }

    /* 101dba0f: mov eax, dword ptr [0x10663468] */
    uint32_t obj = rd32(COW_IMG(0x10663468u));

    /* 101dba14: mov ecx, dword ptr [eax + 0x58] */
    uint32_t ecx = rd32(obj + 0x58u);

    /* 101dba17: mov edx, dword ptr [ecx] */
    uint32_t edx = rd32(ecx);

    /* Preserve the register state the original has at the indirect call. */
    g->eax = obj;
    g->ecx = ecx;
    g->edx = edx;

    /* 101dba19: call dword ptr [edx + 0x54] */
    uint32_t target = rd32(edx + 0x54u);
    cow_thiscall(g, target, ecx, 0u);

    /* 101dba1c: cmp eax, 0x11 */
    if (g->eax == 0x11u)
    {
        /* 101dba26: xor al, al; ret 8 */
        return g->eax & 0xFFFFFF00u;
    }

    /* 101dba21: mov al, 1; ret 8 */
    return (g->eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101db9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd16(sp0 + 4u);

    const uint32_t result = cow_fn_101db9e0(g, param);

    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
