/* f_0x10073e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10073e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg4 != 0xffffffffu) goto L_10073e76;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10073ba0u), 3, arg1, arg2, arg3);
    return arg1;
L_10073e76: ;
    if (arg2 != 0u) goto L_10073eb3;
    if (rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u) == 0u) goto L_10073ea4;
    ecx = rd32(rd32(rd32(COW_IMG(0x1047d124u))) + 0x14u);
L_10073e92: ;
    if ((rd32(rd32(ecx) + 0x20u) & arg4) == (arg3 & arg4)) goto L_10073f06;
    eax = rd32(ecx);
    if (rd32(eax + 0x2cu) != 0u)
    {
        ecx = rd32(eax + 0x2cu);
        goto L_10073e92;
    }
L_10073ea4: ;
    wr32(arg1, 0u);
    return arg1;
L_10073eb3: ;
    if (rd32(COW_IMG(0x1047cf80u) + arg2 * 4u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf80u) + arg2 * 4u);
        eax = rd32(eax);
    }
    if (eax == 0u) goto L_10073ea4;
L_10073ec8: ;
    if ((arg3 & arg4) == 0u) goto L_10073f03;
    if ((rd32(eax + 0x20u) & arg4) == (arg3 & arg4)) goto L_10073ef5;
    if (rd32(eax + 0x10u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax + 0x10u);
        eax = rd32(eax);
    }
    if (eax != 0u) goto L_10073ec8;
    wr32(arg1, 0u);
    return arg1;
L_10073ef5: ;
    t1 = rd32(eax + 0x14u);
    wr32(arg1, t1);
    return arg1;
L_10073f03: ;
    ecx = rd32(eax + 0x14u);
L_10073f06: ;
    wr32(arg1, ecx);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10073e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10073e50(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
