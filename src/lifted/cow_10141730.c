/* f_0x10141730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10141730(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_10141755;
    }
    edx = t2;
    t3 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    return;
L_10141755: ;
    if (rd32(rd32(eax + 0x70u) + 0x170u) == 1u)
    {
        ecx = rd32(rd32(eax + 0x70u) + 0x170u) - 1u;
        goto L_1014177a;
    }
    ecx = rd32(rd32(eax + 0x70u) + 0x170u) - 1u;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t5 = rd32(self + 8u);
    cow_call_regs(g, COW_IMG(0x1015e790u), t4, COW_IMG(0x10621838u), g->edx, 0, 2, t5, 1u);
    return;
L_1014177a: ;
    if (rd8(COW_IMG(0x10487f81u)) == 0u) goto L_10141794;
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100a6070u), eax, eax, edx);
    return;
L_10141794: ;
    wr8(rd32(COW_IMG(0x1062193cu)) + 0x59u, 1u);
    wr8(rd32(COW_IMG(0x10621940u)) + 0x59u, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10141730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10141730(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
