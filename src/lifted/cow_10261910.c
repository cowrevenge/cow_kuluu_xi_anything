/* f_0x10261910 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Updates an object's stored argument and data buffer under a critical section, returning 0.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261910(Guest* g, uint32_t self, uint32_t arg2, uint32_t arg3)
{
    uint32_t crit;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t edi;
    uint32_t target;
    uint32_t size;
    uint32_t dest;
    uint32_t src;
    uint32_t n;

    crit = rd32(self + 0x2cu);

    target = rd32(COW_IMG(0x1032918cu));
    cow_stdcall(g, target, 1u, crit);

    /* After the stdcall returns, esp is sp0 - 28, so [esp + 0x24] is sp0 + 8. */
    eax = arg2;
    wr32(self + 0x34u, eax);

    if (eax != 0u)
    {
        ecx = rd32(eax);
        esi = self + 0x38u;

        target = rd32(ecx);
        cow_thiscall(g, target, eax, 3u,
                     eax,
                     COW_IMG(0x1033e7e8u),
                     esi);

        if ((int32_t)eax >= 0)
        {
            esi = rd32(esi);

            edx = rd32(esi);
            target = rd32(edx + 8u);
            cow_stdcall(g, target, 1u, esi);
        }
    }
    else
    {
        wr32(self + 0x38u, 0u);
    }

    eax = rd32(self + 0x30u);
    if (eax != 0u)
    {
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1u, eax);
        wr32(self + 0x30u, 0u);
    }

    /* After the stdcall returns, esp is sp0 - 28, so [esp + 0x28] is sp0 + 12. */
    esi = arg3;
    if (esi != 0u)
    {
        eax = cow_stdcall(g, COW_IMG(0x102661a0u), 1u, esi);

        eax = eax + 1u;
        edi = eax + eax;

        eax = cow_cdecl(g, COW_IMG(0x10311bfbu), 1u, edi);
        wr32(self + 0x30u, eax);

        if (eax != 0u)
        {
            ecx = edi;
            dest = eax;
            eax = ecx;
            src = esi;

            n = ecx >> 2u;
            while (n != 0u)
            {
                wr32(dest, rd32(src));
                dest += 4u;
                src += 4u;
                --n;
            }

            n = eax & 3u;
            while (n != 0u)
            {
                wr8(dest, rd8(src));
                dest += 1u;
                src += 1u;
                --n;
            }
        }
    }

    target = rd32(COW_IMG(0x10329188u));
    cow_stdcall(g, target, 1u, crit);

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261910(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t arg2 = rd32(sp0 + 8u);
    const uint32_t arg3 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10261910(g, self, arg2, arg3);

    g->esp = sp0;
    rt_return(g, result, 12u);
}
/* COW_ADAPTER END */
