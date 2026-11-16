/* f_0x1013a070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_1013a070(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        goto L_1013a0c9;
    }
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057847cu));
        goto L_1013a0c9;
    }
    eax = rd32(COW_IMG(0x1057847cu));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1013a060u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_1013a0c9;
    }
    eax = t1;
    edx = t2;
    if (rd8(self + 0x18u) == 0u) goto L_1013a099;
    eax = (eax & 0xffffff00u) | rd8(self + 0x18u);
    return (eax & 0xffffff00u) | 1u;
L_1013a099: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x1013a470u), rd32(COW_IMG(0x105781f8u)), 0);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1013a0bb;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10150d60u), rd32(COW_IMG(0x1057847cu)), 0);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_1013a0bb;
    }
    eax = t5;
    return (eax & 0xffffff00u) | 1u;
L_1013a0bb: ;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1013a030u), eax, self, g->edx, 1, 0);
    return (t7 & 0xffffff00u) | (uint8_t)t7 != 0u;
L_1013a0c9: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013a070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
