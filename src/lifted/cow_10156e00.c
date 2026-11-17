/* f_0x10156e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10156e00(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101c59b0u), self + 0x860u, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t3, 1, 1, 0x3eu);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101c5a30u), self + 0x860u, 1, t4);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x101c5a40u), self + 0x860u, 3, self + 0x820u, 0u, 0x40u);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10257bc0u), self + 0x810u, 2, self + 0x820u, 0x40u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10257c90u), self + 0x810u, 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(self + 0x86cu, t12);
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t13, t14, 1, 3, t12, in_edi, in_esi);
    wr32(self + 0x870u, t15);
    wr32(self + 0x874u, 0xffffffffu);
    return t15;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
