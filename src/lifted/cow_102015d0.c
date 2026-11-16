/* f_0x102015d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102015d0(Guest* g)
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
    if (rd32(self + 0x14u) == 0u)
    {
        edx = t2;
        goto L_1020161c;
    }
    eax = rd32(self + 0x14u);
    edx = t2;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1020162e;
    }
    eax = eax - 1u;
    t3 = rd32(sp0 - 6u);
    wr32(sp0 - 0x14u, t3);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t4);
    g->eax = eax;
    g->edx = t4;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x10201340u), self + 0x44u, 2, t4, t3);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_1020161c: ;
    t7 = rd32(sp0 - 6u);
    wr32(sp0 - 0x14u, t7);
    t8 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t8);
    g->eax = t7;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x10201180u), self + 0x1cu, 2, t8, t7);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_1020162e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102015d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102015d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
