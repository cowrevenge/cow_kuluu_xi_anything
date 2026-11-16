/* f_0x100f4f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f4f60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f5006;
    t1 = rd32(COW_IMG(0x100f500cu) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f4f74u: goto L_100f4f74;
    case 0x100f4f77u: goto L_100f4f77;
    case 0x100f4f7du: goto L_100f4f7d;
    case 0x100f5000u: goto L_100f5000;
    default: rt_fatal(g, COW_IMG(0x100f4f6du), "switch");
    }
    return 0;
L_100f4f74: ;
    return 0u;
L_100f4f77: ;
    return 0x16u;
L_100f4f7d: ;
    t2 = rd32(arg1 + 0xacu);
    wr32(arg1 + 0xb8u, 1u);
    if (t2 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(arg1 + 0x9cu) != 0u)
        {
            eax = rd32(arg1 + 0x9cu);
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, self, in_edx, 1, 1, eax);
            wr32(arg1 + 0x9cu, 0u);
        }
        t3 = rd32(arg1 + 0xacu);
        t4 = rd32(arg1 + 0xa8u);
        t5 = rd32(arg1 + 0xb0u);
        wr32(arg1 + 0x9cu, t3);
        t6 = rd32(arg1 + 0xb4u);
        wr32(arg1 + 0x98u, t4);
        t7 = rd32(arg1 + 0xc0u);
        wr32(arg1 + 0xa0u, t5);
        wr32(arg1 + 0xa4u, t6);
        wr32(arg1 + 0xbcu, t7);
        wr32(arg1 + 0xacu, 0u);
        edx = t5;
    }
    g->edx = edx;
    return 0x17u;
L_100f5000: ;
    return 6u;
L_100f5006: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f4f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f4f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
