/* f_0x103057d6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_103057d6(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x10u, 0u);
    if ((int32_t)rd32(arg1 + 0x110u) <= 0)
    {
        edx = in_edx;
    }
    else
    {
        esi = rd32(t1);
        ebx = arg3 - esi;
L_103057fb: ;
        t2 = rd32(ebx + esi);
        t3 = rd32(esi);
        t4 = rd8(rd32(ebx + esi));
        wr8(t3, (uint8_t)t4);
        wr8(t3 + 1u, (uint8_t)(uint32_t)((int32_t)(t4 * 3u + rd8(t2 + 1u) + 2u) >> 2u));
        if (rd32(arg2 + 0x28u) == 2u)
        {
            eax = t2 + 1u;
            ecx = t3 + 2u;
        }
        else
        {
            eax = t2 + 1u;
            ecx = t3 + 2u;
            edx = rd32(arg2 + 0x28u) - 2u;
            loc_8 = edx;
L_10305824: ;
            t5 = rd8(eax);
            wr8(ecx, (uint8_t)(uint32_t)((int32_t)(t5 * 3u + rd8(eax - 1u) + 1u) >> 2u));
            wr8(ecx + 1u, (uint8_t)(uint32_t)((int32_t)(t5 * 3u + rd8(eax + 1u) + 2u) >> 2u));
            if (loc_8 != 1u)
            {
                eax = eax + 1u;
                ecx = ecx + 2u;
                loc_8 = loc_8 - 1u;
                goto L_10305824;
            }
            eax = eax + 1u;
            ecx = ecx + 2u;
        }
        t6 = rd8(eax);
        t7 = rd8(eax - 1u);
        wr32(sp0 + 0x10u, rd32(sp0 + 0x10u) + 1u);
        wr8(ecx, (uint8_t)(uint32_t)((int32_t)(t6 * 3u + t7 + 1u) >> 2u));
        wr8(ecx + 1u, (uint8_t)t6);
        if ((int32_t)rd32(sp0 + 0x10u) < (int32_t)rd32(arg1 + 0x110u))
        {
            esi = esi + 4u;
            goto L_103057fb;
        }
        edx = t6;
    }
    g->edx = edx;
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103057d6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103057d6(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
