/* f_0x101af580 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101af580(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101af630u), self, 0);
    if (arg1 == 1u) goto L_101af59e;
    eax = t1;
    if (arg1 == 2u) goto L_101af5ae;
    if (rd8(eax + 0x10u) != 1u) goto L_101af608;
    return 0u;
L_101af59e: ;
    if (arg2 > 5u) goto L_101af608;
    t2 = rd32(COW_IMG(0x101af610u) + arg2 * 4u);
    switch (t2 - RD)
    {
    case 0x101af5aeu: goto L_101af5ae;
    case 0x101af5b7u: goto L_101af5b7;
    case 0x101af5c0u: goto L_101af5c0;
    case 0x101af5dbu: goto L_101af5db;
    case 0x101af5e4u: goto L_101af5e4;
    case 0x101af5edu: goto L_101af5ed;
    default: rt_fatal(g, COW_IMG(0x101af5a7u), "switch");
    }
    return 0;
L_101af5ae: ;
    return 9u;
L_101af5b7: ;
    return 0xau;
L_101af5c0: ;
    return (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) * 8u + 3u;
L_101af5db: ;
    return 6u;
L_101af5e4: ;
    return 8u;
L_101af5ed: ;
    return (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u) * 8u + 3u;
L_101af608: ;
    return rd32(self + 0x2cu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af580(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101af580(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
