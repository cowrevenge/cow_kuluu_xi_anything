/* f_0x1011abf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1011abf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    t1 = rd16(self + 0x4cu);
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    if (t2 == 0u)
    {
        eax = t2;
        loc_4 = t2;
        goto L_1011ac2b;
    }
    edx = t3;
    edi = (in_edi & 0xffff0000u) | t1;
    loc_4 = t2;
L_1011ac09: ;
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t5 = g->edx;
    if (rd16(t4) != 1u)
    {
        edx = t5;
        goto L_1011ac23;
    }
    ecx = t4;
    edx = t5;
    if (rd16(ecx + 0x3au) == (uint16_t)edi) goto L_1011ac33;
L_1011ac23: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1011ac09;
    eax = rd32(sp0 - 4u);
L_1011ac2b: ;
    return eax & 0xffffff00u;
L_1011ac33: ;
    t6 = (uint32_t)(int16_t)rd16(ecx + 0x2au) + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ecx + 0x2eu) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(ecx + 0x2eu) >> 0x1fu)) >> 1u);
    t7 = rd32(sp0 - 0xcu);
    wr32(arg1, t6);
    t8 = (uint32_t)(int16_t)rd16(ecx + 0x2cu) + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(ecx + 0x30u) - (uint32_t)((int32_t)(uint32_t)(int16_t)rd16(ecx + 0x30u) >> 0x1fu)) >> 1u);
    wr32(arg1 + 4u, t8);
    g->esi = rd32(sp0 - 8u);
    g->edi = t7;
    return (t8 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011abf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011abf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
