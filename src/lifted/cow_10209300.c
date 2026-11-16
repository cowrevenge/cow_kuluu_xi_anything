/* f_0x10209300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10209300(Guest* g)
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
    t1 = g->ecx;
    t2 = g->edx;
    wr16(self + 0xeu, 0xffffu);
    wr32(self + 8u, 0u);
    wr8(self + 0xcu, 1u);
    wr16(self + 0x14u, 0u);
    wr16(self + 0x16u, 0u);
    wr16(self + 0x18u, 0u);
    wr16(self + 0x1au, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x80u, 0u);
    wr32(self + 0x84u, 0u);
    wr32(self, COW_IMG(0x1033b340u));
    if (rd32(COW_IMG(0x10664440u)) != 0u) goto L_10209396;
    ecx = t1;
    edx = t2;
    g->esp = sp0 - 4u;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x28u, in_edi, in_esi);
    t4 = g->edx;
    if (t3 == 0u) goto L_10209390;
    eax = t3;
    edx = t4;
    edi = t3;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10126320u), edi + 4u, 0);
    wr16(edi + 0xeu, 0xffffu);
    wr32(edi + 8u, 0u);
    wr8(edi + 0xcu, 1u);
    wr16(edi + 0x14u, 0u);
    wr16(edi + 0x16u, 0u);
    wr16(edi + 0x18u, 0u);
    wr16(edi + 0x1au, 0u);
    wr32(edi, COW_IMG(0x1033b2f8u));
    wr32(COW_IMG(0x10664440u), edi);
    return self;
L_10209390: ;
    wr32(COW_IMG(0x10664440u), 0u);
L_10209396: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10209300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10209300(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
