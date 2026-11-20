/* f_0x100998d0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   copies a 7-dword record and an optional variable-length block into ebp+0x3c158, then invokes an optional callback or a stored handler.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_100998d0(Guest* g, uint32_t ebp_arg, uint32_t unused_arg, uint32_t eax_arg)
{
    (void)unused_arg;

    uint32_t eax = g->eax;
    uint32_t ecx = g->ecx;
    uint32_t edx = g->edx;
    uint32_t ebx = g->ebx;
    uint32_t esi = g->esi;
    uint32_t edi = g->edi;
    uint32_t ebp = g->ebp;

    ebp = ebp_arg;

    if (ebp == 0u)
    {
        g->edx = edx;
        return (eax & 0xFFFFFF00u) | 1u;
    }

    eax = eax_arg;

    ecx = (ecx & 0xFFFFFF00u) | rd8(eax + 4u);

    if ((uint8_t)ecx != 2u)
    {
        if ((uint8_t)ecx == 3u)
        {
            ecx = rd32(COW_IMG(0x10487e98u));

            if (ecx != 0u)
            {
                eax += 8u;
                cow_cdecl(g, ecx, 1u, eax);
                wr32(COW_IMG(0x10487e98u), 0u);

                g->edx = g->edx;
                return (g->eax & 0xFFFFFF00u) | 1u;
            }
        }

        g->edx = edx;
        return (eax & 0xFFFFFF00u) | 1u;
    }

    ecx = rd32(eax + 0xcu);
    ebx = ebp + 0x3c158u;

    wr32(ebx, ecx);

    edx = rd32(eax + 0x10u);
    esi = eax + 0x14u;
    edi = ebx + 8u;
    ecx = 7u;

    wr32(ebx + 4u, edx);

    for (uint32_t i = 0u; i < ecx; ++i)
    {
        wr32(edi + i * 4u, rd32(esi + i * 4u));
    }

    edx = (edx & 0xFFFFFF00u) | rd8(eax + 9u);

    if ((uint8_t)edx < 0x1au)
    {
        edx &= 0xffu;

        esi = 0xdu;
        ecx = edx + 0xdu;

        if ((int32_t)ecx > 0x1a)
        {
            esi = 0x1au;
            esi -= edx;
        }

        ecx = esi + esi * 2u;
        edx = edx + edx * 2u + 9u;
        ecx <<= 2;
        edi = ebx + edx * 4u;
        edx = ecx;
        esi = eax + 0x30u;
        ecx >>= 2;

        for (uint32_t i = 0u; i < ecx; ++i)
        {
            wr32(edi + i * 4u, rd32(esi + i * 4u));
        }

        ecx = edx;
        ecx &= 3u;

        for (uint32_t i = 0u; i < ecx; ++i)
        {
            wr8(edi + i, rd8(esi + i));
        }
    }

    ecx = 0u;
    ecx = (ecx & 0xFFFFFF00u) | rd8(eax + 9u);
    ecx += 0xdu;

    if ((int32_t)ecx < 0x1a)
    {
        g->edx = edx;
        return (eax & 0xFFFFFF00u) | 1u;
    }

    eax = rd32(ebp + 0x3c150u);

    if (eax == 0u)
    {
        g->edx = edx;
        return 1u;
    }

    edx = rd32(ebp + 0x3c154u);

    cow_cdecl(g, eax, 2u, edx, ebx);

    g->edx = g->edx;
    return (g->eax & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100998d0(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);
    const uint32_t arg2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_100998d0(g, arg0, arg1, arg2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
