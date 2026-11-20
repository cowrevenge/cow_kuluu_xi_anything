/* f_0x10325f1b - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Normalizes a 12-byte value pointed to by param_3 by repeatedly calling FUN_10325ec0 and ___add_12 for each byte of param_1, then packs the result and stores a 16-bit tag at param_3+10.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10325f1b(Guest* g, uint32_t param_1, uint32_t param_2, uint32_t param_3)
{
    const uint32_t local_base = cow_frame(g, g->esp, 0x14u);
    const uint32_t local_10 = local_base;       /* [ebp - 0x10] */
    const uint32_t local_c  = local_base + 4u;  /* [ebp - 0x0c] */
    const uint32_t local_8  = local_base + 8u;  /* [ebp - 0x08] */
    const uint32_t local_4  = local_base + 12u; /* [ebp - 0x04] */

    uint32_t ebx = param_3;
    uint32_t count = param_2;
    uint32_t p1 = param_1;

    wr32(local_4, 0x404eu);
    wr32(ebx, 0u);
    wr32(ebx + 4u, 0u);
    wr32(ebx + 8u, 0u);

    if (count != 0u)
    {
        uint32_t loop_esp = g->esp - 0x20u;

        for (;;)
        {
            wr32(local_10, rd32(ebx));
            wr32(local_c,  rd32(ebx + 4u));
            wr32(local_8,  rd32(ebx + 8u));

            g->esp = loop_esp - 4u;
            cow_cdecl(g, COW_IMG(0x10325ec0u), 1u, ebx);

            g->esp = loop_esp - 8u;
            cow_cdecl(g, COW_IMG(0x10325ec0u), 1u, ebx);

            g->esp = loop_esp - 12u;
            cow_cdecl(g, COW_IMG(0x10325e62u), 2u, ebx, local_10);

            g->esp = loop_esp - 16u;
            cow_cdecl(g, COW_IMG(0x10325ec0u), 1u, ebx);

            wr32(local_c, 0u);
            wr32(local_8, 0u);
            wr32(local_10, (uint32_t)(int32_t)(int8_t)rd8(p1));

            g->esp = loop_esp - 20u;
            cow_cdecl(g, COW_IMG(0x10325e62u), 2u, ebx, local_10);

            p1 += 1u;
            count -= 1u;
            if (count == 0u)
                break;
        }
    }

    for (;;)
    {
        uint32_t v8 = rd32(ebx + 8u);
        if (v8 != 0u)
            break;

        uint32_t v4 = rd32(ebx + 4u);
        uint32_t v0 = rd32(ebx);

        wr32(ebx + 8u, v4 >> 16);
        wr32(ebx + 4u, ((v0 >> 16) | (v4 << 16)));
        wr32(ebx, v0 << 16);
        wr32(local_4, rd32(local_4) + 0xfff0u);
    }

    {
        uint32_t tail_esp = g->esp - 0x1cu;
        for (;;)
        {
            if ((rd32(ebx + 8u) & 0x8000u) != 0u)
                break;

            g->esp = tail_esp - 4u;
            cow_cdecl(g, COW_IMG(0x10325ec0u), 1u, ebx);
            wr32(local_4, rd32(local_4) + 0xffffu);
        }
    }

    wr16(ebx + 0xau, (uint16_t)rd32(local_4));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325f1b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param_1 = rd32(sp0 + 4u);
    const uint32_t param_2 = rd32(sp0 + 8u);
    const uint32_t param_3 = rd32(sp0 + 12u);

    cow_fn_10325f1b(g, param_1, param_2, param_3);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
