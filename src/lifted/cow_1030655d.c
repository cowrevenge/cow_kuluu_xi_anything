/* f_0x1030655d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1030655d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(rd32(arg1 + 0x19cu) + 0x24u) == 0u)
    {
        esi = rd32(arg1 + 0x19cu);
        wr32(sp0 - 0x1cu, 2u);
        if (rd32(esi + 0x2cu) >= 2u)
        {
            edi = 2u;
        }
        else
        {
            eax = rd32(esi + 0x2cu);
            edi = eax;
        }
        t5 = rd32(arg6);
        wr32(sp0 + 0x1cu, rd32(sp0 + 0x1cu) - t5);
        if (edi <= rd32(sp0 + 0x1cu))
        {
            eax = t5;
        }
        else
        {
            eax = t5;
            edi = rd32(sp0 + 0x1cu);
        }
        t6 = rd32(arg5 + eax * 4u);
        wr32(sp0 - 0xcu, t6);
        if (edi <= 1u)
        {
            edx = t6;
            t8 = rd32(esi + 0x20u);
            wr32(sp0 - 8u, t8);
            wr8(esi + 0x24u, 1u);
        }
        else
        {
            eax = arg5 + eax * 4u;
            edx = t6;
            t7 = rd32(eax + 4u);
            wr32(sp0 - 8u, t7);
        }
        wr32(sp0 - 0x1cu, sp0 - 0xcu);
        wr32(sp0 - 0x20u, rd32(arg3));
        wr32(sp0 - 0x24u, arg2);
        wr32(sp0 - 0x28u, arg1);
        g->eax = arg3;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t9 = cow_thiscall_cdecl(g, rd32(esi + 0xcu), arg1, 4, arg1, arg2, rd32(arg3), sp0 - 0xcu);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    else
    {
        esi = rd32(arg1 + 0x19cu);
        t1 = rd32(esi + 0x28u);
        wr32(sp0 - 0x1cu, t1);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 0u);
        t2 = arg5 + rd32(arg6) * 4u;
        wr32(sp0 - 0x28u, t2);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, esi + 0x20u);
        g->eax = esi + 0x20u;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_cdecl(g, COW_IMG(0x102f58f5u), 7, esi + 0x20u, 0u, t2, 0u, 1u, t1, in_edi);
        t4 = g->edx;
        wr8(esi + 0x24u, 0u);
        eax = t3;
        edx = t4;
        edi = 1u;
    }
    wr32(arg6, edi + rd32(arg6));
    wr32(esi + 0x2cu, rd32(esi + 0x2cu) - edi);
    if (rd8(esi + 0x24u) != 0u)
    {
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
    }
    else
    {
        ebx = rd32(sp0 - 0x10u);
        esi = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
        wr32(arg3, rd32(arg3) + 1u);
        eax = arg3;
    }
    g->ebx = ebx;
    g->esi = esi;
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030655d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030655d(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
