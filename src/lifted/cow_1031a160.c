/* f_0x1031a160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1031a160(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    if ((uint16_t)arg1 == 0xffffu) goto L_1031a1a0;
    if ((uint16_t)arg1 >= 0x100u) goto L_1031a184;
    eax = rd16((uint16_t)arg1 * 2u + rd32(COW_IMG(0x103d0034u)));
L_1031a1a7: ;
    return (uint16_t)eax & (uint16_t)arg2;
L_1031a184: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, 1u);
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x10323e15u), g->eax, self, in_edx, 1, 6, 1u, sp0 + 4u, 1u, sp0 - 8u, 0u, 0u);
    if (t1 != 0u) goto L_1031a1a4;
L_1031a1a0: ;
    return 0u;
L_1031a1a4: ;
    eax = rd32(sp0 - 8u);
    goto L_1031a1a7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031a160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031a160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
