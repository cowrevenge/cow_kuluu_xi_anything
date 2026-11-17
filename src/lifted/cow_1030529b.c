/* f_0x1030529b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1030529b(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg7 - rd32(arg6) <= rd32(rd32(rd32(sp0 + 4u) + 0x188u) + 0x10u))
    {
        eax = arg7 - rd32(arg6);
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x188u);
    }
    else
    {
        ecx = rd32(rd32(rd32(sp0 + 4u) + 0x188u) + 0x10u);
        ebx = rd32(sp0 + 4u);
        esi = rd32(rd32(sp0 + 4u) + 0x188u);
        eax = ecx;
    }
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, sp0 + 4u);
    t1 = rd32(esi + 0xcu);
    wr32(sp0 - 0x1cu, t1);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, ebx);
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(ebx + 0x19cu) + 4u), rd32(ebx + 0x19cu), 7, ebx, arg2, arg3, arg4, t1, sp0 + 4u, eax);
    t2 = rd32(sp0 + 4u);
    wr32(sp0 - 0x30u, t2);
    t3 = arg5 + rd32(arg6) * 4u;
    wr32(sp0 - 0x34u, t3);
    t4 = rd32(esi + 0xcu);
    wr32(sp0 - 0x38u, t4);
    wr32(sp0 - 0x3cu, ebx);
    g->edx = arg5;
    g->esp = sp0 - 0x2cu;
    cow_thiscall_cdecl(g, rd32(rd32(ebx + 0x1a4u) + 4u), t3, 4, ebx, t4, t3, t2);
    t5 = g->edx;
    t6 = rd32(sp0 + 4u);
    wr32(arg6, rd32(arg6) + t6);
    g->edx = t5;
    return t6;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030529b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030529b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
