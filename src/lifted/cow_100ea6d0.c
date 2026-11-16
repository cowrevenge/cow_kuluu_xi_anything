/* f_0x100ea6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ea6d0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) > 3u) goto L_100ea72d;
    eax = rd8(arg3 + 4u);
    t1 = rd32(COW_IMG(0x100ea768u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x100ea6e5u: goto L_100ea6e5;
    case 0x100ea6f7u: goto L_100ea6f7;
    case 0x100ea708u: goto L_100ea708;
    case 0x100ea71au: goto L_100ea71a;
    default: rt_fatal(g, COW_IMG(0x100ea6deu), "switch");
    }
    return 0;
L_100ea6e5: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9804u, 7u);
L_100ea73c: ;
    wr16(rd32(COW_IMG(0x104dfd98u)) + 0x97f4u, 0u);
    t3 = rd32(COW_IMG(0x104dfd98u));
    wr32(t3 + 0x97f0u, 0u);
    wr8(rd32(COW_IMG(0x104dfd98u)) + 0x97f6u, 0u);
    g->edx = t3;
    return 1u;
L_100ea6f7: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9804u, 8u);
    goto L_100ea73c;
L_100ea708: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9804u, 9u);
    goto L_100ea73c;
L_100ea71a: ;
    t2 = rd32(COW_IMG(0x104dfd98u));
    wr32(t2 + 0x9804u, 0xdu);
    g->edx = t2;
    return (eax & 0xffffff00u) | 1u;
L_100ea72d: ;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x9804u, 6u);
    goto L_100ea73c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ea6d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ea6d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
