/* f_0x101c1090 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c1090(Guest* g)
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
    cow_frame(g, sp0, 576u);

    wr32(sp0 - 0x22cu, in_esi);
    wr32(sp0 - 0x230u, in_edi);
    wr32(sp0 - 0x228u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x224u, 0u);
    edi = sp0 - 0x220u;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x234u, sp0 - 0x104u);
    wr32(sp0 - 0x238u, arg1);
    wr32(sp0 - 0x120u, 0u);
    wr32(sp0 - 0x11cu, 0u);
    wr32(sp0 - 0x118u, 0u);
    wr32(sp0 - 0x114u, 0u);
    wr32(sp0 - 0x110u, 0u);
    wr32(sp0 - 0x10cu, 0u);
    wr32(sp0 - 0x108u, 0u);
    g->esp = sp0 - 0x230u;
    t1 = cow_thiscall(g, COW_IMG(0x101c3de0u), self, 2, arg1, sp0 - 0x104u);
    if ((int32_t)t1 >= 0) goto L_101c110f;
    eax = t1;
    return 0xffffffffu;
L_101c110f: ;
    wr32(sp0 - 0x234u, sp0 - 0x104u);
    wr32(sp0 - 0x238u, 0x100u);
    wr32(sp0 - 0x23cu, sp0 - 0x220u);
    wr32(sp0 - 0x224u, 6u);
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x230u;
    cow_thiscall(g, COW_IMG(0x101c3e90u), self, 3, sp0 - 0x220u, 0x100u, sp0 - 0x104u);
    t2 = g->edx;
    wr32(sp0 - 0x234u, sp0 - 0x228u);
    t3 = cow_thiscall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), 1, sp0 - 0x228u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c1090(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c1090(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
