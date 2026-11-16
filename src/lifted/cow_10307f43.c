/* f_0x10307f43 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307f43(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u));
    t2 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 4u);
    t3 = rd32(rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u) + 8u);
    t4 = rd32(rd32(sp0 + 4u) + 0x5cu);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        ecx = rd32(sp0 + 0x10u);
        edx = t4;
        loc_8 = t1;
        loc_c = t2;
        loc_10 = t3;
        loc_14 = t4;
        wr32(sp0 + 0x10u, ecx);
        edi = arg3;
L_10307f84: ;
        if (edx != 0u)
        {
            ecx = rd32(arg2 + edi - arg3);
            esi = rd32(edi);
            wr32(sp0 + 4u, edx);
L_10307f90: ;
            wr8(esi, (uint8_t)(rd8(loc_8 + rd8(ecx)) + rd8(loc_10 + rd8(ecx + 2u)) + rd8(loc_c + rd8(ecx + 1u))));
            wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
            if (rd32(sp0 + 4u) != 1u)
            {
                ecx = ecx + 3u;
                esi = esi + 1u;
                goto L_10307f90;
            }
            edx = loc_14;
        }
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) - 1u);
        if (rd32(sp0 + 0x10u) != 1u)
        {
            edi = edi + 4u;
            goto L_10307f84;
        }
        eax = arg2 - arg3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307f43(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307f43(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
