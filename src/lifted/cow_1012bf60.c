/* f_0x1012bf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012bf60(Guest* g)
{
    uint32_t eax;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 8u, t1, g->edx, 0, 1, sp0 - 8u);
    t2 = g->edx;
    if ((int32_t)rd32(self + 0x20u) < 0)
    {
        eax = rd32(self + 0x20u);
        edx = t2;
        goto L_1012bfd4;
    }
    eax = rd32(self + 0x20u);
    edx = t2;
    if ((int32_t)eax <= 3) goto L_1012bfb2;
    if (eax != 4u) goto L_1012bfd4;
    t3 = rd32(sp0 - 6u);
    wr32(sp0 - 0x14u, t3);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t4);
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x1012bfe0u), eax, self, g->edx, 0, 2, t4, t3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1012bfb2: ;
    t7 = rd32(sp0 - 6u);
    wr32(sp0 - 0x14u, t7);
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t8);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1012c030u), self, 2, t8, t7);
    t9 = rd32(sp0 - 6u);
    wr32(sp0 - 0x14u, t9);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t10);
    g->edx = t9;
    t11 = cow_call_regs(g, COW_IMG(0x1012c060u), t10, self, g->edx, 0, 2, t10, t9);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_1012bfd4: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012bf60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
