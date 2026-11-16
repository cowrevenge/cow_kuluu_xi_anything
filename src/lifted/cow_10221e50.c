/* f_0x10221e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10221e50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        edx = in_edx;
        goto L_10221ec6;
    }
    if ((int32_t)rd32(self + 0x38u) >= (int32_t)rd32(self + 0x30u))
    {
        eax = rd32(self + 0x30u);
        goto L_10221e85;
    }
    eax = rd32(self + 0x30u);
    ecx = rd32(self + 0x38u);
    if ((int32_t)(ecx + rd32(self + 0x48u)) > (int32_t)eax)
    {
        edx = ecx + rd32(self + 0x48u);
        goto L_10221e96;
    }
    edx = ecx + rd32(self + 0x48u);
    t1 = eax + rd32(self + 0x58u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10221dc0u), self, 1, t1);
    t3 = g->edx;
    cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, t2);
    eax = rd32(self + 0x38u);
L_10221e85: ;
    t4 = cow_divs(g, eax, rd32(self + 0x58u));
    t5 = cow_mods(g, eax, rd32(self + 0x58u));
    t6 = t4 * rd32(self + 0x58u);
    g->edx = t5;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10221e10u), self, 1, t6);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
L_10221e96: ;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_10221ec6;
    }
    eax = rd32(self + 8u);
    if (rd8(self + 0x5eu) == 0u)
    {
        eax = rd32(eax + 0x88u);
        goto L_10221eb8;
    }
    eax = rd32(eax + 0x88u);
    t9 = rd32(self + 0x38u);
    wr32(eax + 0x14u, t9);
    t10 = rd32(self + 0x40u);
    wr32(eax + 0x10u, t10);
    g->edx = t9;
    return eax;
L_10221eb8: ;
    wr32(eax + 0x14u, 0u);
    wr32(eax + 0x10u, 1u);
L_10221ec6: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10221e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10221e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
