/* f_0x10238aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10238aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(self + 8u);
    wr8(t1 + 0x5du, 0u);
    t2 = rd32(COW_IMG(0x10662da0u));
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t1, t2, in_edx, 1, 0);
    t3 = g->ecx;
    eax = COW_IMG(0x103d3c84u);
    ecx = t3;
L_10238ac4: ;
    t4 = rd8(eax);
    wr8(eax + self - COW_IMG(0x103d3c84u) + 0x18u, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_10238ac4;
    }
    eax = eax + 1u;
    wr32(sp0 - 0x14u, COW_IMG(0x103d3c84u));
    g->eax = eax;
    g->edx = self + 0x18u - COW_IMG(0x103d3c84u);
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x101c5f30u), rd32(self + 0x38u), 1, COW_IMG(0x103d3c84u));
    t6 = g->edx;
    t7 = rd32(self + 0x38u);
    wr32(sp0 - 0x14u, t7);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t7);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0u);
    wr8(rd32(self + 8u) + 0x85u, 0u);
    wr8(rd32(self + 8u) + 0x86u, 0u);
    wr8(rd32(self + 8u) + 0x84u, 0u);
    wr32(sp0 - 4u, rd32(COW_IMG(0x103879dcu)));
    t8 = rd32(COW_IMG(0x103879dcu)) + 0x40u;
    wr32(sp0 - 4u, t8);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 8u, rd32(COW_IMG(0x103879d8u)));
    g->eax = sp0 - 8u;
    t9 = rd32(COW_IMG(0x103879d8u));
    t10 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 1u);
    t11 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t11);
    t12 = rd32(sp0 - 8u);
    wr32(sp0 - 0x18u, t12);
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x10119110u), t10, rd32(self + 8u), g->edx, 0, 2, t12, t11);
    t14 = g->edx;
    g->edx = t14;
    return t13;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10238aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10238aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
