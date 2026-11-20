/* f_0x10315210 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   strchr-like scan for a byte value, returning the matching address in eax or 0, while preserving the original edx side effect.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_10315210(Guest* g, uint32_t ptr, uint32_t ch)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t edi;
    uint32_t block;

    ch &= 0xFFu;

    eax = ch;
    ebx = ch;
    eax <<= 8;
    edx = ptr;

    while ((edx & 3u) != 0u)
    {
        uint32_t cl = rd8(edx);
        edx = edx + 1u;

        if ((cl & 0xFFu) == (ebx & 0xFFu))
        {
            /* 0x10315200: pop ebx; lea eax, [edx - 1]; ret */
            g->edx = edx;
            return edx - 1u;
        }

        if ((cl & 0xFFu) == 0u)
        {
            /* 0x10315284: pop ebx; xor eax, eax; ret */
            g->edx = edx;
            return 0u;
        }

        if ((edx & 3u) == 0u)
            break;
    }

    ebx = ebx | eax;

    eax = ebx;
    ebx <<= 16;
    ebx = ebx | eax;

    for (;;)
    {
        block = rd32(edx);

        ecx = block;
        edi = 0x7EFEEFFu;
        eax = block;
        esi = edi;

        ecx = ecx ^ ebx;
        esi = esi + eax;
        edi = edi + ecx;
        ecx = ecx ^ 0xFFFFFFFFu;
        eax = eax ^ 0xFFFFFFFFu;
        ecx = ecx ^ edi;
        eax = eax ^ esi;

        edx = edx + 4u;

        ecx = ecx & 0x81010100u;
        if (ecx != 0u)
        {
            eax = rd32(edx - 4u);

            if ((eax & 0xFFu) == (ebx & 0xFFu))
            {
                /* 0x103152c5: lea eax, [edx - 4]; pop esi; pop edi; pop ebx; ret */
                g->edx = edx;
                return edx - 4u;
            }

            if ((eax & 0xFFu) == 0u)
            {
                /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
                g->edx = edx;
                return 0u;
            }

            if (((eax >> 8) & 0xFFu) == (ebx & 0xFFu))
            {
                /* 0x103152be: lea eax, [edx - 3]; pop esi; pop edi; pop ebx; ret */
                g->edx = edx;
                return edx - 3u;
            }

            if (((eax >> 8) & 0xFFu) == 0u)
            {
                /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
                g->edx = edx;
                return 0u;
            }

            eax >>= 16;

            if ((eax & 0xFFu) == (ebx & 0xFFu))
            {
                /* 0x103152b7: lea eax, [edx - 2]; pop esi; pop edi; pop ebx; ret */
                g->edx = edx;
                return edx - 2u;
            }

            if ((eax & 0xFFu) == 0u)
            {
                /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
                g->edx = edx;
                return 0u;
            }

            if (((eax >> 8) & 0xFFu) == (ebx & 0xFFu))
            {
                /* 0x103152b0: lea eax, [edx - 1]; pop esi; pop edi; pop ebx; ret */
                g->edx = edx;
                return edx - 1u;
            }

            if (((eax >> 8) & 0xFFu) == 0u)
            {
                /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
                g->edx = edx;
                return 0u;
            }

            continue;
        }

        eax = eax & 0x81010100u;
        if (eax == 0u)
            continue;

        eax = eax & 0x01010100u;
        if (eax != 0u)
        {
            /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
            g->edx = edx;
            return 0u;
        }

        esi = esi & 0x80000000u;
        if (esi != 0u)
            continue;

        /* 0x10315282: pop esi; pop edi; pop ebx; xor eax, eax; ret */
        g->edx = edx;
        return 0u;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10315210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t ptr = rd32(sp0 + 4u);
    const uint32_t ch  = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_10315210(g, ptr, ch);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
