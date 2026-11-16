/* f_0x1012f1b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1012f1b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1012f1a0u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_1012f294;
    }
    eax = t1;
    edx = t2;
    if (rd16(self + 0x1b4u) == 0x19u)
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x1b4u);
        goto L_1012f201;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1b4u);
    if ((uint16_t)eax == 0x15u) goto L_1012f294;
    if ((uint16_t)eax == 0x16u) goto L_1012f294;
    if ((uint16_t)eax == 0x17u) goto L_1012f294;
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b4u, 0x15u);
    return (eax & 0xffffff00u) | 1u;
L_1012f201: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101f2600u), rd32(COW_IMG(0x10663740u)), 0);
    t3 = g->edx;
    t4 = rd32(rd32(COW_IMG(0x1057824cu)) + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), rd32(COW_IMG(0x1057824cu)), COW_IMG(0x10621838u), g->edx, 0, 2, t4, 1u);
    t5 = rd32(rd32(COW_IMG(0x10578248u)) + 8u);
    t6 = cow_call_regs(g, COW_IMG(0x1015e790u), t5, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    t7 = rd32(rd32(COW_IMG(0x10578470u)) + 8u);
    g->edx = t7;
    cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    t8 = g->edx;
    t9 = rd32(self + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
    edi = self + 0x14u;
    eax = 0u;
    ecx = 0x68u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + 0x1b4u, (uint16_t)eax);
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b8u, 0x18u);
    wr32(self + 0x1bcu, 0xffffffffu);
    wr32(self + 0x1c0u, 0xffffffffu);
    eax = 0xffffffffu;
L_1012f294: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012f1b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012f1b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
