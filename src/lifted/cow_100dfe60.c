/* f_0x100dfe60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100dfe60(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if ((int32_t)arg2 >= 0)
        {
            if ((int32_t)arg2 < 8)
            {
                if (arg3 != 0u)
                {
                    wr8(arg1 + arg2 * 0x28u + 0x28u, rd8(arg3 + 0x14u));
                    t1 = rd32(arg3 + 0x18u);
                    wr32(arg1 + arg2 * 0x28u + 0x2cu, t1);
                    t2 = rd32(arg3 + 0x1cu);
                    wr32(arg1 + arg2 * 0x28u + 0x30u, t2);
                    t3 = rd32(arg3 + 0x20u);
                    wr32(arg1 + arg2 * 0x28u + 0x34u, t3);
                    t4 = rd32(arg3 + 0x24u);
                    wr32(arg1 + arg2 * 0x28u + 0x38u, t4);
                    t5 = rd16(arg3 + 0x28u);
                    wr16(arg1 + arg2 * 0x28u + 0x3cu, (uint16_t)t5);
                    t6 = rd8(arg3 + 0x2au);
                    wr8(arg1 + arg2 * 0x28u + 0x3eu, (uint8_t)t6);
                    wr8(arg1 + arg2 * 0x28u + 0x3fu, rd8(arg3 + 0x2bu));
                    t7 = rd32(arg3 + 0x2cu);
                    wr32(arg1 + arg2 * 0x28u + 0x40u, t7);
                    t8 = rd32(arg3 + 0x30u);
                    wr32(arg1 + arg2 * 0x28u + 0x44u, t8);
                    t9 = rd32(arg3 + 0x34u);
                    wr32(arg1 + arg2 * 0x28u + 0x48u, t9);
                    t10 = rd32(arg3 + 0x38u);
                    wr32(arg1 + arg2 * 0x28u + 0x4cu, t10);
                    wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 1u << (arg2 & 0x1fu));
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dfe60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100dfe60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
