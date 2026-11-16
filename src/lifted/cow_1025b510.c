/* f_0x1025b510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025b510(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 3u) goto L_1025b56e;
    t1 = rd32(COW_IMG(0x1025b570u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x1025b520u: goto L_1025b520;
    case 0x1025b52bu: goto L_1025b52b;
    case 0x1025b537u: goto L_1025b537;
    case 0x1025b54du: goto L_1025b54d;
    default: rt_fatal(g, COW_IMG(0x1025b519u), "switch");
    }
    return;
L_1025b520: ;
    wr32(COW_IMG(0x10669464u), COW_IMG(0x1038ab08u));
    return;
L_1025b52b: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0) goto L_1025b542;
L_1025b537: ;
    wr32(COW_IMG(0x10669464u), COW_IMG(0x1038a548u));
    return;
L_1025b542: ;
    wr32(COW_IMG(0x10669464u), COW_IMG(0x1038a388u));
    return;
L_1025b54d: ;
    t2 = rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    wr32(COW_IMG(0x10669464u), COW_IMG(0x1038a548u));
    if ((int8_t)t2 >= 0)
    {
        wr32(COW_IMG(0x10669464u), COW_IMG(0x1038a708u));
    }
L_1025b56e: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025b510(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
