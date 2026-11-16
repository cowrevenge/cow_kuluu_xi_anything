/* f_0x10287270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_10287270(Guest* g)
{
    double d8;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 4u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x1028a100u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, 4u);
        wr32(sp0 - 0x1cu, sp0 - 4u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10292150u), 3, sp0 - 4u, 4u, 1u);
        t4 = g->edx;
        edx = t4;
    }
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->ecx = sp0 - 4u;
    g->esp = sp0 - 8u;
    t5 = cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, sp0 - 4u, 1u, 4u, arg2, in_edi, in_esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (rd32(COW_IMG(0x109a2788u)) == 0u)
    {
        edi = t5;
    }
    else
    {
        ecx = t6;
        edx = t7;
        edi = t5;
        wr32(sp0 - 0x14u, arg1);
        wr32(sp0 - 4u, arg1);
        d8 = (double)rdf32(sp0 + 4u);
        wrf64(sp0 - 0x1cu, d8);
        wr32(sp0 - 0x20u, arg2);
        g->ecx = ecx;
        g->esp = sp0 - 0x14u;
        t9 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, edx, 1, 3, arg2, cow_dlo(d8), cow_dhi(d8));
        t10 = g->ecx;
        wr32(sp0 - 0x20u, t9);
        wr32(sp0 - 0x24u, COW_IMG(0x103b86c8u));
        wr32(sp0 - 0x28u, rd32(COW_IMG(0x109a2788u)));
        g->ebx = arg1;
        cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, rd32(COW_IMG(0x109a2788u)), 1, 5, rd32(COW_IMG(0x109a2788u)), COW_IMG(0x103b86c8u), t9, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return (uint8_t)((edi != 4u) - 1u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10287270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10287270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
