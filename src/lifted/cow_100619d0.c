/* f_0x100619d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100619d0(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(COW_IMG(0x1047bfa8u));
    d2 = fr(g, (double)rdf32(self + 0x74u) - (double)rdf32(rd32(COW_IMG(0x1047bfa8u)) + 0xeb0u));
    wrf32(self + 0x74u, (float)d2);
    if (!(d2 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_100619f8;
    }
    eax = (t1 & 0xffff0000u) | (uint16_t)cow_fsw(g, d2, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    g->eax = eax;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0;
    t4 = cow_thiscall(g, rd32(t3 + 0x18u), self, 1, 1u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_100619f8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100619d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100619d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
