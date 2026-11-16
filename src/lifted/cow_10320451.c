/* f_0x10320451 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_10320451(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 != 1u)
    {
        ebx = rd32(sp0 + 0xcu);
        if ((ebx & 3u) != 0u)
        {
            ecx = rd32(COW_IMG(0x103d37d8u) + arg4 * 4u);
        }
        else
        {
            ecx = rd32(COW_IMG(0x103d37a4u) + arg4 * 4u);
        }
        ecx = arg7 + ecx;
        edx = in_edx;
    }
    else
    {
        ebx = rd32(sp0 + 0xcu);
        wr32(sp0 + 0xcu, ebx);
        wr32(sp0 + 0xcu, rd32(sp0 + 0xcu) & 3u);
        if ((rd32(sp0 + 0xcu) & 3u) != 0u)
        {
            eax = rd32(COW_IMG(0x103d37d8u) + arg4 * 4u);
        }
        else
        {
            eax = rd32(COW_IMG(0x103d37a4u) + arg4 * 4u);
        }
        t1 = cow_divs(g, eax + ebx * 0x16du + (uint32_t)((int32_t)(ebx - 1u) >> 2u) - 0x63dau, 7u);
        t2 = cow_mods(g, eax + ebx * 0x16du + (uint32_t)((int32_t)(ebx - 1u) >> 2u) - 0x63dau, 7u);
        if ((int32_t)t2 > (int32_t)arg6)
        {
            ecx = eax + 1u;
            edx = t2;
            ecx = arg5 * 7u + arg6 + ecx - edx;
        }
        else
        {
            ecx = eax + 1u;
            edx = t2;
            ecx = arg5 * 7u + arg6 + ecx - edx - 7u;
        }
        if (arg5 == 5u)
        {
            if (rd32(sp0 + 0xcu) != 0u)
            {
                esi = rd32(COW_IMG(0x103d37dcu) + arg4 * 4u);
            }
            else
            {
                esi = rd32(COW_IMG(0x103d37a8u) + arg4 * 4u);
            }
            if ((int32_t)ecx > (int32_t)esi)
            {
                ecx = ecx - 7u;
            }
        }
    }
    if (arg1 != 1u)
    {
        wr32(COW_IMG(0x103d2dfcu), ecx);
        t4 = arg8 * 0x36ee80u + arg9 * 0xea60u + arg10 * 0x3e8u + rd32(COW_IMG(0x103d2d58u)) * 0x3e8u + arg11;
        t5 = rd32(COW_IMG(0x103d2d58u));
        wr32(COW_IMG(0x103d2e00u), t4);
        if ((int32_t)(arg8 * 0x36ee80u + arg9 * 0xea60u + arg10 * 0x3e8u + t5 * 0x3e8u + arg11) >= 0)
        {
            eax = t4;
            goto L_10320570;
        }
        eax = t4;
        wr32(COW_IMG(0x103d2e00u), eax + 0x5265c00u);
        ecx = ecx - 1u;
L_10320581: ;
        wr32(COW_IMG(0x103d2dfcu), ecx);
L_10320587: ;
        wr32(COW_IMG(0x103d2df8u), ebx);
    }
    else
    {
        wr32(COW_IMG(0x103d2decu), ecx);
        wr32(COW_IMG(0x103d2de8u), ebx);
        t3 = arg8 * 0x36ee80u + arg9 * 0xea60u + arg10 * 0x3e8u + arg11;
        wr32(COW_IMG(0x103d2df0u), t3);
    }
    g->edx = edx;
    return;
L_10320570: ;
    if ((int32_t)eax < 86400000)
    {
        edx = 0x5265c00u;
        goto L_10320587;
    }
    wr32(COW_IMG(0x103d2e00u), eax - 0x5265c00u);
    ecx = ecx + 1u;
    edx = 0x5265c00u;
    goto L_10320581;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10320451(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10320451(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
