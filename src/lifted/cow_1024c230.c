/* f_0x1024c230 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1024c230(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t1 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x1033cca8u));
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x74u, 0u);
    edi = self + 0x34u;
    eax = 0u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(COW_IMG(0x10669144u)) != 0u) goto L_1024c2a7;
    edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t3 = g->edx;
    if (t2 == 0u) goto L_1024c2a1;
    eax = t2;
    edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1024c950u), eax, 0);
    wr32(COW_IMG(0x10669144u), t4);
    return self;
L_1024c2a1: ;
    wr32(COW_IMG(0x10669144u), 0u);
L_1024c2a7: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c230(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1024c230(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
