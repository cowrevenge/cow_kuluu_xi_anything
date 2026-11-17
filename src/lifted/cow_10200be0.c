/* f_0x10200be0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10200be0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10200c90u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    t6 = rd32(rd32(t4) + 0x44cu);
    t7 = rd32(t4);
    wr32(self + 0x74u, t6);
    g->eax = t7;
    g->esp = sp0 - 8u;
    t8 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t9 = rd32(rd32(t8) + 0x12cu);
    t10 = rd32(t8);
    wr32(self + 0x70u, t9);
    wr32(self + 0x34u, t9);
    wr8(self + 0x49u, 1u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x101f6700u), t9, self, t10, 0, 1, 0xfu);
    wr32(self + 0x5cu, arg2);
    wr16(self + 0x16u, 5u);
    wr32(self + 0x30u, COW_IMG(0x10385174u));
    wr16(self + 0x26u, 0x10u);
    wr32(self + 0x58u, arg1);
    wr32(self + 0x60u, arg3);
    g->edx = arg3;
    t11 = cow_call_regs(g, COW_IMG(0x102007c0u), arg1, self, g->edx, 0, 3, arg1, arg2, arg3);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        goto L_10200c8a;
    }
    eax = t11;
    edx = t12;
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038522cu), 1u, 0u);
    t13 = g->edx;
    if (rd32(COW_IMG(0x10578480u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578480u));
    }
    else
    {
        eax = rd32(COW_IMG(0x10578480u));
        edx = t13;
        g->eax = eax;
        g->esp = sp0;
        t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10381fecu), 1u, 0u);
        eax = t14;
    }
    return (eax & 0xffffff00u) | 1u;
L_10200c8a: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200be0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10200be0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
