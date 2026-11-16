/* f_0x100a2f70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2f70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg3 + 4u) - 1u > 0xcu)
    {
        eax = rd8(arg3 + 4u) - 1u;
        edx = arg3;
        goto L_100a2fb1;
    }
    eax = rd8(arg3 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x100a2fb4u) + rd8(COW_IMG(0x100a2fc0u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x100a2f8eu: goto L_100a2f8e;
    case 0x100a2fa1u: goto L_100a2fa1;
    case 0x100a2fb1u: edx = arg3; goto L_100a2fb1;
    default: rt_fatal(g, COW_IMG(0x100a2f87u), "switch");
    }
    return 0;
L_100a2f8e: ;
    if (rd32(COW_IMG(0x10487f08u)) == 0u)
    {
        edx = arg3;
        goto L_100a2fb1;
    }
    ecx = rd32(COW_IMG(0x10487f08u));
    g->edx = arg3;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x100a2dd0u), eax, ecx, g->edx, 0, 1, arg3);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_100a2fa1: ;
    if (rd32(COW_IMG(0x10487f08u)) == 0u)
    {
        edx = arg3;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10487f08u));
        g->esp = sp0;
        t2 = cow_call_regs(g, COW_IMG(0x100a2d20u), eax, ecx, arg3, 0, 1, arg3);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
L_100a2fb1: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2f70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2f70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
