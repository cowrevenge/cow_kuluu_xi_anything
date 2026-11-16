/* f_0x1020ff40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1020ff40(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd16(arg1) < 513)
    {
        eax = rd16(arg1);
        goto L_1020ff65;
    }
    eax = rd16(arg1);
    if ((int32_t)eax > 515) goto L_1020ff65;
    return 0x80404040u;
L_1020ff65: ;
    if (rd8(arg1 + 8u) != 0x19u) goto L_1020ff75;
    return 0x80404040u;
L_1020ff75: ;
    t1 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x10131f10u), rd32(COW_IMG(0x105781a8u)), in_edx, 2, t1, 0u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u) goto L_1020ff94;
    edx = t3;
    g->edx = edx;
    return 0x80404040u;
L_1020ff94: ;
    if ((rd32(rd32(arg2 + 0x14bcu)) >> 8u & 0x10u) == 0u)
    {
        eax = rd32(rd32(arg2 + 0x14bcu));
        edx = rd32(arg2 + 0x14bcu);
        goto L_1020ffaf;
    }
    edx = rd32(arg2 + 0x14bcu);
    g->edx = edx;
    return 0x80404040u;
L_1020ffaf: ;
    if (rd8(self + 0x10u) == 0u) goto L_1020ffc5;
    eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
    if (rd8(self + 0x11u) == rd8(arg1 + 2u))
    {
        eax = 0x80804020u;
        goto L_1020ffca;
    }
L_1020ffc5: ;
    eax = 0x80808080u;
L_1020ffca: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020ff40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020ff40(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
