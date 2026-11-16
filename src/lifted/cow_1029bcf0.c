/* f_0x1029bcf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1029bcf0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0x10u);
    eax = t1 + 8u;
    edx = 0x18u - t1;
    esi = 0xfffffff8u - t1;
L_1029bd11: ;
    t2 = rd32(eax - 8u);
    wr32(eax + esi + rd32(COW_IMG(0x1099d200u)) + 0x1cu, t2);
    t3 = rd32(eax - 4u);
    wr32(eax + edx + rd32(COW_IMG(0x1099d200u)), t3);
    wr32(eax + esi + rd32(COW_IMG(0x1099d200u)) + 0x24u, rd32(eax));
    t4 = rd32(eax + 4u);
    wr32(eax + esi + rd32(COW_IMG(0x1099d200u)) + 0x28u, t4);
    t5 = rd32(sp0 + 4u) - 1u;
    t6 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t5);
    if (t6 != 1u)
    {
        eax = eax + 0x10u;
        goto L_1029bd11;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029bcf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1029bcf0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
