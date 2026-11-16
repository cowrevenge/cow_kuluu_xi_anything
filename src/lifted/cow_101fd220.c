/* f_0x101fd220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101fd220(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(COW_IMG(0x10663aa8u)) > (int32_t)((uint16_t)arg1 - 0x7080u)) goto L_101fd247;
    return arg1 & 0xffffff00u;
L_101fd247: ;
    wr16(self + 0x32u, (uint16_t)arg1);
    wr8(self + 0x1eu, (uint8_t)arg2);
    t1 = (arg2 & 0xffffff00u) | arg2 == 2u;
    wr16(self + 0x1cu, 0x60u);
    wr8(self + 0x1fu, 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101fdaf0u), self, 2, arg1, t1);
    t3 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        wr8(self + 0x36u, (uint8_t)eax);
        t4 = COW_IMG(0x106638a8u) + (uint16_t)arg1 - 0x7080u;
        wr32(self + 0x38u, t4);
        edx = t4;
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101fdb40u), self, 2, 0u, 0u);
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fd220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fd220(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
