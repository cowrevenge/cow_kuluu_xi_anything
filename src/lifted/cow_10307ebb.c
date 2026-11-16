/* f_0x10307ebb - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10307ebb(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x1a4u) + 0x18u);
    t2 = rd32(rd32(sp0 + 4u) + 0x5cu);
    t3 = rd32(rd32(sp0 + 4u) + 0x64u);
    if ((int32_t)rd32(sp0 + 0x10u) <= 0)
    {
        eax = t3;
        edx = rd32(sp0 + 0x10u);
    }
    else
    {
        eax = t3;
        edx = rd32(sp0 + 0x10u);
        esi = t2;
        loc_10 = t1;
        loc_18 = t2;
        loc_14 = t3;
        ecx = arg3;
        loc_c = edx;
L_10307ef1: ;
        t4 = rd32(arg2 + ecx - arg3);
        t5 = rd32(ecx);
        wr32(sp0 + 0x10u, t5);
        if (esi == 0u)
        {
            edx = t4;
        }
        else
        {
            edx = t4;
            ebx = t5;
            loc_8 = esi;
L_10307f00: ;
            wr32(sp0 + 4u, 0u);
            if ((int32_t)eax <= 0) goto L_10307f23;
            esi = 0u;
L_10307f0a: ;
            t6 = rd32(esi * 4u + loc_10);
            wr32(sp0 + 4u, rd32(sp0 + 4u) + rd8(rd8(edx) + t6));
            if ((int32_t)(esi + 1u) < (int32_t)loc_14)
            {
                edx = edx + 1u;
                esi = esi + 1u;
                goto L_10307f0a;
            }
            eax = loc_14;
            edx = edx + 1u;
            ebx = t6;
L_10307f23: ;
            t7 = rd8(sp0 + 4u);
            t8 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, t8 + 1u);
            wr8(t8, (uint8_t)t7);
            if (loc_8 != 1u)
            {
                ebx = (ebx & 0xffffff00u) | t7;
                loc_8 = loc_8 - 1u;
                goto L_10307f00;
            }
            esi = loc_18;
        }
        if (loc_c != 1u)
        {
            ecx = ecx + 4u;
            loc_c = loc_c - 1u;
            goto L_10307ef1;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10307ebb(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10307ebb(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
