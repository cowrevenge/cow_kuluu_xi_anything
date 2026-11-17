/* f_0x10118640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10118640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10160c90u), COW_IMG(0x10621838u), 0);
    t2 = g->edx;
    if (t1 != self)
    {
        edx = t2;
        loc_4 = self;
        loc_8 = in_esi;
        goto L_1011868c;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t4 = g->edx;
    wr32(sp0 - 4u, t3);
    edx = t4;
    loc_4 = t3;
L_10118660: ;
    if (loc_4 == 0u)
    {
        loc_8 = rd32(sp0 - 8u);
        goto L_1011868c;
    }
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t6 = g->edx;
    if (rd16(t5) != 0u)
    {
        edx = t6;
        loc_4 = rd32(sp0 - 4u);
        goto L_10118660;
    }
    eax = t5;
    edx = t6;
    if (rd32(eax + 0x40u) == 0u) goto L_10118686;
    ecx = rd32(eax + 0x40u);
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return ecx;
L_10118686: ;
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return rd32(eax + 0x2cu);
L_1011868c: ;
    g->esi = loc_8;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
