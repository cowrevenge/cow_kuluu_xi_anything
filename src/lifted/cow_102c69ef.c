/* f_0x102c69ef - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   dispatches on the fifth argument to one of several byte-buffer update modes, or reports an unknown mode and zeroes the third buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102c69ef(Guest* g, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
    if (a4 == 0u)
    {
        return;
    }

    if (a4 == 1u)
    {
        uint32_t p_struct = a1;
        uint32_t base = a2;
        uint32_t total = rd32(p_struct + 4u);
        uint32_t head = (uint32_t)(((int32_t)rd8(p_struct + 0xbu) + 7) >> 3);

        if (head < total) /* cmp eax, ecx; jae end: unsigned */
        {
            uint32_t write = base + head;
            uint32_t read = write - head;
            uint32_t n = total - head;

            do
            {
                wr8(write, (uint8_t)(rd8(write) + rd8(read)));
                ++write;
                ++read;
                --n;
            } while (n != 0u);
        }

        return;
    }

    if (a4 == 2u)
    {
        uint32_t p_struct = a1;
        uint32_t dst = a2;
        uint32_t src = a3;
        uint32_t total = rd32(p_struct + 4u);

        if (total != 0u)
        {
            uint32_t i = 0u;
            do
            {
                wr8(dst + i, (uint8_t)(rd8(dst + i) + rd8(src + i)));
                ++i;
            } while (i < total); /* cmp ecx, esi; jb: unsigned */
        }

        return;
    }

    if (a4 == 3u)
    {
        uint32_t p_struct = a1;
        uint32_t dst = a2;
        uint32_t src = a3;
        uint32_t read_base = dst;
        uint32_t head = (uint32_t)(((int32_t)rd8(p_struct + 0xbu) + 7) >> 3);
        uint32_t tail = rd32(p_struct + 4u) - head;

        if (head != 0u)
        {
            uint32_t n = head;
            do
            {
                uint8_t v = rd8(src);
                v >>= 1; /* shr dl, 1: unsigned */
                wr8(dst, (uint8_t)(rd8(dst) + v));
                ++dst;
                ++src;
                --n;
            } while (n != 0u);
        }

        if (tail != 0u)
        {
            uint32_t n = tail;
            do
            {
                uint32_t eax = rd8(read_base) + rd8(src);
                /* The sum is 0..510, so cdq gives edx = 0; keep the exact form anyway. */
                int32_t edx = (int32_t)eax >> 31;
                eax = (uint32_t)((int32_t)eax - edx);
                eax = (uint32_t)((int32_t)eax >> 1); /* sar eax, 1: signed */

                wr8(dst, (uint8_t)(rd8(dst) + (uint8_t)eax));
                ++read_base;
                ++src;
                ++dst;
                --n;
            } while (n != 0u);
        }

        return;
    }

    if (a4 == 4u)
    {
        uint32_t p_struct = a1;
        uint32_t dst = a2;
        uint32_t src = a3;
        uint32_t write_ptr = dst;
        uint32_t read_p3 = dst;
        uint32_t read_p4_i = src;
        uint32_t read_p4_head = src;
        uint32_t head = (uint32_t)(((int32_t)rd8(p_struct + 0xbu) + 7) >> 3);
        uint32_t tail = rd32(p_struct + 4u) - head;

        if (head != 0u)
        {
            uint32_t n = head;
            do
            {
                wr8(dst, (uint8_t)(rd8(dst) + rd8(src)));
                ++dst;
                ++src;
                --n;
            } while (n != 0u);

            write_ptr = dst;
            read_p4_head = src;
        }

        if (tail != 0u)
        {
            uint32_t n = tail;
            do
            {
                uint32_t p3_byte = rd8(read_p3);
                uint32_t p4_head_byte = rd8(read_p4_head);
                uint32_t p4_byte = rd8(read_p4_i);

                ++read_p3;
                ++read_p4_head;
                ++read_p4_i;

                uint32_t eax = p4_head_byte - p4_byte;
                uint32_t edx = p3_byte - p4_byte;

                uint32_t abs_eax;
                if ((int32_t)eax < 0)
                {
                    abs_eax = (uint32_t)(-(int32_t)eax);
                }
                else
                {
                    abs_eax = eax;
                }

                uint32_t abs_edx;
                if ((int32_t)edx < 0)
                {
                    abs_edx = (uint32_t)(-(int32_t)edx);
                }
                else
                {
                    abs_edx = edx;
                }

                uint32_t sum = eax + edx;
                if ((int32_t)sum < 0)
                {
                    sum = (uint32_t)(-(int32_t)sum);
                }

                uint32_t chosen = p3_byte;

                if ((int32_t)abs_eax > (int32_t)abs_edx ||
                    (int32_t)abs_eax > (int32_t)sum)
                {
                    chosen = p4_head_byte;

                    if ((int32_t)abs_edx > (int32_t)sum)
                    {
                        chosen = p4_byte;
                    }
                }

                wr8(write_ptr, (uint8_t)(rd8(write_ptr) + (uint8_t)chosen));
                ++write_ptr;
                --n;
            } while (n != 0u);
        }

        return;
    }

    cow_cdecl(g, COW_IMG(0x102bca0au), 2u, a0, COW_IMG(0x103c9498u));
    wr8(a2, 0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c69ef(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t a0 = rd32(sp0 + 4u);
    const uint32_t a1 = rd32(sp0 + 8u);
    const uint32_t a2 = rd32(sp0 + 12u);
    const uint32_t a3 = rd32(sp0 + 16u);
    const uint32_t a4 = rd32(sp0 + 20u);

    cow_fn_102c69ef(g, a0, a1, a2, a3, a4);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
