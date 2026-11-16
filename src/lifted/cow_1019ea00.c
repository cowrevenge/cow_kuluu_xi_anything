/* f_0x1019ea00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019ea00(Guest* g)
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

    if (rd8(self + 0x55u) == 0u) goto L_1019ea1e;
    eax = 0u;
L_1019ea0d: ;
    wr8(eax + rd32(self + 0x2cu), 0xau);
    if ((int32_t)(eax + 1u) < (int32_t)rd8(self + 0x55u))
    {
        eax = eax + 1u;
        goto L_1019ea0d;
    }
L_1019ea1e: ;
    if ((int32_t)(rd32(self + 0x30u) - 1u) < (int32_t)(rd32(self + 0x30u) - rd8(self + 0x56u) - 1u)) goto L_1019ea47;
    eax = rd32(self + 0x30u) - 1u;
L_1019ea30: ;
    wr8(eax + rd32(self + 0x2cu), 0xau);
    if ((int32_t)(eax - 1u) >= (int32_t)(rd32(self + 0x30u) - rd8(self + 0x56u) - 1u))
    {
        eax = eax - 1u;
        goto L_1019ea30;
    }
L_1019ea47: ;
    t1 = rd32(self + 0x2cu);
    wr8(t1 + rd32(self + 0x30u) - 1u, 0u);
    t2 = rd32(self + 0x2cu);
    wr32(self + 0x34u, 0u);
    if (t2 == 0u) goto L_1019ea6e;
    eax = t2;
    edx = t1;
L_1019ea5b: ;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x1019ed70u), eax, g->ecx, g->edx, 0, 1, eax);
    t4 = rd32(self + 0x34u) + 1u;
    wr32(self + 0x34u, t4);
    if (t3 != 0u)
    {
        eax = t3;
        edx = t4;
        goto L_1019ea5b;
    }
L_1019ea6e: ;
    t5 = rd32(self + 0x2cu);
    wr32(self + 0x3cu, t5);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0xbf800000u);
    wr32(self + 0x4cu, 0x3f800000u);
    wr32(self + 0x50u, 0x3f800000u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ea00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019ea00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
