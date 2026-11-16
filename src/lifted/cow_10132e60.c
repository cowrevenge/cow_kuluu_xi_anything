/* f_0x10132e60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10132e60(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 - 8u > 8u) goto L_10132f35;
    t1 = rd32(COW_IMG(0x10132f38u) + arg2 * 4u - 0x20u);
    switch (t1 - RD)
    {
    case 0x10132e77u: goto L_10132e77;
    case 0x10132e8fu: goto L_10132e8f;
    case 0x10132ea4u: goto L_10132ea4;
    case 0x10132eb9u: goto L_10132eb9;
    case 0x10132eceu: goto L_10132ece;
    case 0x10132ee3u: goto L_10132ee3;
    case 0x10132ef8u: goto L_10132ef8;
    case 0x10132f0du: goto L_10132f0d;
    case 0x10132f35u: goto L_10132f35;
    default: rt_fatal(g, COW_IMG(0x10132e70u), "switch");
    }
    return;
L_10132e77: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 1u);
L_10132f20: ;
    t2 = (arg1 * 0x20u + self & 0xffff0000u) | rd16(arg1 * 0x20u + self + 0x1eau);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10131440u), t2, arg1 * 0x20u + self + 0x1ccu, g->edx, 0, 2, t2, 0x80808080u);
L_10132f35: ;
    return;
L_10132e8f: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 2u);
    goto L_10132f20;
L_10132ea4: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 3u);
    goto L_10132f20;
L_10132eb9: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 4u);
    goto L_10132f20;
L_10132ece: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 5u);
    goto L_10132f20;
L_10132ee3: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 6u);
    goto L_10132f20;
L_10132ef8: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 7u);
    goto L_10132f20;
L_10132f0d: ;
    wr16(arg1 * 0x20u + self + 0x1eau, 8u);
    goto L_10132f20;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132e60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10132e60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
