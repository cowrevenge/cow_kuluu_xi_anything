/* f_0x101ea800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101ea800(Guest* g)
{
    double d2;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 4u);
    if (t1 != 0u)
    {
        eax = t1;
        if (rd32(rd32(eax) + 0x250u) != 0u)
        {
            ecx = rd32(rd32(eax) + 0x250u);
            d2 = (double)(float)fr(g, (double)(int32_t)arg3 * (double)rdf32(COW_IMG(0x10329a18u)));
            g->esp = sp0;
            cow_thiscall(g, COW_IMG(0x1011fc80u), ecx, 8, arg1, arg2, cow_f2bits(d2), 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ea800(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
