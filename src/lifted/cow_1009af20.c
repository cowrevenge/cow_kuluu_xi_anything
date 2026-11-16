/* f_0x1009af20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
void cow_fn_1009af20(Guest* g)
{
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t1;
    const uint32_t self = g->ecx;

    t1 = rd16(COW_IMG(0x10364488u) + (rd32(self + 0x138u) >> 0x1bu & 0xfu) * 2u);
    if ((int32_t)rd16(COW_IMG(0x10364488u) + (rd32(self + 0x138u) >> 0x1bu & 0xfu) * 2u) <= 0) goto L_1009af52;
    eax = t1;
    loc_4 = t1;
    if ((int32_t)eax <= 40) goto L_1009af5a;
    fpush(g, (double)(int32_t)0x28u);
    return;
L_1009af52: ;
    loc_4 = 0u;
L_1009af5a: ;
    fpush(g, (double)(int32_t)loc_4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009af20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1009af20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
