/* f_0x1003bd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1003bd90(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 - 0x36u > 6u)
    {
        eax = arg2;
        goto L_1003bdd2;
    }
    t1 = rd32(COW_IMG(0x1003bde8u) + arg2 * 4u - 0xd8u);
    switch (t1 - RD)
    {
    case 0x1003bda3u: goto L_1003bda3;
    case 0x1003bdaau: goto L_1003bdaa;
    case 0x1003bdb1u: goto L_1003bdb1;
    case 0x1003bdb8u: goto L_1003bdb8;
    case 0x1003bdbfu: goto L_1003bdbf;
    case 0x1003bdc6u: goto L_1003bdc6;
    case 0x1003bdcdu: goto L_1003bdcd;
    default: rt_fatal(g, COW_IMG(0x1003bd9cu), "switch");
    }
    return 0;
L_1003bda3: ;
    eax = 0x7eu;
L_1003bdd2: ;
    g->eax = eax;
    g->edx = rd32(arg3);
    t2 = rd32(arg3);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x1d0u), arg3, 2, eax, arg1);
    t4 = g->edx;
    g->edx = t4;
    return t3;
L_1003bdaa: ;
    eax = 0x7fu;
    goto L_1003bdd2;
L_1003bdb1: ;
    eax = 0x66u;
    goto L_1003bdd2;
L_1003bdb8: ;
    eax = 0x67u;
    goto L_1003bdd2;
L_1003bdbf: ;
    eax = 0x68u;
    goto L_1003bdd2;
L_1003bdc6: ;
    eax = 0x69u;
    goto L_1003bdd2;
L_1003bdcd: ;
    eax = 0x6au;
    goto L_1003bdd2;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003bd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003bd90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
