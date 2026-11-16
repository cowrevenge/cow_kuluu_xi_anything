/* f_0x1031722e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1031722e(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg1 >= 20) goto L_10317242;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, self, in_edx, 1, 1, arg1 + 0x1cu);
    t1 = g->edx;
    g->edx = t1;
    return;
L_10317242: ;
    g->edx = in_edx;
    g->esp = sp0;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, arg2 + 0x20u);   /* kernel32.dll!LeaveCriticalSection */
    t2 = g->edx;
    g->edx = t2;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031722e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031722e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
