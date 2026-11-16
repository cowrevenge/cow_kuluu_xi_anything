/* f_0x101f2640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f2640(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd8(rd32(COW_IMG(0x10663740u)) + 0x90u) == 0u)
    {
        eax = rd32(COW_IMG(0x10663740u));
        goto L_101f26e9;
    }
    eax = rd32(COW_IMG(0x10663740u));
    t1 = rd32(COW_IMG(0x10663754u));
    wr32(self + 0x5cu, t1);
    g->eax = eax;
    g->edx = rd32(t1);
    t2 = rd32(t1);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, rd32(t2 + 0x1cu), t1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        wr8(self + 0x47u, 1u);
    }
    else
    {
        eax = t3;
        edx = t4;
        wr8(self + 0x47u, (uint8_t)eax);
    }
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0x10u);
    wr32(sp0 - 4u, 0x30u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
    wr32(sp0 - 0x10u, 0x30u);
    wr32(sp0 - 0x14u, 0x10u);
    cow_call_regs(g, COW_IMG(0x10119110u), rd32(COW_IMG(0x10663740u)), rd32(rd32(COW_IMG(0x10663740u)) + 8u), g->edx, 0, 2, 0x10u, 0x30u);
    wr32(sp0 - 0x10u, 0u);
    t5 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    wr16(t5 + 0x38u, 0x10u);
    t6 = rd32(rd32(COW_IMG(0x10663740u)) + 8u);
    wr32(sp0 - 0x14u, t6);
    cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t5, 2, t6, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, COW_IMG(0x103820d0u));
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103820d0u), 1u, 0u);
    g->esi = rd32(sp0 - 0xcu);
    return;
L_101f26e9: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101f2600u), self, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f2640(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
