/* f_0x1014d000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014d000(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1014cff0u), self, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_1014d0a4;
    }
    edx = t2;
    if (rd32(self + 0x14u) == 0x12u) goto L_1014d023;
    wr32(self + 0x14u, 0x12u);
    return 1u;
L_1014d023: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t3 = g->edx;
    t4 = rd32(rd32(COW_IMG(0x10578200u)) + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), rd32(COW_IMG(0x10578200u)), COW_IMG(0x10621838u), g->edx, 0, 2, t4, 1u);
    t5 = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
    t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t7 = rd32(rd32(COW_IMG(0x10578248u)) + 8u);
    g->edx = t7;
    cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    t8 = g->edx;
    t9 = rd32(rd32(COW_IMG(0x1057824cu)) + 8u);
    t10 = rd32(COW_IMG(0x1057824cu));
    t11 = cow_call_regs(g, COW_IMG(0x1015e790u), t10, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    t12 = rd32(self + 8u);
    t13 = cow_call_regs(g, COW_IMG(0x1015e790u), t11, COW_IMG(0x10621838u), g->edx, 0, 2, t12, 1u);
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 0xffffffffu);
    eax = 0xffffffffu;
L_1014d0a4: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014d000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014d000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
