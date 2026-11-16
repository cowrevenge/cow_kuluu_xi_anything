/* f_0x1009aec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=0 */
uint32_t cow_fn_1009aec0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    const uint32_t self = g->ecx;

    t1 = rd32(self + 0x138u);
    if ((int16_t)(uint32_t)((int32_t)(t1 << 0xau) >> 0x16u) < -256)
    {
        eax = t1 >> 8u & 0xfu;
        goto L_1009af11;
    }
    ecx = rd16(COW_IMG(0x10364488u) + (t1 >> 8u & 0xfu) * 2u);
    edx = (uint32_t)(int16_t)(uint32_t)((int32_t)(t1 << 0xau) >> 0x16u);
    t2 = (uint32_t)((int32_t)((edx + 0x100u) * ecx) >> 8u);
    if ((int32_t)(uint32_t)((int32_t)((edx + 0x100u) * ecx) >> 8u) <= 0)
    {
        eax = t2;
        goto L_1009af11;
    }
    eax = t2;
    loc_4 = t2;
    if ((int32_t)eax <= 40) goto L_1009af19;
    fpush(g, (double)(int32_t)0x28u);
    return eax;
L_1009af11: ;
    loc_4 = 0u;
L_1009af19: ;
    fpush(g, (double)(int32_t)loc_4);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009aec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009aec0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
