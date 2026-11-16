/* f_0x10118a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10118a80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    edx = t2;
    loc_4 = t1;
L_10118a90: ;
    if (loc_4 == 0u)
    {
        eax = loc_4;
        goto L_10118ac7;
    }
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->ecx = self + 0x14u;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->ecx;
    t5 = g->edx;
    if (rd16(t3) != 2u)
    {
        edx = t5;
        goto L_10118a90;
    }
    eax = t3;
    ecx = t4;
    t6 = rd32(sp0 - 8u);
    wr16(arg1, rd16(eax + 0x20u));
    t7 = rd16(eax + 0x22u);
    wr16(arg2, (uint16_t)t7);
    g->esi = t6;
    return (((eax & 0xffff0000u) | t7) & 0xffffff00u) | 1u;
L_10118ac7: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118a80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118a80(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
