/* f_0x101dedc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101dedc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edi = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101f67c0u), self, 1, 0u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x10338f68u));
    wr32(self + 0x50u, 0xffffffffu);
    wr32(self + 0x54u, 0u);
    if (rd32(COW_IMG(0x10663498u)) != 0u) goto L_101dee2c;
    ecx = t1;
    edx = t2;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t4 = g->edx;
    if (t3 == 0u) goto L_101dee22;
    eax = t3;
    edx = t4;
    esi = t3;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
    wr16(esi + 0xeu, 0xffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 0xcu, 1u);
    wr32(esi, COW_IMG(0x10338f20u));
    wr32(COW_IMG(0x10663498u), esi);
    g->edi = in_edi;
    return self;
L_101dee22: ;
    wr32(COW_IMG(0x10663498u), 0u);
L_101dee2c: ;
    g->edi = in_edi;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101dedc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101dedc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
