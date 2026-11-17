/* f_0x1030555f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1030555f(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((int32_t)rd32(rd32(rd32(sp0 + 4u) + 0x19cu) + 0x5cu) < (int32_t)rd32(rd32(sp0 + 4u) + 0x110u))
    {
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x19cu);
    }
    else
    {
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x19cu);
        wr32(sp0 + 4u, 0u);
        t1 = rd32(ebx + 0xc4u);
        if ((int32_t)rd32(ebx + 0x20u) > 0)
        {
            loc_8 = t1;
            edi = esi + 0xcu;
L_10305590: ;
            t2 = rd32(edi + 0x58u) * rd32(arg3) * 4u + rd32(arg2 + rd32(sp0 + 4u) * 4u);
            g->esp = sp0 - 0x14u;
            cow_thiscall_cdecl(g, rd32(edi + 0x28u), rd32(arg2 + rd32(sp0 + 4u) * 4u), 4, ebx, loc_8, t2, edi);
            wr32(sp0 + 4u, rd32(sp0 + 4u) + 1u);
            if ((int32_t)rd32(sp0 + 4u) < (int32_t)rd32(ebx + 0x20u))
            {
                edi = edi + 4u;
                loc_8 = loc_8 + 0x54u;
                goto L_10305590;
            }
        }
        wr32(esi + 0x5cu, 0u);
    }
    if (rd32(ebx + 0x110u) - rd32(esi + 0x5cu) <= rd32(esi + 0x60u))
    {
        edi = rd32(ebx + 0x110u) - rd32(esi + 0x5cu);
    }
    else
    {
        eax = rd32(esi + 0x60u);
        edi = eax;
    }
    t3 = rd32(arg6);
    wr32(sp0 + 0x1cu, rd32(sp0 + 0x1cu) - t3);
    if (edi <= rd32(sp0 + 0x1cu))
    {
        eax = t3;
    }
    else
    {
        eax = t3;
        edi = rd32(sp0 + 0x1cu);
    }
    t4 = arg5 + eax * 4u;
    t5 = rd32(esi + 0x5cu);
    g->edx = arg5;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(ebx + 0x1a0u) + 4u), rd32(ebx + 0x1a0u), 5, ebx, esi + 0xcu, t5, t4, edi);
    t6 = g->edx;
    wr32(arg6, edi + rd32(arg6));
    wr32(esi + 0x60u, rd32(esi + 0x60u) - edi);
    wr32(esi + 0x5cu, edi + rd32(esi + 0x5cu));
    if ((int32_t)rd32(esi + 0x5cu) < (int32_t)rd32(ebx + 0x110u))
    {
        eax = arg6;
        edx = t6;
        esi = rd32(sp0 + 4u);
        edi = rd32(sp0);
    }
    else
    {
        edx = t6;
        esi = rd32(sp0 + 4u);
        edi = rd32(sp0);
        wr32(arg3, rd32(arg3) + 1u);
        eax = arg3;
    }
    g->ebx = arg2;
    g->esi = esi;
    g->edi = edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030555f(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030555f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
