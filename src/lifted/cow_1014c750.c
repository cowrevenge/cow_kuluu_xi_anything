/* f_0x1014c750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1014c750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126320u), self + 4u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr32(self, COW_IMG(0x10334d00u));
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0xffffffffu);
    wr32(self + 0x1cu, 0xffffffffu);
    wr32(self + 0x20u, 0u);
    wr32(self + 0x24u, 0u);
    if (rd32(COW_IMG(0x10578454u)) != 0u) goto L_1014c7ae;
    ecx = t2;
    edx = t3;
    g->esp = sp0;
    t4 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 4u, in_edi, in_esi);
    if (t4 == 0u) goto L_1014c7a8;
    eax = t4;
    wr32(eax, COW_IMG(0x10334c98u));
    wr32(COW_IMG(0x10578454u), eax);
    return self;
L_1014c7a8: ;
    wr32(COW_IMG(0x10578454u), 0u);
L_1014c7ae: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
