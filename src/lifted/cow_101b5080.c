/* f_0x101b5080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101b5080(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 - 3u > 0xc6u) goto L_101b511f;
    t1 = rd32(COW_IMG(0x101b5128u) + rd8(COW_IMG(0x101b5140u) + arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x101b50a1u: goto L_101b50a1;
    case 0x101b50b5u: goto L_101b50b5;
    case 0x101b50c9u: goto L_101b50c9;
    case 0x101b50ddu: goto L_101b50dd;
    case 0x101b50f1u: goto L_101b50f1;
    case 0x101b511fu: goto L_101b511f;
    default: rt_fatal(g, COW_IMG(0x101b509au), "switch");
    }
    return 0;
L_101b50a1: ;
    g->edx = rd32(arg3);
    t2 = rd32(arg3);
    g->esp = sp0;
    cow_thiscall(g, rd32(t2 + 0x3cu), arg3, 1, arg2);
    t3 = g->edx;
    g->edx = t3;
    return 1u;
L_101b50b5: ;
    wr32(arg3 + 0xf0f4u, arg2);
    g->edx = arg2;
    return 1u;
L_101b50c9: ;
    wr32(arg3 + 0xf0f8u, arg2);
    return 1u;
L_101b50dd: ;
    wr32(arg3 + 0xf0fcu, arg2);
    g->edx = arg3;
    return 1u;
L_101b50f1: ;
    if ((int32_t)arg2 < 0)
    {
        eax = arg2;
        goto L_101b5115;
    }
    if ((int32_t)arg2 <= 1) goto L_101b5113;
    if (arg2 != 2u)
    {
        eax = arg2;
        goto L_101b5115;
    }
    wr32(arg3 + 0xf0f4u, 1u);
    return 1u;
L_101b5113: ;
    eax = 0u;
L_101b5115: ;
    wr32(arg3 + 0xf0f4u, eax);
L_101b511f: ;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b5080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b5080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
