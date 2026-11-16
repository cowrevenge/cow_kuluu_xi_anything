/* f_0x1031aee1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1031aee1(Guest* g)
{
    double d1;
    uint32_t eax;
    const uint32_t in_eax = g->eax;
    const double xin0 = ST(0);

    if (frnd(g, xin0) < xin0 || frnd(g, xin0) > xin0)
    {
        eax = 0u;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | (uint16_t)cow_fsw(g, frnd(g, xin0), xin0, 0u);
        d1 = fr(g, xin0 * rdf64(COW_IMG(0x103d0952u)));
        if (!(frnd(g, d1) < d1 || frnd(g, d1) > d1))
        {
            eax = 2u;
        }
        else
        {
            eax = 1u;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031aee1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031aee1(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
