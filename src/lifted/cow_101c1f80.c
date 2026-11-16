/* f_0x101c1f80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c1f80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 320u);

    wr32(sp0 - 0x128u, in_esi);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x124u, COW_IMG(0x10337200u));
    wr32(sp0 - 0x120u, 0u);
    edi = sp0 - 0x11cu;
    eax = 0u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 0x130u, arg3);
    wr32(sp0 - 0x134u, sp0 - 0x11cu);
    wr32(sp0 - 0x138u, arg2);
    wr32(sp0 - 0x13cu, arg1);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 0x12cu;
    t1 = cow_stdcall(g, COW_IMG(0x101c3e40u), 4, arg1, arg2, sp0 - 0x11cu, arg3);
    t2 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        eax = t1;
        edx = t2;
        goto L_101c200c;
    }
    eax = t1;
    return 0xffffffffu;
L_101c200c: ;
    wr32(sp0 - 0x120u, 4u);
    wr32(sp0 - 0x130u, sp0 - 0x124u);
    g->eax = eax;
    g->esp = sp0 - 0x12cu;
    t3 = cow_fastcall(g, COW_IMG(0x1019f960u), rd32(self + 0x1f0u), edx, 1, sp0 - 0x124u);
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c1f80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c1f80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
