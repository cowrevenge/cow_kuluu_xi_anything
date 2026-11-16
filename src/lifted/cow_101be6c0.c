/* f_0x101be6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101be6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x28u, sp0 - 0x24u);
    wr32(sp0 - 0x2cu, arg1);
    g->esp = sp0 - 0x20u;
    t1 = cow_call_regs(g, COW_IMG(0x103124c7u), g->eax, arg1, in_edx, 1, 3, arg1, sp0 - 0x24u, rd32(sp0 - 0x24u));
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_101be6f1;
    }
    edx = t2;
    wr32(sp0 - 0x28u, in_edi);
    edi = arg2;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->edx = edx;
    return 0xffffffffu;
L_101be6f1: ;
    wr32(sp0 - 0x28u, in_esi);
    t3 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x2cu, t3);
    g->edx = t3;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x101be2b0u), arg2, 1, t3);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0x2cu, t6);
    g->eax = t6;
    g->edx = t5;
    t7 = cow_thiscall(g, COW_IMG(0x101be2c0u), t4, 1, t6);
    t8 = g->edx;
    t9 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x2cu, t9);
    t10 = cow_thiscall(g, COW_IMG(0x101be330u), arg2, 1, t9);
    t11 = rd32(sp0 - 8u);
    wr32(sp0 - 0x2cu, t11);
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x101be3a0u), arg2, 1, t11);
    t12 = g->edx;
    g->edx = t12;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be6c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101be6c0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
