/* f_0x101fe5f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101fe5f0(Guest* g)
{
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    g->eax = rd32(self + 4u) * 0x15u;
    t1 = rd32(self + 4u);
    t2 = rd32(self + 0xcu);
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    t4 = t2 + t1 * 0x54u;
    t5 = rd32(rd32(t3) + 0x27cu);
    g->eax = t5;
    t6 = rd32(t3);
    t7 = cow_fastcall(g, COW_IMG(0x101f4b20u), t4, t6, 4, 0u, 0xeu, t5, 0x80808080u);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2a4u);
    wr32(t4 + 0x4cu, t10);
    t11 = rd32(self + 4u) + 1u;
    wr32(self + 4u, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe5f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101fe5f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
