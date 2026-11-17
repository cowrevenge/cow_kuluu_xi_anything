/* f_0x10305bf2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10305bf2(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(sp0 + 4u) + 0x20u);
    t2 = rd32(sp0 + 0x14u);
    t3 = rd32(rd32(sp0 + 4u) + 0x5cu);
    wr32(sp0 + 4u, t1);
    if ((int32_t)(t2 - 1u) < 0)
    {
        eax = t2 - 1u;
        edx = in_edx;
    }
    else
    {
        eax = t2 - 1u;
        ebx = t3;
        loc_c = t3;
        edx = arg4;
        edi = arg3 << 2u;
        loc_8 = eax + 1u;
        eax = eax + 1u;
L_10305c1c: ;
        if ((int32_t)rd32(sp0 + 4u) <= 0) goto L_10305c4d;
        esi = 0u;
L_10305c23: ;
        if (ebx == 0u)
        {
            eax = esi + rd32(edx);
        }
        else
        {
            eax = esi + rd32(edx);
            ecx = rd32(edi + rd32(arg2 + esi * 4u));
            wr32(sp0 + 0x14u, ebx);
L_10305c37: ;
            t4 = rd8(ecx);
            wr8(eax, (uint8_t)t4);
            t5 = rd32(sp0 + 4u);
            wr32(sp0 + 0x14u, rd32(sp0 + 0x14u) - 1u);
            if (rd32(sp0 + 0x14u) != 1u)
            {
                eax = eax + t5;
                ecx = ecx + 1u;
                ebx = (ebx & 0xffffff00u) | t4;
                goto L_10305c37;
            }
            eax = eax + t5;
            ebx = loc_c;
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 + 4u))
        {
            esi = esi + 1u;
            goto L_10305c23;
        }
L_10305c4d: ;
        if (loc_8 != 1u)
        {
            edx = edx + 4u;
            edi = edi + 4u;
            loc_8 = loc_8 - 1u;
            goto L_10305c1c;
        }
        edx = edx + 4u;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10305bf2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10305bf2(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
