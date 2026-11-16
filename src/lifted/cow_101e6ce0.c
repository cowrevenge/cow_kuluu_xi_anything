/* f_0x101e6ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e6ce0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)rd16(self + 0x166u) <= 0) goto L_101e6d0e;
    edx = (uint32_t)(int16_t)rd16(self + 0x166u);
    eax = 0u;
    ecx = rd32(self + 0x15cu) + 0x1cu;
    esi = rd32(self + 0x15cu);
L_101e6cfd: ;
    if ((uint32_t)(int16_t)rd16(rd32(ecx)) == arg1) goto L_101e6d16;
    if ((int32_t)(eax + 1u) < (int32_t)edx)
    {
        eax = eax + 1u;
        ecx = ecx + 0x20u;
        goto L_101e6cfd;
    }
L_101e6d0e: ;
    return 0u;
L_101e6d16: ;
    return eax * 0x20u + esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6ce0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6ce0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
