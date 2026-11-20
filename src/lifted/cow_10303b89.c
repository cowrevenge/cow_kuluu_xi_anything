/* f_0x10303b89 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   initializes/repairs an object from a 17-byte count array and a 16-byte code array.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10303b89(Guest* g, uint32_t sp0, uint32_t param1, uint32_t param2, uint32_t param3)
{
    (void)g;

    uint32_t p3 = param3;

    if (rd32(p3) == 0u)
    {
        uint32_t ecx = rd32(param1 + 4u);
        uint32_t target = rd32(ecx);
        uint32_t res = cow_cdecl(g, target, 3u, param1, 1u, 0x5d4u);
        wr32(p3, res);
    }

    uint32_t obj = rd32(p3);
    uint32_t ebx = param2;

    wr32(obj + 0xd0u, ebx);

    /* Stack buffers. They are below the returned ESP, but we must keep their contents
       because later code reads them and they can affect observable stores. */
    unsigned char buf[0x2000u];
    uint32_t arr[0x2000u];   /* arr[k] == dword at [ebp - 0x51c + 4*k] */

    uint32_t total = 0u;

    /* First loop: build buf[] from byte counts at ebx[1..16].
       [ebp+0x10] is the live third-argument slot; keep its final value separately. */
    uint32_t counter1 = 1u;
    for (;;)
    {
        uint32_t cnt = (uint32_t)rd8(ebx + counter1);
        uint32_t cur = total;

        if ((int32_t)cnt >= 1)
        {
            uint32_t dwords = cnt >> 2u;
            uint32_t bytes = cnt & 3u;
            uint32_t pattern = (counter1 & 0xffu) * 0x01010101u;
            uint32_t pos = cur;

            for (uint32_t k = 0u; k < dwords; ++k)
            {
                buf[pos + 0u] = (unsigned char)(pattern & 0xffu);
                buf[pos + 1u] = (unsigned char)((pattern >> 8) & 0xffu);
                buf[pos + 2u] = (unsigned char)((pattern >> 16) & 0xffu);
                buf[pos + 3u] = (unsigned char)((pattern >> 24) & 0xffu);
                pos += 4u;
            }

            for (uint32_t k = 0u; k < bytes; ++k)
            {
                buf[pos++] = (unsigned char)(counter1 & 0xffu);
            }

            total = cur + cnt;
        }

        ++counter1;
        if (counter1 > 0x10u)
            break;
    }

    buf[total] = 0u;

    /* Second loop: populate arr[] while scanning buf[] as signed bytes. */
    int32_t edi = (int32_t)(signed char)buf[0];
    uint32_t ecx = 0u;
    uint32_t edx = 0u;

    if (buf[0] != 0u)
    {
        int32_t eax = (int32_t)(signed char)buf[0];

        for (;;)
        {
            if (eax == edi)
            {
                eax = (int32_t)(signed char)buf[ecx + 1u];
                arr[ecx] = edx;
                ++ecx;
                ++edx;
                continue;
            }

            edx <<= 1;

            if (buf[ecx] == 0u)
                break;

            ++edi;
            eax = (int32_t)(signed char)buf[ecx];
        }
    }

    /* Third loop: fill descriptor table at obj+0x48. */
    ecx = 0u;
    edx = 1u;
    uint32_t dst = obj + 0x48u;

    for (;;)
    {
        uint32_t len = (uint32_t)rd8(ebx + edx);

        if (len == 0u)
        {
            wr32(dst, 0xffffffffu);
        }
        else
        {
            uint32_t v0 = arr[ecx];

            wr32(dst + 0x48u, ecx);
            wr32(dst - 0x44u, v0);

            ecx += len;

            uint32_t v1 = (ecx == 0u) ? 0u : arr[ecx - 1u];
            wr32(dst, v1);
        }

        ++edx;
        dst += 4u;

        if (edx > 0x10u)
            break;
    }

    /* Clear obj+0xd4[0x100], set obj+0x88. */
    total = 0u;

    edx = 0u;
    ++edx;

    wr32(obj + 0x88u, 0xfffffu);

    uint32_t clear = obj + 0xd4u;
    for (uint32_t k = 0u; k < 0x100u; ++k)
    {
        wr32(clear, 0u);
        clear += 4u;
    }

    /* Fifth loop: outer counter is stored in the live [ebp+0x10] slot. */
    uint32_t counter5 = 1u;
    int32_t shift = 7;

    for (;;)
    {
        uint32_t ptr = counter5 + ebx;
        uint32_t limit_byte = (uint32_t)rd8(ptr);

        if ((int32_t)limit_byte >= 1)
        {
            uint32_t local_10 = edx;
            uint32_t saved_ptr = ptr;
            uint32_t count = edx << ((uint32_t)shift & 31u);
            uint32_t src = param2 + total + 0x11u;

            for (;;)
            {
                uint32_t base = arr[total] << ((uint32_t)shift & 31u);

                if ((int32_t)count > 0)
                {
                    uint32_t dst_byte = obj + base + 0x4d4u;
                    uint32_t dst_word = obj + base * 4u + 0xd4u;
                    uint32_t reps = count;

                    for (;;)
                    {
                        wr32(dst_word, counter5);
                        dst_word += 4u;

                        uint8_t b = rd8(src);
                        wr8(dst_byte, b);
                        dst_byte += 1u;

                        if (reps == 1u)
                            break;
                        --reps;
                    }
                }

                ++local_10;
                ++total;
                ++src;

                uint32_t n = (uint32_t)rd8(saved_ptr);
                if ((int32_t)local_10 > (int32_t)n)
                    break;
            }

            ebx = param2;
            edx = 0u;
            ++edx;
        }

        ++counter5;
        --shift;

        if (shift < 0)
            break;
    }

    /* [ebp+0x10] is the third stack-argument slot at sp0 + 12.
       The original leaves it equal to the final outer counter value. */
    wr32(sp0 + 12u, counter5);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10303b89(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);

    cow_fn_10303b89(g, sp0, a0, a1, a2);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
