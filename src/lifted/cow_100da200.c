/* f_0x100da200 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_100da200(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg11 == 0u) goto L_100da25a;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), self, 1, arg8);
    t1 = g->ecx;
    t2 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x1018fc40u), t1, 1, arg10);
    g->esp = sp0 - 0x24u;
    cow_cdecl(g, COW_IMG(0x100d9e50u), 7, arg1, arg2, arg3, arg4, arg5, COW_IMG(0x103601ecu), arg7);
    return;
L_100da25a: ;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100d9b20u), 7, arg1, arg2, arg3, arg4, arg5, COW_IMG(0x103601dcu), arg7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100da200(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100da200(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
