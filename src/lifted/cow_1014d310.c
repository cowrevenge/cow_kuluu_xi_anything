/* f_0x1014d310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014d310(Guest* g)
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

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = in_edx;
        goto L_1014d39c;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (rd32(ecx + 0x2c7c8u) != 6u)
    {
        edx = in_edx;
        goto L_1014d39c;
    }
    wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) == 2u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
        edx = in_edx;
        goto L_1014d39c;
    }
    eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
    if (eax != 1u) goto L_1014d380;
    t1 = rd32(self + 8u);
    wr32(self + 0x1cu, 0xffffffffu);
    wr32(self + 0x18u, 0xffffffffu);
    wr8(t1 + 0x5du, 0u);
    t2 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2ca1cu) - 1u;
    t3 = rd32(COW_IMG(0x104dfd98u));
    wr32(t3 + 0x2ca1cu, t2);
    wr32(self + 0x14u, 3u);
    g->esp = sp0;
    cow_tailcall(g, COW_IMG(0x1014d910u), t3, self, in_edx);
    return;
L_1014d380: ;
    wr32(self + 0x1cu, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1014d8e0u), self, 0);
    t5 = rd32(self + 8u);
    wr8(t5 + 0x5du, 0u);
    wr32(self + 0x14u, 1u);
    eax = t4;
    edx = t5;
L_1014d39c: ;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1014d910u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014d310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014d310(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
