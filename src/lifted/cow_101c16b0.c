/* f_0x101c16b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c16b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 312u);

    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x120u, 0u);
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x130u, sp0 - 0x11cu);
    wr32(sp0 - 0x134u, arg1);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    g->eax = sp0 - 0x11cu;
    g->edx = 0u;
    g->esp = sp0 - 0x12cu;
    t1 = cow_thiscall(g, COW_IMG(0x101c3e10u), self, 2, arg1, sp0 - 0x11cu);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        goto L_101c172b;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101c172b: ;
    wr32(sp0 - 0x130u, sp0 - 0x124u);
    wr32(sp0 - 0x120u, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x12cu;
    t3 = cow_fastcall(g, COW_IMG(0x1019f930u), rd32(self + 0x1f0u), sp0 - 0x124u, 1, sp0 - 0x124u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c16b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c16b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
