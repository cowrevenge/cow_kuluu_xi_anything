/* f_0x100a98d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_100a98d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0x34u);
    g->esp = sp0 - 0xcu;
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
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 8u, 0);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 0x14u, 0);
        t6 = g->edx;
        wr32(sp0 - 0x18u, self);
        wr32(esi, self);
        wr32(esi + 4u, arg2);
        g->edx = t6;
        t7 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 8u, 1, self);
        t8 = g->edx;
        wr32(sp0 - 0x18u, arg2);
        cow_thiscall(g, COW_IMG(0x100814f0u), esi + 0x14u, 1, arg2);
        wr32(esi + 0x20u, 0u);
        wr16(esi + 0x26u, 0u);
        wr16(esi + 0x28u, 0u);
        wr8(esi + 0x2au, 0u);
        wr32(esi + 0x2cu, 0u);
        wr32(esi + 0x30u, 0x6e69616du);
        wr16(esi + 0x24u, arg2 != 0u);
    }
    wr32(esi + 0x30u, arg3);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->edx = arg3;
    g->esp = sp0 - 0x14u;
    t9 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 8u, arg1);
    t10 = g->edx;
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 4u, rd32(t9));
    wr32(sp0 - 0x24u, COW_IMG(0x100a8fb0u));
    t11 = rd32(t9);
    wr32(esi + 0x2cu, arg1);
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 4u, 4, COW_IMG(0x100a8fb0u), esi, self, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a98d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a98d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
