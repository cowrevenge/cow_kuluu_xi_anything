/* f_0x100f6b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100f6b40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 > 3u) goto L_100f6be8;
    t1 = rd32(COW_IMG(0x100f6bf4u) + arg2 * 4u);
    switch (t1 - RD)
    {
    case 0x100f6b57u: goto L_100f6b57;
    case 0x100f6b60u: goto L_100f6b60;
    case 0x100f6b69u: goto L_100f6b69;
    case 0x100f6bdfu: goto L_100f6bdf;
    default: rt_fatal(g, COW_IMG(0x100f6b50u), "switch");
    }
    return 0;
L_100f6b57: ;
    return 3u;
L_100f6b60: ;
    return 0x16u;
L_100f6b69: ;
    t2 = rd32(arg1 + 0xbcu);
    t3 = rd32(arg1 + 0xa4u);
    wr8(arg1 + 0x208u, 0u);
    g->eax = t2;
    g->ecx = t3;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_stdcall(g, COW_IMG(0x103110a3u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        ebx = t4;
        goto L_100f6b9b;
    }
    edx = t6;
    g->edx = edx;
    return 0x10u;
L_100f6b9b: ;
    t7 = rd32(arg1 + 0xd0u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t7;
    g->esp = sp0 - 0x1cu;
    t8 = cow_stdcall(g, COW_IMG(0x1031108du), 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd8(arg1 + 0x208u) == 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_100f6bc0;
    }
    edx = t10;
    g->edx = edx;
    return 0x17u;
L_100f6bc0: ;
    t11 = rd32(arg1 + 0xd0u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10311098u), 4, ebx, t11, arg1 + 0x208u, 0x400u);
    t12 = g->edx;
    g->edx = t12;
    return 0x17u;
L_100f6bdf: ;
    return 6u;
L_100f6be8: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6b40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f6b40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
