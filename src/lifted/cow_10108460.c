/* f_0x10108460 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Inserts a new node into the doubly-linked list rooted at param_2, using param_1 as the size/throw parameter, then fills the node with 0x55 and 0xcd patterns and returns the node pointer in eax (with e

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10108460(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2)
{
    uint32_t ebx = param2;
    uint32_t esi = rd32(param2 + 4u);
    uint32_t eax;
    uint32_t edx;
    uint32_t ecx;

    if (esi != 0u && rd16(esi + 8u) != 0u)
    {
        for (;;)
        {
            eax = cow_thiscall(g, COW_IMG(0x10108990u), esi, 1u, param1);
            if (eax != 0u)
                goto lab_10108539;

            ebx = esi;
            esi = rd32(esi + 4u);
            if (esi == 0u)
                break;
        }

        if (eax != 0u)
            goto lab_10108539;
    }

    eax = rd32(param2 + 8u);
    if (eax != 0u)
    {
        ecx = (uint32_t)rd16(param2 + 0x10u);
        eax = cow_cdecl(g, eax, 1u, ecx);
    }
    else
    {
        edx = (uint32_t)rd16(param2 + 0x10u);
        eax = cow_cdecl(g, COW_IMG(0x10312fd6u), 1u, edx);
    }

    esi = eax;
    if (esi == 0u)
    {
        const uint32_t buf = cow_frame(g, sp0, 16u);
        wr32(buf + 8u, (uint32_t)rd16(param2 + 0x10u));
        wr32(buf, 0u);
        wr32(buf + 4u, param1);
        cow_stdcall(g, COW_IMG(0x10315aaeu), 2u, buf, COW_IMG(0x1034b694u));
    }

    ecx = (uint32_t)rd16(param2 + 0x10u);
    cow_thiscall(g, COW_IMG(0x101086c0u), esi, 2u, param2, ecx);

    wr32(esi, ebx);
    edx = rd32(ebx + 4u);
    wr32(esi + 4u, edx);
    wr32(ebx + 4u, esi);

    eax = rd32(esi + 4u);
    if (eax != 0u)
        wr32(eax, esi);

    eax = cow_thiscall(g, COW_IMG(0x10108990u), esi, 1u, param1);
    if (eax == 0u)
    {
        const uint32_t buf = cow_frame(g, sp0, 20u);
        wr32(buf + 8u, (uint32_t)rd16(param2 + 0x10u));
        wr32(buf, 1u);
        wr32(buf + 4u, param1);
        cow_stdcall(g, COW_IMG(0x10315aaeu), 2u, buf, COW_IMG(0x1034b694u));
    }

lab_10108539:
    edx = eax + 8u;
    ecx = (uint32_t)rd16(eax + 6u);
    ecx = ecx - 8u;

    {
        uint32_t edi = edx;
        uint32_t cnt = ecx >> 2;
        while (cnt != 0u)
        {
            wr32(edi, 0x55555555u);
            edi += 4u;
            --cnt;
        }
        cnt = ecx & 3u;
        while (cnt != 0u)
        {
            wr8(edi, 0x55u);
            ++edi;
            --cnt;
        }
    }

    {
        uint32_t edi = edx;
        uint32_t cnt = param1 >> 2;
        while (cnt != 0u)
        {
            wr32(edi, 0xcdcdcdcdu);
            edi += 4u;
            --cnt;
        }
        cnt = param1 & 3u;
        while (cnt != 0u)
        {
            wr8(edi, 0xcd);
            ++edi;
            --cnt;
        }
    }

    g->edx = edx;
    return edx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108460(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param1 = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10108460(g, sp0, param1, param2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
