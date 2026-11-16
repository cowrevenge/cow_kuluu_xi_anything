/* f_0x101965d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101965d0(Guest* g)
{
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 - 0x1bu > 0xb1u)
    {
        edx = in_edx;
        goto L_10196654;
    }
    t1 = rd32(COW_IMG(0x1019665cu) + rd8(COW_IMG(0x10196670u) + arg1 - 0x1bu) * 4u);
    switch (t1 - RD)
    {
    case 0x101965eeu: edx = rd8(COW_IMG(0x10196670u) + arg1 - 0x1bu); goto L_101965ee;
    case 0x10196609u: goto L_10196609;
    case 0x10196624u: edx = rd8(COW_IMG(0x10196670u) + arg1 - 0x1bu); goto L_10196624;
    case 0x1019663fu: goto L_1019663f;
    case 0x10196654u: edx = rd8(COW_IMG(0x10196670u) + arg1 - 0x1bu); goto L_10196654;
    default: rt_fatal(g, COW_IMG(0x101965e7u), "switch");
    }
    return 0;
L_101965ee: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10196730u), 4, COW_IMG(0x10379b50u), 0xeu, arg1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return 1u;
L_10196609: ;
    g->edx = arg2;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10196730u), 4, COW_IMG(0x10379c30u), 0xeu, arg1, arg2);
    t4 = g->edx;
    g->edx = t4;
    return 1u;
L_10196624: ;
    g->edx = edx;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10196730u), 4, COW_IMG(0x10379d10u), 0xeu, arg1, arg2);
    t3 = g->edx;
    g->edx = t3;
    return 1u;
L_1019663f: ;
    g->edx = arg2;
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x10196730u), 4, COW_IMG(0x10379df0u), 0xeu, arg1, arg2);
    t2 = g->edx;
    edx = t2;
L_10196654: ;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101965d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101965d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
