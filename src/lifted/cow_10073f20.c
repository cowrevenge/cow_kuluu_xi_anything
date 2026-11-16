/* f_0x10073f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10073f20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg5 != 0xffffffffu) goto L_10073f4d;
    g->edx = arg3;
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x10073c30u), 4, arg1, arg2, arg3, arg4);
    t1 = g->edx;
    g->edx = t1;
    return arg1;
L_10073f4d: ;
    if (arg3 != 0u) goto L_10073f84;
    if (rd32(arg2 + 0x14u) == 0u) goto L_10073fd5;
    ecx = rd32(arg2 + 0x14u);
L_10073f66: ;
    if ((rd32(rd32(ecx) + 0x20u) & arg5) == (arg4 & arg5)) goto L_10073fac;
    eax = rd32(ecx);
    if (rd32(eax + 0x2cu) != 0u)
    {
        ecx = rd32(eax + 0x2cu);
        goto L_10073f66;
    }
    ecx = rd32(eax + 0x2cu);
    wr32(arg1, ecx);
    g->edx = arg4 & arg5;
    return arg1;
L_10073f84: ;
    if ((rd32(arg2 + 0x24u) & 0x7fu) == arg3) goto L_10073fb8;
    if (rd32(arg2 + 0x14u) == 0u)
    {
        ecx = rd32(arg2 + 0x14u);
        goto L_10073fac;
    }
    ecx = rd32(arg2 + 0x14u);
L_10073f99: ;
    if ((rd32(rd32(ecx) + 0x24u) & 0x7fu) == arg3) goto L_10073fb8;
    ecx = rd32(ecx);
    if (rd32(ecx + 0x2cu) != 0u)
    {
        ecx = rd32(ecx + 0x2cu);
        goto L_10073f99;
    }
    ecx = rd32(ecx + 0x2cu);
L_10073fac: ;
    wr32(arg1, ecx);
    g->edx = arg4 & arg5;
    return arg1;
L_10073fb8: ;
    if (rd32(arg2 + 0x14u) == 0u) goto L_10073fd5;
    ecx = rd32(arg2 + 0x14u);
L_10073fbf: ;
    if ((arg4 & arg5) == 0u) goto L_10073fac;
    if ((rd32(rd32(ecx) + 0x20u) & arg5) == (arg4 & arg5)) goto L_10073fac;
    eax = rd32(ecx);
    if (rd32(eax + 0x10u) != 0u)
    {
        ecx = rd32(eax + 0x10u);
        goto L_10073fbf;
    }
L_10073fd5: ;
    wr32(arg1, 0u);
    g->edx = arg4 & arg5;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073f20(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
