/* f_0x103219a4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_103219a4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x109f9434u)) != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0 - 0x18u;
        t1 = cow_fastcall(g, COW_IMG(0x103156d7u), self, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    wr32(sp0 - 0x1cu, 0x104u);
    wr32(sp0 - 0x20u, COW_IMG(0x109b28d0u));
    wr32(sp0 - 0x24u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329150u)), ecx, 3, 0u, COW_IMG(0x109b28d0u), 0x104u);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x109f9424u));
    wr32(COW_IMG(0x109b26f4u), COW_IMG(0x109b28d0u));
    if (rd8(t6) == 0u)
    {
        ecx = t4;
        edx = t5;
        edi = COW_IMG(0x109b28d0u);
    }
    else
    {
        eax = t6;
        ecx = t4;
        edx = t5;
        edi = eax;
    }
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, edi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10321a3du), g->eax, g->ecx, edx, 1, 7, edi, 0u, 0u, sp0 - 8u, sp0 - 0xcu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t7 = g->edx;
    t8 = rd32(sp0 - 0xcu) + rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x30u, t8);
    g->ecx = rd32(sp0 - 8u);
    g->edx = t7;
    t9 = rd32(sp0 - 8u);
    g->esp = sp0 - 0x24u;
    t10 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t8, rd32(sp0 - 0x2cu), 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t12;
        esi = t10;
    }
    else
    {
        ecx = t11;
        edx = t12;
        esi = t10;
        wr32(sp0 - 0x1cu, 8u);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x1031680cu), 1, 8u);
        t13 = g->edx;
        ecx = 8u;
        edx = t13;
    }
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t14 = esi + rd32(sp0 - 8u) * 4u;
    wr32(sp0 - 0x24u, t14);
    wr32(sp0 - 0x28u, esi);
    wr32(sp0 - 0x2cu, edi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10321a3du), g->eax, g->ecx, edx, 1, 7, edi, esi, t14, sp0 - 8u, sp0 - 0xcu, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t15 = rd32(sp0 - 8u);
    wr32(COW_IMG(0x109b26dcu), esi);
    t16 = rd32(sp0 - 0x14u);
    t17 = rd32(sp0 - 0x18u);
    wr32(COW_IMG(0x109b26d8u), t15 - 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t16;
    g->edi = t17;
    g->ebp = rd32(sp0 - 4u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103219a4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103219a4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
