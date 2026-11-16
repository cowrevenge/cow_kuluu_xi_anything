/* f_0x102c9860 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102c9860(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(rd32(sp0 + 8u) + 0xcu);
    t2 = rd32(arg1 + 0x30u);
    t3 = rd32(arg1 + 0x34u);
    t4 = rd32(sp0 + 8u);
    t5 = rd32(arg1 + 0x30u);
    wr32(sp0 + 8u, t2);
    if (t5 <= t3)
    {
        ecx = t2;
        ebx = t3;
        edi = t4;
        loc_8 = t1;
    }
    else
    {
        ecx = t2;
        edi = t4;
        loc_8 = t1;
        ebx = rd32(arg1 + 0x2cu);
    }
    if (ebx - ecx <= rd32(edi + 0x10u))
    {
        eax = rd32(edi + 0x10u);
        ebx = ebx - ecx;
    }
    else
    {
        eax = rd32(edi + 0x10u);
        ebx = eax;
    }
    if (ebx != 0u)
    {
        if (rd32(sp0 + 0xcu) == 0xfffffffbu)
        {
            wr32(sp0 + 0xcu, 0u);
        }
    }
    wr32(edi + 0x14u, ebx + rd32(edi + 0x14u));
    wr32(edi + 0x10u, eax - ebx);
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = rd32(arg1 + 0x38u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(arg1 + 0x38u);
        t6 = rd32(arg1 + 0x3cu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall(g, eax, ecx, 0);
        t8 = g->edx;
        t9 = rd32(sp0 + 8u);
        wr32(arg1 + 0x3cu, t7);
        wr32(edi + 0x30u, t7);
        eax = t7;
        ecx = t9;
        edx = t8;
    }
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_8, ecx, ebx, in_edi, in_esi);
    t10 = g->edx;
    wr32(sp0 + 8u, ebx + rd32(sp0 + 8u));
    if (rd32(sp0 + 8u) != rd32(arg1 + 0x2cu))
    {
        loc_8 = ebx + loc_8;
    }
    else
    {
        eax = rd32(arg1 + 0x2cu);
        edx = t10;
        loc_8 = ebx + loc_8;
        t11 = rd32(arg1 + 0x28u);
        t12 = rd32(arg1 + 0x34u);
        wr32(sp0 + 8u, t11);
        if (t12 != eax)
        {
            ecx = t11;
        }
        else
        {
            ecx = t11;
            wr32(arg1 + 0x34u, ecx);
        }
        if (rd32(arg1 + 0x34u) - ecx <= rd32(edi + 0x10u))
        {
            eax = rd32(edi + 0x10u);
            ebx = rd32(arg1 + 0x34u) - ecx;
        }
        else
        {
            eax = rd32(edi + 0x10u);
            ebx = eax;
        }
        if (ebx != 0u)
        {
            if (rd32(sp0 + 0xcu) == 0xfffffffbu)
            {
                wr32(sp0 + 0xcu, 0u);
            }
        }
        wr32(edi + 0x14u, ebx + rd32(edi + 0x14u));
        wr32(edi + 0x10u, eax - ebx);
        if (rd32(arg1 + 0x38u) == 0u)
        {
            eax = rd32(arg1 + 0x38u);
        }
        else
        {
            eax = rd32(arg1 + 0x38u);
            t13 = rd32(arg1 + 0x3cu);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t14 = cow_thiscall(g, eax, ecx, 0);
            t15 = g->edx;
            t16 = rd32(sp0 + 8u);
            wr32(arg1 + 0x3cu, t14);
            wr32(edi + 0x30u, t14);
            eax = t14;
            ecx = t16;
            edx = t15;
        }
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_8, ecx, ebx, in_edi, in_esi);
        wr32(sp0 + 8u, ebx + rd32(sp0 + 8u));
        loc_8 = ebx + loc_8;
    }
    wr32(edi + 0xcu, loc_8);
    t17 = rd32(sp0 + 8u);
    wr32(arg1 + 0x30u, t17);
    return rd32(sp0 + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c9860(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102c9860(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
