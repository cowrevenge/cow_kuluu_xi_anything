/* f_0x10193a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10193a10(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
    uint32_t zf;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 >= 32)
    {
        eax = 1u;
        ecx = arg1 - 0x20u;
        cf = arg1 - 0x20u < arg1;
        pf = PARITY((uint8_t)(arg1 - 0x20u));
        zf = arg1 == 0x20u;
        sf = (int32_t)(arg1 - 0x20u) < 0;
        of = ((arg1 ^ arg1 - 0x20u) & (arg1 - 0x20u ^ 0xffffffe0u)) >> 0x1fu;
    }
    else
    {
        eax = 0u;
        ecx = arg1;
        cf = 0u;
        pf = PARITY(0u);
        zf = 1u;
        sf = 0u;
        of = 0u;
    }
    g->edx = 1u << (ecx & 0x1fu);
    return (eax & 0xffffff00u) | (rd32(arg2 + eax * 4u) & 1u << (ecx & 0x1fu)) != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10193a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
