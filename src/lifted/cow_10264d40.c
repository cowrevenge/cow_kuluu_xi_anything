/* f_0x10264d40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10264d40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0u) goto L_10264d58;
    return 0x80004003u;
L_10264d58: ;
    if (arg3 != 0u) goto L_10264d6c;
    return 0x80004003u;
L_10264d6c: ;
    if (arg1 == 0xcu)
    {
        ebp = 0u;
    }
    else
    {
        ebp = arg1 + 4u;
    }
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, ebp);   /* kernel32.dll!EnterCriticalSection */
    wr32(arg3, 0u);
    wr32(arg3 + 4u, 0u);
    wr32(arg3 + 8u, 0u);
    wr32(arg3 + 0xcu, 0u);
    if (rd32(arg2 + 8u) == 1u)
    {
        loc_14 = ebp;
        goto L_10264db3;
    }
    eax = rd32(arg2 + 8u);
    loc_14 = ebp;
    g->edx = arg3;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t1 = g->edx;
    g->edx = t1;
    return 0x8004020eu;
L_10264db3: ;
    if (rd32(arg1 + 0x44u) == 0u) goto L_10264dcc;
    eax = rd32(arg1 + 0x44u);
    g->edx = arg3;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t2 = g->edx;
    g->edx = t2;
    return 0x8004020fu;
L_10264dcc: ;
    if (rd32(arg1 + 0x30u) == rd32(arg1 + 0x20u))
    {
        edx = rd32(arg1 + 0x20u);
        goto L_10264de8;
    }
    eax = rd32(arg1 + 0x30u);
    edx = rd32(arg1 + 0x20u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t3 = g->edx;
    g->edx = t3;
    return 0x80040210u;
L_10264de8: ;
    t4 = rd32(arg2 + 4u);
    wr32(arg1 + 0x34u, t4);
    wr32(arg3 + 4u, t4);
    t5 = rd32(arg2);
    wr32(arg1 + 0x2cu, t5);
    wr32(arg3, t5);
    t6 = rd32(arg2 + 8u);
    wr32(arg1 + 0x38u, t6);
    wr32(arg3 + 8u, t6);
    t7 = rd32(arg2 + 0xcu);
    wr32(arg1 + 0x3cu, t7);
    wr32(arg3 + 0xcu, t7);
    wr32(arg1 + 0x40u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, loc_14);   /* kernel32.dll!LeaveCriticalSection */
    t8 = g->edx;
    g->edx = t8;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264d40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264d40(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
