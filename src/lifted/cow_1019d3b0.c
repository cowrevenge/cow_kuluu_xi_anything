/* f_0x1019d3b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019d3b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_edi = g->edi;

    wr32(self + 0x24u, 0x1eu);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x1025e070u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
    }
    else
    {
        eax = t1;
        edx = t2;
        wr32(self + 0x24u, 0x1cu);
    }
    t3 = rd32(self + 8u);
    wr32(self + 0x6cu, COW_IMG(0x1037a128u));
    wr32(self + 0x14u, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, t3, g->edx, 0, 2, 1u, 0u);
    t5 = g->edx;
    g->edi = t3;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101186a0u), t3, 0);
    t7 = g->edx;
    t8 = (t6 & 0xffff0000u) | rd16(self + 0x24u);
    cow_fastcall(g, COW_IMG(0x10118530u), rd32(self + 8u), t7, 2, t8, 0xeu);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    t9 = rd32(self + 0x14u);
    t10 = rd32(self + 8u);
    wr8(self + 0x28u, 0u);
    t11 = rd32(t10 + 0x88u);
    wr32(t11 + 0x14u, t9);
    g->eax = t11;
    g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
    t12 = rd32(COW_IMG(0x10662d40u));
    t13 = rd32(rd32(COW_IMG(0x10662d40u)));
    t14 = cow_thiscall(g, rd32(t13 + 0x28u), t12, 8, 2u, 0u, 5u, 0x78u, 0u, 0u, 0u, 0xau);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = cow_call_regs(g, COW_IMG(0x10123ef0u), t14, g->ecx, g->edx, 1, 1, 0u);
    t18 = g->edx;
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = t18;
    return cow_tailcall(g, COW_IMG(0x1019d2b0u), t17, self, t18);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d3b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d3b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
