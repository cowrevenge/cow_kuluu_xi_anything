/* f_0x101c4260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c4260(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 584u);

    wr32(sp0 - 0x22cu, in_esi);
    wr32(sp0 - 0x230u, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    wr32(sp0 - 0x234u, COW_IMG(0x1037cbf4u));
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    wr32(sp0 - 0x238u, arg1);
    wr32(sp0 - 0x23cu, self + 0x1f4u);
    wr32(sp0 - 0x240u, COW_IMG(0x1037cd24u));
    wr32(sp0 - 0x244u, sp0 - 0x100u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x230u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cd24u), self + 0x1f4u, arg1, COW_IMG(0x1037cbf4u));
    t1 = g->edx;
    wr32(sp0 - 0x220u, 1u);
    wr32(sp0 - 0x234u, sp0 - 0x100u);
    wr32(sp0 - 0x238u, 0x100u);
    wr32(sp0 - 0x23cu, sp0 - 0x21cu);
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    wr32(sp0 - 0x234u, sp0 - 0x224u);
    wr32(sp0 - 0x118u, sp0 - 0x228u);
    wr32(sp0 - 0x114u, 4u);
    t2 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), sp0 - 0x228u, 1, sp0 - 0x224u);
    return rd32(sp0 - 0x228u) & ((int32_t)t2 < 0) - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c4260(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
