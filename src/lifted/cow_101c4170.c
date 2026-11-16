/* f_0x101c4170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c4170(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 588u);

    wr32(sp0 - 0x22cu, in_ebx);
    wr32(sp0 - 0x230u, in_esi);
    wr32(sp0 - 0x234u, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x238u, COW_IMG(0x1037cbf4u));
    wr32(sp0 - 0x23cu, arg1);
    wr32(sp0 - 0x240u, self + 0x1f4u);
    wr32(sp0 - 0x244u, COW_IMG(0x1037cd24u));
    wr32(sp0 - 0x248u, sp0 - 0x100u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    g->ebx = 0u;
    g->ecx = self + 0x1f4u;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x234u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cd24u), self + 0x1f4u, arg1, COW_IMG(0x1037cbf4u));
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_stdcall(g, COW_IMG(0x101039e0u), 0);
    t4 = g->edx;
    wr32(sp0 - 0x228u, t3);
    wr32(sp0 - 0x238u, sp0 - 0x100u);
    wr32(sp0 - 0x23cu, 0x100u);
    wr32(sp0 - 0x240u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 3u);
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    wr32(sp0 - 0x238u, 0u);
    wr32(sp0 - 0x118u, sp0 - 0x228u);
    wr32(sp0 - 0x114u, 4u);
    g->edx = sp0 - 0x228u;
    t5 = cow_stdcall(g, COW_IMG(0x101c3fb0u), 1, 0u);
    t6 = g->edx;
    wr32(sp0 - 0x110u, t5);
    wr32(sp0 - 0x238u, sp0 - 0x224u);
    cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x224u);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c4170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c4170(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
