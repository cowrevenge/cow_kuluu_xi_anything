/* f_0x101eb040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101eb040(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(self + 0x54u);
    t2 = rd32(self + 0x60u);
    wr8(t1 * 0x88u + t2, 0u);
    wr16(t1 * 0x88u + t2 + 2u, (uint16_t)arg2);
    t3 = t1 * 0x88u + t2;
    wr32(arg1 + 0x48u, t3);
    t4 = rd32(arg2 * 4u + self + 0x90u);
    g->eax = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, t2, 4, 0u, 0x20u, t4, 0x80808080u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2cu);
    t9 = g->edx;
    wr32(arg1 + 0x4cu, t8);
    if (rd8(arg2 + self + 0xa4u) != 0u)
    {
        eax = (t8 & 0xffffff00u) | rd8(arg2 + self + 0xa4u);
        edx = t9;
        g->esp = sp0 - 0xcu;
        cow_fastcall(g, COW_IMG(0x101f4b20u), arg1, edx, 4, 5u, 1u, COW_IMG(0x10381fbcu), 0x80808080u);
    }
    t10 = rd32(self + 0x54u) + 1u;
    t11 = rd32(self + 0x5cu);
    wr32(self + 0x54u, t10);
    return t10 * 0x54u + t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eb040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eb040(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
