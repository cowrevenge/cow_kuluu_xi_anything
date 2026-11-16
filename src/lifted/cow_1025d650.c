/* f_0x1025d650 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025d650(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    const uint32_t self = g->ecx;

    if ((int32_t)(rd32(self + 0x38u) * rd32(self + 0x38u)) <= 0)
    {
        eax = 0xffffffffu;
    }
    else
    {
        edx = rd32(self + 0x38u) * rd32(self + 0x38u);
        ebx = rd32(self + 0x4cu);
        eax = 0xffffffffu;
        ecx = rd32(self + 0x44u) + 0x1cu;
        esi = 0u;
L_1025d66b: ;
        if ((int32_t)rd32(ecx) < (int32_t)ebx)
        {
            edi = rd32(ecx);
            eax = esi;
            ebx = edi;
        }
        if ((int32_t)(esi + 1u) < (int32_t)edx)
        {
            ecx = ecx + 0x24u;
            esi = esi + 1u;
            goto L_1025d66b;
        }
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025d650(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025d650(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
