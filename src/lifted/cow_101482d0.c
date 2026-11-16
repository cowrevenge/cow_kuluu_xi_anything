/* f_0x101482d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101482d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    if (arg1 == 0u) goto L_1014833f;
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr8(self + 0x14u, 1u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x12cu);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x12cu);
    wr32(sp0 - 0x14u, 0x10u);
    cow_call_regs(g, COW_IMG(0x10119110u), t1, rd32(self + 8u), g->edx, 0, 2, 0x10u, 0x12cu);
    t2 = rd32(rd32(self + 8u) + 0x34u) | 2u;
    wr32(rd32(self + 8u) + 0x34u, t2);
    if (rd32(rd32(COW_IMG(0x105783ecu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
        edx = t2;
        goto L_10148391;
    }
    eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
    edx = t2;
    t3 = rd32(eax + 0x34u) & 0xfffffffeu;
    t4 = rd32(sp0 - 0xcu);
    wr32(eax + 0x34u, t3);
    g->esi = t4;
    g->edx = edx;
    return eax;
L_1014833f: ;
    wr8(self + 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0x82u);
    wr32(sp0 - 4u, 0x30u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x30u);
    wr32(sp0 - 0x14u, 0x82u);
    cow_call_regs(g, COW_IMG(0x10119110u), 0x82u, rd32(self + 8u), g->edx, 0, 2, 0x82u, 0x30u);
    t5 = rd32(rd32(self + 8u) + 0x34u) & 0xfffffffdu;
    wr32(rd32(self + 8u) + 0x34u, t5);
    if (rd32(rd32(COW_IMG(0x105783ecu)) + 8u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
        edx = t5;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x105783ecu)) + 8u);
        edx = t5;
        wr32(eax + 0x34u, rd32(eax + 0x34u) | 1u);
    }
L_10148391: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101482d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101482d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
