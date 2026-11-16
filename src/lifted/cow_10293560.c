/* f_0x10293560 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
uint32_t cow_fn_10293560(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    if ((int32_t)(t1 & 0x80000001u) >= 0)
    {
        eax = ((uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u) & 0xffffff00u) | rd8(rd32(arg1 + 4u) + (uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u));
        ecx = t1 & 0x80000001u;
        zf = (t1 & 0x80000001u) == 0u;
    }
    else
    {
        eax = ((uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u) & 0xffffff00u) | rd8(rd32(arg1 + 4u) + (uint32_t)((int32_t)(t1 - (uint32_t)((int32_t)t1 >> 0x1fu)) >> 1u));
        ecx = t1 & 0x80000001u;
        zf = (ecx - 1u | 0xfffffffeu) + 1u == 0u;
        ecx = (ecx - 1u | 0xfffffffeu) + 1u;
    }
    if (!zf)
    {
        eax = (eax & 0xffffff00u) | (eax & 0xfu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)eax >> 4u;
    }
    wr32(sp0 + 8u, eax & 7u);
    if ((eax & 8u) != 0u)
    {
        ecx = eax & 7u;
        wr32(sp0 + 8u, -ecx);
    }
    g->edx = arg1;
    fpush(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(arg1 + 0x10u)));
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10293560(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10293560(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
