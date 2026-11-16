/* f_0x10041020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10041020(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10044890u), in_eax, self, in_edx, 1, 0);
    t1 = rd32(self + 0x198u);
    wr32(self, COW_IMG(0x1032ad20u));
    wr16(self + 0x176u, 0x1c0u);
    wr32(self + 0x1a8u, 0u);
    t2 = (t1 & 0xffffff00u) | (t1 & 0xf7u);
    wr32(self + 0x198u, t2);
    if (rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xe64u) <= 2u)
    {
        wr32(self + 0x1b8u, 0u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1047bfa8u));
        if ((rd32(eax + 0xdecu) & 0x400u) == 0u)
        {
            wr32(self + 0x1b8u, 2u);
        }
        else
        {
            wr32(self + 0x1b8u, 3u);
        }
    }
    if (rd32(self + 0x1b8u) > 3u) goto L_100410c5;
    eax = rd32(self + 0x1b8u);
    t3 = rd32(COW_IMG(0x100410ccu) + eax * 4u);
    switch (t3 - RD)
    {
    case 0x10041097u: goto L_10041097;
    case 0x100410a8u: goto L_100410a8;
    case 0x100410b9u: goto L_100410b9;
    default: rt_fatal(g, COW_IMG(0x10041090u), "switch");
    }
    return 0;
L_10041097: ;
    wr8(self + 0x1bcu, 1u);
    wr8(self + 0x1bdu, 0u);
    g->edx = 2u;
    return self;
L_100410a8: ;
    wr8(self + 0x1bdu, 1u);
    wr8(self + 0x1bcu, 0u);
    g->edx = 2u;
    return self;
L_100410b9: ;
    wr8(self + 0x1bdu, 2u);
    wr8(self + 0x1bcu, 0u);
L_100410c5: ;
    g->edx = 2u;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10041020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10041020(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
