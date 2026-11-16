/* f_0x101293f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101293f0(Guest* g)
{
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 > 0xau) goto L_10129456;
    t1 = rd32(COW_IMG(0x1012945cu) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x10129400u: goto L_10129400;
    case 0x10129405u: goto L_10129405;
    case 0x1012940eu: goto L_1012940e;
    case 0x10129417u: goto L_10129417;
    case 0x10129420u: goto L_10129420;
    case 0x10129429u: goto L_10129429;
    case 0x10129432u: goto L_10129432;
    case 0x1012943bu: goto L_1012943b;
    case 0x10129444u: goto L_10129444;
    case 0x1012944du: goto L_1012944d;
    default: rt_fatal(g, COW_IMG(0x101293f9u), "switch");
    }
    return 0;
L_10129400: ;
    return (arg1 & 0xffffff00u) | 0x64u;
L_10129405: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64023u);
L_1012940e: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64024u);
L_10129417: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64025u);
L_10129420: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64028u);
L_10129429: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64029u);
L_10129432: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64027u);
L_1012943b: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64020u);
L_10129444: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64022u);
L_1012944d: ;
    return (arg1 & 0xffffff00u) | rd8(self + 0x64021u);
L_10129456: ;
    return arg1 & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101293f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101293f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
