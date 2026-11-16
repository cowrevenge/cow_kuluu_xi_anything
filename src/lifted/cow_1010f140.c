/* f_0x1010f140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010f140(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 2u);
    wr32(sp0 - 0x34u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_thiscall(g, COW_IMG(0x1010f3a0u), sp0 - 0x1cu, 4, self, 2u, 1u, 0u);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_call_regs(g, COW_IMG(0x1010f510u), t1, sp0 - 0x1cu, g->edx, 1, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1010f185;
    }
    eax = t3;
    edx = t4;
    esi = 0u;
L_1010f169: ;
    if ((uint16_t)esi == (uint16_t)arg1) goto L_1010f198;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
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
        goto L_1010f169;
    }
    eax = t7;
    edx = t8;
L_1010f185: ;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    return 0u;
L_1010f198: ;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t9 = cow_call_regs(g, COW_IMG(0x101124b0u), eax, sp0 - 0x18u, g->edx, 1, 0);
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x1010f340u), sp0 - 0x1cu, 0);
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010f140(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
