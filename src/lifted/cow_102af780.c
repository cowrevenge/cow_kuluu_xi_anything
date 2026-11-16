/* f_0x102af780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102af780(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 == 0u)
    {
        eax = arg1;
    }
    else
    {
        if ((int32_t)rd32(arg1 + 0x50u) <= 0)
        {
            eax = rd32(arg1 + 0x50u);
        }
        else
        {
            eax = rd32(arg1 + 0x50u);
            esi = rd32(arg1 + 0x38u);
            wr32(esi, arg2);
            edi = esi + 4u;
            ecx = (eax * 4u - 1u) >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102af780(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
