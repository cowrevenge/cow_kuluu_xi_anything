/* f_0x102bfa9f - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   unpacks a packed byte buffer into nibbles/2-bit/1-bit values, then updates the header fields.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bfa9f(Guest* g, uint32_t sp0, uint32_t self, uint32_t param2)
{
    (void)g;

    const uint32_t arg1_addr = sp0 + 4u;
    const uint32_t arg2_addr = sp0 + 8u;

    uint32_t cl = rd8(self + 9u);
    if (cl >= 8u)
        return;

    uint32_t eax = rd32(self);

    if (cl == 1u)
    {
        uint32_t edx = rd32(arg2_addr);
        uint32_t ecx = eax - 1u;
        uint32_t esi = ecx >> 3;
        ecx &= 7u;
        esi += edx;
        uint32_t edi = eax + edx - 1u;
        edx = 7u - ecx;

        if (eax != 0u)
        {
            wr32(arg2_addr, eax);
            for (;;)
            {
                uint32_t bl = rd8(esi);
                bl >>= (edx & 0x1fu);
                bl &= 1u;

                uint32_t old_edx = edx;
                wr8(edi, (uint8_t)bl);

                if (old_edx == 7u)
                {
                    edx = 0u;
                    --esi;
                }
                else
                {
                    ++edx;
                }

                --edi;

                uint32_t cnt = rd32(arg2_addr) - 1u;
                wr32(arg2_addr, cnt);
                if (cnt == 0u)
                    break;
            }
        }
    }
    else if (cl == 2u)
    {
        uint32_t edx = rd32(arg2_addr);
        uint32_t ecx = eax - 1u;
        uint32_t esi = ecx >> 2;
        ecx &= 3u;
        esi += edx;
        uint32_t edi = eax + edx - 1u;
        ecx <<= 1;
        edx = 6u - ecx;

        if (eax != 0u)
        {
            wr32(arg2_addr, eax);
            for (;;)
            {
                uint32_t bl = rd8(esi);
                bl >>= (edx & 0x1fu);
                bl &= 3u;

                uint32_t old_edx = edx;
                wr8(edi, (uint8_t)bl);

                if (old_edx == 6u)
                {
                    edx = 0u;
                    --esi;
                }
                else
                {
                    edx += 2u;
                }

                --edi;

                uint32_t cnt = rd32(arg2_addr) - 1u;
                wr32(arg2_addr, cnt);
                if (cnt == 0u)
                    break;
            }
        }
    }
    else if (cl == 4u)
    {
        uint32_t edx = rd32(arg2_addr);
        uint32_t ecx = eax - 1u;
        uint32_t esi = ecx >> 1;
        ecx &= 1u;
        esi += edx;
        uint32_t edi = eax + edx - 1u;
        ecx <<= 2;
        edx = 4u - ecx;

        if (eax != 0u)
        {
            wr32(arg2_addr, eax);
            for (;;)
            {
                uint32_t bl = rd8(esi);
                bl >>= (edx & 0x1fu);
                bl &= 0xFu;

                uint32_t old_edx = edx;
                wr8(edi, (uint8_t)bl);

                if (old_edx == 4u)
                {
                    edx = 0u;
                    --esi;
                }
                else
                {
                    edx = 4u;
                }

                --edi;

                uint32_t cnt = rd32(arg2_addr) - 1u;
                wr32(arg2_addr, cnt);
                if (cnt == 0u)
                    break;
            }
        }
    }

    self = rd32(arg1_addr);

    cl = rd8(self + 0xAu);
    uint32_t dl = cl;

    wr8(self + 9u, 8u);

    uint32_t ecx = cl;
    dl = (dl << 3) & 0xFFu;
    ecx *= eax;

    wr8(self + 0xBu, (uint8_t)dl);
    wr32(self + 4u, ecx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bfa9f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = rd32(sp0 + 4u);
    const uint32_t param2 = rd32(sp0 + 8u);

    cow_fn_102bfa9f(g, sp0, self, param2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
