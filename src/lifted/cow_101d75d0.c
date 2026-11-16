/* f_0x101d75d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101d75d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)(-((uint8_t)arg1 != 0u) + 8u) <= 0)
    {
        eax = 0u;
        goto L_101d75fa;
    }
    eax = 0u;
    ecx = rd32(COW_IMG(0x104dfd98u)) + 0x2cc8cu;
L_101d75ed: ;
    if (rd8(ecx) == 0u) goto L_101d75fd;
    if ((int32_t)(eax + 1u) < (int32_t)(-((uint8_t)arg1 != 0u) + 8u))
    {
        eax = eax + 1u;
        ecx = ecx + 0x28u;
        goto L_101d75ed;
    }
    eax = eax + 1u;
L_101d75fa: ;
    eax = 0xffffffffu;
L_101d75fd: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d75d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101d75d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
