/* f_0x101fb400 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101fb400(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 8u) == 0u) goto L_101fb43c;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t2 = g->ecx;
    if ((int16_t)rd16(self + 0x52u) < 0) goto L_101fb43c;
    eax = t1;
    ecx = (t2 & 0xffff0000u) | rd16(self + 0x52u);
    if (rd32(self + 0x54u) == 0u) goto L_101fb43c;
    esi = rd32(self + 0x54u);
    if ((int32_t)eax < 0) goto L_101fb43c;
    if ((int32_t)eax >= (int16_t)ecx) goto L_101fb43c;
    return rd32(eax * 0x54u + esi + 0x48u);
L_101fb43c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb400(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb400(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
