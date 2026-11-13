/* f_0x101284f0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   parses a control-character string into an array of signed 16-bit values, optionally copying plain characters to a secondary buffer, and returns the number of values produced.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=5 */
uint32_t cow_fn_101284f0(Guest* g, uint32_t param1, uint32_t param2, uint32_t param3, uint32_t param4, uint32_t param5)
{
    uint32_t eax;

    /* 101284f1: mov ebp, [esp+0xc]  -> second stack argument */
    if (param2 == 0u)
    {
        /* 101284f9: xor eax, eax */
        eax = 0u;
        return eax;
    }

    /* 101284fd: mov eax, [esp+0x10] -> third stack argument */
    eax = param3;
    if (eax == 0u)
    {
        return eax;
    }

    {
        uint32_t in = param1;
        uint32_t out = param2;
        uint32_t count = 0u;
        uint32_t flag = 0u;
        uint32_t dst = param4;
        uint32_t rem = param5;

        if (param3 != 1u)
        {
            for (;;)
            {
                uint32_t c = rd8(in);
                uint32_t uVar7 = count;

                if (c == 0u)
                {
                    break;
                }

                if (c == 0x7fu)
                {
                    uint32_t b1 = rd8(in + 1u);
                    wr16(out, (uint16_t)(0u - (uint16_t)b1));

                    switch ((int8_t)b1)
                    {
                    case '1':
                    case '2':
                    case '3':
                    case '7':
                        in += 2u;
                        break;
                    case '4':
                    case '5':
                    case '6':
                        in += 3u;
                        break;
                    case '8':
                        in += 4u;
                        break;
                    case -5:
                        in += 2u;
                        flag = 0u;
                        break;
                    case -4:
                        in += 2u;
                        flag = 1u;
                        break;
                    default:
                        in += 1u;
                        break;
                    }
                }
                else if (c == 0x1eu)
                {
                    uint32_t b1 = rd8(in + 1u);
                    in += 2u;
                    wr16(out, (uint16_t)(0u - 0x100u - (uint16_t)b1));
                }
                else if (c == 0x1fu)
                {
                    uint32_t b1 = rd8(in + 1u);
                    in += 2u;
                    wr16(out, (uint16_t)(0u - 0x200u - (uint16_t)b1));
                }
                else
                {
                    uint32_t len;
                    uint32_t val;

                    len = cow_cdecl(g, COW_IMG(0x1011da80u), 1u, in);
                    val = cow_cdecl(g, COW_IMG(0x1011d940u), 1u, in);

                    wr16(out, (uint16_t)val);

                    if (flag != 0u && dst != 0u && rem != 0u)
                    {
                        wr8(dst, (uint8_t)c);
                        dst += 1u;
                        rem -= 1u;
                    }

                    in += len;
                }

                out += 2u;
                count = uVar7 + 1u;

                if (!(count < (uint32_t)(param3 - 1u)))
                {
                    break;
                }
            }
        }

        if (dst != 0u)
        {
            wr8(dst, 0u);
        }

        wr16(out, 0u);

        eax = count;
        return eax;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101284f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t p1 = rd32(sp0 + 4u);
    const uint32_t p2 = rd32(sp0 + 8u);
    const uint32_t p3 = rd32(sp0 + 12u);
    const uint32_t p4 = rd32(sp0 + 16u);
    const uint32_t p5 = rd32(sp0 + 20u);

    const uint32_t result = cow_fn_101284f0(g, p1, p2, p3, p4, p5);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
