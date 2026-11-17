/* f_0x10156760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10156760(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018d3d0u), arg1, 0);
    t1 = g->edx;
    if (rd32(self + 4u) == 2u)
    {
        eax = rd32(self + 4u) - 2u;
        edx = t1;
        goto L_10156781;
    }
    eax = rd32(self + 4u) - 2u;
    edx = t1;
    if (eax != 1u) goto L_1015678d;
    eax = eax - 1u;
    loc_c = COW_IMG(0x10371eb0u);
L_10156786: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, loc_c);
    t2 = g->edx;
    edx = t2;
L_1015678d: ;
    t3 = rd32(self + 8u);
    g->eax = t3;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x1018d440u), arg1, 1, t3);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10156781: ;
    loc_c = COW_IMG(0x10371ea4u);
    goto L_10156786;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10156760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10156760(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
