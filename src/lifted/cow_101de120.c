/* f_0x101de120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101de120(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd8(self + 0x10u) == 0u)
    {
        ecx = self;
        goto L_101de143;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x10u);
    if (arg1 == 0u)
    {
        ecx = self;
        goto L_101de143;
    }
    if (rd8(self + 0x11u) != rd8(arg1 + 2u))
    {
        ecx = (self & 0xffffff00u) | rd8(arg1 + 2u);
        goto L_101de143;
    }
    g->edx = arg1;
    return 0x80804020u;
L_101de143: ;
    if (rd32(arg2 + 0x14d0u) == 0u) goto L_101de195;
    eax = rd32(arg2 + 0x14d0u);
    if (rd16(eax) == 0u) goto L_101de195;
    if (arg1 == 0u)
    {
        edx = arg1;
        goto L_101de177;
    }
    t1 = (ecx & 0xffff0000u) | rd16(arg1);
    g->edx = arg1;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10131fa0u), rd32(COW_IMG(0x105781a8u)), 1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
        goto L_101de177;
    }
    edx = t3;
    g->edx = edx;
    return 0x80509050u;
L_101de177: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10132050u), rd32(COW_IMG(0x105781a8u)), 1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return (-((uint8_t)t4 != 0u) & 0x100fc0u) - 0x7f7f7f80u;
L_101de195: ;
    g->edx = arg1;
    return 0x80808080u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de120(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
