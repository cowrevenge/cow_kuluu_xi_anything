/* f_0x10144480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10144480(Guest* g)
{
    uint32_t eax;
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

    if (rd32(self + 0x18u) == 1u)
    {
        eax = rd32(self + 0x18u) - 1u;
        goto L_10144496;
    }
    eax = rd32(self + 0x18u) - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_101444a2;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->esp = sp0;
    t1 = cow_fastcall(g, COW_IMG(0x101443a0u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_thiscall(g, COW_IMG(0x10144370u), t2, 1, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10144496: ;
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x101443a0u), self, in_edx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x10144370u), t7, 1, 2u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101444a2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10144480(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10144480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
