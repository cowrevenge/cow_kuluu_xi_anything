/* f_0x10191a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10191a40(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t self = g->ecx;

    if (rd32(self + 4u) - 0xeu > 0x14u)
    {
        eax = rd32(self + 4u) - 0xeu;
        goto L_10191a66;
    }
    eax = rd32(self + 4u) - 0xeu;
    t1 = rd32(COW_IMG(0x10191a6cu) + rd8(COW_IMG(0x10191a7cu) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10191a5au: goto L_10191a5a;
    case 0x10191a63u: goto L_10191a63;
    case 0x10191a66u: goto L_10191a66;
    default: rt_fatal(g, COW_IMG(0x10191a53u), "switch");
    }
    return 0;
L_10191a5a: ;
    return (rd32(self + 0xcu) & 0xffffff00u) | rd32(self + 0xcu) == 0u;
L_10191a63: ;
    return eax & 0xffffff00u;
L_10191a66: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10191a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10191a40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
