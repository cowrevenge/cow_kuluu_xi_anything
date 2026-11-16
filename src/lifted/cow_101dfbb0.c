/* f_0x101dfbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101dfbb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t loc_38;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 0x2cu, in_esi);
    wr16(sp0 - 0x28u, 0u);
    wr16(sp0 - 0x26u, 0u);
    wr16(sp0 - 0x24u, 0u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x22u, 0u);
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x28u, t1, g->edx, 0, 1, sp0 - 0x28u);
    t2 = rd32(self + 0x18u);
    wr32(sp0 - 0x30u, t2);
    t3 = rd32(self + 0x14u);
    wr32(sp0 - 0x34u, t3);
    wr32(sp0 - 0x38u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x10357fbcu), t3, t2, in_esi);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x34u, 1u);
    if ((int32_t)rd32(self + 0x14u) < (int32_t)rd32(self + 0x18u))
    {
        eax = rd32(sp0 - 0x26u);
        ecx = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x38u, 0x80808080u);
        loc_38 = 0x80808080u;
    }
    else
    {
        eax = rd32(sp0 - 0x26u);
        ecx = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x38u, 0x802060a0u);
        loc_38 = 0x802060a0u;
    }
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    wr32(sp0 - 0x40u, eax + 0x1fu);
    wr32(sp0 - 0x44u, ecx - 8u);
    g->eax = eax + 0x1fu;
    g->edx = sp0 - 0x20u;
    g->esp = sp0 - 0x28u;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), ecx - 8u, 7, ecx - 8u, eax + 0x1fu, sp0 - 0x20u, loc_38, 1u, 0x3f800000u, 0x3f800000u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dfbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dfbb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
