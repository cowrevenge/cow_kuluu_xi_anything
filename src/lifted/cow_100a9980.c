/* f_0x100a9980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_100a9980(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0x34u);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x34u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
        esi = t1;
        wr32(sp0 - 0x14u, in_ebp);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 8u, 0);
        t4 = g->edx;
        g->edx = t4;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 0x14u, 0);
        t5 = g->edx;
        wr32(sp0 - 0x18u, arg2);
        wr32(esi, arg2);
        wr32(esi + 4u, arg3);
        g->eax = arg2;
        g->edx = t5;
        t6 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 8u, 1, arg2);
        t7 = g->edx;
        wr32(sp0 - 0x18u, arg3);
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 0x14u, 1, arg3);
        wr32(esi + 0x20u, 0u);
        wr16(esi + 0x26u, 0u);
        wr16(esi + 0x28u, 0u);
        wr8(esi + 0x2au, 0u);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0x6e69616du);
        wr16(esi + 0x24u, arg3 != 0u);
    }
    wr32(esi + 0x30u, arg4);
    wr32(sp0 - 0x14u, arg1);
    wr32(sp0 - 0x18u, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = arg4;
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 0xcu, arg1);
    t9 = g->edx;
    wr32(sp0 - 0x14u, arg3);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 4u, rd32(t8));
    wr32(sp0 - 0x20u, COW_IMG(0x100a8fb0u));
    t10 = rd32(t8);
    wr32(esi + 0x2cu, arg1);
    g->eax = t10;
    g->edx = t9;
    t11 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 4u, 4, COW_IMG(0x100a8fb0u), esi, arg2, arg3);
    t12 = g->edx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a9980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a9980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
