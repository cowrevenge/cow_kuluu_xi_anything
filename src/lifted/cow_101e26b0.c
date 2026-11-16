/* f_0x101e26b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101e26b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr16(arg1 + 4u, rd16(self + 6u));
    wr16(arg1 + 6u, rd16(self + 8u) & 0x7fffu);
    eax = 0u;
    ecx = self;
    edx = self + 0xau;
    esi = arg1 + 8u;
L_101e26d4: ;
    t1 = rd16(edx);
    wr16(esi, (uint16_t)t1);
    if ((uint16_t)t1 != 0u)
    {
        ecx = (ecx & 0xffff0000u) | t1;
    }
    else
    {
        ecx = (ecx & 0xffff0000u) | t1;
        wr8(arg1 + eax + 0x38u, 1u);
    }
    if ((int32_t)(eax + 1u) < 8)
    {
        eax = eax + 1u;
        edx = edx + 2u;
        esi = esi + 2u;
        goto L_101e26d4;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e26b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e26b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
