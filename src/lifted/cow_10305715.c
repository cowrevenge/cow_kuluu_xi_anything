/* f_0x10305715 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10305715(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x10u, 0u);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 0x110u) <= 0)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        esi = rd32(t1);
        wr32(sp0 + 4u, arg3 - esi);
        edx = arg3 - esi;
L_10305738: ;
        if (rd32(esi) >= rd32(esi) + rd32(ebx + 0x5cu)) goto L_10305756;
        eax = rd32(esi);
        ecx = rd32(esi) + rd32(ebx + 0x5cu);
        edi = rd32(edx + esi);
L_10305746: ;
        t2 = rd8(edi);
        wr8(eax, (uint8_t)t2);
        wr8(eax + 1u, (uint8_t)t2);
        if (eax + 2u < ecx)
        {
            eax = eax + 2u;
            edx = (edx & 0xffffff00u) | t2;
            edi = edi + 1u;
            goto L_10305746;
        }
        edx = rd32(sp0 + 4u);
L_10305756: ;
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 1u);
        if ((int32_t)rd32(sp0 + 0x10u) < (int32_t)rd32(ebx + 0x110u))
        {
            esi = esi + 4u;
            goto L_10305738;
        }
        eax = rd32(sp0 + 0x10u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305715(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305715(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
