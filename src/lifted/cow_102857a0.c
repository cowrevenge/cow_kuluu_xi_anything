/* f_0x102857a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102857a0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x10u) == 0u)
    {
        eax = rd32(arg1 + 0x10u);
        goto L_102857be;
    }
    eax = rd32(arg1 + 0x10u);
    g->esp = sp0 - 4u;
    cow_thiscall_cdecl(g, eax, arg3, 3, arg1, arg2, arg3);
    return;
L_102857be: ;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b7c6cu));
    t1 = g->ecx;
    t2 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b7cd0u), arg1);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102857a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102857a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
