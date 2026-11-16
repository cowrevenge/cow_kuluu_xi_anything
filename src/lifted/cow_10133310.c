/* f_0x10133310 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10133310(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10131530u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(self, COW_IMG(0x103337e0u));
    wr32(COW_IMG(0x105781c4u), 0u);
    wr32(self + 0x74u, 0u);
    wr8(self + 0x14fu, 0xffu);
    wr32(self + 0x150u, 0u);
    if (rd32(COW_IMG(0x105781b4u)) != 0u) goto L_1013336a;
    ecx = t1;
    edx = t2;
    g->esp = sp0;
    t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    if (t3 == 0u) goto L_10133364;
    eax = t3;
    wr32(eax, COW_IMG(0x10333778u));
    wr32(eax + 0xcu, 1u);
    wr32(COW_IMG(0x105781b4u), eax);
    return self;
L_10133364: ;
    wr32(COW_IMG(0x105781b4u), 0u);
L_1013336a: ;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10133310(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10133310(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
