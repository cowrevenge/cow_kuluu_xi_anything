/* f_0x101003e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101003e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(arg1 + 0xc0u) <= 0)
    {
        ebx = arg3;
        esi = arg2;
    }
    else
    {
        edx = rd32(arg1 + 0xc0u);
        eax = arg1 + 0xc8u;
        ebx = arg3;
        ebp = 0u;
        esi = arg2;
L_10100402: ;
        if ((int32_t)rd32(arg1 + edx * 8u + 0xc4u) > (int32_t)esi)
        {
            t1 = rd32(eax - 4u);
            t2 = rd32(eax);
            wr32(eax - 4u, esi);
            wr32(eax, ebx);
            ebx = t2;
            esi = t1;
        }
        if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0xc0u))
        {
            eax = eax + 8u;
            edx = rd32(arg1 + 0xc0u);
            ebp = ebp + 1u;
            goto L_10100402;
        }
    }
    wr32(arg1 + rd32(arg1 + 0xc0u) * 8u + 0xc4u, esi);
    wr32(arg1 + rd32(arg1 + 0xc0u) * 8u + 0xc8u, ebx);
    t3 = rd32(arg1 + 0xc0u) + 1u;
    wr32(arg1 + 0xc0u, t3);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101003e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101003e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
