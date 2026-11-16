/* f_0x101f43f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101f43f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x1033a6d0u));
    if (rd32(COW_IMG(0x10663790u)) != 0u) goto L_101f4449;
    ecx = t1;
    edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x10u);
    if (t3 == 0u) goto L_101f443f;
    eax = t3;
    wr32(eax, COW_IMG(0x1033a668u));
    wr32(eax + 4u, 1u);
    wr32(COW_IMG(0x10663790u), eax);
    return self;
L_101f443f: ;
    wr32(COW_IMG(0x10663790u), 0u);
L_101f4449: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f43f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f43f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
