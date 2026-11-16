/* f_0x1010f8b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010f8b0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x64u);
    if (t1 == 0u) goto L_1010f8fa;
    eax = t1;
    wr32(eax + 8u, 0u);
    wr32(eax + 0x10u, 0u);
    wr32(eax + 0xcu, 0u);
    wr32(eax + 0x14u, 0u);
    wr32(eax + 0x1cu, 0u);
    wr32(eax + 0x18u, 0u);
    wr32(eax, COW_IMG(0x10332e9cu));
    wr8(eax + 4u, 1u);
    wr32(eax + 0x10u, eax + 0x14u);
    wr32(eax + 0x18u, eax + 8u);
    wr16(eax + 6u, 0u);
    wr16(eax + 0x62u, 0u);
    wr16(eax + 0x60u, 0u);
    wr32(COW_IMG(0x104e1708u), eax);
    return;
L_1010f8fa: ;
    wr32(COW_IMG(0x104e1708u), 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010f8b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010f8b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
