/* f_0x1014b860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1014b860(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u) goto L_1014b886;
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 6u;
        edx = in_edx;
    }
    else
    {
        t1 = rd32(self + 8u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->edx = edx;
    return eax & 0xffffff00u;
L_1014b886: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t6 = g->edx;
    wr8(self + 0x56u, (uint8_t)t5);
    if (rd32(COW_IMG(0x10578440u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578440u));
        edx = t6;
    }
    else
    {
        edx = t6;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, COW_IMG(0x1014b900u), self, 0);
        t8 = g->edx;
        g->edx = t8;
        t9 = cow_call_regs(g, COW_IMG(0x1014bb50u), t7, rd32(COW_IMG(0x10578440u)), g->edx, 0, 1, t7);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014b860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014b860(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
