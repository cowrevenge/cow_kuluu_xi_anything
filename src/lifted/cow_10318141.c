/* f_0x10318141 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10318141(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg5 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        t1 = arg1 + (rd32(arg4) == 0x2du);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x103183e3u), t1, g->ecx, g->edx, 1, 4, t1, (int32_t)arg2 > 0, in_edi, in_esi);
        t2 = g->edx;
        edx = t2;
    }
    if (rd32(arg4) != 0x2du)
    {
        eax = arg1;
    }
    else
    {
        wr8(arg1, 0x2du);
        eax = arg1 + 1u;
    }
    if ((int32_t)arg2 > 0)
    {
        t3 = rd8(eax + 1u);
        wr8(eax, (uint8_t)t3);
        wr8(eax + 1u, rd8(COW_IMG(0x103d0240u)));
        eax = eax + 1u;
        edx = (edx & 0xffffff00u) | t3;
    }
    t4 = arg2 + eax + ((uint8_t)arg5 == 0u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x10317500u), 3, t4, COW_IMG(0x1034a300u), in_edi);
    if (arg3 == 0u)
    {
        ecx = t5;
    }
    else
    {
        ecx = t5;
        wr8(ecx, 0x45u);
    }
    if (rd8(rd32(arg4 + 0xcu)) != 0x30u)
    {
        ecx = ecx + 1u;
        if ((int32_t)(rd32(arg4 + 4u) - 1u) >= 0)
        {
            ebx = rd32(arg4 + 4u) - 1u;
        }
        else
        {
            ebx = rd32(arg4 + 4u) - 1u;
            wr8(ecx, 0x2du);
            ebx = -ebx;
        }
        if ((int32_t)ebx < 100)
        {
            ecx = ecx + 1u;
        }
        else
        {
            ecx = ecx + 1u;
            t6 = cow_divs(g, ebx, 0x64u);
            t7 = cow_mods(g, ebx, 0x64u);
            wr8(ecx, (uint8_t)(rd8(ecx) + (uint8_t)t6));
            t8 = cow_divs(g, ebx, 0x64u);
            t9 = cow_mods(g, ebx, 0x64u);
            ebx = t9;
        }
        if ((int32_t)ebx < 10)
        {
            ecx = ecx + 1u;
        }
        else
        {
            ecx = ecx + 1u;
            t10 = cow_divs(g, ebx, 0xau);
            t11 = cow_mods(g, ebx, 0xau);
            wr8(ecx, (uint8_t)(rd8(ecx) + (uint8_t)t10));
            t12 = cow_divs(g, ebx, 0xau);
            t13 = cow_mods(g, ebx, 0xau);
            ebx = t13;
        }
        wr8(ecx + 1u, (uint8_t)((uint8_t)ebx + rd8(ecx + 1u)));
    }
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318141(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318141(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
