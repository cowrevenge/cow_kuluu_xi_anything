/* f_0x1020a420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1020a420(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    if (rd32(COW_IMG(0x106644e4u)) == 0u) goto L_1020a457;
    eax = t1;
    ecx = rd32(COW_IMG(0x106644e4u));
    if ((int32_t)rd32(ecx) < 0) goto L_1020a457;
    esi = rd32(ecx);
    if (rd32(ecx + 0x1cu) == 0u) goto L_1020a457;
    edx = rd32(ecx + 0x1cu);
    if ((int32_t)eax < 0) goto L_1020a457;
    if ((int32_t)eax >= (int32_t)esi) goto L_1020a457;
    return rd32(eax * 0x54u + edx + 0x48u);
L_1020a457: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020a420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020a420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
