/* f_0x100ab750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_100ab750(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if ((int32_t)rd32(sp0 + 0x10u) >= 0)
    {
        eax = (rd32(sp0 - 4u) & 0xffffffu) | 0x4000000u;
        edx = rd32(sp0 + 0x10u);
        goto L_100ab7b9;
    }
    eax = (rd32(sp0 - 4u) & 0xffffffu) | 0x4000000u;
    wr32(self + 0x70u, self + 0xa0cu);
    t1 = rd32(COW_IMG(0x10487fb4u)) + 1u;
    wr32(COW_IMG(0x10487fb4u), t1);
    wr32(self + 0xa80u, t1);
    t2 = eax ^ ((t1 ^ eax) & 0xffffffu);
    wr32(self + 0xa84u, t2);
    t3 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0x10u, t3);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 + 0xcu, t4);
    t5 = rd32(sp0 + 4u);
    wr32(sp0 + 8u, t5);
    wr32(sp0 + 4u, self + 0xa0cu);
    g->esp = sp0;
    g->edx = self + 0xa0cu;
    cow_tailcall(g, COW_IMG(0x100ab9a0u), t5, self, self + 0xa0cu);
    return;
L_100ab7b9: ;
    t6 = rd32(COW_IMG(0x10480af0u) + edx * 4u);
    wr32(self + 0x70u, t6);
    wr32(t6 + 0x74u, edx);
    t7 = eax ^ ((eax ^ edx) & 0xffffffu);
    t8 = rd32(sp0 + 0xcu);
    wr32(t6 + 0x78u, t7);
    t9 = rd32(sp0 + 8u);
    t10 = rd32(sp0 + 4u);
    wr32(t6 + 0xa0u, self);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x100ab9a0u), self, 4, t6, t10, t9, t8);
    t11 = (rd32(t6 + 0x120u) & 0xffff00ffu) | (uint8_t)(rd32(t6 + 0x120u) >> 8u | 2u) << 8u;
    wr32(t6 + 0x120u, t11);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ab750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100ab750(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
