/* f_0x102174f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102174f0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10664530u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10664530u));
        goto L_1021751e;
    }
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 1, 0x34u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10217514;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10216570u), eax, 0);
    wr32(COW_IMG(0x10664530u), t3);
    return t3;
L_10217514: ;
    wr32(COW_IMG(0x10664530u), 0u);
L_1021751e: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102174f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102174f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
