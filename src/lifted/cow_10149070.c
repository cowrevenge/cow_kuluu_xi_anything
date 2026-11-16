/* f_0x10149070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10149070(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        goto L_101490af;
    }
    eax = t1;
    if ((int32_t)eax >= (int8_t)rd8(self + 0x51u)) goto L_101490af;
    if (rd32(self + 0x38u) == 0u) goto L_101490ab;
    edx = rd32(self + 0x38u);
    if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_101490ab;
    if (eax * 0x54u + edx == 0u) goto L_101490ab;
    eax = eax * 0x54u + edx;
    return rd32(eax + 0x48u);
L_101490ab: ;
    return 0u;
L_101490af: ;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10149070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10149070(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
