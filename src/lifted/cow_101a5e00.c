/* f_0x101a5e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a5e00(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    g->edx = -((uint8_t)(rd8(rd32(self + 0x18u) + 0xcu) - 1u) != 0u) & 0xau;
    t1 = rd8(rd32(self + 0x18u) + 0xcu);
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x101a44b0u), in_eax, rd32(self + 0x18u), g->edx, 1, 0);
    t3 = g->edx;
    t4 = t3 + (uint32_t)(int8_t)t2;
    g->edx = t3;
    t5 = cow_thiscall(g, COW_IMG(0x101a1c30u), rd32(self + 0x14u), 1, t4);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(self + 0x44u), 1, t5);
    t7 = g->edx;
    edx = t7;
    ebx = self + 0x2cu;
    ebp = t4;
    edi = 0u;
L_101a5e37: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101a1bd0u), rd32(self + 0x14u), 2, ebp, edi);
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(ebx), 1, t8);
    t10 = g->edx;
    if ((int32_t)(edi + 1u) < 6)
    {
        edx = t10;
        ebx = ebx + 4u;
        edi = edi + 1u;
        goto L_101a5e37;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a5e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a5e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
