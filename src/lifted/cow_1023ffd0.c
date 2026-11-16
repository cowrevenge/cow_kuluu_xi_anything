/* f_0x1023ffd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1023ffd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd32(COW_IMG(0x10669078u)) == 0u)
    {
        eax = in_eax;
        goto L_10240011;
    }
    edx = rd32(COW_IMG(0x10669078u));
    if (rd32(self + 0x18u) - 1u > 3u)
    {
        eax = rd32(self + 0x18u) - 1u;
        goto L_1024000a;
    }
    eax = rd32(self + 0x18u) - 1u;
    t1 = rd32(COW_IMG(0x10240014u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1023ffeau: goto L_1023ffea;
    case 0x1023fff2u: goto L_1023fff2;
    case 0x1023fffau: goto L_1023fffa;
    case 0x10240002u: goto L_10240002;
    default: rt_fatal(g, COW_IMG(0x1023ffe3u), "switch");
    }
    return 0;
L_1023ffea: ;
    wr32(edx + 0x2cu, 0xdu);
    return eax;
L_1023fff2: ;
    wr32(edx + 0x2cu, 0xeu);
    return eax;
L_1023fffa: ;
    wr32(edx + 0x2cu, 0xfu);
    return eax;
L_10240002: ;
    wr32(edx + 0x2cu, 0x23u);
    return eax;
L_1024000a: ;
    wr32(edx + 0x2cu, 0xcu);
L_10240011: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023ffd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023ffd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
