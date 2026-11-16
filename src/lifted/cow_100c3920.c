/* f_0x100c3920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100c3920(Guest* g)
{
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x48u;
    t1 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
    t2 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        edx = t2;
        goto L_100c3960;
    }
    edx = t2;
    esi = 0u;
L_100c3932: ;
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, esi);
    g->eax = sp0 - 0x40u;
    g->esp = sp0 - 0x48u;
    t3 = cow_thiscall(g, COW_IMG(0x100c3c00u), self, 2, esi, sp0 - 0x40u);
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, esi);
    g->edx = sp0 - 0x40u;
    t4 = cow_thiscall(g, COW_IMG(0x100c3c80u), self, 2, esi, sp0 - 0x40u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
    t7 = g->edx;
    if ((int32_t)(esi + 1u) < (int32_t)t6)
    {
        edx = t7;
        esi = esi + 1u;
        goto L_100c3932;
    }
    edx = t7;
L_100c3960: ;
    wr32(sp0 - 0x4cu, arg1);
    t8 = rd32(self + 0x5f0u);
    wr32(sp0 - 0x50u, t8);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x1017ad10u), rd32(COW_IMG(0x10631f24u)), 2, t8, arg1);
    wr32(self + 0x5ecu, arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c3920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
