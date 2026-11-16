/* f_0x1010f1c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=0 */
uint32_t cow_fn_1010f1c0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 1u);
    wr32(sp0 - 0x2cu, 2u);
    wr32(sp0 - 0x30u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x1010f440u), sp0 - 0x1cu, 4, self, 2u, 1u, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x1010f510u), t1, sp0 - 0x1cu, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        esi = 0u;
        goto L_1010f1f9;
    }
    eax = t3;
    edx = t4;
    esi = 0u;
L_1010f1e2: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t5 = cow_call_regs(g, COW_IMG(0x1010f540u), eax, sp0 - 0x1cu, g->edx, 1, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_call_regs(g, COW_IMG(0x1010f510u), t5, sp0 - 0x1cu, g->edx, 1, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        edx = t8;
        esi = esi + 1u;
        goto L_1010f1e2;
    }
    eax = t7;
    edx = t8;
    esi = esi + 1u;
L_1010f1f9: ;
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t9 = cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    return (t9 & 0xffff0000u) | (uint16_t)esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f1c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f1c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
