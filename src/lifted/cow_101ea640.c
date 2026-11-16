/* f_0x101ea640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea640(Guest* g)
{
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_101ea66a;
    }
    edx = t2;
    wr32(sp0 - 0x24u, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x28u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101ea66a: ;
    wr16(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x24u, sp0 - 0x18u);
    t6 = rd32(self + 8u);
    wr16(sp0 - 0x16u, 0u);
    wr16(sp0 - 0x14u, 0u);
    wr16(sp0 - 0x12u, 0u);
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), 0u, t6, g->edx, 0, 1, sp0 - 0x18u);
    t7 = g->ecx;
    wr32(sp0 - 0x24u, rd32(esi));
    wr32(sp0 - 0x28u, COW_IMG(0x10351cbcu));
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10351cbcu), rd32(esi), in_edi, in_esi);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 0x3f800000u);
    wr32(sp0 - 0x38u, 1u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    wr32(sp0 - 0x40u, sp0 - 0x10u);
    t8 = rd32(sp0 - 0x16u) + 0x16u;
    wr32(sp0 - 0x44u, t8);
    t9 = rd32(sp0 - 0x18u) + 0x5fu;
    wr32(sp0 - 0x48u, t9);
    g->eax = t9;
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    t10 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t9, t8, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
