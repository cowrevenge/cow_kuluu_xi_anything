/* f_0x1012c060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1012c060(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    d1 = fr(g, (double)rdf32(self + 0x1cu) * (double)rdf32(COW_IMG(0x1032a3c8u)));
    fpush(g, d1);
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x10311c6cu), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x1cu, t2);
    wr32(sp0 - 0x20u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x24u, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), t2, in_edi, in_esi);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 0x80808080u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    wr32(sp0 - 0x3cu, arg2 + 7u);
    wr32(sp0 - 0x40u, arg1 + 0x6au);
    g->edx = arg1 + 0x6au;
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, arg1 + 0x6au, arg2 + 7u, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x44u, 0u);
    g->esp = sp0 - 0x40u;
    t9 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 0u);
    if (t9 != 0u)
    {
        eax = t9;
        if (rd32(rd32(eax) + 0x14u) != 0u)
        {
            ecx = rd32(rd32(eax) + 0x14u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0x80808080u);
            t10 = (uint32_t)(int16_t)(arg2 + 7u);
            wr32(sp0 - 0x28u, t10);
            t11 = (uint32_t)(int16_t)(arg1 + 0x70u);
            wr32(sp0 - 0x2cu, t11);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t11, t10, 0x80808080u, 0u, 0u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012c060(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
