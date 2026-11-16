/* f_0x102b19d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b19d0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, arg2);
    wr32(sp0 - 0x5cu, 0x50u);
    wr32(sp0 - 0x60u, 1u);
    wr32(sp0 - 0x64u, sp0 - 0x50u);
    g->ecx = self;
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10292420u), g->eax, g->ecx, in_edx, 1, 11, sp0 - 0x50u, 1u, 0x50u, arg2, in_esi, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu));
    t1 = g->ecx;
    t2 = g->edx;
    if ((int32_t)arg3 > 1)
    {
        ecx = t1;
        edx = t2;
        goto L_102b1a0b;
    }
    wr32(sp0 - 0x58u, sp0 - 0x50u);
    wr32(sp0 - 0x5cu, arg2);
    wr32(sp0 - 0x60u, arg1);
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x102b1a20u), sp0 - 0x50u, 3, arg1, arg2, sp0 - 0x50u);
    return;
L_102b1a0b: ;
    wr32(sp0 - 0x58u, arg2);
    wr32(sp0 - 0x5cu, arg1);
    g->esp = sp0 - 0x54u;
    cow_cdecl(g, COW_IMG(0x102b2030u), 2, arg1, arg2);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b19d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b19d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
