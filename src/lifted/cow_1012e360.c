/* f_0x1012e360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1012e360(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
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
    wr32(self, COW_IMG(0x103335e8u));
    edi = self + 0x14u;
    eax = 0u;
    ecx = 0x68u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(self + 0x1b6u, 0x18u);
    wr16(self + 0x1b8u, 0x18u);
    wr16(self + 0x1b4u, 0u);
    wr32(self + 0x1bcu, 0xffffffffu);
    wr32(self + 0x1c0u, 0xffffffffu);
    wr16(self + 0x1c4u, 0u);
    edi = self + 0x1c6u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr8(self + 0x1f2u, 0u);
    wr32(self + 0x1e8u, 0u);
    wr32(self + 0x1ecu, 0u);
    if (rd32(COW_IMG(0x1057819cu)) != 0u) goto L_1012e40b;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, 0xffffffffu, 1, 3, 4u, in_edi, in_esi);
    if (t2 == 0u) goto L_1012e405;
    eax = t2;
    wr32(eax, COW_IMG(0x10333580u));
    wr32(COW_IMG(0x1057819cu), eax);
    return self;
L_1012e405: ;
    wr32(COW_IMG(0x1057819cu), 0u);
L_1012e40b: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012e360(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012e360(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
