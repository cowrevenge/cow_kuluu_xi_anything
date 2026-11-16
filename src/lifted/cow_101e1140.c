/* f_0x101e1140 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e1140(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f2c4u));
    t2 = g->edx;
    if (rd32(self + 0x70u) != 2u)
    {
        eax = t1;
        edx = t2;
        goto L_101e1172;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101e2c10u), rd32(COW_IMG(0x106634c4u)), 0);
    t4 = g->edx;
    wr32(self + 0x4cu, 0u);
    g->esp = sp0;
    g->edx = t4;
    return cow_tailcall(g, COW_IMG(0x101e06c0u), t3, self, t4);
L_101e1172: ;
    if (rd32(COW_IMG(0x10663740u)) == 0u) goto L_101e11a4;
    ecx = rd32(COW_IMG(0x10663740u));
    if (rd8(self + 0x4au) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x4au);
        goto L_101e119f;
    }
    if (rd32(self + 0x4cu) == 0u)
    {
        eax = rd32(self + 0x4cu);
        goto L_101e119f;
    }
    eax = rd32(self + 0x4cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x101f23a0u), ecx, 1, eax);
    t6 = g->edx;
    wr32(self + 0x4cu, 0u);
    g->esp = sp0;
    g->edx = t6;
    return cow_tailcall(g, COW_IMG(0x101e06c0u), t5, self, t6);
L_101e119f: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101f2600u), ecx, 0);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_101e11a4: ;
    wr32(self + 0x4cu, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101e06c0u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1140(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1140(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
