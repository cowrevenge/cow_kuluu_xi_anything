/* f_0x101598c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101598c0(Guest* g)
{
    double d5;
    double d6;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    if (t1 != 0u)
    {
        eax = t1;
        edx = t1;
        goto L_101598d9;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101598d9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        goto L_101598ea;
    }
    eax = t2;
    return eax & 0xffffff00u;
L_101598ea: ;
    d5 = (double)rdf32(sp0 + 4u);
    d6 = (double)(float)fr(g, d5 * d5);
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x10084100u), 4, edx, eax, cow_f2bits(d6), in_esi);
    return t7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101598c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101598c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
