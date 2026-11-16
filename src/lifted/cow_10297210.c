/* f_0x10297210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_10297210(Guest* g)
{
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x28u, arg8);
    wr32(sp0 - 0x2cu, arg7);
    wr32(sp0 - 0x30u, arg6);
    wr32(sp0 - 0x34u, arg5);
    wr32(sp0 - 0x38u, arg4);
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, sp0 - 0x24u);
    g->ecx = sp0 - 0x24u;
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x10296de0u), 8, sp0 - 0x24u, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    t1 = g->ecx;
    wr32(sp0 - 0x48u, sp0 - 0x24u);
    wr32(sp0 - 0x4cu, arg1);
    g->esp = sp0 - 0x44u;
    cow_cdecl(g, COW_IMG(0x10296ac0u), 2, arg1, sp0 - 0x24u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10297210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10297210(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
