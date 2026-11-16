/* f_0x101c2840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=1 */
uint32_t cow_fn_101c2840(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 572u);

    wr32(sp0 - 0x228u, in_esi);
    wr32(sp0 - 0x22cu, in_edi);
    wr32(sp0 - 0x224u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x220u, 0u);
    edi = sp0 - 0x21cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x230u, sp0 - 0x100u);
    wr32(sp0 - 0x234u, arg1);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    wr32(sp0 - 0x104u, 0u);
    g->esp = sp0 - 0x22cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c3de0u), self, 2, arg1, sp0 - 0x100u);
    if ((int32_t)t1 >= 0) goto L_101c28be;
    eax = t1;
    return eax & 0xffffff00u;
L_101c28be: ;
    wr32(sp0 - 0x230u, sp0 - 0x100u);
    wr32(sp0 - 0x234u, 0x100u);
    wr32(sp0 - 0x238u, sp0 - 0x21cu);
    wr32(sp0 - 0x220u, 7u);
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x22cu;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x21cu, 0x100u, sp0 - 0x100u);
    t2 = g->edx;
    wr32(sp0 - 0x230u, sp0 - 0x224u);
    t3 = cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x224u);
    return (t3 & 0xffffff00u) | t3 == 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2840(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
