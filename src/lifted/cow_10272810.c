/* f_0x10272810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10272810(Guest* g)
{
    double d10;
    double d7;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    wr32(COW_IMG(0x1099bbb0u) + arg1 * 0x38u, rd32(arg2));
    t1 = rd32(arg2 + 4u);
    wr32(COW_IMG(0x1099bbb4u) + arg1 * 0x38u, t1);
    t2 = rd32(arg2 + 8u);
    wr32(COW_IMG(0x1099bbb8u) + arg1 * 0x38u, t2);
    t3 = rd32(arg2 + 0xcu);
    wr32(COW_IMG(0x1099bbbcu) + arg1 * 0x38u, t3);
    if (rd32(COW_IMG(0x1099ccf8u)) != 0u)
    {
        t4 = rd32(COW_IMG(0x1099bb88u) + arg1 * 4u);
        t5 = rd32(COW_IMG(0x1099bbb0u) + arg1 * 0x38u);
        t6 = rd32((uint16_t)t4 * 0x90u + rd32((uint32_t)((int32_t)t4 >> 0x10u) * 0x2cu + rd32(COW_IMG(0x1099b184u)) + 0x28u) + 0x18u);
        d7 = (double)rdf32(COW_IMG(0x1032961cu));
        wr32(t6 + 0x28u, t5);
        t8 = rd32(COW_IMG(0x1099bbb4u) + arg1 * 0x38u);
        wr32(t6 + 0x2cu, t8);
        t9 = rd32(COW_IMG(0x1099bbb8u) + arg1 * 0x38u);
        wr32(t6 + 0x30u, t9);
        d10 = fr(g, d7 - (double)rdf32(arg2 + 0xcu));
        wrf32(t6 + 0x44u, (float)d10);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10272810(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
