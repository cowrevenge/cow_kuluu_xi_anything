/* f_0x101c3a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101c3a00(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 316u);

    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x10u, eax);
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 4u, eax);
    wr32(sp0 - 0x130u, arg1);
    wr32(sp0 - 0x134u, 0x100u);
    wr32(sp0 - 0x138u, sp0 - 0x11cu);
    wr32(sp0 - 0x120u, 4u);
    g->esp = sp0 - 0x12cu;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x11cu, 0x100u, arg1);
    wr32(sp0 - 0x130u, sp0 - 0x124u);
    cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x124u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c3a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101c3a00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
